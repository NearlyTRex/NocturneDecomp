// Name: core_werewolf.cpp_CWerewolf_processDamage_FUN_0057f6f0
// Address: 0057f6f0
// Address Range: [[0057f6f0, 0057fa18]]
// Convention: __cdecl
// Signature: void __cdecl core_werewolf_cpp_CWerewolf_processDamage_FUN_0057f6f0(CWerewolf *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_werewolf_cpp_CWerewolf_processDamage_FUN_0057f6f0(CWerewolf *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  SMotion *pSVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  uint auStackY_1018 [1009];
  CVector3f CStack_24;
  
  bVar5 = 0;
  sound_sndmain_cpp_killSfx_FUN_00556be0(this_ptr->sfx_handle);
  if (*(int *)(damage_info + 0x30) == 0x6c) {
    core_werewolf_cpp_CWerewolf_playHowl_FUN_0057ee30(this_ptr);
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              (&(this_ptr->base).base.model.base,0x16,1);
    core_enemy_cpp_CEnemy_processDamage_FUN_00489b80(&this_ptr->base,damage_info);
    return;
  }
  if (*(int *)(damage_info + 0x28) == 3) {
    *(float *)(damage_info + 4) = *(float *)(damage_info + 4) * (float)_DAT_005d7bf3;
    core_actor_cpp_FUN_00408b80(this_ptr,damage_info + 0x1c);
    iVar4 = 0;
    *(uint *)((int)&CStack_24 + (uint)bVar5 * -8 + 4) =
         *(uint *)(&stack0xffffffd4 + (uint)bVar5 * -8);
    *(uint *)((int)&CStack_24 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
         *(uint *)(&stack0xffffffd8 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    do {
      iVar4 = iVar4 + 1;
      core_fire_cpp_CFireEffect_createSpark_FUN_004a23c0
                (0x01C73654,&CStack_24,(CVector3f *)0x0,0x4000,0x4000,0,0xffff);
    } while (iVar4 < 5);
  }
  fVar1 = (this_ptr->base).base.hit_points - *(float *)(damage_info + 4);
  this_ptr_00 = &(this_ptr->base).base.model;
  (this_ptr->base).base.hit_points = fVar1;
  if (fVar1 <= 0.0) {
    (this_ptr->base).base.hit_points = 0.0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&this_ptr_00->base);
    if ((*(int *)(pSVar2 + 0x24) != 0xd) && (*(int *)(pSVar2 + 0x24) != 0xc)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&this_ptr_00->base,0xc,1);
      if ((this_ptr->type == WEREWOLF_TYPE_TRAIN) && (g_CDemonSetPtr->last_switch_area_invalid != 0)
         ) {
        fVar1 = (this_ptr->base).base.base.location.position.x;
        if (fVar1 <= (float)_DAT_005d7bfb) {
          if ((double)fVar1 < _DAT_005d7c03) {
            (this_ptr->base).base.base.orient.vec.y = 1.5707964;
          }
        }
        else {
          (this_ptr->base).base.base.orient.vec.y = -1.5707964;
        }
      }
      sound_sndmain_cpp_killSfx_FUN_00556be0(this_ptr->sfx_handles[0]);
      uVar3 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"werewolf-die?.wav");
      this_ptr->sfx_handles[0] = uVar3;
      (*((this_ptr->base).base.base.vtable._ub)->spawnFlies)((CDemonActor *)this_ptr,0x32,25.0);
    }
    goto LAB_0057f813;
  }
  if (this_ptr->type != WEREWOLF_TYPE_FOREST) {
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&this_ptr_00->base);
    iVar4 = *(int *)(pSVar2 + 0x24);
    if ((iVar4 == 0xe) || (iVar4 == 0xf)) {
      iVar4 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2);
      if (iVar4 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  (&(this_ptr->base).base.model.base,9,1);
      }
      if (iVar4 == 1) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  (&(this_ptr->base).base.model.base,10,1);
      }
      if (iVar4 == 2) {
        iVar4 = 0xb;
LAB_0057f94b:
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  (&(this_ptr->base).base.model.base,iVar4,1);
      }
    }
    else if ((((iVar4 == 0) || (iVar4 == 1)) || (iVar4 == 2)) ||
            (((iVar4 == 0x13 || (iVar4 == 3)) || (iVar4 == 4)))) {
      iVar4 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2);
      if (iVar4 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  (&(this_ptr->base).base.model.base,0x10,1);
      }
      if (iVar4 == 1) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  (&(this_ptr->base).base.model.base,0x11,1);
      }
      if (iVar4 == 2) {
        iVar4 = 0x12;
        goto LAB_0057f94b;
      }
    }
  }
  iVar4 = sound_sndmain_cpp_FUN_00556700(this_ptr->sfx_handles[0]);
  if (iVar4 == 0) {
    uVar3 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)this_ptr,"werewolf-hurt?.wav");
    this_ptr->sfx_handles[0] = uVar3;
  }
LAB_0057f813:
  core_enemy_cpp_CEnemy_processDamage_FUN_00489b80(&this_ptr->base,damage_info);
  return;
}
