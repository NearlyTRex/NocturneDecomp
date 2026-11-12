// Name: core_gabriela.cpp_CGabriella_updateWeaponPosition_FUN_004c91b0
// Address: 004c91b0
// Address Range: [[004c91b0, 004c94fc]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_updateWeaponPosition_FUN_004c91b0(CGabriella *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gabriela_cpp_CGabriella_updateWeaponPosition_FUN_004c91b0(CGabriella *this_ptr,float delta_time)

{
  CCharacter *pCVar1;
  CWeapon *pCVar2;
  CInventory *pCVar3;
  int iVar4;
  UOrientationVector *pUVar5;
  CMatrix3x4f *pCVar6;
  float *pfVar7;
  CMatrix3x4f *pCVar8;
  CMatrix3x4f *pCVar9;
  CMatrix3x4f *pCVar10;
  byte bVar11;
  float afStackY_1068 [799];
  CVector3f *in_stack_fffffc20;
  float in_stack_fffffc24;
  CQuaternion4f *matrix_b;
  CMatrix3x4f local_3b0;
  CMatrix3x4f local_380;
  float local_350 [12];
  CMatrix3x4f local_320;
  CMatrix3x4f local_2f0;
  CMatrix3x4f local_2c0;
  CMatrix3x4f local_290;
  CMatrix3x4f local_260;
  CMatrix3x4f local_230;
  CMatrix3x4f local_200;
  CMatrix3x4f local_1d0;
  CMatrix3x4f local_1a0;
  CMatrix3x4f local_170;
  CMatrix3x4f local_140;
  CMatrix3x4f local_110;
  CMatrix3x4f local_e0;
  CMatrix3x4f local_b0;
  float local_80;
  float local_7c [5];
  CVector3f local_68;
  float local_5c;
  float afStack_58 [2];
  CVector3f local_50;
  float local_44;
  float local_40 [5];
  float local_2c;
  CInventory *local_18;
  CInventory *local_14;
  
  bVar11 = 0;
  core_charactr_cpp_CCharacter_updateCarriedObjects_FUN_004328f0((CCharacter *)this_ptr,delta_time);
  core_xform_cpp_FUN_005b5760
            (&local_380,&(this_ptr->base).base.base.location.position,
             &(this_ptr->base).base.base.orient.vec);
  local_14 = &(this_ptr->base).inventory;
  if (this_ptr->draw_blend < _DAT_00600d54) {
    pCVar1 = (CCharacter *)(this_ptr->base).inventory.selected_weapon;
    (*(((pCVar1->base).vtable._uc)->_uc).kill)(pCVar1,1,in_stack_fffffc20,in_stack_fffffc24);
    core_xform_cpp_FUN_005b5760(&local_200,(CVector3f *)&DAT_01cc90e0,(CVector3f *)&DAT_01cc90ec);
    pCVar8 = &local_380;
    core_xform_cpp_multiplyMatrix3x4_FUN_005b5200
              (&local_200,
               (CMatrix3x4f *)
               (this_ptr->base).base.model.bone_transform.bone_model_matrices[_DAT_01cc9130].m,
               &local_110);
    pCVar9 = &local_110;
    pCVar6 = &local_1d0;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      pCVar6->m[0].w = pCVar9->m[0].w;
      pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar11 * -2 + 1) * 4);
      pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar11 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(&local_1d0,pCVar8,&local_b0);
    pCVar8 = &local_b0;
  }
  else {
    pCVar1 = (CCharacter *)(this_ptr->base).inventory.selected_weapon;
    (*(((pCVar1->base).vtable._uc)->_uc).kill)(pCVar1,2,in_stack_fffffc20,in_stack_fffffc24);
    core_xform_cpp_FUN_005b5760(&local_320,(CVector3f *)&DAT_01cc90d4,(CVector3f *)&DAT_02c8af28);
    matrix_b = (this_ptr->base).base.model.bone_transform.bone_model_matrices[_DAT_01cc914c].m;
    pCVar8 = &local_320;
    core_xform_cpp_buildRotationX_FUN_005b6d90(1.5707964,&local_170);
    pCVar9 = &local_290;
    pCVar6 = &local_170;
    pCVar10 = &local_290;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      pCVar10->m[0].w = pCVar6->m[0].w;
      pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar11 * -2 + 1) * 4);
      pCVar10 = (CMatrix3x4f *)((int)pCVar10 + ((uint)bVar11 * -2 + 1) * 4);
    }
    core_xform_cpp_buildRotationY_FUN_005b6e10(1.5707964,&local_1a0);
    pCVar6 = &local_1a0;
    pCVar10 = &local_2c0;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      pCVar10->m[0].w = pCVar6->m[0].w;
      pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar11 * -2 + 1) * 4);
      pCVar10 = (CMatrix3x4f *)((int)pCVar10 + ((uint)bVar11 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(&local_2c0,pCVar9,(CMatrix3x4f *)&stack0xfffffc20)
    ;
    pfVar7 = (float *)&stack0xfffffc20;
    pCVar9 = &local_260;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      pCVar9->m[0].w = *pfVar7;
      pfVar7 = pfVar7 + (uint)bVar11 * -2 + 1;
      pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar11 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(&local_260,pCVar8,&local_3b0);
    pCVar8 = &local_3b0;
    pCVar9 = &local_230;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      pCVar9->m[0].w = pCVar8->m[0].w;
      pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar11 * -2 + 1) * 4);
      pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar11 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(&local_230,(CMatrix3x4f *)matrix_b,&local_e0);
    pCVar3 = local_14;
    pCVar8 = &local_e0;
    pCVar9 = &local_2f0;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      pCVar9->m[0].w = pCVar8->m[0].w;
      pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar11 * -2 + 1) * 4);
      pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar11 * -2 + 1) * 4);
    }
    iVar4 = core_actor_cpp_isOfClass_FUN_0040c550
                      (&pCVar3->selected_weapon->base,"?CCrossbow" + 1);
    if (iVar4 != 0) {
      core_xform_cpp_FUN_005b6270();
      local_68.x = local_40[2];
      *(float *)((int)&local_68 + (uint)bVar11 * -8 + 4) = local_40[(uint)bVar11 * -2 + 3];
      *(float *)((int)&local_68 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
           local_40[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
      core_xform_cpp_matrixToEulerAngles_FUN_005b5930();
      local_50.x = local_5c;
      *(float *)((int)&local_50 + (uint)bVar11 * -8 + 4) = afStack_58[(uint)bVar11 * -2];
      *(float *)((int)&local_50 + ((uint)bVar11 * -2 + (uint)bVar11 * -2) * 4 + 8) =
           afStack_58[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
      local_50.z = (1.0 - this_ptr->aim_weight) * local_50.z;
      core_xform_cpp_FUN_005b5760(&local_2f0,&local_68,&local_50);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(&local_2f0,&local_380,&local_140);
    pCVar8 = &local_140;
  }
  pfVar7 = local_350;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar7 = pCVar8->m[0].w;
    pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar11 * -2 + 1) * 4);
    pfVar7 = pfVar7 + (uint)bVar11 * -2 + 1;
  }
  core_xform_cpp_FUN_005b6270();
  local_44 = local_7c[2];
  local_40[(uint)bVar11 * -2] = local_7c[(uint)bVar11 * -2 + 3];
  local_40[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
       local_7c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
  pCVar2 = (this_ptr->base).inventory.selected_weapon;
  (pCVar2->base).location.position.x = local_44;
  (pCVar2->base).location.position.y = local_40[0];
  (pCVar2->base).location.position.z = local_40[1];
  local_18 = &(this_ptr->base).inventory;
  core_xform_cpp_matrixToEulerAngles_FUN_005b5930();
  pCVar3 = local_18;
  local_80 = local_2c;
  local_7c[(uint)bVar11 * -2] = local_40[(uint)bVar11 * -2 + 6];
  local_7c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
       local_40[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
  pCVar2 = pCVar3->selected_weapon;
  pUVar5 = &(pCVar2->base).orient;
  if (pUVar5 != (UOrientationVector *)&local_80) {
    (pUVar5->vec).x = local_80;
    (pCVar2->base).orient.vec.y = local_7c[0];
    (pCVar2->base).orient.vec.z = local_7c[1];
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0
            (&((this_ptr->base).inventory.selected_weapon)->base);
  return;
}
