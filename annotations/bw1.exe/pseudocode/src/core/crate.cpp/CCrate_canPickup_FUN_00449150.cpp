// Name: core_crate.cpp_CCrate_canPickup_FUN_00449150
// Address: 00449150
// Address Range: [[00449150, 0044916b]]
// Convention: __cdecl
// Signature: int __cdecl core_crate_cpp_CCrate_canPickup_FUN_00449150(CCrate *this_ptr,CDemonActor *picker)

#include "nocturne.h"

int __cdecl core_crate_cpp_CCrate_canPickup_FUN_00449150(CCrate *this_ptr,CDemonActor *picker)

{
  int iVar1;
  int iVar2;
  
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c550(picker,"?CHero" + 1);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = 4;
  }
  return iVar2;
}
