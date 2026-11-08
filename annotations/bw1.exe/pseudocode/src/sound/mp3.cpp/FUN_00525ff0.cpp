// Name: FUN_00525ff0
// Address: 00525ff0
// Address Range: [[00525ff0, 00526045]]
// Convention: unknown
// Signature: void FUN_00525ff0(int param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00525ff0(int param_1,uint param_2,int param_3)

{
  if (param_3 != 8) {
    _DAT_01d1d400 = "..\\sound\\mp3.cpp";
    _DAT_01d1d404 = 800;
    FUN_005030e0("hputbuf - Not Supported yet!!  File: %s",&DAT_01d404c8);
  }
  *(uint *)(param_1 + 0x131c + (*(uint *)(param_1 + 0x1310) & 0xfff) * 4) = param_2;
  *(int *)(param_1 + 0x1310) = *(int *)(param_1 + 0x1310) + 1;
  return;
}
