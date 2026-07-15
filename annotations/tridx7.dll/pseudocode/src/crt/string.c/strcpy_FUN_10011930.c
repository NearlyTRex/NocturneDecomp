// Name: crt_string.c_strcpy_FUN_10011930
// Address: 10011930
// Address Range: [[10011930, 10011936] [100119a1, 10011a1f]]
// Convention: __cdecl
// Signature: char * __cdecl crt_string_c_strcpy_FUN_10011930(char *dst,char *src)

#include "nocturne.h"

char * __cdecl strcpy(char *dst,char *src)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  puVar4 = (uint *)dst;
  while (((uint)src & 3) != 0) {
    bVar1 = (byte)*(uint *)src;
    uVar3 = (uint)bVar1;
    src = (char *)((int)src + 1);
    if (bVar1 == 0) goto LAB_10011a18;
    *(byte *)puVar4 = bVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
  }
  do {
    uVar2 = *(uint *)src;
    uVar3 = *(uint *)src;
    src = (char *)((int)src + 4);
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar3 == '\0') {
LAB_10011a18:
        *(byte *)puVar4 = (byte)uVar3;
        return dst;
      }
      if ((char)(uVar3 >> 8) == '\0') {
        *(short *)puVar4 = (short)uVar3;
        return dst;
      }
      if ((uVar3 & 0xff0000) == 0) {
        *(short *)puVar4 = (short)uVar3;
        *(byte *)((int)puVar4 + 2) = 0;
        return dst;
      }
      if ((uVar3 & 0xff000000) == 0) {
        *puVar4 = uVar3;
        return dst;
      }
    }
    *puVar4 = uVar3;
    puVar4 = puVar4 + 1;
  } while( true );
}
