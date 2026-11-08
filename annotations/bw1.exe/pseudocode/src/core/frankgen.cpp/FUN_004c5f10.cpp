// Name: FUN_004c5f10
// Address: 004c5f10
// Address Range: [[004c5f10, 004c5fc4]]
// Convention: unknown
// Signature: void FUN_004c5f10(int param_1,float param_2,float param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c5f10(int param_1,float param_2,float param_3)

{
  int iVar1;
  float local_20;
  
  iVar1 = *(int *)(param_1 + 0x300);
  if (iVar1 < 1) {
    _DAT_01d1d400 = "..\\core\\frankgen.cpp";
    _DAT_01d1d404 = 0x1dc;
    FUN_005030e0("CFrankenstienMachine::setCourseFrame - no course!");
  }
  local_20 = ((float)iVar1 * (*(float *)(param_1 + 0x15c) - param_2)) / (param_3 - param_2);
  if (local_20 < 0.0) {
    local_20 = 0.0;
  }
  if ((float)(iVar1 + -1) < local_20) {
    local_20 = (float)(iVar1 + -1);
  }
  FUN_00447f00(param_1 + 0x300,local_20,param_1 + 0x20,param_1 + 0x30);
  return;
}
