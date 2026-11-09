// Name: core_turret.cpp_FUN_0057e550
// Address: 0057e550
// Address Range: [[0057e550, 0057e625]]
// Convention: unknown
// Signature: void core_turret_cpp_FUN_0057e550(CWeapon *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_turret_cpp_FUN_0057e550(CWeapon *param_1)

{
  float fVar1;
  CKeyFramedModel *this_ptr;
  CVector3i *pCVar2;
  int iVar3;
  float fStack_14;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
            ((CKeyFramedModelInstance *)&param_1[1].field_0xc);
  core_weapon_cpp_FUN_00589b50(param_1);
  this_ptr = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
                       ((CKeyFramedModelInstance *)&param_1->field_0x2b4);
  pCVar2 = core_dmodel_cpp_CKeyFramedModel_getFrameVertices_FUN_0044e6e0
                     (this_ptr,*(int *)&this_ptr->field_0x100 + -1);
  fStack_14 = -1e+30;
  for (iVar3 = 0; iVar3 < *(int *)&this_ptr->field_0x104; iVar3 = iVar3 + 1) {
    fVar1 = (float)*(int *)(pCVar2 + 8) + (float)*(int *)(pCVar2 + 4) * (float)_DAT_005ed684;
    if (fStack_14 < fVar1) {
      *(float *)&param_1[1].field_0x2e8 = (float)*(int *)pCVar2 * _DAT_005fd518;
      *(float *)&param_1[1].field_0x2ec = (float)*(int *)(pCVar2 + 4) * _DAT_005fd518;
      *(float *)&param_1[1].field_0x2f0 = (float)*(int *)(pCVar2 + 8) * _DAT_005fd518;
      fStack_14 = fVar1;
    }
    pCVar2 = pCVar2 + 0xc;
  }
  *(uint *)&param_1[1].field_0x33c = 0;
  *(uint *)&param_1[1].field_0x340 = 0;
  *(uint *)&param_1[1].field_0x338 = 0;
  return;
}
