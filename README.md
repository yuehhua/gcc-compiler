# gcc-compiler
A demo of gcc compilation collection

## Compile process

### Preprocess

```
gcc -E hello.c -o hello.i
```

### Compile

```
gcc -S hello.i -o hello.s -O2
```

### Assemble

```
as hello.s -o hello.o
```

### Disassemble object file to see machine code and assembly

```
objdump -d hello.o
```

### Show header, body information of object file

```
objdump -x hello.o
```

### Dynamic linker/loader

```
ld hello.o -o hello
```

### Run

```
./hello
```

### Check content of executable file

```
readelf -h hello
```

### Directly compile to executable file

```
gcc hello.c -o hello
```

### Check file format

```
file hello
```
---

## Compile sum

### Compile and assemble

```
gcc -O2 -c sum.c -o sum.o
```

### Static link

```
ar rcs libsum.a sum.o
```

### Compile main with static library

```
cc main.c libsum.a -o main
```
