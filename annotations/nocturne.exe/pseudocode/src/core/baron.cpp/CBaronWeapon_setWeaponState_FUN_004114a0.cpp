// Name: core_baron.cpp_CBaronWeapon_setWeaponState_FUN_004114a0
// Address: 004114a0
// Address Range: [[004114a0, 0041152c]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_CBaronWeapon_setWeaponState_FUN_004114a0(CBaronWeapon *this_ptr,int weapon_state)

#include "nocturne.h"

void __cdecl core_baron_cpp_CBaronWeapon_setWeaponState_FUN_004114a0(CBaronWeapon *this_ptr,int weapon_state)

{
  CDemonActor *target;
  
  core_weapon_cpp_CWeapon_setWeaponState_FUN_00554560(&this_ptr->base,weapon_state);
  target = (*((this_ptr->base).base.vtable._ub)->getCarrier)((CDemonActor *)this_ptr);
  if ((this_ptr->base).weapon_state == WEAPON_STATE_IN_HAND) {
    if (target == (CDemonActor *)0x0) {
      g_CurrentFilename = "..\\core\\baron.cpp";
      g_CurrentLineNumber = 796;
      core_main_c_displayErrorAndQuit_FUN_004c8440("CBaronWeapon::setWeaponState - I'm drawn, but nobody's carrying me??");
    }
    core_baron_cpp_CBaronWeapon_findOrCreateBaron_FUN_00411530(this_ptr);
    core_baron_cpp_CBaron_attachToOwner_FUN_00410a80(this_ptr->baron,target);
  }
  else if (this_ptr->baron != (CBaron *)0x0) {
    core_baron_cpp_CBaron_detachFromOwner_FUN_00410bb0(this_ptr->baron,target);
    return;
  }
  return;
}
