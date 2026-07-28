// Name: core_baron.cpp_CBaronWeapon_setWeaponState_FUN_004114a0
// Address: 004114a0
// Address Range: [[004114a0, 0041152c]]
// Convention: unknown
// Signature: void core_baron_cpp_CBaronWeapon_setWeaponState_FUN_004114a0(CWeapon *param_1,int param_2)

#include "nocturne.h"

void core_baron_cpp_CBaronWeapon_setWeaponState_FUN_004114a0(CWeapon *param_1,int param_2)

{
  CBaron *this_ptr;
  CDemonActor *target;
  
  core_weapon_cpp_CWeapon_setWeaponState_FUN_00554560(param_1,param_2);
  target = (*((param_1->base).vtable._ub)->getCarrier)(&param_1->base);
  if (param_1->weapon_state == 2) {
    if (target == (CDemonActor *)0x0) {
      PTR_01cc4800 = "..\\core\\baron.cpp";
      INT_01cc4804 = 0x31c;
      core_main_c_FUN_004c8440("CBaronWeapon::setWeaponState - I'm drawn, but nobody's carrying me??");
    }
    core_baron_cpp_CBaronWeapon_findOrCreateBaron_FUN_00411530(param_1);
    core_baron_cpp_CBaron_attachToOwner_FUN_00410a80(*(CBaron **)param_1[1].base.actor_name,target);
  }
  else {
    this_ptr = *(CBaron **)param_1[1].base.actor_name;
    if (this_ptr != (CBaron *)0x0) {
      core_baron_cpp_CBaron_detachFromOwner_FUN_00410bb0(this_ptr,target);
      return;
    }
  }
  return;
}
