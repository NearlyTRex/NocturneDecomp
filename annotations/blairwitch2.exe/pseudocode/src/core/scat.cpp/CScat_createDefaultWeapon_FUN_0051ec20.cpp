// Name: core_scat.cpp_CScat_createDefaultWeapon_FUN_0051ec20
// Address: 0051ec20
// Address Range: [[0051ec20, 0051ec86]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_CScat_createDefaultWeapon_FUN_0051ec20(CScat *this_ptr)

#include "nocturne.h"

void __cdecl core_scat_cpp_CScat_createDefaultWeapon_FUN_0051ec20(CScat *this_ptr)

{
  char cVar1;
  CDemonActor *item_actor;
  CInventory *this_ptr_00;
  char *pcVar2;
  CDemonActor *pCVar3;
  
  this_ptr_00 = (this_ptr->base).inventories;
  core_inv_cpp_CInventory_initialize_FUN_004da900(this_ptr_00);
  pcVar2 = "BaronProxy";
  item_actor = core_actor_cpp_createActorByName_FUN_0040c5a0("CBaronWeapon");
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
  core_inv_cpp_CInventory_addItem_FUN_004dadb0(this_ptr_00,item_actor,1,0);
  core_inv_cpp_CInventory_selectWeapon_FUN_004db9d0(this_ptr_00,(CDemonActor *)0x0,5,1);
  return;
}
