// Name: core_turret.cpp_CTurret_FUN_005e34d0
// Address: 005e34d0
// Address Range: [[005e34d0, 005e3530]]
// Convention: __cdecl
// Signature: int core_turret.cpp_CTurret_FUN_005e34d0(CTurret * this_ptr)

#include "nocturne.h"

int __cdecl core_turret_cpp_CTurret_FUN_005e34d0(CTurret *this_ptr)

{
  COrientation *pCVar1;
  float *in_stack_00000008;
  int in_stack_0000000c;
  
  if (*(int *)(in_stack_0000000c + 0x10) == 0) {
    pCVar1 = &(this_ptr->base_weapon).base_actor.orient;
    if (pCVar1 != (COrientation *)in_stack_00000008) {
      pCVar1->pitch = *in_stack_00000008;
      (this_ptr->base_weapon).base_actor.orient.bank = in_stack_00000008[1];
      (this_ptr->base_weapon).base_actor.orient.heading = in_stack_00000008[2];
    }
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10((CDemonActor *)this_ptr);
    if (*(int *)(in_stack_0000000c + 0xc) != 0) {
      (*(((this_ptr->base_weapon).base_actor.vtable._uc)->_uc).cfunc4)();
    }
    return 1;
  }
  *(uint *)(in_stack_0000000c + 0x10) = 0;
  return 0;
}
