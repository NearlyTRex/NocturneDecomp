// Name: core_gabriela.cpp_CGabriella_updateWeaponPosition_FUN_004d5550
// Address: 004d5550
// MANUAL RECONSTRUCTION
// Address Range: [[004d5550, 004d586b] [03fc18bc, 03fc1b1d] [03fc585e, 03fc58b3]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_updateWeaponPosition_FUN_004d5550(CGabriella *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_gabriela_cpp_CGabriella_updateWeaponPosition_FUN_004d5550(CGabriella *this_ptr,float delta_time)

{
  CWeapon *pCVar4;
  int iVar5;
  CVector3f *pCVar3;
  UOrientationVector *pUVar6;
  UOrientationVector *pUVar5;
  CMatrix3x4f *pCVar8;
  CMatrix3x4f *matrix_b_00;
  CMatrix3x4f *pCVar10;
  CMatrix3x4f local_3ac;
  CMatrix3x4f local_37c;
  CMatrix3x4f local_34c;
  CMatrix3x4f local_31c;
  CMatrix3x4f local_2ec;
  CMatrix3x4f local_22c;
  CMatrix3x4f local_1cc;
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
  CWeapon *pCVar1;
  CMatrix3x4f *matrix_b;
  
  core_charactr_cpp_CCharacter_updateCarriedObjects_FUN_0042d090((CCharacter *)this_ptr,delta_time);
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            (&local_34c,&(this_ptr->base).base.base.location.position,
             &(this_ptr->base).base.base.orient.vec);
  if (this_ptr->draw_blend < 0.64f) {
    pCVar4 = (this_ptr->base).inventory.selected_weapon;
    (*(((pCVar4->base).vtable._uw)->_uw).setWeaponState)(pCVar4,1);
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              (&local_22c,&UNION_UVector3_02d7b820.f,&UNION_UVector3_02d7b82c.f);
    pCVar10 = &local_34c;
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
              (&local_22c,
               (this_ptr->base).base.model.bone_transform.bone_world_matrices +
               g_GabriellaIndices[10],&local_1cc);
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_1cc,pCVar10,&local_dc);
    pCVar8 = &local_dc;
  }
  else {
    pCVar1 = (this_ptr->base).inventory.selected_weapon;
    (*(((pCVar1->base).vtable._uw)->_uw).setWeaponState)(pCVar1,2);
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              (&local_13c,&UNION_UVector3_02d7b814.f,&g_ZeroVector.f);
    matrix_b = (this_ptr->base).base.model.bone_transform.bone_world_matrices +
               g_GabriellaIndices[0x11];
    pCVar10 = &local_13c;
    core_xform_cpp_buildRotationX_FUN_005f6c40(1.5707964,&local_16c);
    matrix_b_00 = &local_16c;
    core_xform_cpp_buildRotationY_FUN_005f6cc0(1.5707964,&local_3ac);
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_3ac,matrix_b_00,&local_37c);
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_37c,pCVar10,&local_ac);
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_ac,matrix_b,&local_7c);
    local_2ec = local_7c;
    iVar5 = core_actor_cpp_isOfClass_FUN_0040c6d0
                      (&((this_ptr->base).inventory.selected_weapon)->base,"CCrossbow");
    if (iVar5 != 0) {
      core_xform_cpp_getTranslation_FUN_005f6110(&local_2ec,&local_40);
      core_xform_cpp_matrixToEulerAngles_FUN_005f5690(&local_2ec,&local_34);
      local_34.z = (1.0 - this_ptr->aim_weight) * local_34.z;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                (&local_2ec,&local_40,&local_34);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_2ec,&local_34c,&local_10c);
    pCVar8 = &local_10c;
  }
  local_31c = *pCVar8;
  pCVar3 = core_xform_cpp_getTranslation_FUN_005f6110(&local_31c,&local_28);
  pCVar4 = (this_ptr->base).inventory.selected_weapon;
  (pCVar4->base).location.position = *pCVar3;
  pUVar6 = (UOrientationVector *)
           core_xform_cpp_matrixToEulerAngles_FUN_005f5690(&local_31c,&local_4c);
  pCVar4 = (this_ptr->base).inventory.selected_weapon;
  pUVar5 = &(pCVar4->base).orient;
  if (pUVar5 != pUVar6) {
    pUVar5->vec = pUVar6->vec;
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
            (&((this_ptr->base).inventory.selected_weapon)->base);
  return;
}
