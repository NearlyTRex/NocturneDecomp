// Name: core_crate.cpp_CCrate_canPickup_FUN_00439ea0
// Address: 00439ea0
// Address Range: [[00439ea0, 00439ebb]]
// Convention: __cdecl
// Signature: int __cdecl core_crate_cpp_CCrate_canPickup_FUN_00439ea0(CCrate *this_ptr,CDemonActor *picker)

#include "nocturne.h"

int __cdecl core_crate_cpp_CCrate_canPickup_FUN_00439ea0(CCrate *this_ptr,CDemonActor *picker)

{
  int iVar1;
  int iVar2;
  
  iVar1 = core_actor_cpp_FUN_0040c840(picker,"?CHero" + 1);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = 4;
  }
  return iVar2;
}
