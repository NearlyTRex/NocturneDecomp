// Name: core_werewolf.cpp_FUN_005f1ac0
// Address: 005f1ac0
// Address Range: [[005f1ac0, 005f1da4]]
// Convention: __cdecl
// Signature: void __cdecl core_werewolf_cpp_FUN_005f1ac0(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_werewolf.cpp_FUN_005f1ac0(uint param_1, uint
   param_2) */

void __cdecl core_werewolf_cpp_FUN_005f1ac0(void)

{
  CDeformableModelInstance *this_ptr;
  float fVar1;
  SMotion *pSVar2;
  int iVar3;
  CEnemy *in_stack_00000004;
  SDamageInfo *in_stack_00000008;
  CVector3f local_28 [2];
  
  sound_sndmain_cpp_killSfx_FUN_005a9c40((uint)in_stack_00000004[1].base.base.location.position.y);
  if (in_stack_00000008->damage_type == 0x6c) {
    core_werewolf_cpp_FUN_005f11e0();
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(in_stack_00000004->base).model.motion_controller,0x16,1);
    core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(in_stack_00000004,in_stack_00000008);
    return;
  }
  if (in_stack_00000008->ammo_type == 3) {
    iVar3 = 0;
    in_stack_00000008->damage_amount = in_stack_00000008->damage_amount * (float)2;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)in_stack_00000004,local_28,&in_stack_00000008->impact_direction);
    do {
      iVar3 = iVar3 + 1;
      core_fire_cpp_CFireEffect_FUN_004c79d0(g_CFireEffectPtr);
    } while (iVar3 < 5);
  }
  fVar1 = (float)(in_stack_00000004->base).hit_points - in_stack_00000008->damage_amount;
  this_ptr = &(in_stack_00000004->base).model;
  (in_stack_00000004->base).hit_points = (int)fVar1;
  if (fVar1 <= 0.0) {
    (in_stack_00000004->base).hit_points = 0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&this_ptr->motion_controller);
    if ((pSVar2->state_index != 0xd) && (pSVar2->state_index != 0xc)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&this_ptr->motion_controller,0xc,1);
      if ((*(int *)(in_stack_00000004[1].base.base.actor_name + 8) == 0) &&
         (g_CDemonSetPtr->last_switch_area_invalid != 0)) {
        fVar1 = (in_stack_00000004->base).base.location.position.x;
        if (fVar1 <= (float)5) {
          if ((double)fVar1 < -5) {
            (in_stack_00000004->base).base.orient.bank = 1.5707964;
          }
        }
        else {
          (in_stack_00000004->base).base.orient.bank = -1.5707964;
        }
      }
      sound_sndmain_cpp_killSfx_FUN_005a9c40(in_stack_00000004[1].base.base.location.area_id);
      iVar3 = (*((in_stack_00000004->base).base.vtable._ub)->playSound)
                        ((CDemonActor *)in_stack_00000004,"werewolf-die?.wav");
      in_stack_00000004[1].base.base.location.area_id = iVar3;
      (*((in_stack_00000004->base).base.vtable._ub)->spawnFlies)
                ((CDemonActor *)in_stack_00000004,0x32,25.0);
    }
    goto LAB_005f1bc9;
  }
  if (*(int *)(in_stack_00000004[1].base.base.actor_name + 8) != 2) {
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&this_ptr->motion_controller);
    iVar3 = pSVar2->state_index;
    if ((iVar3 == 0xe) || (iVar3 == 0xf)) {
      iVar3 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,2);
      if (iVar3 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(in_stack_00000004->base).model.motion_controller,9,1);
      }
      if (iVar3 == 1) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(in_stack_00000004->base).model.motion_controller,10,1);
      }
      if (iVar3 == 2) {
        iVar3 = 0xb;
LAB_005f1cdd:
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(in_stack_00000004->base).model.motion_controller,iVar3,1);
      }
    }
    else if ((((iVar3 == 0) || (iVar3 == 1)) || (iVar3 == 2)) ||
            (((iVar3 == 0x13 || (iVar3 == 3)) || (iVar3 == 4)))) {
      iVar3 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,2);
      if (iVar3 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(in_stack_00000004->base).model.motion_controller,0x10,1);
      }
      if (iVar3 == 1) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(in_stack_00000004->base).model.motion_controller,0x11,1);
      }
      if (iVar3 == 2) {
        iVar3 = 0x12;
        goto LAB_005f1cdd;
      }
    }
  }
  iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                    (in_stack_00000004[1].base.base.location.area_id);
  if (iVar3 == 0) {
    iVar3 = (*((in_stack_00000004->base).base.vtable._ub)->playSound)
                      ((CDemonActor *)in_stack_00000004,"werewolf-hurt?.wav");
    in_stack_00000004[1].base.base.location.area_id = iVar3;
    core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(in_stack_00000004,in_stack_00000008);
    return;
  }
LAB_005f1bc9:
  core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(in_stack_00000004,in_stack_00000008);
  return;
}
