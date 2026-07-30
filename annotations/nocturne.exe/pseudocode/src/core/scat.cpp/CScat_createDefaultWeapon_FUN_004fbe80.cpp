// Name: core_scat.cpp_CScat_createDefaultWeapon_FUN_004fbe80
// Address: 004fbe80
// Address Range: [[004fbe80, 004fbee4]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_CScat_createDefaultWeapon_FUN_004fbe80(CScat *this_ptr)

#include "nocturne.h"

void __cdecl core_scat_cpp_CScat_createDefaultWeapon_FUN_004fbe80(CScat *this_ptr)

{
  char cVar1;
  CDemonActor *item_actor;
  CInventory *this_ptr_00;
  char *pcVar2;
  CDemonActor *pCVar3;
  
  this_ptr_00 = &(this_ptr->base).inventory;
  core_inv_cpp_CInventory_initialize_FUN_004bef10(this_ptr_00);
  pcVar2 = "BaronProxy";
  item_actor = core_actor_cpp_createActorByName_FUN_0040d540("CBaronWeapon");
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
  core_inv_cpp_CInventory_addItem_FUN_004bf360(this_ptr_00,item_actor,1);
  core_inv_cpp_CInventory_selectWeapon_FUN_004c0850(this_ptr_00,(CDemonActor *)0x0,5,1);
  return;
}
