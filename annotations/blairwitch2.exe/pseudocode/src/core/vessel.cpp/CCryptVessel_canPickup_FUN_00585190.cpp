// Name: core_vessel.cpp_CCryptVessel_canPickup_FUN_00585190
// Address: 00585190
// Address Range: [[00585190, 005851c7]]
// Convention: __cdecl
// Signature: int __cdecl core_vessel_cpp_CCryptVessel_canPickup_FUN_00585190(CCryptVessel *this_ptr,CDemonActor *picker)

#include "nocturne.h"

int __cdecl core_vessel_cpp_CCryptVessel_canPickup_FUN_00585190(CCryptVessel *this_ptr,CDemonActor *picker)

{
  int iVar1;
  
  if (((this_ptr->puzzle_complete == 0) && (this_ptr->state == 0)) &&
     (iVar1 = core_actor_cpp_isOfClass_FUN_0040c840(picker,"?CHero" + 1), iVar1 != 0)) {
    return 4;
  }
  return 0;
}
