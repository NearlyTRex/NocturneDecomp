// Name: core_werewolf.cpp_CWerewolf_processDamage_FUN_0058d920
// Address: 0058d920
// Address Range: [[0058d920, 0058dc48]]
// Convention: __cdecl
// Signature: void __cdecl core_werewolf_cpp_CWerewolf_processDamage_FUN_0058d920(CWerewolf *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_werewolf_cpp_CWerewolf_processDamage_FUN_0058d920(CWerewolf *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  uint auStackY_1018 [1009];
  CVector3f CStack_24;
  
  bVar4 = 0;
  sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handle);
  if (damage_info->damage_type == DAMAGE_TYPE_BURN) {
    core_werewolf_cpp_CWerewolf_playHowl_FUN_0058d060(this_ptr);
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              (&(this_ptr->base).base.model.base,0x16,1);
    core_enemy_cpp_CEnemy_processDamage_FUN_00488890(&this_ptr->base,damage_info);
    return;
  }
  if (damage_info->ammo_type == AMMO_TYPE_SILVER) {
    damage_info->damage_amount = damage_info->damage_amount * (float)_DAT_005ee7fa;
    core_actor_cpp_FUN_00408d70(this_ptr,&damage_info->impact_direction);
    iVar2 = 0;
    *(uint *)((int)&CStack_24 + (uint)bVar4 * -8 + 4) =
         *(uint *)(&stack0xffffffd4 + (uint)bVar4 * -8);
    *(uint *)((int)&CStack_24 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         *(uint *)(&stack0xffffffd8 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    do {
      iVar2 = iVar2 + 1;
      core_fire_cpp_CFireEffect_createSpark_FUN_0049d090
                (0x01C3DEB4,&CStack_24,(CVector3f *)0x0,0x4000,0x4000,0,0xffff);
    } while (iVar2 < 5);
  }
  fVar1 = (this_ptr->base).base.hit_points - damage_info->damage_amount;
  this_ptr_00 = &(this_ptr->base).base.model;
  (this_ptr->base).base.hit_points = fVar1;
  if (fVar1 <= 0.0) {
    (this_ptr->base).base.hit_points = 0.0;
    iVar2 = core_motion_cpp_FUN_005035c0(this_ptr_00);
    if ((*(int *)(iVar2 + 0x24) != 0xd) && (*(int *)(iVar2 + 0x24) != 0xc)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr_00->base,0xc,1);
      if ((this_ptr->type == WEREWOLF_TYPE_TRAIN) && (g_CDemonSetPtr->last_switch_area_invalid != 0)
         ) {
        fVar1 = (this_ptr->base).base.base.location.position.x;
        if (fVar1 <= (float)_DAT_005ee802) {
          if ((double)fVar1 < _DAT_005ee80a) {
            (this_ptr->base).base.base.orient.vec.y = 1.5707964;
          }
        }
        else {
          (this_ptr->base).base.base.orient.vec.y = -1.5707964;
        }
      }
      sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handles[0]);
      uVar3 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"werewolf-die?.wav");
      this_ptr->sfx_handles[0] = uVar3;
      (*((this_ptr->base).base.base.vtable._ub)->spawnFlies)((CDemonActor *)this_ptr,0x32,25.0);
    }
    goto LAB_0058da43;
  }
  if (this_ptr->type != WEREWOLF_TYPE_FOREST) {
    iVar2 = core_motion_cpp_FUN_005035c0(this_ptr_00);
    iVar2 = *(int *)(iVar2 + 0x24);
    if ((iVar2 == 0xe) || (iVar2 == 0xf)) {
      iVar2 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,2);
      if (iVar2 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  (&(this_ptr->base).base.model.base,9,1);
      }
      if (iVar2 == 1) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  (&(this_ptr->base).base.model.base,10,1);
      }
      if (iVar2 == 2) {
        iVar2 = 0xb;
LAB_0058db7b:
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  (&(this_ptr->base).base.model.base,iVar2,1);
      }
    }
    else if ((((iVar2 == 0) || (iVar2 == 1)) || (iVar2 == 2)) ||
            (((iVar2 == 0x13 || (iVar2 == 3)) || (iVar2 == 4)))) {
      iVar2 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,2);
      if (iVar2 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  (&(this_ptr->base).base.model.base,0x10,1);
      }
      if (iVar2 == 1) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  (&(this_ptr->base).base.model.base,0x11,1);
      }
      if (iVar2 == 2) {
        iVar2 = 0x12;
        goto LAB_0058db7b;
      }
    }
  }
  iVar2 = sound_sndmain_cpp_FUN_00550b70(this_ptr->sfx_handles[0]);
  if (iVar2 == 0) {
    uVar3 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)this_ptr,"werewolf-hurt?.wav");
    this_ptr->sfx_handles[0] = uVar3;
  }
LAB_0058da43:
  core_enemy_cpp_CEnemy_processDamage_FUN_00488890(&this_ptr->base,damage_info);
  return;
}
