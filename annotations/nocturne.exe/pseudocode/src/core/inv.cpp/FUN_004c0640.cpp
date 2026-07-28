// Name: core_inv.cpp_FUN_004c0640
// Address: 004c0640
// Address Range: [[004c0640, 004c0703]]
// Convention: unknown
// Signature: void core_inv_cpp_FUN_004c0640(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_inv_cpp_FUN_004c0640(void)

{
  char cVar1;
  CAmmo *pCVar2;
  CAmmo *this_ptr;
  char *pcVar3;
  CInventory *in_stack_00000004;
  CDemonActor *in_stack_00000008;
  
  if (in_stack_00000008[4].location.position.y == -NAN) {
    return;
  }
  pCVar2 = (CAmmo *)FUN_0056497c(0x314);
  this_ptr = (CAmmo *)0x0;
  if (pCVar2 != (CAmmo *)0x0) {
    this_ptr = core_ammo_cpp_CAmmo_ctor_FUN_0040eb70(pCVar2);
  }
  if (this_ptr == (CAmmo *)0x0) {
    PTR_01cc4800 = "..\\core\\inv.cpp";
    INT_01cc4804 = 0x2fd;
    core_main_c_FUN_004c8440("Out of memory");
  }
  this_ptr->ammo_count = (int)in_stack_00000008[4].location.position.x;
  this_ptr->ammo_type = (EAmmoType)in_stack_00000008[4].location.position.y;
  pcVar3 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00409fa0(in_stack_00000008);
  core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040ed80(this_ptr,pcVar3);
  (*((this_ptr->base).vtable._ub)->setup)(&this_ptr->base);
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
  core_inv_cpp_CInventory_addItem_FUN_004bf360(in_stack_00000004,&this_ptr->base,0);
  return;
}
