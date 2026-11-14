// Name: core_baron.cpp_CBaronWeapon_isReadyToFire_FUN_004109d0
// Address: 004109d0
// Address Range: [[004109d0, 004109ff] [00410a01, 00410a29]]
// Convention: __cdecl
// Signature: int __cdecl core_baron_cpp_CBaronWeapon_isReadyToFire_FUN_004109d0(CBaronWeapon *this_ptr)

#include "nocturne.h"

int __cdecl core_baron_cpp_CBaronWeapon_isReadyToFire_FUN_004109d0(CBaronWeapon *this_ptr)

{
  CBaron *pCVar1;
  int iVar2;
  
  core_baron_cpp_CBaronWeapon_findOrCreateBaron_FUN_00410ac0(this_ptr);
  pCVar1 = this_ptr->baron;
  if (pCVar1 != (CBaron *)0x0) {
    if ((pCVar1->base).player_input.action_state.fire != 0) {
      return 0;
    }
    iVar2 = core_motion_cpp_FUN_005035c0(&(pCVar1->base).base.model);
    switch(*(uint *)(iVar2 + 0x24)) {
    case 0:
    case 1:
    case 2:
    case 3:
      return 1;
    }
  }
  return 0;
}
