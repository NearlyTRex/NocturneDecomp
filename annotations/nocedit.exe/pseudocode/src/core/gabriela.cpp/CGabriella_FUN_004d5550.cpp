// Name: core_gabriela.cpp_CGabriella_FUN_004d5550
// Address: 004d5550
// Address Range: [[004d5550, 004d586b]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_FUN_004d5550(CGabriella *this_ptr)

#include "nocturne.h"

void __cdecl core_gabriela_cpp_CGabriella_FUN_004d5550(CGabriella *this_ptr)

{
  CCharacter *pCVar1;
  CWeapon *pCVar2;
  CInventory *pCVar3;
  CVector3f *pCVar4;
  int iVar5;
  UOrientationVector *pUVar6;
  CMatrix3x4f *pCVar7;
  float *pfVar8;
  CMatrix3x4f *pCVar9;
  CMatrix3x4f *pCVar10;
  CMatrix3x4f *pCVar11;
  byte bVar12;
  float in_stack_00000008;
  CVector3f *in_stack_fffffc54;
  float in_stack_fffffc58;
  CQuaternion4f *matrix_b;
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
  
  bVar12 = 0;
  core_charactr_cpp_CCharacter_updateCarriedObjects_FUN_0042d090
            ((CCharacter *)this_ptr,in_stack_00000008);
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            (&local_34c,&(this_ptr->base).base.base.location.position,
             &(this_ptr->base).base.base.orient.vec);
  local_14 = &(this_ptr->base).inventory;
  if (this_ptr->draw_blend < 0.64f) {
    pCVar1 = (CCharacter *)(this_ptr->base).inventory.selected_weapon;
    (*(((pCVar1->base).vtable._uc)->_uc).kill)(pCVar1,1,in_stack_fffffc54,in_stack_fffffc58);
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              (&local_22c,(CVector3f *)&FLOAT_02d7b820,(CVector3f *)&FLOAT_02d7b82c);
    pCVar10 = &local_34c;
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
              (&local_22c,
               (CMatrix3x4f *)
               (this_ptr->base).base.model.bone_transform.bone_world_matrices[INT_02d7b870].m,
               &local_1cc);
    pCVar9 = &local_1cc;
    pCVar7 = &local_1fc;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      pCVar7->m[0].w = pCVar9->m[0].w;
      pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar12 * -2 + 1) * 4);
      pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar12 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_1fc,pCVar10,&local_dc);
    pCVar10 = &local_dc;
  }
  else {
    pCVar1 = (CCharacter *)(this_ptr->base).inventory.selected_weapon;
    (*(((pCVar1->base).vtable._uc)->_uc).kill)(pCVar1,2,in_stack_fffffc54,in_stack_fffffc58);
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              (&local_13c,(CVector3f *)&FLOAT_02d7b814,&g_ZeroVector.f);
    matrix_b = (this_ptr->base).base.model.bone_transform.bone_world_matrices[INT_02d7b88c].m;
    pCVar10 = &local_13c;
    core_xform_cpp_buildRotationX_FUN_005f6c40(1.5707964,&local_16c);
    pCVar9 = &local_28c;
    pCVar7 = &local_16c;
    pCVar11 = &local_28c;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      pCVar11->m[0].w = pCVar7->m[0].w;
      pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar12 * -2 + 1) * 4);
      pCVar11 = (CMatrix3x4f *)((int)pCVar11 + ((uint)bVar12 * -2 + 1) * 4);
    }
    core_xform_cpp_buildRotationY_FUN_005f6cc0(1.5707964,(CMatrix3x4f *)&stack0xfffffc54);
    pfVar8 = (float *)&stack0xfffffc54;
    pCVar7 = &local_2bc;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      pCVar7->m[0].w = *pfVar8;
      pfVar8 = pfVar8 + (uint)bVar12 * -2 + 1;
      pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar12 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_2bc,pCVar9,&local_37c);
    pCVar9 = &local_37c;
    pCVar7 = &local_25c;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      pCVar7->m[0].w = pCVar9->m[0].w;
      pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar12 * -2 + 1) * 4);
      pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar12 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_25c,pCVar10,&local_ac);
    pCVar10 = &local_ac;
    pCVar9 = &local_19c;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      pCVar9->m[0].w = pCVar10->m[0].w;
      pCVar10 = (CMatrix3x4f *)((int)pCVar10 + ((uint)bVar12 * -2 + 1) * 4);
      pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar12 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_19c,(CMatrix3x4f *)matrix_b,&local_7c);
    pCVar3 = local_14;
    pCVar10 = &local_7c;
    pCVar9 = &local_2ec;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      pCVar9->m[0].w = pCVar10->m[0].w;
      pCVar10 = (CMatrix3x4f *)((int)pCVar10 + ((uint)bVar12 * -2 + 1) * 4);
      pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar12 * -2 + 1) * 4);
    }
    iVar5 = core_actor_cpp_isOfClass_FUN_0040c6d0
                      (&pCVar3->selected_weapon->base,"CCrossbow");
    if (iVar5 != 0) {
      core_xform_cpp_getTranslation_FUN_005f6110(&local_2ec,&local_40);
      core_xform_cpp_matrixToEulerAngles_FUN_005f5690((CMatrix3x3f *)&local_2ec,&local_34);
      local_34.z = (1.0 - this_ptr->aim_weight) * local_34.z;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                (&local_2ec,&local_40,&local_34);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_2ec,&local_34c,&local_10c);
    pCVar10 = &local_10c;
  }
  pCVar9 = &local_31c;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    pCVar9->m[0].w = pCVar10->m[0].w;
    pCVar10 = (CMatrix3x4f *)((int)pCVar10 + ((uint)bVar12 * -2 + 1) * 4);
    pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar12 * -2 + 1) * 4);
  }
  pCVar4 = core_xform_cpp_getTranslation_FUN_005f6110(&local_31c,&local_28);
  pCVar2 = (this_ptr->base).inventory.selected_weapon;
  (pCVar2->base).location.position.x = pCVar4->x;
  (pCVar2->base).location.position.y = pCVar4->y;
  (pCVar2->base).location.position.z = pCVar4->z;
  pCVar4 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690((CMatrix3x3f *)&local_31c,&local_4c);
  pCVar2 = (this_ptr->base).inventory.selected_weapon;
  pUVar6 = &(pCVar2->base).orient;
  if ((CVector3f *)pUVar6 != pCVar4) {
    (pUVar6->vec).x = pCVar4->x;
    (pCVar2->base).orient.vec.y = pCVar4->y;
    (pCVar2->base).orient.vec.z = pCVar4->z;
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
            (&((this_ptr->base).inventory.selected_weapon)->base);
  return;
}
