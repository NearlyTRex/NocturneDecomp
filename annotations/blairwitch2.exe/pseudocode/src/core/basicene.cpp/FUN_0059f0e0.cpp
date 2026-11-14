// Name: core_basicene.cpp_FUN_0059f0e0
// Address: 0059f0e0
// Address Range: [[0059f0e0, 0059f38e]]
// Convention: unknown
// Signature: void core_basicene_cpp_FUN_0059f0e0(CCharacter *param_1,float param_2)

#include "nocturne.h"

void core_basicene_cpp_FUN_0059f0e0(CCharacter *param_1,float param_2)

{
  float *pfVar1;
  CVector3f *pCVar2;
  CCharacter *pCVar3;
  int iVar4;
  byte bVar5;
  float afStackY_1090 [1015];
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  CVector3f CStack_24;
  float fStack_18;
  float afStack_14 [2];
  
  bVar5 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  pfVar1 = param_1[1].model.rest_bone_scales + 0x4b;
  if (pfVar1 != (float *)&stack0xffffff88) {
    *pfVar1 = 0.0;
    param_1[1].model.rest_bone_scales[0x4c] = 0.0;
    param_1[1].model.rest_bone_scales[0x4d] = 0.0;
  }
  iVar4 = core_charactr_cpp_CCharacter_isOnGround_FUN_00424430(param_1);
  if (iVar4 != 0) {
    fStack_60 = (param_1->velocity).x * param_2;
    fStack_5c = (param_1->velocity).y * param_2;
    fStack_58 = (param_1->velocity).z * param_2;
    fStack_30 = fStack_60;
    *(uint *)((int)&stack0xffffffd4 + (uint)bVar5 * -8) =
         *(uint *)((int)&stack0xffffffa4 + (uint)bVar5 * -8);
    *(uint *)((int)&stack0xffffffd8 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         *(uint *)((int)&stack0xffffffa8 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    fStack_48 = fStack_30 + (param_1->position_delta).x;
    fStack_44 = fStack_2c + (param_1->position_delta).y;
    fStack_40 = fStack_28 + (param_1->position_delta).z;
    fStack_a8 = fStack_48;
    *(uint *)((int)&stack0xffffff5c + (uint)bVar5 * -8) =
         *(uint *)((int)&stack0xffffffbc + (uint)bVar5 * -8);
    *(uint *)((int)&stack0xffffff60 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         *(uint *)((int)&stack0xffffffc0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    fStack_54 = fStack_a8 + (param_1->model).accumulated_root_motion.x;
    fStack_50 = fStack_a4 + (param_1->model).accumulated_root_motion.y;
    fStack_4c = fStack_a0 + (param_1->model).accumulated_root_motion.z;
    pfVar1 = param_1[1].model.rest_bone_scales + 0x4b;
    fStack_3c = fStack_54;
    *(uint *)((int)&stack0xffffffc8 + (uint)bVar5 * -8) =
         *(uint *)((int)&stack0xffffffb0 + (uint)bVar5 * -8);
    *(uint *)((int)&stack0xffffffcc + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         *(uint *)((int)&stack0xffffffb4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    if (pfVar1 != &stack0xffffffc4) {
      *pfVar1 = fStack_3c;
      param_1[1].model.rest_bone_scales[0x4c] = fStack_38;
      param_1[1].model.rest_bone_scales[0x4d] = fStack_34;
    }
    core_charactr_cpp_FUN_00423a10(param_1,param_2);
    fStack_84 = (param_1->velocity).x * param_2;
    fStack_80 = (param_1->velocity).y * param_2;
    fStack_7c = (param_1->velocity).z * param_2;
    fStack_18 = fStack_84;
    afStack_14[(uint)bVar5 * -2] = *(float *)((int)&stack0xffffff80 + (uint)bVar5 * -8);
    afStack_14[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         *(float *)((int)&stack0xffffff84 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    fStack_9c = fStack_18 + (param_1->position_delta).x;
    fStack_98 = afStack_14[0] + (param_1->position_delta).y;
    fStack_94 = afStack_14[1] + (param_1->position_delta).z;
    fStack_90 = fStack_9c;
    *(uint *)((int)&stack0xffffff74 + (uint)bVar5 * -8) =
         *(uint *)((int)&stack0xffffff68 + (uint)bVar5 * -8);
    *(uint *)((int)&stack0xffffff78 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         *(uint *)((int)&stack0xffffff6c + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    pCVar2 = &(param_1->model).accumulated_root_motion;
    fStack_6c = fStack_90 + pCVar2->x;
    fStack_68 = fStack_8c + (param_1->model).accumulated_root_motion.y;
    fStack_64 = fStack_88 + (param_1->model).accumulated_root_motion.z;
    CStack_24.x = fStack_6c;
    *(uint *)((int)&CStack_24 + (uint)bVar5 * -8 + 4) =
         *(uint *)((int)&stack0xffffff98 + (uint)bVar5 * -8);
    *(uint *)((int)&CStack_24 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
         *(uint *)((int)&stack0xffffff9c + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    (param_1->position_delta).z = 0.0;
    (param_1->position_delta).y = (param_1->position_delta).z;
    (param_1->position_delta).x = (param_1->position_delta).y;
    (param_1->model).accumulated_root_motion.z = 0.0;
    (param_1->model).accumulated_root_motion.y = (param_1->model).accumulated_root_motion.z;
    pCVar2->x = (param_1->model).accumulated_root_motion.y;
    core_charactr_cpp_FUN_00423a60(param_1,&CStack_24);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00424470(param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(&param_1->model);
  core_basicene_cpp_FUN_0059f390(param_1);
  if (param_1->look_at_target == (CCharacter *)0x0) {
    pCVar3 = *(CCharacter **)(param_1[1].base.actor_name + 0x18);
    if (pCVar3 == (CCharacter *)0x0) {
      iVar4 = 1;
      param_1->look_at_candidate = (CCharacter *)0x0;
    }
    else {
      param_1->look_at_candidate = pCVar3;
      iVar4 = 0;
    }
  }
  else {
    iVar4 = 0;
  }
  core_charactr_cpp_CCharacter_findSomethingToLookAt_FUN_00429420(param_1,param_2,iVar4);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90(param_1,param_2);
  return;
}
