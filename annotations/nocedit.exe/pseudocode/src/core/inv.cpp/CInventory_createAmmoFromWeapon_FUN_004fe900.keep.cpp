// Name: core_inv.cpp_CInventory_createAmmoFromWeapon_FUN_004fe900
// Address: 004fe900
// MANUAL RECONSTRUCTION
// Address Range: [[004fe900, 004fe9cd]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_createAmmoFromWeapon_FUN_004fe900(CInventory *this_ptr,CWeapon *weapon)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_createAmmoFromWeapon_FUN_004fe900(CInventory *this_ptr,CWeapon *weapon)

{
  CAmmo *pCVar2;
  CAmmo *this_ptr_00;
  char *pcVar3;
  
  if (weapon->ammo_type == -1) {
    return;
  }
  pCVar2 = (CAmmo *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0(sizeof(CAmmo),"..\\core\\inv.cpp",0x2fc);
  this_ptr_00 = (CAmmo *)0x0;
  if (pCVar2 != (CAmmo *)0x0) {
    this_ptr_00 = core_ammo_cpp_CAmmo_ctor_FUN_00410dc0(pCVar2);
  }
  if (this_ptr_00 == (CAmmo *)0x0) {
    g_CurrentFilename = "..\\core\\inv.cpp";
    g_CurrentLineNumber = 0x2fd;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory");
  }
  this_ptr_00->ammo_count = weapon->ammo_count;
  this_ptr_00->ammo_type = weapon->ammo_type;
  pcVar3 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90(&weapon->base);
  core_ammo_cpp_CAmmo_setWeaponClass_FUN_00410fd0(this_ptr_00,pcVar3);
  (*((this_ptr_00->base).vtable._ub)->setup)(&this_ptr_00->base);
  strcpy((this_ptr_00->base).actor_name, "Some_ammo");
  core_inv_cpp_CInventory_addItem_FUN_004fd600(this_ptr,&this_ptr_00->base,0);
  return;
}
