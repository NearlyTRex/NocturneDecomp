// Name: core_shadow.cpp_CShadow_getDeathState_FUN_0053ec30
// Address: 0053ec30
// Address Range: [[0053ec30, 0053ec6d]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_shadow_cpp_CShadow_getDeathState_FUN_0053ec30(CShadow *this_ptr)

#include "nocturne.h"

uint __cdecl core_shadow_cpp_CShadow_getDeathState_FUN_0053ec30(CShadow *this_ptr)

{
  int iVar1;
  
  if ((this_ptr->base).base.base.lifecycle_state != ACTOR_DESTROYED) {
    iVar1 = core_motion_cpp_FUN_005035c0(&(this_ptr->base).base.model);
    switch(*(uint *)(iVar1 + 0x24)) {
    case 0xd:
    case 0xe:
      return 1;
    case 0xf:
    case 0x10:
      return 2;
    default:
      return 0;
    }
  }
  return 2;
}
