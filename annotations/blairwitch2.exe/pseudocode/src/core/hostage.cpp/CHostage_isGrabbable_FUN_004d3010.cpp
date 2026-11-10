// Name: core_hostage.cpp_CHostage_isGrabbable_FUN_004d3010
// Address: 004d3010
// Address Range: [[004d3010, 004d304f]]
// Convention: __cdecl
// Signature: int __cdecl core_hostage_cpp_CHostage_isGrabbable_FUN_004d3010(CHostage *this_ptr,CDemonActor *grabber)

#include "nocturne.h"

int __cdecl core_hostage_cpp_CHostage_isGrabbable_FUN_004d3010(CHostage *this_ptr,CDemonActor *grabber)

{
  int iVar1;
  
  if (((this_ptr->hostage_type != 0) && (this_ptr->hostage_state != 3)) &&
     (this_ptr->hostage_state != 4)) {
    iVar1 = core_motion_cpp_FUN_005035c0(&(this_ptr->base).base.model);
    if (*(int *)(iVar1 + 0x24) != 10) {
      return 1;
    }
  }
  return 0;
}
