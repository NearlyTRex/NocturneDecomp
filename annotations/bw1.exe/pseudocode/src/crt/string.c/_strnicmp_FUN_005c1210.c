// Name: crt_string.c__strnicmp_FUN_005c1210
// Address: 005c1210
// Address Range: [[005c1210, 005c1267]]
// Convention: __cdecl
// Signature: int __cdecl crt_string_c__strnicmp_FUN_005c1210(char *str1,char *str2,int count)

#include "nocturne.h"

int __cdecl _strnicmp(char *str1,char *str2,int count)

{
  byte bVar2;
  uint uVar1;
  
  while( true ) {
    if (count == 0) {
      return 0;
    }
    bVar2 = *str1;
    uVar1 = (uint)CONCAT11(*str2,bVar2);
    if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
      uVar1 = (uint)CONCAT11(*str2,bVar2 + 0x20);
    }
    bVar2 = (byte)(uVar1 >> 8);
    if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
      uVar1 = (uint)CONCAT11(bVar2 + 0x20,(char)uVar1);
    }
    bVar2 = (byte)(uVar1 >> 8);
    if ((byte)uVar1 != bVar2) break;
    if (bVar2 == 0) {
      return 0;
    }
    str1 = str1 + 1;
    str2 = str2 + 1;
    count = count + -1;
  }
  return (uVar1 & 0xff) - (uint)bVar2;
}
