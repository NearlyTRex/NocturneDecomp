// Name: core_hero.cpp_CHero_createDefaultWeapon_FUN_004f2a30
// Address: 004f2a30
// Address Range: [[004f2a30, 004f2ae0]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_createDefaultWeapon_FUN_004f2a30(CHero *this_ptr)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_createDefaultWeapon_FUN_004f2a30(CHero *this_ptr)

{
  char cVar1;
  CGun *actor_ptr;
  CWeapon *pCVar2;
  char *pcVar2;
  CWeapon *pCVar3;
  uint class_name_hash;
  
  core_inv_cpp_CInventory_initialize_FUN_004fd190(&this_ptr->inventory);
  class_name_hash = g_CWeaponClassInfo.name_hash;
  actor_ptr = (CGun *)core_actor_cpp_createActorByName_FUN_0040c430("CGun");
  pCVar2 = (CWeapon *)
           core_actor_cpp_castToClassHash_FUN_0040c790((CDemonActor *)actor_ptr,class_name_hash);
  if (pCVar2 == (CWeapon *)0x0) {
    g_CurrentFilename = "..\\core\\hero.cpp";
    g_CurrentLineNumber = 0x1b2;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
  }
  pcVar2 = "Your_weapon";
  pCVar3 = pCVar2;
  do {
    cVar1 = *pcVar2;
    (pCVar3->base).actor_name[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    (pCVar3->base).actor_name[1] = cVar1;
    pCVar3 = (CWeapon *)((pCVar3->base).actor_name + 2);
  } while (cVar1 != '\0');
  core_inv_cpp_CInventory_addItem_FUN_004fd600(&this_ptr->inventory,(CDemonActor *)pCVar2,1);
  core_inv_cpp_CInventory_selectWeapon_FUN_004feb10(&this_ptr->inventory,(CDemonActor *)0x0,5,1);
  pCVar2->ammo_count = 100;
  return;
}
