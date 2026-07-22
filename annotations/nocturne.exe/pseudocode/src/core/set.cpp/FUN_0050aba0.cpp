// Name: core_set.cpp_FUN_0050aba0
// Address: 0050aba0
// Address Range: [[0050aba0, 0050ad16]]
// Convention: unknown
// Signature: int core_set_cpp_FUN_0050aba0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_set_cpp_FUN_0050aba0(int param_1)

{
  uint *puVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  uint uVar8;
  float local_2c;
  float local_28;
  uint local_24;
  
  iVar3 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
  fVar2 = *(float *)(iVar3 + 0x20) -
          *(float *)(param_1 + 0x104 + *(int *)(param_1 + 0x15aabc) * 0x1a0);
  local_2c = (*(float *)(iVar3 + 0x24) -
             *(float *)(param_1 + 0x108 + *(int *)(param_1 + 0x15aabc) * 0x1a0)) +
             (float)_DAT_005905d2;
  local_28 = *(float *)(iVar3 + 0x28) -
             *(float *)(param_1 + 0x10c + *(int *)(param_1 + 0x15aabc) * 0x1a0);
  atan2((float10)fVar2);
  fVar6 = SQRT((float10)7.40862e-39 * (float10)7.40862e-39 + (float10)local_2c * (float10)local_2c);
  uVar8 = 0x50ac50;
  fVar7 = (float10)atan2((float10)fVar2);
  local_24 = 0;
  local_28 = (float)fVar6;
  local_2c = (float)-fVar7;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(&DAT_01fb8618,&local_2c,uVar8);
  iVar3 = *(int *)(param_1 + 0x15aabc) * 0x1a0 + param_1;
  if ((float *)(iVar3 + 0x110) != &local_2c) {
    *(float *)(iVar3 + 0x110) = local_2c;
    *(float *)(iVar3 + 0x114) = local_28;
    *(uint *)(iVar3 + 0x118) = local_24;
  }
  core_dcamera_cpp_CDemonCamera_beginScene_FUN_00440290(0x1fb8508,0);
  core_set_cpp_CDemonSet_buildDisplayList_FUN_0050d2d0(param_1,0x10);
  core_set_cpp_CDemonSet_renderOpaqueActors_FUN_0050a640(param_1);
  iVar4 = 0;
  iVar3 = core_dcamera_cpp_CDemonCamera_endScene_FUN_00440a20(0x1fb8508,0);
  if (0 < _DAT_01fb9b54) {
    iVar5 = 0;
    do {
      puVar1 = (uint *)(&DAT_01fb9b58 + iVar5);
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 1;
      core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_0044e970(*puVar1);
      iVar3 = _DAT_01fb9b54;
    } while (iVar4 < _DAT_01fb9b54);
  }
  return iVar3;
}
