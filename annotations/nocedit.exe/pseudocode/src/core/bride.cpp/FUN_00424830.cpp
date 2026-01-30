// Name: core_bride.cpp_FUN_00424830
// Address: 00424830
// Address Range: [[00424830, 00424a0a]]
// Convention: __cdecl
// Signature: void __cdecl core_bride_cpp_FUN_00424830(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_bride.cpp_FUN_00424830(uint param_1, uint param_2)
    */

void __cdecl core_bride_cpp_FUN_00424830(void)

{
  CDeformableModelInstance *this_ptr;
  CVector3f *input_local_point;
  SMotion *pSVar1;
  int iVar2;
  uint uVar3;
  CCharacter *in_stack_00000004;
  int in_stack_00000008;
  int iVar4;
  char *sound_name;
  CVector3f local_3c;
  CVector3f local_30;
  CVector3f local_24;
  
  sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(in_stack_00000004[1].base.create_event + 0x4c));
  if (*(int *)(in_stack_00000008 + 0x28) == 7) {
    iVar2 = 0;
    *(float *)(in_stack_00000008 + 4) = *(float *)(in_stack_00000008 + 4) * (float)2;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (&in_stack_00000004->base,&local_3c,(CVector3f *)(in_stack_00000008 + 0x1c));
    do {
      iVar2 = iVar2 + 1;
      core_fire_cpp_CFireEffect_FUN_004c79d0(g_CFireEffectPtr);
    } while (iVar2 < 5);
  }
  if (*(int *)(in_stack_00000008 + 0x30) == 0x6c) {
    input_local_point =
         core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                   (&in_stack_00000004->model,&local_24,0);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (&in_stack_00000004->base,&local_30,input_local_point);
    core_charactr_cpp_CCharacter_FUN_0042b5b0(in_stack_00000004);
  }
  core_bride_cpp_FUN_00424600();
  iVar2 = *(int *)(in_stack_00000004[1].base.create_event + 0x40);
  in_stack_00000004->hit_points = in_stack_00000004->hit_points - *(float *)(in_stack_00000008 + 4);
  if ((in_stack_00000004->model).part_visibility_flags[iVar2] == 0) {
    in_stack_00000004->hit_points = 0.0;
  }
  this_ptr = &in_stack_00000004->model;
  if (0.0 < in_stack_00000004->hit_points) {
    iVar4 = 1;
    iVar2 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&this_ptr->motion_controller,(iVar2 == 0) + 7,iVar4);
    iVar2 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                      (*(uint *)(in_stack_00000004[1].base.create_event + 0x48));
    if (iVar2 != 0) goto LAB_00424955;
    sound_name = "ub-hurt?.wav";
  }
  else {
    in_stack_00000004->hit_points = 0.0;
    pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&this_ptr->motion_controller);
    if ((pSVar1->state_index == 0xe) || (pSVar1->state_index == 0xd)) goto LAB_00424955;
    iVar4 = 1;
    iVar2 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&this_ptr->motion_controller,(iVar2 == 0) + 0xb,iVar4);
    sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(in_stack_00000004[1].base.create_event + 0x48))
    ;
    sound_name = "ub-die?.wav";
  }
  uVar3 = (*((in_stack_00000004->base).vtable._ub)->playSound)(&in_stack_00000004->base,sound_name);
  *(uint *)(in_stack_00000004[1].base.create_event + 0x48) = uVar3;
LAB_00424955:
  core_enemy_cpp_FUN_004a9f10();
  return;
}
