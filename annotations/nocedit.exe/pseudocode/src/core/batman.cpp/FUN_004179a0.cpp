// Name: core_batman.cpp_FUN_004179a0
// Address: 004179a0
// Address Range: [[004179a0, 00417bac]]
// Convention: __cdecl
// Signature: void __cdecl core_batman_cpp_FUN_004179a0(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_batman.cpp_FUN_004179a0(uint param_1, uint
   param_2) */

void __cdecl core_batman_cpp_FUN_004179a0(void)

{
  CDeformableModelInstance *this_ptr;
  float fVar1;
  CVector3f *input_local_point;
  int iVar2;
  SMotion *pSVar3;
  CDemonActor *pCVar4;
  CCharacter *in_stack_00000004;
  int in_stack_00000008;
  CVector3f local_3c;
  CVector3f local_30;
  CVector3f local_24;
  
  sound_sndmain_cpp_killSfx_FUN_005a9c40(in_stack_00000004[1].base.unk15);
  sound_sndmain_cpp_killSfx_FUN_005a9c40(in_stack_00000004[1].base.unk14);
  if (*(int *)(in_stack_00000008 + 0x28) == 7) {
    iVar2 = 0;
    *(float *)(in_stack_00000008 + 4) = *(float *)(in_stack_00000008 + 4) * (float)2;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (&in_stack_00000004->base,&local_30,(CVector3f *)(in_stack_00000008 + 0x1c));
    do {
      iVar2 = iVar2 + 1;
      core_fire_cpp_CFireEffect_FUN_004c79d0(g_CFireEffectPtr);
    } while (iVar2 < 5);
  }
  if (*(int *)(in_stack_00000008 + 0x30) == 0x6c) {
    input_local_point =
         core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                   (&in_stack_00000004->model,&local_3c,0);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (&in_stack_00000004->base,&local_24,input_local_point);
    core_charactr_cpp_CCharacter_FUN_0042b5b0(in_stack_00000004);
  }
  core_batman_cpp_FUN_00417660();
  fVar1 = in_stack_00000004->hit_points - *(float *)(in_stack_00000008 + 4);
  this_ptr = &in_stack_00000004->model;
  in_stack_00000004->hit_points = fVar1;
  if (fVar1 <= 0.0) {
    in_stack_00000004->hit_points = 0.0;
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&this_ptr->motion_controller);
    if ((pSVar3->state_index != 7) && (pSVar3->state_index != 8)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&this_ptr->motion_controller,7,1);
      sound_sndmain_cpp_killSfx_FUN_005a9c40((uint)in_stack_00000004[1].base.next_actor);
      pCVar4 = (CDemonActor *)
               (*((in_stack_00000004->base).vtable._ub)->playSound)
                         (&in_stack_00000004->base,"batman-die.wav");
      in_stack_00000004[1].base.next_actor = pCVar4;
      core_enemy_cpp_FUN_004a9f10();
      return;
    }
  }
  else {
    iVar2 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,2);
    if (iVar2 == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&this_ptr->motion_controller,4,1);
    }
    if (iVar2 == 1) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(in_stack_00000004->model).motion_controller,5,1);
    }
    if (iVar2 == 2) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(in_stack_00000004->model).motion_controller,6,1);
    }
    iVar2 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660((uint)in_stack_00000004[1].base.next_actor);
    if (iVar2 == 0) {
      pCVar4 = (CDemonActor *)
               (*((in_stack_00000004->base).vtable._ub)->playSound)
                         (&in_stack_00000004->base,"batman-hurt?.wav");
      in_stack_00000004[1].base.next_actor = pCVar4;
      core_enemy_cpp_FUN_004a9f10();
      return;
    }
  }
  core_enemy_cpp_FUN_004a9f10();
  return;
}
