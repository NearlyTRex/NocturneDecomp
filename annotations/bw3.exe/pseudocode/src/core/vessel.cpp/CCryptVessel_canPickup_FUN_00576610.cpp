// Name: core_vessel.cpp_CCryptVessel_canPickup_FUN_00576610
// Address: 00576610
// Address Range: [[00576610, 00576647]]
// Convention: __cdecl
// Signature: int __cdecl core_vessel_cpp_CCryptVessel_canPickup_FUN_00576610(CCryptVessel *this_ptr,CDemonActor *picker)

#include "nocturne.h"

int __cdecl core_vessel_cpp_CCryptVessel_canPickup_FUN_00576610(CCryptVessel *this_ptr,CDemonActor *picker)

{
  int iVar1;
  
  if (((*(int *)&this_ptr->field_0x7f0 == 0) && (*(int *)&this_ptr->field_0x3b8 == 0)) &&
     (iVar1 = core_actor_cpp_FUN_0040c790(picker,"?CHero" + 1), iVar1 != 0)) {
    return 4;
  }
  return 0;
}
