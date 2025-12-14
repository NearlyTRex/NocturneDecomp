// Name: core_inv.cpp_CInventory_createAmmoFromWeapon_FUN_004fe900
// Address: 004fe900
// Address Range: [[004fe900, 004fe9cd]]
// Convention: __cdecl
// Signature: void core_inv.cpp_CInventory_createAmmoFromWeapon_FUN_004fe900(CInventory * this_ptr, CWeapon * weapon)

#include "nocturne.h"

void __cdecl
core_inv_cpp_CInventory_createAmmoFromWeapon_FUN_004fe900(CInventory *this_ptr,CWeapon *weapon)

{
  char cVar1;
  CAmmo *pCVar2;
  CAmmo *this_ptr_00;
  char *pcVar3;
  CInventory *in_stack_00000024;
  
  if (weapon->ammo_type == -1) {
    return;
  }
  pCVar2 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x31c,"..\\core\\inv.cpp",0x2fc);
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
  core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90(&weapon->base_actor);
  core_ammo_cpp_CAmmo_FUN_00410fd0();
  (*((this_ptr_00->base_actor).vtable)->setup)(&this_ptr_00->base_actor);
  pcVar3 = "Some_ammo";
  pCVar2 = this_ptr_00;
  do {
    cVar1 = *pcVar3;
    (pCVar2->base_actor).actor_name[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    (pCVar2->base_actor).actor_name[1] = cVar1;
    pCVar2 = (CAmmo *)((pCVar2->base_actor).actor_name + 2);
  } while (cVar1 != '\0');
  core_inv_cpp_CInventory_addItem_FUN_004fd600(in_stack_00000024,&this_ptr_00->base_actor,0);
  return;
}
