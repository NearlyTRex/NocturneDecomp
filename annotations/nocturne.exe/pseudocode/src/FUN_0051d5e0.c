// Name: FUN_0051d5e0
// Address: 0051d5e0
// Address Range: [[0051d5e0, 0051d64e]]
// Convention: unknown
// Signature: void FUN_0051d5e0(int param_1,float *param_2)

#include "nocturne.h"

void FUN_0051d5e0(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(param_1);
  iVar3 = 0;
  iVar2 = param_1;
  if (0 < *(int *)(iVar1 + 0x28558)) {
    do {
      *(float *)(iVar2 + 0xe8c) = *param_2 + *(float *)(iVar2 + 0xe8c);
      *(float *)(iVar2 + 0xe9c) = param_2[1] + *(float *)(iVar2 + 0xe9c);
      iVar3 = iVar3 + 1;
      *(float *)(iVar2 + 0xeac) = param_2[2] + *(float *)(iVar2 + 0xeac);
      iVar2 = iVar2 + 0x30;
    } while (iVar3 < *(int *)(iVar1 + 0x28558));
  }
  *(uint *)(param_1 + 0x2230) = 0xffffffff;
  return;
}
