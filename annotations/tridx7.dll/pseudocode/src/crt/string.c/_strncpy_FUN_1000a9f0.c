// Name: crt_string.c__strncpy_FUN_1000a9f0
// Address: 1000a9f0
// Address Range: [[1000a9f0, 1000aaed]]
// Convention: __cdecl
// Signature: char * __cdecl crt_string_c__strncpy_FUN_1000a9f0(char *dest,char *source,size_t count)

#include "nocturne.h"

char * __cdecl _strncpy(char *dest,char *source,size_t count)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint *puVar5;
  
  if (count == 0) {
    return dest;
  }
  puVar5 = (uint *)dest;
  if (((uint)source & 3) != 0) {
    while( true ) {
      uVar4 = *(uint *)source;
      source = (char *)((int)source + 1);
      *(char *)puVar5 = (char)uVar4;
      puVar5 = (uint *)((int)puVar5 + 1);
      count = count - 1;
      if (count == 0) {
        return dest;
      }
      if ((char)uVar4 == '\0') break;
      if (((uint)source & 3) == 0) {
        uVar4 = count >> 2;
        goto joined_r0x1000aa2e;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_1000aa6b;
        goto LAB_1000aad9;
      }
      *(char *)puVar5 = '\0';
      puVar5 = (uint *)((int)puVar5 + 1);
      count = count - 1;
    } while (count != 0);
    return dest;
  }
  uVar4 = count >> 2;
  if (uVar4 != 0) {
    do {
      uVar1 = *(uint *)source;
      uVar2 = *(uint *)source;
      source = (char *)((int)source + 4);
      if (((uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff) & 0x81010100) != 0) {
        if ((char)uVar2 == '\0') {
          *puVar5 = 0;
joined_r0x1000aad5:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_1000aad9:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          count = count & 3;
          if (count != 0) goto LAB_1000aa6b;
          return dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x1000aad5;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x1000aad5;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x1000aad5;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x1000aa2e:
    } while (uVar4 != 0);
    count = count & 3;
    if (count == 0) {
      return dest;
    }
  }
  do {
    cVar3 = (char)*(uint *)source;
    source = (char *)((int)source + 1);
    *(char *)puVar5 = cVar3;
    puVar5 = (uint *)((int)puVar5 + 1);
    if (cVar3 == '\0') {
      while (count = count - 1, count != 0) {
LAB_1000aa6b:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return dest;
    }
    count = count - 1;
  } while (count != 0);
  return dest;
}
