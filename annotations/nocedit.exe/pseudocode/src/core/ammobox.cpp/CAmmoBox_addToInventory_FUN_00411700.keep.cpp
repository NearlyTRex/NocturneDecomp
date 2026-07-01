// Name: core_ammobox.cpp_CAmmoBox_addToInventory_FUN_00411700
// Address: 00411700
// MANUAL RECONSTRUCTION
// Address Range: [[00411700, 00411813]]
// Convention: __cdecl
// Signature: void __cdecl core_ammobox_cpp_CAmmoBox_addToInventory_FUN_00411700(CAmmoBox *this_ptr,CInventory *inventory)

#include "nocturne.h"

void __cdecl core_ammobox_cpp_CAmmoBox_addToInventory_FUN_00411700(CAmmoBox *this_ptr,CInventory *inventory)

{
  CAmmo *pCVar2;
  CAmmo *this_ptr_00;
  
  if (this_ptr->item != (CDemonActor *)0x0) {
    core_inv_cpp_CInventory_addItem_FUN_004fd600(inventory,this_ptr->item,1);
    this_ptr->item = (CDemonActor *)0x0;
    this_ptr->ammo_count = 0;
    return;
  }
  if (this_ptr->ammo_count == 0) {
    return;
  }
  pCVar2 = (CAmmo *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0(sizeof(CAmmo),"..\\core\\ammobox.cpp",161);
  this_ptr_00 = (CAmmo *)0x0;
  if (pCVar2 != (CAmmo *)0x0) {
    this_ptr_00 = core_ammo_cpp_CAmmo_ctor_FUN_00410dc0(pCVar2);
  }
  if (this_ptr_00 == (CAmmo *)0x0) {
    g_CurrentFilename = "..\\core\\ammobox.cpp";
    g_CurrentLineNumber = 162;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory");
  }
  core_ammo_cpp_CAmmo_setWeaponClass_FUN_00410fd0(this_ptr_00,this_ptr->weapon_class_name);
  core_ammo_cpp_CAmmo_setAmmoCount_FUN_004111b0(this_ptr_00,this_ptr->ammo_count);
  this_ptr_00->ammo_type = this_ptr->ammo_type;
  (*((this_ptr_00->base).vtable._ub)->setup)(&this_ptr_00->base);
  core_ammo_cpp_CAmmo_setWeaponClass_FUN_00410fd0(this_ptr_00,this_ptr->weapon_class_name);
  strcpy((this_ptr_00->base).actor_name, "Some_ammo");
  core_inv_cpp_CInventory_addItem_FUN_004fd600(inventory,&this_ptr_00->base,1);
  this_ptr->ammo_count = 0;
  return;
}
