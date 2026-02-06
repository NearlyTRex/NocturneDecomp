// Name: core_svetlana.cpp_FUN_005d9d30
// Address: 005d9d30
// Address Range: [[005d9d30, 005d9eba]]
// Convention: __cdecl
// Signature: void __cdecl core_svetlana_cpp_FUN_005d9d30(void)

#include "nocturne.h"

/* Signature: byte actors_hero_svetlana.cpp_FUN_005d9d30(uint param_1, uint
   param_2) */

void __cdecl core_svetlana_cpp_FUN_005d9d30(void)

{
  CDeformableModelInstance *this_ptr;
  float fVar1;
  SMotion *pSVar2;
  uint uVar3;
  CCharacter *in_stack_00000004;
  SDamageInfo *in_stack_00000008;
  int iVar4;
  
  if ((*(uint *)in_stack_00000004[1].base.actor_name & 0x7fffffff) != 0) {
    in_stack_00000008->damage_amount = 0.0;
  }
  if (g_CGamePtr->debug_flag_1 != 0) {
    in_stack_00000008->damage_amount = 0.0;
  }
  if (g_CGamePtr->allow_damage_flag == 0) {
    in_stack_00000008->damage_amount = 0.0;
  }
  *(float *)in_stack_00000004[1].base.actor_name = 3.0f;
  fVar1 = in_stack_00000004->hit_points - in_stack_00000008->damage_amount;
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
        core_gore_cpp_CGore_FUN_004ee030(g_CGorePtr,&in_stack_00000004->base);
        sound_sndmain_cpp_killSfx_FUN_005a9c40
                  (*(uint *)(in_stack_00000004[0xd].field66_0x33cc[0xb].base.actor_name + 0x10));
        uVar3 = (*((in_stack_00000004->base).vtable._ub)->playSound)
                          (&in_stack_00000004->base,"svet-die.wav");
        *(uint *)(in_stack_00000004[0xd].field66_0x33cc[0xb].base.actor_name + 0x10) = uVar3;
        core_charactr_cpp_CCharacter_processDamage_FUN_0042c3c0(in_stack_00000004,in_stack_00000008)
        ;
        return;
      }
    }
  }
  else if (0.0 < in_stack_00000008->damage_amount) {
    if (*(int *)(in_stack_00000004[2].field66_0x33cc[0x1c].on_event + 0x18) == 0) {
      iVar4 = 4;
    }
    else {
      iVar4 = 0xb;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&this_ptr->motion_controller,iVar4,1);
    iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                      (*(uint *)(in_stack_00000004[0xd].field66_0x33cc[0xb].base.actor_name + 0x10))
    ;
    if (iVar4 == 0) {
      uVar3 = (*((in_stack_00000004->base).vtable._ub)->playSound)
                        (&in_stack_00000004->base,"svet-hurt?.wav");
      *(uint *)(in_stack_00000004[0xd].field66_0x33cc[0xb].base.actor_name + 0x10) = uVar3;
      core_charactr_cpp_CCharacter_processDamage_FUN_0042c3c0(in_stack_00000004,in_stack_00000008);
      return;
    }
  }
  core_charactr_cpp_CCharacter_processDamage_FUN_0042c3c0(in_stack_00000004,in_stack_00000008);
  return;
}
