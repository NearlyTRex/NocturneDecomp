// Name: core_vampboss.cpp_CVampireBoss_FUN_005e75f0
// Address: 005e75f0
// Address Range: [[005e75f0, 005e764b]]
// Convention: __cdecl
// Signature: int core_vampboss.cpp_CVampireBoss_FUN_005e75f0(CVampireBoss * this_ptr)

#include "nocturne.h"

int __cdecl core_vampboss_cpp_CVampireBoss_FUN_005e75f0(CVampireBoss *this_ptr)

{
  int iVar1;
  SCollisionInfo *unaff_ESI;
  int *in_stack_00000008;
  
  if (*in_stack_00000008 != 2) {
    iVar1 = (*(this_ptr->base_enemy).base_character.base_actor.vtable[1].hasCollision)
                      ((CDemonActor *)this_ptr,unaff_ESI);
    if (iVar1 < 2) {
      if (((*in_stack_00000008 == 1) || (*in_stack_00000008 == 3)) && (this_ptr->form == 2)) {
        in_stack_00000008[8] = (int)(this_ptr->field1_0xbeb4 + 8);
        return 1;
      }
      iVar1 = core_charactr_cpp_CCharacter_FUN_0042bc20((CCharacter *)this_ptr);
      return iVar1;
    }
  }
  return 0;
}
