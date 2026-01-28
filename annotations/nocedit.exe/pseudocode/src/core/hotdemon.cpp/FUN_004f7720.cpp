// Name: core_hotdemon.cpp_FUN_004f7720
// Address: 004f7720
// Address Range: [[004f7720, 004f78e0]]
// Convention: unknown
// Signature: void core_hotdemon_cpp_FUN_004f7720(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_hotdemon.cpp_FUN_004f7720(uint param_1, uint
   param_2) */

void core_hotdemon_cpp_FUN_004f7720(void)

{
  CDemonActor *this_ptr;
  CDemonActor *pCVar1;
  SMotion *pSVar2;
  CDemonActor *in_stack_00000004;
  float in_stack_00000008;
  int iVar3;
  CVector3f local_24;
  
  sound_sndmain_cpp_killSfx_FUN_005a9c40(in_stack_00000004[0x8d].unk13);
  if (*(int *)((int)in_stack_00000008 + 0x28) == 8) {
    iVar3 = 0;
    *(float *)((int)in_stack_00000008 + 4) =
         *(float *)((int)in_stack_00000008 + 4) * (float)2;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (in_stack_00000004,&local_24,(CVector3f *)((int)in_stack_00000008 + 0x1c));
    do {
      iVar3 = iVar3 + 1;
      core_fire_cpp_CFireEffect_FUN_004c79d0(g_CFireEffectPtr);
    } while (iVar3 < 5);
  }
  pCVar1 = (CDemonActor *)
           ((float)in_stack_00000004[0x1a].next_actor - *(float *)((int)in_stack_00000008 + 4));
  this_ptr = in_stack_00000004 + 1;
  in_stack_00000004[0x1a].next_actor = pCVar1;
  if ((float)pCVar1 <= 0.0) {
    in_stack_00000004[0x1a].next_actor = (CDemonActor *)0x0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       ((CMotionController *)this_ptr);
    iVar3 = pSVar2->state_index;
    if ((((iVar3 != 4) && (iVar3 != 5)) && (iVar3 != 10)) && (iVar3 != 0xb)) {
      if (iVar3 < 6) {
        iVar3 = 4;
      }
      else {
        iVar3 = 10;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                ((CMotionController *)this_ptr,iVar3,1);
      sound_sndmain_cpp_killSfx_FUN_005a9c40(in_stack_00000004[0x8d].unk14);
      iVar3 = (*((in_stack_00000004->vtable)._ub)->playSound)
                        (in_stack_00000004,"hotdemon-die.wav");
      in_stack_00000004[0x8d].unk14 = iVar3;
      local_24.y = in_stack_00000008;
      local_24.x = (float)in_stack_00000004;
      core_enemy_cpp_FUN_004a9f10();
      return;
    }
  }
  else {
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       ((CMotionController *)this_ptr);
    if ((pSVar2->state_index < 6) || (pSVar2->state_index == 0xf)) {
      iVar3 = 3;
    }
    else {
      iVar3 = 9;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              ((CMotionController *)(in_stack_00000004 + 1),iVar3,1);
    iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(in_stack_00000004[0x8d].unk14);
    if (iVar3 == 0) {
      iVar3 = (*((in_stack_00000004->vtable)._ub)->playSound)
                        (in_stack_00000004,"hotdemon-hurt?.wav");
      in_stack_00000004[0x8d].unk14 = iVar3;
      local_24.y = in_stack_00000008;
      local_24.x = (float)in_stack_00000004;
      core_enemy_cpp_FUN_004a9f10();
      return;
    }
  }
  core_enemy_cpp_FUN_004a9f10();
  return;
}
