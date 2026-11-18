// Name: core_inv.cpp_CInventory_createAmmoFromWeapon_FUN_004db8d0
// Address: 004db8d0
// Address Range: [[004db8d0, 004db980]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_createAmmoFromWeapon_FUN_004db8d0(CInventory *this_ptr,CWeapon *weapon)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_createAmmoFromWeapon_FUN_004db8d0(CInventory *this_ptr,CWeapon *weapon)

{
  char cVar1;
  CAmmo *pCVar2;
  CAmmo *this_ptr_00;
  char *pcVar3;
  
  if (weapon->ammo_type == AMMO_TYPE_NONE) {
    return;
  }
  pCVar2 = operator_new(800);
  this_ptr_00 = (CAmmo *)0x0;
  if (pCVar2 != (CAmmo *)0x0) {
    this_ptr_00 = core_ammo_cpp_CAmmo_ctor_FUN_0040de60(pCVar2);
  }
  if (this_ptr_00 == (CAmmo *)0x0) {
    g_CHAR_PTR_01d71de0 = "..\\core\\inv.cpp";
    g_INT_01d71de4 = 0x498;
    core_main_c_displayErrorAndQuit_FUN_004e4330("Out of memory");
  }
  this_ptr_00->ammo_count = weapon->ammo_count;
  this_ptr_00->ammo_type = weapon->ammo_type;
  (*((this_ptr_00->base).vtable._ub)->setup)(&this_ptr_00->base);
  pcVar3 = "Some_ammo";
  pCVar2 = this_ptr_00;
  do {
    cVar1 = *pcVar3;
    (pCVar2->base).actor_name[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    (pCVar2->base).actor_name[1] = cVar1;
    pCVar2 = (CAmmo *)((pCVar2->base).actor_name + 2);
  } while (cVar1 != '\0');
  core_inv_cpp_CInventory_addItem_FUN_004da880(this_ptr,&this_ptr_00->base,0);
  return;
}
