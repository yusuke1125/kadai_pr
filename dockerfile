FROM gcc

RUN apt -y update \
 && apt -y install gdb cppcheck clang

WORKDIR /mnt
