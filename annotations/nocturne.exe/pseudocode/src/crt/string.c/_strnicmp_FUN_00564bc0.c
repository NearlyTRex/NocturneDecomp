// Name: crt_string.c__strnicmp_FUN_00564bc0
// Address: 00564bc0
// Address Range: [[00564bc0, 00564c17]]
// Convention: __cdecl
// Signature: int __cdecl crt_string_c__strnicmp_FUN_00564bc0(byte *param_1,undefined1 *param_2,int param_3)

#include "nocturne.h"

int __cdecl _strnicmp(byte *param_1,byte *param_2,int param_3)

{
  byte bVar2;
  uint uVar1;
  
  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    bVar2 = *param_1;
    uVar1 = (uint)CONCAT11(*param_2,bVar2);
    if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
      uVar1 = (uint)CONCAT11(*param_2,bVar2 + 0x20);
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
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    param_3 = param_3 + -1;
  }
  return (uVar1 & 0xff) - (uint)bVar2;
}
