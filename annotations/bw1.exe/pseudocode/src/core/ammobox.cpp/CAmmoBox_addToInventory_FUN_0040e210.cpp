// Name: core_ammobox.cpp_CAmmoBox_addToInventory_FUN_0040e210
// Address: 0040e210
// Address Range: [[0040e210, 0040e319]]
// Convention: __cdecl
// Signature: void __cdecl core_ammobox_cpp_CAmmoBox_addToInventory_FUN_0040e210(CAmmoBox *this_ptr,CInventory *inventory)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_ammobox_cpp_CAmmoBox_addToInventory_FUN_0040e210(CAmmoBox *this_ptr,CInventory *inventory)

{
  char cVar1;
  CAmmo *pCVar2;
  CAmmo *this_ptr_00;
  char *pcVar3;
  
  if (this_ptr->item != (CDemonActor *)0x0) {
    core_inv_cpp_FUN_004f7690(inventory,this_ptr->item,1);
    this_ptr->item = (CDemonActor *)0x0;
    this_ptr->ammo_count = 0;
    return;
  }
  if (this_ptr->ammo_count == 0) {
    return;
  }
  pCVar2 = (CAmmo *)debugAllocTracked1(0x31c);
  this_ptr_00 = (CAmmo *)0x0;
  if (pCVar2 != (CAmmo *)0x0) {
    this_ptr_00 = core_ammo_cpp_CAmmo_ctor_FUN_0040dbc0(pCVar2);
  }
  if (this_ptr_00 == (CAmmo *)0x0) {
    _DAT_01d1d400 = "..\\core\\ammobox.cpp";
    _DAT_01d1d404 = 0xa2;
    core_main_c_FUN_005030e0("Out of memory");
  }
  core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040ddd0(this_ptr_00,this_ptr->weapon_class_name);
  core_ammo_cpp_CAmmo_setAmmoCount_FUN_0040dfd0(this_ptr_00,this_ptr->ammo_count);
  this_ptr_00->ammo_type = this_ptr->ammo_type;
  (*((this_ptr_00->base).vtable._ub)->setup)(&this_ptr_00->base);
  core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040ddd0(this_ptr_00,this_ptr->weapon_class_name);
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
  core_inv_cpp_FUN_004f7690(inventory,&this_ptr_00->base,1);
  this_ptr->ammo_count = 0;
  return;
}
