// Name: core_ammobox.cpp_FUN_0040f1a0
// Address: 0040f1a0
// Address Range: [[0040f1a0, 0040f2a9]]
// Convention: unknown
// Signature: void core_ammobox_cpp_FUN_0040f1a0(int param_1,CInventory *param_2)

#include "nocturne.h"

void core_ammobox_cpp_FUN_0040f1a0(int param_1,CInventory *param_2)

{
  char cVar1;
  CAmmo *pCVar2;
  CAmmo *this_ptr;
  char *pcVar3;
  
  if (*(CDemonActor **)(param_1 + 0x318) != (CDemonActor *)0x0) {
    core_inv_cpp_CInventory_addItem_FUN_004bf360(param_2,*(CDemonActor **)(param_1 + 0x318),1);
    *(uint *)(param_1 + 0x318) = 0;
    *(uint *)(param_1 + 0x30c) = 0;
    return;
  }
  if (*(int *)(param_1 + 0x30c) == 0) {
    return;
  }
  pCVar2 = (CAmmo *)FUN_0056497c(0x314);
  this_ptr = (CAmmo *)0x0;
  if (pCVar2 != (CAmmo *)0x0) {
    this_ptr = core_ammo_cpp_CAmmo_ctor_FUN_0040eb70(pCVar2);
  }
  if (this_ptr == (CAmmo *)0x0) {
    PTR_01cc4800 = "..\\core\\ammobox.cpp";
    INT_01cc4804 = 0xa2;
    core_main_c_FUN_004c8440("Out of memory");
  }
  core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040ed80(this_ptr,(char *)(param_1 + 0x2cc));
  core_ammo_cpp_FUN_0040ef60(this_ptr,*(uint *)(param_1 + 0x30c));
  this_ptr->ammo_type = *(EAmmoType *)(param_1 + 0x310);
  (*((this_ptr->base).vtable._ub)->setup)(&this_ptr->base);
  core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040ed80(this_ptr,(char *)(param_1 + 0x2cc));
  pcVar3 = "Some_ammo";
  pCVar2 = this_ptr;
  do {
    cVar1 = *pcVar3;
    (pCVar2->base).actor_name[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    (pCVar2->base).actor_name[1] = cVar1;
    pCVar2 = (CAmmo *)((pCVar2->base).actor_name + 2);
  } while (cVar1 != '\0');
  core_inv_cpp_CInventory_addItem_FUN_004bf360(param_2,&this_ptr->base,1);
  *(uint *)(param_1 + 0x30c) = 0;
  return;
}
