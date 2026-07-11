// Name: FUN_004e2de0
// Address: 004e2de0
// Address Range: [[004e2de0, 004e2e35]]
// Convention: unknown
// Signature: void FUN_004e2de0(int param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e2de0(int param_1,uint param_2,int param_3)

{
  if (param_3 != 8) {
    _DAT_01cc4800 = "..\\sound\\mp3.cpp";
    _DAT_01cc4804 = 0x2d4;
    FUN_004c8440("hputbuf - Not Supported yet!!  File: %s",&DAT_01cd8b28);
  }
  *(uint *)(param_1 + 0x131c + (*(uint *)(param_1 + 0x1310) & 0xfff) * 4) = param_2;
  *(int *)(param_1 + 0x1310) = *(int *)(param_1 + 0x1310) + 1;
  return;
}
