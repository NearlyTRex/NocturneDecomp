// Name: crt_string.c_strchr_FUN_100117f0
// Address: 100117f0
// Address Range: [[100117e0, 100117e4] [100117f0, 100118ab]]
// Convention: __cdecl
// Signature: char * __cdecl crt_string_c_strchr_FUN_100117f0(char *s,int c)

#include "nocturne.h"

char * __cdecl strchr(char *s,int c)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  
  while (((uint)s & 3) != 0) {
    uVar1 = *(uint *)s;
    if ((char)uVar1 == (char)c) {
      return (char *)(uint *)s;
    }
    s = (char *)((int)s + 1);
    if ((char)uVar1 == '\0') {
      return (char *)0x0;
    }
  }
  while( true ) {
    while( true ) {
      uVar1 = *(uint *)s;
      uVar4 = uVar1 ^ CONCAT22(CONCAT11((char)c,(char)c),CONCAT11((char)c,(char)c));
      uVar3 = uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff;
      puVar5 = (uint *)((int)s + 4);
      if (((uVar4 ^ 0xffffffff ^ uVar4 + 0x7efefeff) & 0x81010100) != 0) break;
      s = (char *)puVar5;
      if ((uVar3 & 0x81010100) != 0) {
        if ((uVar3 & 0x1010100) != 0) {
          return (char *)0x0;
        }
        if ((uVar1 + 0x7efefeff & 0x80000000) == 0) {
          return (char *)0x0;
        }
      }
    }
    uVar1 = *(uint *)s;
    if ((char)uVar1 == (char)c) {
      return (char *)(uint *)s;
    }
    if ((char)uVar1 == '\0') {
      return (char *)0x0;
    }
    cVar2 = (char)(uVar1 >> 8);
    if (cVar2 == (char)c) {
      return (char *)((int)s + 1);
    }
    if (cVar2 == '\0') {
      return (char *)0x0;
    }
    cVar2 = (char)(uVar1 >> 0x10);
    if (cVar2 == (char)c) {
      return (char *)((int)s + 2);
    }
    if (cVar2 == '\0') break;
    cVar2 = (char)(uVar1 >> 0x18);
    if (cVar2 == (char)c) {
      return (char *)((int)s + 3);
    }
    s = (char *)puVar5;
    if (cVar2 == '\0') {
      return (char *)0x0;
    }
  }
  return (char *)0x0;
}
