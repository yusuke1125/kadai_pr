# docker-composeでgdbを使うサンプルコード

起動

```bash
docker-compose build
docker-compose up -d
```

コンパイルと実行

```bash
docker-compose exec mygcc gcc -g main.c
docker-compose exec mygcc ./a.out
```

gdbでデバッグ

```bash
docker-compose exec mygcc gdb ./a.out
```

cppcheckでlint（静的解析）

```bash
docker-compose exec mygcc cppcheck main.c
```

gprofでプロファイリング

```bash
docker-compose exec mygcc gcc -g -pg main_gprof.c -o main_gprof
docker-compose exec mygcc ./main_gprof
docker-compose exec mygcc gprof -b main_gprof gmon.out
```

停止

```bash
docker-compose ps
docker-compose down
docker-compose down --rmi all --volumes --remove-orphans
```


