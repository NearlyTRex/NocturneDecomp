// Name: core_frankgen.cpp_CFrankenstienMachine_setPartFrame_FUN_004952b0
// Address: 004952b0
// Address Range: [[004952b0, 00495336]]
// Convention: __cdecl
// Signature: void __cdecl core_frankgen_cpp_CFrankenstienMachine_setPartFrame_FUN_004952b0(int param_1,float param_2,float param_3)

#include "nocturne.h"

void __cdecl core_frankgen_cpp_CFrankenstienMachine_setPartFrame_FUN_004952b0(int param_1,float param_2,float param_3)

{
  float fVar1;
  int iVar2;
  
  iVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(param_1 + 0x17c);
  iVar2 = *(int *)(iVar2 + 0x100);
  fVar1 = ((float)iVar2 * (*(float *)(param_1 + 0x154) - param_2)) / (param_3 - param_2);
  *(float *)(param_1 + 0x178) = fVar1;
  if (fVar1 < 0.0) {
    *(uint *)(param_1 + 0x178) = 0;
  }
  fVar1 = (float)(iVar2 + -1);
  if (*(float *)(param_1 + 0x178) <= fVar1) {
    return;
  }
  *(float *)(param_1 + 0x178) = fVar1;
  return;
}
