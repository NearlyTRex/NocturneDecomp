// Name: core_batman.cpp_CBatman_processDamage_FUN_00413f90
// Address: 00413f90
// Address Range: [[00413f90, 004141bc]]
// Convention: __cdecl
// Signature: void __cdecl core_batman_cpp_CBatman_processDamage_FUN_00413f90(CBatman *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_batman_cpp_CBatman_processDamage_FUN_00413f90(CBatman *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  SMotion *pSVar1;
  uint uVar2;
  byte bVar3;
  float afStackY_1048 [1011];
  CBatman *this_ptr_01;
  CVector3f *position;
  int iVar4;
  int flame_type;
  float fVar5;
  uint *puVar6;
  int include_hero;
  CVector3f CStack_60;
  uint uStack_54;
  float afStack_50 [5];
  float fStack_3c;
  CVector3f CStack_30;
  uint uStack_24;
  float afStack_20 [4];
  
  bVar3 = 0;
  sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->sfx_handles[2]);
  sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->sfx_handles[0]);
  if (*(int *)(damage_info + 0x28) == 7) {
    *(float *)(damage_info + 4) = *(float *)(damage_info + 4) * (float)_DAT_005d3b89;
    core_actor_cpp_FUN_00408b40(this_ptr,damage_info + 0x1c);
    iVar4 = 0;
    CStack_60.x = fStack_3c;
    *(float *)((int)&CStack_60 + (uint)bVar3 * -8 + 4) = afStack_50[(uint)bVar3 * -2 + 6];
    *(float *)((int)&CStack_60 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
         afStack_50[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 7];
    do {
      iVar4 = iVar4 + 1;
      core_fire_cpp_CFireEffect_createSpark_FUN_004b59e0
                (0x01C57074,&CStack_60,(CVector3f *)0x0,0x4000,0x4000,0,0xffff);
    } while (iVar4 < 5);
  }
  if (*(int *)(damage_info + 0x30) == 0x6c) {
    core_skeleton_cpp_FUN_00569130(&(this_ptr->base).base.model,0);
    puVar6 = &uStack_24;
    uStack_24 = uStack_54;
    afStack_20[(uint)bVar3 * -2] = afStack_50[(uint)bVar3 * -2];
    afStack_20[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
         afStack_50[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
    core_actor_cpp_FUN_00408b40(this_ptr,puVar6);
    include_hero = 0;
    fVar5 = 10.0;
    flame_type = 0;
    iVar4 = 0;
    position = &CStack_30;
    CStack_30.x = afStack_50[2];
    *(float *)((int)&CStack_30 + (uint)bVar3 * -8 + 4) = afStack_50[(uint)bVar3 * -2 + 3];
    this_ptr_01 = this_ptr;
    *(float *)((int)&CStack_30 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
         afStack_50[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4];
    core_charactr_cpp_CCharacter_igniteBone_FUN_004308a0
              ((CCharacter *)this_ptr_01,position,iVar4,flame_type,fVar5,include_hero);
  }
  core_batman_cpp_CBatman_processDismemberment_FUN_00413c40(this_ptr,damage_info);
  fVar5 = (this_ptr->base).base.hit_points - *(float *)(damage_info + 4);
  this_ptr_00 = &(this_ptr->base).base.model;
  (this_ptr->base).base.hit_points = fVar5;
  if (fVar5 <= 0.0) {
    (this_ptr->base).base.hit_points = 0.0;
    pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&this_ptr_00->base);
    if ((*(int *)(pSVar1 + 0x24) != 7) && (*(int *)(pSVar1 + 0x24) != 8)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&this_ptr_00->base,7,1);
      sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->sfx_handles[1]);
      uVar2 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"4@batman-die.wav" + 2);
      this_ptr->sfx_handles[1] = uVar2;
    }
  }
  else {
    iVar4 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,2);
    if (iVar4 == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&this_ptr_00->base,4,1);
    }
    if (iVar4 == 1) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                (&(this_ptr->base).base.model.base,5,1);
    }
    if (iVar4 == 2) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                (&(this_ptr->base).base.model.base,6,1);
    }
    iVar4 = sound_sndmain_cpp_FUN_005735a0(this_ptr->sfx_handles[1]);
    if (iVar4 == 0) {
      uVar2 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"batman-hurt?.wav");
      this_ptr->sfx_handles[1] = uVar2;
    }
  }
  core_enemy_cpp_CEnemy_processDamage_FUN_004a0f00(&this_ptr->base,damage_info);
  return;
}
