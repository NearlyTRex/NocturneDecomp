// Name: core_hotdemon.cpp_CHotDemon_processDamage_FUN_004d5fd0
// Address: 004d5fd0
// Address Range: [[004d5fd0, 004d61b2]]
// Convention: __cdecl
// Signature: void __cdecl core_hotdemon_cpp_CHotDemon_processDamage_FUN_004d5fd0(CHotDemon *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_hotdemon_cpp_CHotDemon_processDamage_FUN_004d5fd0(CHotDemon *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  int iVar2;
  SMotion *pSVar3;
  uint uVar4;
  byte bVar5;
  float afStackY_1010 [1009];
  CVector3f CStack_28;
  float fStack_1c;
  uint auStack_18 [4];
  
  bVar5 = 0;
  sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&this_ptr->field_0xd054);
  if (*(int *)(damage_info + 0x28) == 8) {
    *(float *)(damage_info + 4) = *(float *)(damage_info + 4) * (float)_DAT_005c5421;
    core_actor_cpp_FUN_00408b80(this_ptr,damage_info + 0x1c);
    iVar2 = 0;
    CStack_28.x = fStack_1c;
    *(uint *)((int)&CStack_28 + (uint)bVar5 * -8 + 4) = auStack_18[(uint)bVar5 * -2];
    *(uint *)((int)&CStack_28 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
         auStack_18[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    do {
      iVar2 = iVar2 + 1;
      core_fire_cpp_CFireEffect_createSpark_FUN_004a23c0
                (0x01C73654,&CStack_28,(CVector3f *)0x0,0x4000,0x4000,0,0xffff);
    } while (iVar2 < 5);
  }
  fVar1 = (this_ptr->base).base.hit_points - *(float *)(damage_info + 4);
  this_ptr_00 = &(this_ptr->base).base.model;
  (this_ptr->base).base.hit_points = fVar1;
  if (fVar1 <= 0.0) {
    (this_ptr->base).base.hit_points = 0.0;
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&this_ptr_00->base);
    iVar2 = *(int *)(pSVar3 + 0x24);
    if ((((iVar2 != 4) && (iVar2 != 5)) && (iVar2 != 10)) && (iVar2 != 0xb)) {
      if (iVar2 < 6) {
        iVar2 = 4;
      }
      else {
        iVar2 = 10;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&this_ptr_00->base,iVar2,1);
      sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&this_ptr->field_0xd058);
      uVar4 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"hotdemon-die.wav");
      *(uint *)&this_ptr->field_0xd058 = uVar4;
      core_enemy_cpp_CEnemy_processDamage_FUN_00489b80(&this_ptr->base,damage_info);
      return;
    }
  }
  else {
    iVar2 = unkafter_enemy_cpp_FUN_0048a1b0(this_ptr,*(uint *)(damage_info + 4));
    if (iVar2 != 0) {
      pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&this_ptr_00->base);
      if ((*(int *)(pSVar3 + 0x24) < 6) || (*(int *)(pSVar3 + 0x24) == 0xf)) {
        iVar2 = 3;
      }
      else {
        iVar2 = 9;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                (&(this_ptr->base).base.model.base,iVar2,1);
    }
    iVar2 = sound_sndmain_cpp_FUN_00556700(*(uint *)&this_ptr->field_0xd058);
    if (iVar2 == 0) {
      uVar4 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"hotdemon-hurt?.wav");
      *(uint *)&this_ptr->field_0xd058 = uVar4;
      core_enemy_cpp_CEnemy_processDamage_FUN_00489b80(&this_ptr->base,damage_info);
      return;
    }
  }
  core_enemy_cpp_CEnemy_processDamage_FUN_00489b80(&this_ptr->base,damage_info);
  return;
}
