// Name: core_turret.cpp_CTurret_setup_FUN_005a21a0
// Address: 005a21a0
// Address Range: [[005a21a0, 005a2275]]
// Convention: __cdecl
// Signature: void __cdecl core_turret_cpp_CTurret_setup_FUN_005a21a0(CTurret *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_turret_cpp_CTurret_setup_FUN_005a21a0(CTurret *this_ptr)

{
  float fVar1;
  CKeyFramedModel *this_ptr_00;
  CVector3i *pCVar2;
  int iVar3;
  float fStack_14;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
            ((CKeyFramedModelInstance *)&this_ptr->field_0x584);
  core_weapon_cpp_CWeapon_setup_FUN_005ad640((CWeapon *)this_ptr);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
                          ((CKeyFramedModelInstance *)&this_ptr->field_0x158);
  pCVar2 = core_dmodel_cpp_CKeyFramedModel_getFrameVertices_FUN_004672b0
                     (this_ptr_00,*(int *)&this_ptr_00->field_0x100 + -1);
  fStack_14 = -1e+30;
  for (iVar3 = 0; iVar3 < *(int *)&this_ptr_00->field_0x104; iVar3 = iVar3 + 1) {
    fVar1 = (float)*(int *)(pCVar2 + 8) + (float)*(int *)(pCVar2 + 4) * (float)_DAT_005f89e0;
    if (fStack_14 < fVar1) {
      *(float *)&this_ptr->field_0x860 = (float)*(int *)pCVar2 * _DAT_006074b8;
      *(float *)&this_ptr->field_0x864 = (float)*(int *)(pCVar2 + 4) * _DAT_006074b8;
      *(float *)&this_ptr->field_0x868 = (float)*(int *)(pCVar2 + 8) * _DAT_006074b8;
      fStack_14 = fVar1;
    }
    pCVar2 = pCVar2 + 0xc;
  }
  *(uint *)&this_ptr->field_0x8b4 = 0;
  *(uint *)&this_ptr->field_0x8b8 = 0;
  *(uint *)&this_ptr->field_0x8b0 = 0;
  return;
}
