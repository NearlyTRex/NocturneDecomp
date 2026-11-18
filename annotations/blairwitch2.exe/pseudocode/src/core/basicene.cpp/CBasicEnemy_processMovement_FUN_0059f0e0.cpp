// Name: core_basicene.cpp_CBasicEnemy_processMovement_FUN_0059f0e0
// Address: 0059f0e0
// Address Range: [[0059f0e0, 0059f38e]]
// Convention: __cdecl
// Signature: void __cdecl core_basicene_cpp_CBasicEnemy_processMovement_FUN_0059f0e0(CBasicEnemy *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_basicene_cpp_CBasicEnemy_processMovement_FUN_0059f0e0(CBasicEnemy *this_ptr,float delta_time)

{
  CVector3f *pCVar1;
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
  if (&this_ptr->move_velocity != (CVector3f *)&stack0xffffff88) {
    (this_ptr->move_velocity).x = 0.0;
    (this_ptr->move_velocity).y = 0.0;
    (this_ptr->move_velocity).z = 0.0;
  }
  iVar4 = core_charactr_cpp_CCharacter_isOnGround_FUN_00424430((CCharacter *)this_ptr);
  if (iVar4 != 0) {
    fStack_60 = (this_ptr->base).base.velocity.x * delta_time;
    fStack_5c = (this_ptr->base).base.velocity.y * delta_time;
    fStack_58 = (this_ptr->base).base.velocity.z * delta_time;
    fStack_30 = fStack_60;
    *(uint *)((int)&stack0xffffffd4 + (uint)bVar5 * -8) =
         *(uint *)((int)&stack0xffffffa4 + (uint)bVar5 * -8);
    *(uint *)((int)&stack0xffffffd8 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         *(uint *)((int)&stack0xffffffa8 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    fStack_48 = fStack_30 + (this_ptr->base).base.position_delta.x;
    fStack_44 = fStack_2c + (this_ptr->base).base.position_delta.y;
    fStack_40 = fStack_28 + (this_ptr->base).base.position_delta.z;
    fStack_a8 = fStack_48;
    *(uint *)((int)&stack0xffffff5c + (uint)bVar5 * -8) =
         *(uint *)((int)&stack0xffffffbc + (uint)bVar5 * -8);
    *(uint *)((int)&stack0xffffff60 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         *(uint *)((int)&stack0xffffffc0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    fStack_54 = fStack_a8 + (this_ptr->base).base.model.accumulated_root_motion.x;
    fStack_50 = fStack_a4 + (this_ptr->base).base.model.accumulated_root_motion.y;
    fStack_4c = fStack_a0 + (this_ptr->base).base.model.accumulated_root_motion.z;
    fStack_3c = fStack_54;
    (&stack0xffffffc8)[(uint)bVar5 * 0xfffffffe] =
         (float)*(uint *)((int)&stack0xffffffb0 + (uint)bVar5 * -8);
    afStack_14[(uint)bVar5 * -2 + (uint)bVar5 * -2 + -8] =
         *(float *)((int)&stack0xffffffb4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    if (&this_ptr->move_velocity != (CVector3f *)&stack0xffffffc4) {
      (this_ptr->move_velocity).x = fStack_3c;
      (this_ptr->move_velocity).y = fStack_38;
      (this_ptr->move_velocity).z = fStack_34;
    }
    core_charactr_cpp_CCharacter_applyGravity_FUN_00423a10((CCharacter *)this_ptr,delta_time);
    fStack_84 = (this_ptr->base).base.velocity.x * delta_time;
    fStack_80 = (this_ptr->base).base.velocity.y * delta_time;
    fStack_7c = (this_ptr->base).base.velocity.z * delta_time;
    fStack_18 = fStack_84;
    afStack_14[(uint)bVar5 * -2] = *(float *)((int)&stack0xffffff80 + (uint)bVar5 * -8);
    afStack_14[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         *(float *)((int)&stack0xffffff84 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    pCVar1 = &(this_ptr->base).base.position_delta;
    fStack_9c = fStack_18 + pCVar1->x;
    fStack_98 = afStack_14[0] + (this_ptr->base).base.position_delta.y;
    fStack_94 = afStack_14[1] + (this_ptr->base).base.position_delta.z;
    fStack_90 = fStack_9c;
    *(uint *)((int)&stack0xffffff74 + (uint)bVar5 * -8) =
         *(uint *)((int)&stack0xffffff68 + (uint)bVar5 * -8);
    *(uint *)((int)&stack0xffffff78 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         *(uint *)((int)&stack0xffffff6c + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    pCVar2 = &(this_ptr->base).base.model.accumulated_root_motion;
    fStack_6c = fStack_90 + pCVar2->x;
    fStack_68 = fStack_8c + (this_ptr->base).base.model.accumulated_root_motion.y;
    fStack_64 = fStack_88 + (this_ptr->base).base.model.accumulated_root_motion.z;
    CStack_24.x = fStack_6c;
    *(float *)((int)&CStack_24 + (uint)bVar5 * -8 + 4) =
         (&stack0xffffff98)[(uint)bVar5 * 0xfffffffe];
    *(uint *)((int)&CStack_24 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
         *(uint *)((int)&stack0xffffff9c + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar1->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar2->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00423a60((CCharacter *)this_ptr,&CStack_24);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00424470((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
            (&(this_ptr->base).base.model);
  core_basicene_cpp_CBasicEnemy_applyFlinch_FUN_0059f390(this_ptr);
  if ((this_ptr->base).base.look_at_target == (CCharacter *)0x0) {
    pCVar3 = (this_ptr->base).victim;
    if (pCVar3 == (CCharacter *)0x0) {
      iVar4 = 1;
      (this_ptr->base).base.look_at_candidate = (CCharacter *)0x0;
    }
    else {
      (this_ptr->base).base.look_at_candidate = pCVar3;
      iVar4 = 0;
    }
  }
  else {
    iVar4 = 0;
  }
  core_charactr_cpp_CCharacter_findSomethingToLookAt_FUN_00429420
            ((CCharacter *)this_ptr,delta_time,iVar4);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90((CCharacter *)this_ptr,delta_time);
  return;
}
