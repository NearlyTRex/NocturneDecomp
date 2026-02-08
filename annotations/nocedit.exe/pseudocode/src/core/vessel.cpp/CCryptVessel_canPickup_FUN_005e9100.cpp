// Name: core_vessel.cpp_CCryptVessel_canPickup_FUN_005e9100
// Address: 005e9100
// Address Range: [[005e9100, 005e9137]]
// Convention: __cdecl
// Signature: int __cdecl core_vessel_cpp_CCryptVessel_canPickup_FUN_005e9100(CCryptVessel *this_ptr,CDemonActor *picker)

#include "nocturne.h"

int __cdecl
core_vessel_cpp_CCryptVessel_canPickup_FUN_005e9100(CCryptVessel *this_ptr,CDemonActor *picker)

{
  int iVar1;
  
  if (((this_ptr->unk8 == 0) && (this_ptr->state == 0)) &&
     (iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(picker,"CHero"), iVar1 != 0)) {
    return 4;
  }
  return 0;
}
