// Name: core_baron.cpp_CBaronWeapon_setWeaponState_FUN_00410a30
// Address: 00410a30
// Address Range: [[00410a30, 00410abc]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_CBaronWeapon_setWeaponState_FUN_00410a30(CBaronWeapon *this_ptr,int weapon_state)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_baron_cpp_CBaronWeapon_setWeaponState_FUN_00410a30(CBaronWeapon *this_ptr,int weapon_state)

{
  CDemonActor *target;
  
  core_weapon_cpp_CWeapon_setWeaponState_FUN_0058a200(&this_ptr->base,weapon_state);
  target = (*((this_ptr->base).base.vtable._ub)->getCarrier)((CDemonActor *)this_ptr);
  if ((this_ptr->base).weapon_state == WEAPON_STATE_IN_HAND) {
    if (target == (CDemonActor *)0x0) {
      _DAT_01d046a0 = "..\\core\\baron.cpp";
      _DAT_01d046a4 = 800;
      core_main_c_FUN_004e4500("CBaronWeapon::setWeaponState - I'm drawn, but nobody's carrying me??");
    }
    core_baron_cpp_CBaronWeapon_findOrCreateBaron_FUN_00410ac0(this_ptr);
    core_baron_cpp_CBaron_attachToOwner_FUN_0040fef0(this_ptr->baron,target);
  }
  else if (this_ptr->baron != (CBaron *)0x0) {
    core_baron_cpp_CBaron_detachFromOwner_FUN_00410040(this_ptr->baron,target);
    return;
  }
  return;
}
