// Name: core_werewolf.cpp_FUN_005f1ac0
// Address: 005f1ac0
// Address Range: [[005f1ac0, 005f1da4]]
// Convention: unknown
// Signature: undefined core_werewolf.cpp_FUN_005f1ac0()

#include "nocturne.h"

/* Signature: byte actors_enemy_werewolf.cpp_FUN_005f1ac0(uint param_1, uint
   param_2) */

void core_werewolf_cpp_FUN_005f1ac0(void)

{
  CDemonActor *this_ptr;
  float fVar1;
  CDemonActor *pCVar2;
  SMotion *pSVar3;
  uint uVar4;
  int iVar5;
  CDemonActor *in_stack_00000004;
  int in_stack_00000008;
  CVector3f local_28 [2];
  
  sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(in_stack_00000004[0x8e].actor_name + 8));
  if (*(int *)(in_stack_00000008 + 0x30) == 0x6c) {
    core_werewolf_cpp_FUN_005f11e0();
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              ((CMotionController *)(in_stack_00000004 + 1),0x16,1);
    core_enemy_cpp_FUN_004a9f10();
    return;
  }
  if (*(int *)(in_stack_00000008 + 0x28) == 3) {
    iVar5 = 0;
    *(float *)(in_stack_00000008 + 4) = *(float *)(in_stack_00000008 + 4) * (float)2;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (in_stack_00000004,local_28,(CVector3f *)(in_stack_00000008 + 0x1c));
    do {
      iVar5 = iVar5 + 1;
      core_fire_cpp_CFireEffect_FUN_004c79d0(g_CFireEffectPtr);
    } while (iVar5 < 5);
  }
  pCVar2 = (CDemonActor *)
           ((float)in_stack_00000004[0x1a].next_actor - *(float *)(in_stack_00000008 + 4));
  this_ptr = in_stack_00000004 + 1;
  in_stack_00000004[0x1a].next_actor = pCVar2;
  if ((float)pCVar2 <= 0.0) {
    in_stack_00000004[0x1a].next_actor = (CDemonActor *)0x0;
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       ((CMotionController *)this_ptr);
    if ((pSVar3->state_index != 0xd) && (pSVar3->state_index != 0xc)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                ((CMotionController *)this_ptr,0xc,1);
      if ((in_stack_00000004[0x8d].unk13 == 0) && (g_CDemonSetPtr->last_switch_area_invalid != 0)) {
        fVar1 = (in_stack_00000004->location).position.x;
        if (fVar1 <= (float)5) {
          if ((double)fVar1 < -5) {
            (in_stack_00000004->orient).bank = 1.5707964;
          }
        }
        else {
          (in_stack_00000004->orient).bank = -1.5707964;
        }
      }
      sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(in_stack_00000004[0x8e].actor_name + 0x10));
      uVar4 = (*((in_stack_00000004->vtable)._ub)->playSound)
                        (in_stack_00000004,"werewolf-die?.wav");
      *(uint *)(in_stack_00000004[0x8e].actor_name + 0x10) = uVar4;
      (*((in_stack_00000004->vtable)._ub)->spawnFlies)(in_stack_00000004,0x32,25.0);
    }
    goto LAB_005f1bc9;
  }
  if (in_stack_00000004[0x8d].unk13 != 2) {
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       ((CMotionController *)this_ptr);
    iVar5 = pSVar3->state_index;
    if ((iVar5 == 0xe) || (iVar5 == 0xf)) {
      iVar5 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,2);
      if (iVar5 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  ((CMotionController *)(in_stack_00000004 + 1),9,1);
      }
      if (iVar5 == 1) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  ((CMotionController *)(in_stack_00000004 + 1),10,1);
      }
      if (iVar5 == 2) {
        iVar5 = 0xb;
LAB_005f1cdd:
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  ((CMotionController *)(in_stack_00000004 + 1),iVar5,1);
      }
    }
    else if ((((iVar5 == 0) || (iVar5 == 1)) || (iVar5 == 2)) ||
            (((iVar5 == 0x13 || (iVar5 == 3)) || (iVar5 == 4)))) {
      iVar5 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,2);
      if (iVar5 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  ((CMotionController *)(in_stack_00000004 + 1),0x10,1);
      }
      if (iVar5 == 1) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  ((CMotionController *)(in_stack_00000004 + 1),0x11,1);
      }
      if (iVar5 == 2) {
        iVar5 = 0x12;
        goto LAB_005f1cdd;
      }
    }
  }
  iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                    (*(uint *)(in_stack_00000004[0x8e].actor_name + 0x10));
  if (iVar5 == 0) {
    uVar4 = (*((in_stack_00000004->vtable)._ub)->playSound)
                      (in_stack_00000004,"werewolf-hurt?.wav");
    *(uint *)(in_stack_00000004[0x8e].actor_name + 0x10) = uVar4;
    core_enemy_cpp_FUN_004a9f10();
    return;
  }
LAB_005f1bc9:
  core_enemy_cpp_FUN_004a9f10();
  return;
}
