// Name: core_vessel.cpp_CCryptVessel_FUN_005e9100
// Address: 005e9100
// Address Range: [[005e9100, 005e9137]]
// Convention: __cdecl
// Signature: int core_vessel.cpp_CCryptVessel_FUN_005e9100(CCryptVessel * this_ptr)

#include "nocturne.h"

int __cdecl core_vessel_cpp_CCryptVessel_FUN_005e9100(CCryptVessel *this_ptr)

{
  int iVar1;
  CDemonActor *in_stack_00000008;
  
  if (((*(int *)(this_ptr->field14_0x3c0 + 0x430) == 0) && (this_ptr->state == 0)) &&
     (iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(in_stack_00000008,"CHero"), iVar1 != 0)
     ) {
    return 4;
  }
  return 0;
}
