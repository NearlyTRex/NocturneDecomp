// Name: core_gabriela.cpp_CGabriella_updateWeaponPosition_FUN_004b0210
// Address: 004b0210
// Address Range: [[004b0210, 004b05a6]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_updateWeaponPosition_FUN_004b0210(CGabriella *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gabriela_cpp_CGabriella_updateWeaponPosition_FUN_004b0210(CGabriella *this_ptr,float delta_time)

{
  CInventory *pCVar1;
  CWeapon *pCVar2;
  int iVar3;
  UOrientationVector *pUVar4;
  CMatrix3x4f *pCVar5;
  CMatrix3x4f *pCVar6;
  float *pfVar7;
  CMatrix3x4f *pCVar8;
  CMatrix3x4f *pCVar9;
  byte bVar10;
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
  uint local_80;
  float afStack_7c [5];
  float local_68;
  uint local_5c;
  float local_50;
  float local_44;
  float local_40;
  float local_3c;
  uint local_38;
  float local_2c;
  float local_28;
  float local_24;
  CInventory *local_18;
  CInventory *local_14;
  
  bVar10 = 0;
  core_charactr_cpp_CCharacter_updateCarriedObjects_FUN_00428e30((CCharacter *)this_ptr,delta_time);
  core_xform_cpp_FUN_00591c10
            (&local_380,&(this_ptr->base).base.base.location,&(this_ptr->base).base.base.orient);
  local_14 = (this_ptr->base).inventories;
  if (this_ptr->draw_blend < _DAT_005f7334) {
    (*(((((CCharacter *)local_14->selected_weapons[(this_ptr->base).inventories[0].current_group])->
        base).vtable._uc)->_uc).kill)
              ((CCharacter *)
               local_14->selected_weapons[(this_ptr->base).inventories[0].current_group],1,
               in_stack_fffffc20,in_stack_fffffc24);
    core_xform_cpp_FUN_00591c10();
    pCVar8 = &local_380;
    core_xform_cpp_multiplyMatrix3x4_FUN_005916b0
              (&local_200,
               (CMatrix3x4f *)
               (this_ptr->base).base.model.bone_transform.bone_model_matrices[_DAT_01cb06a0].m,
               &local_230);
    pCVar6 = &local_230;
    pCVar5 = &local_1d0;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      pCVar5->m[0].w = pCVar6->m[0].w;
      pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar10 * -2 + 1) * 4);
      pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar10 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_1d0,pCVar8,&local_e0);
    pCVar8 = &local_e0;
  }
  else {
    (*(((((CCharacter *)local_14->selected_weapons[(this_ptr->base).inventories[0].current_group])->
        base).vtable._uc)->_uc).kill)
              ((CCharacter *)
               local_14->selected_weapons[(this_ptr->base).inventories[0].current_group],2,
               in_stack_fffffc20,in_stack_fffffc24);
    core_xform_cpp_FUN_00591c10();
    matrix_b = (this_ptr->base).base.model.bone_transform.bone_model_matrices[_DAT_01cb06bc].m;
    pCVar8 = &local_170;
    core_xform_cpp_buildRotationX_FUN_00593240(1.5707964,&local_140);
    pCVar6 = &local_2c0;
    pCVar5 = &local_140;
    pCVar9 = &local_2c0;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      pCVar9->m[0].w = pCVar5->m[0].w;
      pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar10 * -2 + 1) * 4);
      pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar10 * -2 + 1) * 4);
    }
    core_xform_cpp_buildRotationY_FUN_005932c0(1.5707964,&local_b0);
    pCVar5 = &local_b0;
    pCVar9 = &local_2f0;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      pCVar9->m[0].w = pCVar5->m[0].w;
      pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar10 * -2 + 1) * 4);
      pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar10 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_2f0,pCVar6,&local_1a0);
    pCVar6 = &local_1a0;
    pCVar5 = &local_290;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      pCVar5->m[0].w = pCVar6->m[0].w;
      pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar10 * -2 + 1) * 4);
      pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar10 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_290,pCVar8,(CMatrix3x4f *)&stack0xfffffc20)
    ;
    pfVar7 = (float *)&stack0xfffffc20;
    pCVar8 = &local_260;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      pCVar8->m[0].w = *pfVar7;
      pfVar7 = pfVar7 + (uint)bVar10 * -2 + 1;
      pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar10 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_260,(CMatrix3x4f *)matrix_b,&local_3b0);
    pCVar1 = local_14;
    pCVar8 = &local_3b0;
    pCVar6 = &local_320;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      pCVar6->m[0].w = pCVar8->m[0].w;
      pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar10 * -2 + 1) * 4);
      pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar10 * -2 + 1) * 4);
    }
    iVar3 = core_actor_cpp_isOfClass_FUN_0040c840
                      (&local_14->selected_weapons[pCVar1->current_group]->base,
                       "?CCrossbow" + 1);
    if (iVar3 != 0) {
      core_xform_cpp_FUN_00592720();
      local_38 = afStack_7c[2];
      afStack_7c[(uint)bVar10 * -2 + 0x12] = afStack_7c[(uint)bVar10 * -2 + 3];
      afStack_7c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x13] =
           afStack_7c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
      core_xform_cpp_matrixToEulerAngles_FUN_00591de0();
      local_80 = local_5c;
      afStack_7c[(uint)bVar10 * -2] = afStack_7c[(uint)bVar10 * -2 + 9];
      afStack_7c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
           afStack_7c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10];
      afStack_7c[1] = (1.0 - this_ptr->aim_weight) * afStack_7c[1];
      core_xform_cpp_FUN_00591c10();
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_320,&local_380,&local_110);
    pCVar8 = &local_110;
  }
  pfVar7 = local_350;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar7 = pCVar8->m[0].w;
    pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar10 * -2 + 1) * 4);
    pfVar7 = pfVar7 + (uint)bVar10 * -2 + 1;
  }
  core_xform_cpp_FUN_00592720();
  pCVar1 = (this_ptr->base).inventories;
  local_2c = local_50;
  afStack_7c[(uint)bVar10 * -2 + 0x15] = afStack_7c[(uint)bVar10 * -2 + 0xc];
  afStack_7c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x16] =
       afStack_7c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd];
  pCVar2 = pCVar1->selected_weapons[(this_ptr->base).inventories[0].current_group];
  (pCVar2->base).location.position.x = local_2c;
  (pCVar2->base).location.position.y = local_28;
  (pCVar2->base).location.position.z = local_24;
  local_18 = pCVar1;
  core_xform_cpp_matrixToEulerAngles_FUN_00591de0();
  pCVar1 = local_18;
  local_44 = local_68;
  afStack_7c[(uint)bVar10 * -2 + 0xf] = afStack_7c[(uint)bVar10 * -2 + 6];
  afStack_7c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10] =
       afStack_7c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
  pCVar2 = local_18->selected_weapons[pCVar1->current_group];
  pUVar4 = &(pCVar2->base).orient;
  if (pUVar4 != (UOrientationVector *)(afStack_7c + 0xe)) {
    (pUVar4->vec).x = local_44;
    (pCVar2->base).orient.vec.y = local_40;
    (pCVar2->base).orient.vec.z = local_3c;
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0
            (&(this_ptr->base).inventories[0].selected_weapons
              [(this_ptr->base).inventories[0].current_group]->base);
  return;
}
