// Name: core_gabriela.cpp_CGabriella_updateWeaponPosition_FUN_004d5550
// Address: 004d5550
// Address Range: [[004d5550, 004d586b]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_updateWeaponPosition_FUN_004d5550(CGabriella *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_gabriela_cpp_CGabriella_updateWeaponPosition_FUN_004d5550(CGabriella *this_ptr,float delta_time)

{
  CWeapon *pCVar1;
  CInventory *pCVar2;
  CVector3f *pCVar3;
  int iVar4;
  UOrientationVector *pUVar5;
  CMatrix3x4f *pCVar6;
  CMatrix3x4f *pCVar7;
  CMatrix3x4f *pCVar8;
  CMatrix3x4f *pCVar9;
  byte bVar10;
  CMatrix3x4f *matrix_b;
  CMatrix3x4f local_3ac;
  CMatrix3x4f local_37c;
  CMatrix3x4f local_34c;
  CMatrix3x4f local_31c;
  CMatrix3x4f local_2ec;
  CMatrix3x4f local_2bc;
  CMatrix3x4f local_28c;
  CMatrix3x4f local_25c;
  CMatrix3x4f local_22c;
  CMatrix3x4f local_1fc;
  CMatrix3x4f local_1cc;
  CMatrix3x4f local_19c;
  CMatrix3x4f local_16c;
  CMatrix3x4f local_13c;
  CMatrix3x4f local_10c;
  CMatrix3x4f local_dc;
  CMatrix3x4f local_ac;
  CMatrix3x4f local_7c;
  CVector3f local_4c;
  CVector3f local_40;
  CVector3f local_34;
  CVector3f local_28;
  CInventory *local_14;
  
  bVar10 = 0;
  core_charactr_cpp_CCharacter_updateCarriedObjects_FUN_0042d090((CCharacter *)this_ptr,delta_time);
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            (&local_34c,&(this_ptr->base).base.base.location.position,
             &(this_ptr->base).base.base.orient.vec);
  local_14 = &(this_ptr->base).inventory;
  if (this_ptr->draw_blend < 0.64f) {
    pCVar1 = (this_ptr->base).inventory.selected_weapon;
    (*(((pCVar1->base).vtable._uw)->_uw).setWeaponState)(pCVar1,1);
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              (&local_22c,&UNION_UVector3_02d7b820.f,&UNION_UVector3_02d7b82c.f);
    pCVar8 = &local_34c;
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
              (&local_22c,
               (this_ptr->base).base.model.bone_transform.bone_world_matrices + INT_02d7b870,
               &local_1cc);
    pCVar7 = &local_1cc;
    pCVar6 = &local_1fc;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      pCVar6->m[0].w = pCVar7->m[0].w;
      pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar10 * -2 + 1) * 4);
      pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar10 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_1fc,pCVar8,&local_dc);
    pCVar8 = &local_dc;
  }
  else {
    pCVar1 = (this_ptr->base).inventory.selected_weapon;
    (*(((pCVar1->base).vtable._uw)->_uw).setWeaponState)(pCVar1,2);
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              (&local_13c,&UNION_UVector3_02d7b814.f,&g_ZeroVector.f);
    matrix_b = (this_ptr->base).base.model.bone_transform.bone_world_matrices + INT_02d7b88c;
    pCVar8 = &local_13c;
    core_xform_cpp_buildRotationX_FUN_005f6c40(1.5707964,&local_16c);
    pCVar7 = &local_28c;
    pCVar6 = &local_16c;
    pCVar9 = &local_28c;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      pCVar9->m[0].w = pCVar6->m[0].w;
      pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar10 * -2 + 1) * 4);
      pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar10 * -2 + 1) * 4);
    }
    core_xform_cpp_buildRotationY_FUN_005f6cc0(1.5707964,&local_3ac);
    pCVar6 = &local_3ac;
    pCVar9 = &local_2bc;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      pCVar9->m[0].w = pCVar6->m[0].w;
      pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar10 * -2 + 1) * 4);
      pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar10 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_2bc,pCVar7,&local_37c);
    pCVar7 = &local_37c;
    pCVar6 = &local_25c;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      pCVar6->m[0].w = pCVar7->m[0].w;
      pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar10 * -2 + 1) * 4);
      pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar10 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_25c,pCVar8,&local_ac);
    pCVar8 = &local_ac;
    pCVar7 = &local_19c;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      pCVar7->m[0].w = pCVar8->m[0].w;
      pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar10 * -2 + 1) * 4);
      pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar10 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_19c,matrix_b,&local_7c);
    pCVar2 = local_14;
    pCVar8 = &local_7c;
    pCVar7 = &local_2ec;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      pCVar7->m[0].w = pCVar8->m[0].w;
      pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar10 * -2 + 1) * 4);
      pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar10 * -2 + 1) * 4);
    }
    iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0
                      (&pCVar2->selected_weapon->base,"CCrossbow");
    if (iVar4 != 0) {
      core_xform_cpp_getTranslation_FUN_005f6110(&local_2ec,&local_40);
      core_xform_cpp_matrixToEulerAngles_FUN_005f5690((CMatrix3x3f *)&local_2ec,&local_34);
      local_34.z = (1.0 - this_ptr->aim_weight) * local_34.z;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                (&local_2ec,&local_40,&local_34);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_2ec,&local_34c,&local_10c);
    pCVar8 = &local_10c;
  }
  pCVar7 = &local_31c;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    pCVar7->m[0].w = pCVar8->m[0].w;
    pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar10 * -2 + 1) * 4);
    pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar10 * -2 + 1) * 4);
  }
  pCVar3 = core_xform_cpp_getTranslation_FUN_005f6110(&local_31c,&local_28);
  pCVar1 = (this_ptr->base).inventory.selected_weapon;
  (pCVar1->base).location.position.x = pCVar3->x;
  (pCVar1->base).location.position.y = pCVar3->y;
  (pCVar1->base).location.position.z = pCVar3->z;
  pCVar3 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690((CMatrix3x3f *)&local_31c,&local_4c);
  pCVar1 = (this_ptr->base).inventory.selected_weapon;
  pUVar5 = &(pCVar1->base).orient;
  if ((CVector3f *)pUVar5 != pCVar3) {
    (pUVar5->vec).x = pCVar3->x;
    (pCVar1->base).orient.vec.y = pCVar3->y;
    (pCVar1->base).orient.vec.z = pCVar3->z;
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
            (&((this_ptr->base).inventory.selected_weapon)->base);
  return;
}
