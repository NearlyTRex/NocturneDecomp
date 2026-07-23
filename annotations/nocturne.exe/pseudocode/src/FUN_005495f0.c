// Name: FUN_005495f0
// Address: 005495f0
// Address Range: [[005495f0, 005496c5]]
// Convention: unknown
// Signature: void FUN_005495f0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005495f0(int param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  float local_18;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(param_1 + 0x57c);
  core_weapon_cpp_CWeapon_setup_FUN_00553f10(param_1);
  iVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(param_1 + 0x150);
  piVar3 = (int *)core_dmodel_cpp_CKeyFramedModel_getFrameVertices_FUN_00453080
                            (iVar2,*(int *)(iVar2 + 0x100) + -1);
  local_18 = -1e+30;
  for (iVar4 = 0; iVar4 < *(int *)(iVar2 + 0x104); iVar4 = iVar4 + 1) {
    fVar1 = (float)piVar3[2] + (float)piVar3[1] * (float)0.20000000000000001;
    if (local_18 < fVar1) {
      *(float *)(param_1 + 0x858) = (float)*piVar3 * _DAT_005a3788;
      *(float *)(param_1 + 0x85c) = (float)piVar3[1] * _DAT_005a3788;
      *(float *)(param_1 + 0x860) = (float)piVar3[2] * _DAT_005a3788;
      local_18 = fVar1;
    }
    piVar3 = piVar3 + 3;
  }
  *(uint *)(param_1 + 0x8ac) = 0;
  *(uint *)(param_1 + 0x8b0) = 0;
  *(uint *)(param_1 + 0x8a8) = 0;
  return;
}
