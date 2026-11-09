// Name: core_gasmask.cpp_CGasMask_canPickup_FUN_004ddb30
// Address: 004ddb30
// Address Range: [[004ddb30, 004ddb4f]]
// Convention: __cdecl
// Signature: int __cdecl core_gasmask_cpp_CGasMask_canPickup_FUN_004ddb30(CGasMask *this_ptr,CDemonActor *picker)

#include "nocturne.h"

int __cdecl core_gasmask_cpp_CGasMask_canPickup_FUN_004ddb30(CGasMask *this_ptr,CDemonActor *picker)

{
  int iVar1;
  int iVar2;
  
  iVar1 = core_actor_cpp_FUN_0040c550(picker,"CHero");
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = 2;
  }
  return iVar2;
}
