// Name: core_gabriela.cpp_CGabriella_updateWeaponPosition_FUN_004980d0
// Address: 004980d0
// Address Range: [[004980d0, 004983eb]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_updateWeaponPosition_FUN_004980d0(CGabriella *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gabriela_cpp_CGabriella_updateWeaponPosition_FUN_004980d0(CGabriella *this_ptr,float delta_time)

{
  CWeapon *pCVar1;
  CInventory *pCVar2;
  CVector3f *pCVar3;
  int iVar4;
  UOrientationVector *pUVar5;
  uint *puVar6;
  float *pfVar7;
  uint *puVar8;
  CMatrix3x4f *pCVar9;
  byte bVar10;
  uint local_3ac [12];
  uint local_37c [12];
  byte local_34c [48];
  CMatrix3x4f local_31c;
  CMatrix3x4f local_2ec;
  uint local_2bc [12];
  uint local_28c [12];
  uint local_25c [12];
  byte local_22c [48];
  uint local_1fc [12];
  uint local_1cc [12];
  uint local_19c [12];
  uint local_16c [12];
  byte local_13c [48];
  float local_10c [12];
  float local_dc [12];
  uint local_ac [12];
  float local_7c [12];
  CVector3f local_4c;
  CVector3f local_40;
  CVector3f local_34;
  CVector3f local_28;
  CInventory *local_14;
  
  bVar10 = 0;
  core_charactr_cpp_CCharacter_updateCarriedObjects_FUN_00429220((CCharacter *)this_ptr,delta_time);
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
            (local_34c,&(this_ptr->base).base.base.location,&(this_ptr->base).base.base.orient);
  local_14 = &(this_ptr->base).inventory;
  if (this_ptr->draw_blend < 0.64f) {
    pCVar1 = (this_ptr->base).inventory.selected_weapon;
    (*((pCVar1->base).vtable._ub)->getPropertyList)(&pCVar1->base,(CActorPropertyList *)0x1);
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
              (local_22c,&CVector3f_01c71370,&CVector3f_01c7137c);
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00
              (local_22c,
               (this_ptr->base).base.model.bone_transform.bone_world_matrices + _DAT_01c713c0,
               local_34c);
    puVar6 = local_1cc;
    puVar8 = local_1fc;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + (uint)bVar10 * -2 + 1;
      puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_1fc);
    pfVar7 = local_dc;
  }
  else {
    pCVar1 = (this_ptr->base).inventory.selected_weapon;
    (*((pCVar1->base).vtable._ub)->getPropertyList)(&pCVar1->base,(CActorPropertyList *)0x2);
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
              (local_13c,&CVector3f_01c71364,&DAT_02dd1184);
    core_xform_cpp_buildRotationX_FUN_0055c730
              (0x3fc90fdb,local_13c,
               (this_ptr->base).base.model.bone_transform.bone_world_matrices + _DAT_01c713dc);
    puVar6 = local_16c;
    puVar8 = local_28c;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + (uint)bVar10 * -2 + 1;
      puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
    }
    core_xform_cpp_buildRotationY_FUN_0055c7b0(0x3fc90fdb,local_28c);
    puVar6 = local_3ac;
    puVar8 = local_2bc;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + (uint)bVar10 * -2 + 1;
      puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_2bc);
    puVar6 = local_37c;
    puVar8 = local_25c;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + (uint)bVar10 * -2 + 1;
      puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_25c);
    puVar6 = local_ac;
    puVar8 = local_19c;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + (uint)bVar10 * -2 + 1;
      puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_19c);
    pCVar2 = local_14;
    pfVar7 = local_7c;
    pCVar9 = &local_2ec;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      pCVar9->m[0].w = *pfVar7;
      pfVar7 = pfVar7 + (uint)bVar10 * -2 + 1;
      pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar10 * -2 + 1) * 4);
    }
    iVar4 = core_actor_cpp_isOfClass_FUN_0040d7e0
                      (&pCVar2->selected_weapon->base,"CCrossbow");
    if (iVar4 != 0) {
      core_xform_cpp_getTranslation_FUN_0055bc00(&local_2ec,&local_40);
      core_xform_cpp_matrixToEulerAngles_FUN_0055b180(&local_2ec,&local_34);
      local_34.z = (1.0 - this_ptr->aim_weight) * local_34.z;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
                (&local_2ec,&local_40,&local_34);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(&local_2ec,local_34c);
    pfVar7 = local_10c;
  }
  pCVar9 = &local_31c;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    pCVar9->m[0].w = *pfVar7;
    pfVar7 = pfVar7 + (uint)bVar10 * -2 + 1;
    pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar10 * -2 + 1) * 4);
  }
  pCVar3 = core_xform_cpp_getTranslation_FUN_0055bc00(&local_31c,&local_28);
  pCVar1 = (this_ptr->base).inventory.selected_weapon;
  (pCVar1->base).location.position.x = pCVar3->x;
  (pCVar1->base).location.position.y = pCVar3->y;
  (pCVar1->base).location.position.z = pCVar3->z;
  pCVar3 = core_xform_cpp_matrixToEulerAngles_FUN_0055b180(&local_31c,&local_4c);
  pCVar1 = (this_ptr->base).inventory.selected_weapon;
  pUVar5 = &(pCVar1->base).orient;
  if ((CVector3f *)pUVar5 != pCVar3) {
    (pUVar5->vec).x = pCVar3->x;
    (pCVar1->base).orient.vec.y = pCVar3->y;
    (pCVar1->base).orient.vec.z = pCVar3->z;
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000
            (&((this_ptr->base).inventory.selected_weapon)->base);
  return;
}
