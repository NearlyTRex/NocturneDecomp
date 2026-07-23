// Name: core_set.cpp_CDemonSet_setGamma_FUN_0050e400
// Address: 0050e400
// Address Range: [[0050e400, 0050e489]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_setGamma_FUN_0050e400(undefined4 param_1,int param_2)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_setGamma_FUN_0050e400(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  int iVar4;
  uint local_18;
  
  core_dcamera_cpp_CDemonCamera_generateGammaPalette_FUN_00447a70(0x1fb8508,param_2);
  local_18 = (float)param_2 * (float)1.52587890625e-05;
  iVar2 = 0;
  iVar1 = 0;
  do {
    fVar3 = (float10)pow
                               ((float10)iVar2 * (float10)1.52587890625e-05,(float10)local_18);
    local_18 = 7.428758e-39;
    fVar3 = (float10)round(fVar3 * (float10)65536);
    iVar4 = (int)ROUND(fVar3);
    if (iVar4 < 0x100) {
      iVar4 = 0x100;
    }
    iVar2 = iVar2 + 1;
    *(int *)(iVar1 + 0x1fbb060) = iVar4;
    iVar1 = iVar1 + 4;
  } while (iVar2 < 0x10000);
  return;
}
