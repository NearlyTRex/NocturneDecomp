// Name: core_set.cpp_CDemonSet_setGamma_FUN_0050e400
// Address: 0050e400
// Address Range: [[0050e400, 0050e489]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_setGamma_FUN_0050e400(CDemonSet *this_ptr,int gamma)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_setGamma_FUN_0050e400(CDemonSet *this_ptr,int gamma)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  double dVar4;
  int iVar5;
  float local_18;
  
  core_dcamera_cpp_CDemonCamera_generateGammaPalette_FUN_00447a70(&g_CDemonCamera_01fb8508,gamma);
  local_18 = (float)gamma * (float)1.52587890625e-05;
  iVar2 = 0;
  iVar1 = 0;
  do {
    fVar3 = pow((float10)iVar2 * (float10)1.52587890625e-05,(float10)local_18)
    ;
    local_18 = 7.428758e-39;
    dVar4 = round((double)(fVar3 * (float10)65536));
    iVar5 = (int)ROUND(dVar4);
    if (iVar5 < 0x100) {
      iVar5 = 0x100;
    }
    iVar2 = iVar2 + 1;
    *(int *)(iVar1 + 0x1fbb060) = iVar5;
    iVar1 = iVar1 + 4;
  } while (iVar2 < 0x10000);
  return;
}
