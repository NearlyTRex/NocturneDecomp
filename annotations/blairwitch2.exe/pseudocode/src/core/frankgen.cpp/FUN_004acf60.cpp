// Name: FUN_004acf60
// Address: 004acf60
// Address Range: [[004acf60, 004ad014]]
// Convention: unknown
// Signature: void FUN_004acf60(int param_1,float param_2,float param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004acf60(int param_1,float param_2,float param_3)

{
  int iVar1;
  float local_20;
  
  iVar1 = *(int *)(param_1 + 0x45c);
  if (iVar1 < 1) {
    _DAT_01d046a0 = "..\\core\\frankgen.cpp";
    _DAT_01d046a4 = 0x1dc;
    FUN_004e4500("CFrankenstienMachine::setCourseFrame - no course!");
  }
  local_20 = ((float)iVar1 * (*(float *)(param_1 + 0x2b8) - param_2)) / (param_3 - param_2);
  if (local_20 < 0.0) {
    local_20 = 0.0;
  }
  if ((float)(iVar1 + -1) < local_20) {
    local_20 = (float)(iVar1 + -1);
  }
  FUN_00438c40(param_1 + 0x45c,local_20,param_1 + 0x20,param_1 + 0x30);
  return;
}
