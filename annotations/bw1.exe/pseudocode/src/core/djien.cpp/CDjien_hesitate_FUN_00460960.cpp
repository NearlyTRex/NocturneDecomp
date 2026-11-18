// Name: core_djien.cpp_CDjien_hesitate_FUN_00460960
// Address: 00460960
// Address Range: [[00460960, 004609b0]]
// Convention: __cdecl
// Signature: void __cdecl core_djien_cpp_CDjien_hesitate_FUN_00460960(CDjien *this_ptr)

#include "nocturne.h"

void __cdecl core_djien_cpp_CDjien_hesitate_FUN_00460960(CDjien *this_ptr)

{
  int iVar1;
  
  this_ptr->walk_target = 0;
  (this_ptr->base).victim = (CCharacter *)0x0;
  iVar1 = core_actor_cpp_randomChance_FUN_0040cd00(0.4);
  if (iVar1 == 0) {
    this_ptr->state_timer = 0.0;
  }
  else {
    this_ptr->state_timer = 3.0;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
            (&(this_ptr->base).base.model.base,0,1);
  return;
}
