// Name: FUN_00495340
// Address: 00495340
// Address Range: [[00495340, 004953f4]]
// Convention: unknown
// Signature: void FUN_00495340(int param_1,float param_2,float param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00495340(int param_1,float param_2,float param_3)

{
  int iVar1;
  float local_20;
  
  iVar1 = *(int *)(param_1 + 0x2f8);
  if (iVar1 < 1) {
    _DAT_01cc4800 = "..\\core\\frankgen.cpp";
    _DAT_01cc4804 = 0x1dc;
    FUN_004c8440("CFrankenstienMachine::setCourseFrame - no course!");
  }
  local_20 = ((float)iVar1 * (*(float *)(param_1 + 0x154) - param_2)) / (param_3 - param_2);
  if (local_20 < 0.0) {
    local_20 = 0.0;
  }
  if ((float)(iVar1 + -1) < local_20) {
    local_20 = (float)(iVar1 + -1);
  }
  FUN_0043b800(param_1 + 0x2f8,local_20,param_1 + 0x20,param_1 + 0x30);
  return;
}
