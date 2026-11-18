// Name: core_gabriela.cpp_CGabriella_updateWeaponPosition_FUN_004b0210
// Address: 004b0210
// Address Range: [[004b0210, 004b05a6]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_updateWeaponPosition_FUN_004b0210(CGabriella *this_ptr,float delta_time)

#include "nocturne.h"

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
  float afStackY_1068 [21];
  CInventory *apCStackY_1014 [778];
  CVector3f *in_stack_fffffc20;
  float in_stack_fffffc24;
  CQuaternion4f *matrix_b;
  CVector3f *in_stack_fffffc30;
  CMatrix3x4f local_3b0;
  CMatrix3x4f local_380;
  CMatrix3x4f local_350;
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
  CVector3f local_80;
  CVector3f local_74;
  float local_68;
  float afStack_64 [5];
  CVector3f local_50;
  float local_44;
  float local_40 [2];
  CVector3f local_38;
  float local_2c;
  float local_28;
  CInventory *local_24 [4];
  CInventory *local_14;
  
  bVar10 = 0;
  core_charactr_cpp_CCharacter_updateCarriedObjects_FUN_00428e30((CCharacter *)this_ptr,delta_time);
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
            (&local_380,&(this_ptr->base).base.base.location.position,
             &(this_ptr->base).base.base.orient.vec);
  local_14 = (this_ptr->base).inventories;
  if (this_ptr->draw_blend < 0.64f) {
    (*(((((CCharacter *)local_14->selected_weapons[(this_ptr->base).inventories[0].current_group])->
        base).vtable._uc)->_uc).kill)
              ((CCharacter *)
               local_14->selected_weapons[(this_ptr->base).inventories[0].current_group],1,
               in_stack_fffffc20,in_stack_fffffc24);
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
              (&local_200,&g_GabriellaWeaponAttachEuler.f,&g_GabriellaWeaponAttachOffset.f);
    pCVar8 = &local_380;
    core_xform_cpp_multiplyMatrix3x4_FUN_005916b0
              (&local_200,
               (CMatrix3x4f *)
               (this_ptr->base).base.model.bone_transform.bone_model_matrices
               [g_GabriellaIndices[10]].m,&local_230);
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
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
              (&local_170,&g_GabriellaWeaponEuler.f,&g_ZeroVector);
    matrix_b = (this_ptr->base).base.model.bone_transform.bone_model_matrices
               [g_GabriellaIndices[0x11]].m;
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
                      (&local_14->selected_weapons[pCVar1->current_group]->base,"CCrossbow"
                      );
    if (iVar3 != 0) {
      core_xform_cpp_getTranslation_FUN_00592720(&local_320,&local_74);
      local_38.x = local_74.x;
      *(uint *)((int)&local_38 + (uint)bVar10 * -8 + 4) =
           *(uint *)((int)&local_74 + (uint)bVar10 * -8 + 4);
      *(uint *)((int)&local_38 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
           *(uint *)((int)&local_74 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      core_xform_cpp_matrixToEulerAngles_FUN_00591de0(&local_320,in_stack_fffffc30);
      local_80.x = afStack_64[2];
      *(float *)((int)&local_80 + (uint)bVar10 * -8 + 4) = afStack_64[(uint)bVar10 * -2 + 3];
      *(float *)((int)&local_80 + ((uint)bVar10 * -2 + (uint)bVar10 * -2) * 4 + 8) =
           afStack_64[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
      local_80.z = (1.0 - this_ptr->aim_weight) * local_80.z;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
                (&local_320,&local_38,&local_80);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_320,&local_380,&local_110);
    pCVar8 = &local_110;
  }
  pCVar6 = &local_350;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    pCVar6->m[0].w = pCVar8->m[0].w;
    pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar10 * -2 + 1) * 4);
    pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar10 * -2 + 1) * 4);
  }
  core_xform_cpp_getTranslation_FUN_00592720(&local_350,&local_50);
  pCVar1 = (this_ptr->base).inventories;
  local_2c = local_50.x;
  local_24[(uint)bVar10 * -2 + -1] = *(CInventory **)((int)&local_50 + (uint)bVar10 * -8 + 4);
  local_24[(uint)bVar10 * -2 + (uint)bVar10 * -2] =
       *(CInventory **)((int)&local_50 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
  pCVar2 = pCVar1->selected_weapons[(this_ptr->base).inventories[0].current_group];
  (pCVar2->base).location.position.x = local_2c;
  (pCVar2->base).location.position.y = local_28;
  (pCVar2->base).location.position.z = (float)local_24[0];
  local_24[3] = pCVar1;
  core_xform_cpp_matrixToEulerAngles_FUN_00591de0(&local_350,in_stack_fffffc30);
  pCVar1 = local_24[3];
  local_44 = local_68;
  local_40[(uint)bVar10 * -2] = afStack_64[(uint)bVar10 * -2];
  local_40[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
       afStack_64[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
  pCVar2 = local_24[3]->selected_weapons[pCVar1->current_group];
  pUVar4 = &(pCVar2->base).orient;
  if (pUVar4 != (UOrientationVector *)&local_44) {
    (pUVar4->vec).x = local_44;
    (pCVar2->base).orient.vec.y = local_40[0];
    (pCVar2->base).orient.vec.z = local_40[1];
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0
            (&(this_ptr->base).inventories[0].selected_weapons
              [(this_ptr->base).inventories[0].current_group]->base);
  return;
}
