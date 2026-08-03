// Name: core_ammobox.cpp_FUN_0040f1a0
// Address: 0040f1a0
// Address Range: [[0040f1a0, 0040f2a9]]
// Convention: __cdecl
// Signature: void __cdecl core_ammobox_cpp_FUN_0040f1a0(CAmmoBox *this_ptr,CInventory *inventory)

#include "nocturne.h"

void __cdecl core_ammobox_cpp_FUN_0040f1a0(CAmmoBox *this_ptr,CInventory *inventory)

{
  char cVar1;
  CAmmo *pCVar2;
  CAmmo *this_ptr_00;
  char *pcVar3;
  
  if (this_ptr->item != (CDemonActor *)0x0) {
    core_inv_cpp_CInventory_addItem_FUN_004bf360(inventory,this_ptr->item,1);
    this_ptr->item = (CDemonActor *)0x0;
    this_ptr->ammo_count = 0;
    return;
  }
  if (this_ptr->ammo_count == 0) {
    return;
  }
  pCVar2 = (CAmmo *)FUN_0056497c(0x314);
  this_ptr_00 = (CAmmo *)0x0;
  if (pCVar2 != (CAmmo *)0x0) {
    this_ptr_00 = core_ammo_cpp_CAmmo_ctor_FUN_0040eb70(pCVar2);
  }
  if (this_ptr_00 == (CAmmo *)0x0) {
    g_CHAR_PTR_01cc4800 = "..\\core\\ammobox.cpp";
    g_INT_01cc4804 = 0xa2;
    core_main_c_FUN_004c8440("Out of memory");
  }
  core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040ed80(this_ptr_00,this_ptr->weapon_class_name);
  core_ammo_cpp_FUN_0040ef60(this_ptr_00,this_ptr->ammo_count);
  this_ptr_00->ammo_type = this_ptr->ammo_type;
  (*((this_ptr_00->base).vtable._ub)->setup)(&this_ptr_00->base);
  core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040ed80(this_ptr_00,this_ptr->weapon_class_name);
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
  core_inv_cpp_CInventory_addItem_FUN_004bf360(inventory,&this_ptr_00->base,1);
  this_ptr->ammo_count = 0;
  return;
}
