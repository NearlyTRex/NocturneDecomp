// Name: core_baron.cpp_CBaronWeapon_setWeaponState_FUN_00413e90
// Address: 00413e90
// Address Range: [[00413e90, 00413f1c]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_CBaronWeapon_setWeaponState_FUN_00413e90(CBaronWeapon *this_ptr)

#include "nocturne.h"

void __cdecl core_baron_cpp_CBaronWeapon_setWeaponState_FUN_00413e90(CBaronWeapon *this_ptr)

{
  CDemonActor *pCVar1;
  int in_stack_00000008;
  
  core_weapon_cpp_CWeapon_setWeaponState_FUN_005ee640(&this_ptr->base,in_stack_00000008);
  pCVar1 = (*((this_ptr->base).base.vtable._ub)->getCarrier)((CDemonActor *)this_ptr);
  if ((this_ptr->base).weapon_state == 2) {
    if (pCVar1 == (CDemonActor *)0x0) {
      g_CurrentFilename = "..\\core\\baron.cpp";
      g_CurrentLineNumber = 0x31c;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CBaronWeapon::setWeaponState - I'm drawn, but nobody's carrying me??");
    }
    core_baron_cpp_CBaronWeapon_FUN_00413f20(this_ptr);
    core_baron_cpp_FUN_00413470((int)this_ptr->baron,pCVar1);
  }
  else if (this_ptr->baron != (CBaron *)0x0) {
    core_baron_cpp_CBaron_FUN_004135a0(this_ptr->baron,(int)pCVar1);
    return;
  }
  return;
}
