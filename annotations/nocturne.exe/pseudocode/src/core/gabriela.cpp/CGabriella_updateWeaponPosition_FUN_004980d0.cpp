// Name: core_gabriela.cpp_CGabriella_updateWeaponPosition_FUN_004980d0
// Address: 004980d0
// Address Range: [[004980d0, 004983eb]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_updateWeaponPosition_FUN_004980d0(CGabriella *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gabriela_cpp_CGabriella_updateWeaponPosition_FUN_004980d0(CGabriella *this_ptr,float delta_time)

{
  CCharacter *pCVar1;
  CWeapon *pCVar2;
  CInventory *pCVar3;
  CVector3f *pCVar4;
  int iVar5;
  UOrientationVector *pUVar6;
  uint *puVar7;
  float *pfVar8;
  uint *puVar9;
  CMatrix3x4f *pCVar10;
  byte bVar11;
  CVector3f *in_stack_fffffc54;
  float in_stack_fffffc58;
  uint local_37c [12];
  CMatrix3x4f local_34c;
  CMatrix3x4f local_31c;
  CMatrix3x4f local_2ec;
  uint local_2bc [12];
  uint local_28c [12];
  uint local_25c [12];
  CMatrix3x4f local_22c;
  uint local_1fc [12];
  uint local_1cc [12];
  uint local_19c [12];
  uint local_16c [12];
  CMatrix3x4f local_13c;
  float local_10c [12];
  float local_dc [12];
  uint local_ac [12];
  float local_7c [12];
  CVector3f local_4c;
  CVector3f local_40;
  CVector3f local_34;
  CVector3f local_28;
  CInventory *local_14;
  
  bVar11 = 0;
  core_charactr_cpp_CCharacter_updateCarriedObjects_FUN_00429220((CCharacter *)this_ptr,delta_time);
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
            (&local_34c,&(this_ptr->base).base.base.location.position,
             &(this_ptr->base).base.base.orient.vec);
  local_14 = &(this_ptr->base).inventory;
  if (this_ptr->draw_blend < 0.64f) {
    pCVar1 = (CCharacter *)(this_ptr->base).inventory.selected_weapon;
    (*(((pCVar1->base).vtable._uc)->_uc).kill)(pCVar1,1,in_stack_fffffc54,in_stack_fffffc58);
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
              (&local_22c,&CVector3f_01c71370,&CVector3f_01c7137c);
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00();
    puVar7 = local_1cc;
    puVar9 = local_1fc;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
      puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00();
    pfVar8 = local_dc;
  }
  else {
    pCVar1 = (CCharacter *)(this_ptr->base).inventory.selected_weapon;
    (*(((pCVar1->base).vtable._uc)->_uc).kill)(pCVar1,2,in_stack_fffffc54,in_stack_fffffc58);
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
              (&local_13c,&CVector3f_01c71364,(CVector3f *)&DAT_02dd1184);
    core_xform_cpp_buildRotationX_FUN_0055c730();
    puVar7 = local_16c;
    puVar9 = local_28c;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
      puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
    }
    core_xform_cpp_buildRotationY_FUN_0055c7b0();
    puVar7 = (uint *)&stack0xfffffc54;
    puVar9 = local_2bc;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
      puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00();
    puVar7 = local_37c;
    puVar9 = local_25c;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
      puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00();
    puVar7 = local_ac;
    puVar9 = local_19c;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
      puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00();
    pCVar3 = local_14;
    pfVar8 = local_7c;
    pCVar10 = &local_2ec;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      pCVar10->m[0].w = *pfVar8;
      pfVar8 = pfVar8 + (uint)bVar11 * -2 + 1;
      pCVar10 = (CMatrix3x4f *)((int)pCVar10 + ((uint)bVar11 * -2 + 1) * 4);
    }
    iVar5 = core_actor_cpp_isOfClass_FUN_0040d7e0
                      (&pCVar3->selected_weapon->base,"CCrossbow");
    if (iVar5 != 0) {
      core_xform_cpp_getTranslation_FUN_0055bc00(&local_2ec,&local_40);
      core_xform_cpp_matrixToEulerAngles_FUN_0055b180(&local_2ec,&local_34);
      local_34.z = (1.0 - this_ptr->aim_weight) * local_34.z;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
                (&local_2ec,&local_40,&local_34);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00();
    pfVar8 = local_10c;
  }
  pCVar10 = &local_31c;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    pCVar10->m[0].w = *pfVar8;
    pfVar8 = pfVar8 + (uint)bVar11 * -2 + 1;
    pCVar10 = (CMatrix3x4f *)((int)pCVar10 + ((uint)bVar11 * -2 + 1) * 4);
  }
  pCVar4 = core_xform_cpp_getTranslation_FUN_0055bc00(&local_31c,&local_28);
  pCVar2 = (this_ptr->base).inventory.selected_weapon;
  (pCVar2->base).location.position.x = pCVar4->x;
  (pCVar2->base).location.position.y = pCVar4->y;
  (pCVar2->base).location.position.z = pCVar4->z;
  pCVar4 = core_xform_cpp_matrixToEulerAngles_FUN_0055b180(&local_31c,&local_4c);
  pCVar2 = (this_ptr->base).inventory.selected_weapon;
  pUVar6 = &(pCVar2->base).orient;
  if ((CVector3f *)pUVar6 != pCVar4) {
    (pUVar6->vec).x = pCVar4->x;
    (pCVar2->base).orient.vec.y = pCVar4->y;
    (pCVar2->base).orient.vec.z = pCVar4->z;
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000
            (&((this_ptr->base).inventory.selected_weapon)->base);
  return;
}
