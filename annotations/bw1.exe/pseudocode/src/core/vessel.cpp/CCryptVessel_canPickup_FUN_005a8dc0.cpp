// Name: core_vessel.cpp_CCryptVessel_canPickup_FUN_005a8dc0
// Address: 005a8dc0
// Address Range: [[005a8dc0, 005a8df7]]
// Convention: __cdecl
// Signature: int __cdecl core_vessel_cpp_CCryptVessel_canPickup_FUN_005a8dc0(CCryptVessel *this_ptr,CDemonActor *picker)

#include "nocturne.h"

int __cdecl core_vessel_cpp_CCryptVessel_canPickup_FUN_005a8dc0(CCryptVessel *this_ptr,CDemonActor *picker)

{
  int iVar1;
  
  if (((this_ptr->puzzle_complete == 0) && (this_ptr->state == 0)) &&
     (iVar1 = core_actor_cpp_isOfClass_FUN_0040c550(picker,"?CHero" + 1), iVar1 != 0)) {
    return 4;
  }
  return 0;
}
