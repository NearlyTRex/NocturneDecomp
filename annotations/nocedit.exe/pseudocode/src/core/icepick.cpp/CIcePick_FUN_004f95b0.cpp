// Name: core_icepick.cpp_CIcePick_FUN_004f95b0
// Address: 004f95b0
// Address Range: [[004f95b0, 004f975d]]
// Convention: unknown
// Signature: undefined core_icepick.cpp_CIcePick_FUN_004f95b0()

#include "nocturne.h"

/* Signature: byte actors_hero_icepick.cpp_CIcePick_FUN_004f95b0(CIcePick* param_1, uint
   param_2) */

void core_icepick_cpp_CIcePick_FUN_004f95b0(void)

{
  CDeformableModelInstance *this_ptr;
  float fVar1;
  SMotion *pSVar2;
  uint uVar3;
  CCharacter *in_stack_00000004;
  int in_stack_00000008;
  int iVar4;
  
  sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(in_stack_00000004[2].cloth_data + 0x54fc));
  if ((*(uint *)in_stack_00000004[1].base_actor.actor_name & 0x7fffffff) != 0) {
    *(uint *)(in_stack_00000008 + 4) = 0;
  }
  if (g_CGamePtr->field53_0x1d0 != 0) {
    *(uint *)(in_stack_00000008 + 4) = 0;
  }
  if (g_CGamePtr->allow_damage_flag == 0) {
    *(uint *)(in_stack_00000008 + 4) = 0;
  }
  *(float *)in_stack_00000004[1].base_actor.actor_name = 3.0f;
  fVar1 = in_stack_00000004->hit_points - *(float *)(in_stack_00000008 + 4);
  this_ptr = &in_stack_00000004->model;
  in_stack_00000004->hit_points = fVar1;
  if (fVar1 <= 0.0) {
    in_stack_00000004->hit_points = 0.0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&this_ptr->motion_controller);
    if (pSVar2->state_index != 9) {
      pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&this_ptr->motion_controller);
      if (pSVar2->state_index != 8) {
        in_stack_00000004->grabbed_by = (CDemonActor *)0x0;
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&this_ptr->motion_controller,8,1);
        (*(((in_stack_00000004->base_actor).vtable._uc)->_uc).cfunc21)();
        core_gore_cpp_CGore_FUN_004ee030(g_CGorePtr,&in_stack_00000004->base_actor);
        sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(in_stack_00000004[2].cloth_data + 0x5500));
        (*((in_stack_00000004->base_actor).vtable._ub)->playSound)
                  (&in_stack_00000004->base_actor,"icepick_die01.wav");
        core_charactr_cpp_CCharacter_FUN_0042c3c0(in_stack_00000004);
        return;
      }
    }
  }
  else if (0.0 < *(float *)(in_stack_00000008 + 4)) {
    if (*(int *)(in_stack_00000004[2].cloth_data + 0x54f4) == 0) {
      iVar4 = 4;
    }
    else {
      iVar4 = 0xb;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&this_ptr->motion_controller,iVar4,1);
    iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                      (*(uint *)(in_stack_00000004[2].cloth_data + 0x5500));
    if (iVar4 == 0) {
      uVar3 = (*((in_stack_00000004->base_actor).vtable._ub)->playSound)
                        (&in_stack_00000004->base_actor,"icepick_injured??.wav");
      *(uint *)(in_stack_00000004[2].cloth_data + 0x5500) = uVar3;
      core_charactr_cpp_CCharacter_FUN_0042c3c0(in_stack_00000004);
      return;
    }
  }
  core_charactr_cpp_CCharacter_FUN_0042c3c0(in_stack_00000004);
  return;
}
