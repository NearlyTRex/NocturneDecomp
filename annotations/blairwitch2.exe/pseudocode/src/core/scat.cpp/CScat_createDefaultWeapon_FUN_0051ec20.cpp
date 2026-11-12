// Name: core_scat.cpp_CScat_createDefaultWeapon_FUN_0051ec20
// Address: 0051ec20
// Address Range: [[0051ec20, 0051ec86]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_CScat_createDefaultWeapon_FUN_0051ec20(CScat *this_ptr)

#include "nocturne.h"

void __cdecl core_scat_cpp_CScat_createDefaultWeapon_FUN_0051ec20(CScat *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  CInventory *this_ptr_00;
  char *pcVar3;
  CDemonActor *pCVar4;
  
  this_ptr_00 = (this_ptr->base).inventories;
  core_inv_cpp_CInventory_initialize_FUN_004da900(this_ptr_00);
  pcVar3 = "BaronProxy";
  pCVar2 = core_actor_cpp_createActorByName_FUN_0040c5a0("CBaronWeapon");
  pCVar4 = pCVar2;
  do {
    cVar1 = *pcVar3;
    pCVar4->actor_name[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pCVar4->actor_name[1] = cVar1;
    pCVar4 = (CDemonActor *)(pCVar4->actor_name + 2);
  } while (cVar1 != '\0');
  core_inv_cpp_FUN_004dadb0(this_ptr_00,pCVar2,1,0);
  core_inv_cpp_FUN_004db9d0(this_ptr_00,0,5,1);
  return;
}
