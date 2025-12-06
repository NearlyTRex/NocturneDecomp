// Name: core_gargoyle.cpp_CGargoyle_unk3_FUN_004e57d0
// Address: 004e57d0
// Address Range: [[004e57d0, 004e5923]]
// Convention: unknown
// Signature: undefined core_gargoyle.cpp_CGargoyle_unk3_FUN_004e57d0()

#include "nocturne.h"

/* Signature: byte actors_enemy_gargoyle.cpp_CGargoyle_unk3(uint param_1, uint
   param_2) */

void core_gargoyle_cpp_CGargoyle_unk3_FUN_004e57d0(void)

{
  CDeformableModelInstance *this_ptr;
  float fVar1;
  SMotion *pSVar2;
  uint uVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  CCharacter *in_stack_00000004;
  int in_stack_00000008;
  
  iVar4 = 0;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (&in_stack_00000004->base_actor,(CVector3f *)&stack0xffffffe4,
             (CVector3f *)(in_stack_00000008 + 0x1c));
  do {
    iVar4 = iVar4 + 1;
    core_fire_cpp_CFireEffect_FUN_004c79d0(g_CFireEffectPtr);
  } while (iVar4 < 3);
  this_ptr = &in_stack_00000004->model;
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&this_ptr->motion_controller);
  if (pSVar2->state_index != 5) {
    core_gargoyle_cpp_CGargoyle_unk4_FUN_004e5530();
    fVar1 = in_stack_00000004->hit_points - *(float *)(in_stack_00000008 + 4);
    in_stack_00000004->hit_points = fVar1;
    if (0.0 < fVar1) {
      iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                        (*(uint *)(in_stack_00000004[1].base_actor.create_event + 0x60));
      if (iVar4 == 0) {
        uVar3 = (*((in_stack_00000004->base_actor).vtable)->playSound)
                          (&in_stack_00000004->base_actor,"gargoyle-hurt?.wav");
        *(uint *)(in_stack_00000004[1].base_actor.create_event + 0x60) = uVar3;
        core_enemy_cpp_FUN_004a9f10();
        return;
      }
    }
    else {
      sound_sndmain_cpp_killSfx_FUN_005a9c40
                (*(uint *)(in_stack_00000004[1].base_actor.create_event + 0x60));
      in_stack_00000004->hit_points = 0.0;
      pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&this_ptr->motion_controller);
      if (pSVar2->state_index != 8) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&this_ptr->motion_controller,8,1);
        (*((in_stack_00000004->base_actor).vtable)->playSound)
                  (&in_stack_00000004->base_actor,"gargoyle-shatter.wav");
        core_charactr_cpp_CCharacter_FUN_0042b9e0(in_stack_00000004);
      }
    }
    core_enemy_cpp_FUN_004a9f10();
    return;
  }
  *(uint *)(in_stack_00000008 + 4) = 0;
  core_enemy_cpp_FUN_004a9f10();
  return;
}
