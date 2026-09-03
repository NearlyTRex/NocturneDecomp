// Name: core_inv.cpp_CInventory_createAmmoFromWeapon_FUN_004c0640
// Address: 004c0640
// Address Range: [[004c0640, 004c0703]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_createAmmoFromWeapon_FUN_004c0640(CInventory *this_ptr,int param_2)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_createAmmoFromWeapon_FUN_004c0640(CInventory *this_ptr,int param_2)

{
  char cVar1;
  CAmmo *pCVar2;
  CAmmo *this_ptr_00;
  char *pcVar3;
  
  if (*(int *)(param_2 + 0x564) == -1) {
    return;
  }
  pCVar2 = operator_new(0x314);
  this_ptr_00 = (CAmmo *)0x0;
  if (pCVar2 != (CAmmo *)0x0) {
    this_ptr_00 = core_ammo_cpp_CAmmo_ctor_FUN_0040eb70(pCVar2);
  }
  if (this_ptr_00 == (CAmmo *)0x0) {
    g_CurrentFilename = "..\\core\\inv.cpp";
    g_CurrentLineNumber = 765;
    core_main_c_displayErrorAndQuit_FUN_004c8440("Out of memory");
  }
  this_ptr_00->ammo_count = *(int *)(param_2 + 0x560);
  this_ptr_00->ammo_type = *(EAmmoType *)(param_2 + 0x564);
  pcVar3 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00409fa0((CDemonActor *)param_2);
  core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040ed80(this_ptr_00,pcVar3);
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
  core_inv_cpp_CInventory_addItem_FUN_004bf360(this_ptr,&this_ptr_00->base,0);
  return;
}
