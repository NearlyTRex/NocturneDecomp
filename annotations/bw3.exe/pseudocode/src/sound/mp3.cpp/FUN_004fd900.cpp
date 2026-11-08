// Name: FUN_004fd900
// Address: 004fd900
// Address Range: [[004fd900, 004fd955]]
// Convention: unknown
// Signature: void FUN_004fd900(int param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004fd900(int param_1,uint param_2,int param_3)

{
  if (param_3 != 8) {
    _DAT_01d71de0 = "..\\sound\\mp3.cpp";
    _DAT_01d71de4 = 800;
    FUN_004e4330("hputbuf - Not Supported yet!!  File: %s",&DAT_01d94b98);
  }
  *(uint *)(param_1 + 0x131c + (*(uint *)(param_1 + 0x1310) & 0xfff) * 4) = param_2;
  *(int *)(param_1 + 0x1310) = *(int *)(param_1 + 0x1310) + 1;
  return;
}
