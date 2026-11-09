// Name: core_scat.cpp_FUN_00540d50
// Address: 00540d50
// Address Range: [[00540d50, 00540db4]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_FUN_00540d50(CScat *this_ptr)

#include "nocturne.h"

void __cdecl core_scat_cpp_FUN_00540d50(CScat *this_ptr)

{
  char cVar1;
  CDemonActor *item_actor;
  byte *this_ptr_00;
  char *pcVar2;
  CDemonActor *pCVar3;
  
  this_ptr_00 = &this_ptr->field_0x1fae8;
  core_inv_cpp_CInventory_initialize_FUN_004f7050((CInventory *)this_ptr_00);
  pcVar2 = "BaronProxy";
  item_actor = (CDemonActor *)core_actor_cpp_createActorByName_FUN_0040c2b0("CBaronWeapon")
  ;
  pCVar3 = item_actor;
  do {
    cVar1 = *pcVar2;
    *(char *)pCVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pCVar3->field_0x1 = cVar1;
    pCVar3 = (CDemonActor *)&pCVar3->field_0x2;
  } while (cVar1 != '\0');
  core_inv_cpp_FUN_004f7690((CInventory *)this_ptr_00,item_actor,1);
  core_inv_cpp_FUN_004f8dc0((CInventory *)this_ptr_00,(CDemonActor *)0x0,5,1);
  return;
}
