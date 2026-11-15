// Name: core_set.cpp_CDemonSet_setGamma_FUN_00555830
// Address: 00555830
// Address Range: [[00555830, 005558b9]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_setGamma_FUN_00555830(CDemonSet *this_ptr,int gamma)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_setGamma_FUN_00555830(CDemonSet *this_ptr,int gamma)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  double dVar4;
  int iVar5;
  float local_18;
  
  core_dcamera_cpp_CDemonCamera_generateGammaPalette_FUN_00454830(&g_CDemonCameraInstance,gamma);
  local_18 = (float)gamma * (float)_DAT_005f0bee;
  iVar2 = 0;
  iVar1 = 0;
  do {
    fVar3 = pow((float10)iVar2 * (float10)_DAT_005f0bee,(float10)local_18);
    local_18 = 7.83778e-39;
    dVar4 = round((double)(fVar3 * (float10)_DAT_005f0bf6));
    iVar5 = (int)ROUND(dVar4);
    if (iVar5 < 0x100) {
      iVar5 = 0x100;
    }
    iVar2 = iVar2 + 1;
    *(int *)(iVar1 + 0x1fe6344) = iVar5;
    iVar1 = iVar1 + 4;
  } while (iVar2 < 0x10000);
  return;
}
