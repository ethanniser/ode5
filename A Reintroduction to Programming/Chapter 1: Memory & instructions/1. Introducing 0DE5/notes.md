# solutions

## Edit executable code

```
just compile
r2 -w ./out/program
aaa
pdf @ main
w nop @ 0x100003f40
q
codesign --force --sign - ./out/program
./out/program
```


## Edit executable code, but harder

```
just compile2
r2 -w ./out/program2
aaa
pdf @ main
w nop @ 0x100003f30
wx 0e000014 @ 0x100003eec
q
codesign --force --sign - ./out/program2
./out/program2
```
