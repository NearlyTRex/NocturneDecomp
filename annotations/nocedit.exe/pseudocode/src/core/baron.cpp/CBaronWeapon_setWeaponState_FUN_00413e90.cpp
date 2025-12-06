// Name: core_baron.cpp_CBaronWeapon_setWeaponState_FUN_00413e90
// Address: 00413e90
// Address Range: [[00413e90, 00413f1c]]
// Convention: __cdecl
// Signature: void core_baron.cpp_CBaronWeapon_setWeaponState_FUN_00413e90(CBaronWeapon * this_ptr)

#include "nocturne.h"

void __cdecl core_baron_cpp_CBaronWeapon_setWeaponState_FUN_00413e90(CBaronWeapon *this_ptr)

{
  CDemonActor *pCVar1;
  CDemonActor *pCStack00000008;
  
  core_weapon_cpp_CWeapon_FUN_005ee640(&this_ptr->base_weapon);
  pCVar1 = (*((this_ptr->base_weapon).base_actor.vtable)->getCarrier)((CDemonActor *)this_ptr);
  if ((this_ptr->base_weapon).weapon_state == 2) {
    if (pCVar1 == (CDemonActor *)0x0) {
      g_CurrentFilename = "..\\core\\baron.cpp";
      g_CurrentLineNumber = 0x31c;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CBaronWeapon::setWeaponState - I'm drawn, but nobody's carrying me??");
    }
    core_baron_cpp_FUN_00413f20();
    pCStack00000008 = pCVar1;
    core_baron_cpp_FUN_00413470();
  }
  else if (this_ptr->field1_0x578 != 0) {
    core_baron_cpp_FUN_004135a0();
    return;
  }
  return;
}
