// Name: core_scat.cpp_FUN_00557150
// Address: 00557150
// Address Range: [[00557150, 005571b4]]
// Convention: unknown
// Signature: undefined core_scat.cpp_FUN_00557150()

#include "nocturne.h"

/* Signature: byte actors_hero_scat.cpp_FUN_00557150(uint param_1) */

void core_scat_cpp_FUN_00557150(void)

{
  char cVar1;
  CDemonActor *item_actor;
  CInventory *this_ptr;
  char *pcVar2;
  CDemonActor *pCVar3;
  int in_stack_00000004;
  
  this_ptr = (CInventory *)(in_stack_00000004 + 0x1f738);
  core_inv_cpp_CInventory_initialize_FUN_004fd190(this_ptr);
  pcVar2 = "BaronProxy";
  item_actor = core_actor_cpp_createActorByName_FUN_0040c430("CBaronWeapon");
  pCVar3 = item_actor;
  do {
    cVar1 = *pcVar2;
    pCVar3->actor_name[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pCVar3->actor_name[1] = cVar1;
    pCVar3 = (CDemonActor *)(pCVar3->actor_name + 2);
  } while (cVar1 != '\0');
  core_inv_cpp_CInventory_addItem_FUN_004fd600(this_ptr,item_actor,1);
  core_inv_cpp_CInventory_selectWeapon_FUN_004feb10(this_ptr,(CDemonActor *)0x0,5,1);
  return;
}
