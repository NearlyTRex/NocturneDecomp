// Name: core_hero.cpp_CHero_createDefaultWeapon_FUN_004b4dd0
// Address: 004b4dd0
// Address Range: [[004b4dd0, 004b4e80]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_createDefaultWeapon_FUN_004b4dd0(CHero *this_ptr)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_createDefaultWeapon_FUN_004b4dd0(CHero *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  char *pcVar3;
  CDemonActor *pCVar4;
  uint class_name_hash;
  
  core_inv_cpp_CInventory_initialize_FUN_004bef10(&this_ptr->inventory);
  class_name_hash = g_CWeaponActorType_02ddf970.name_hash;
  pCVar2 = core_actor_cpp_createActorByName_FUN_0040d540("CGun");
  pCVar2 = core_actor_cpp_castToClassHash_FUN_0040d890(pCVar2,class_name_hash);
  if (pCVar2 == (CDemonActor *)0x0) {
    g_CHAR_PTR_01cc4800 = "..\\core\\hero.cpp";
    g_INT_01cc4804 = 0x1b2;
    core_main_c_FUN_004c8440("Out of memory!");
  }
  pcVar3 = "Your_weapon";
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
  core_inv_cpp_CInventory_addItem_FUN_004bf360(&this_ptr->inventory,pCVar2,1);
  core_inv_cpp_CInventory_selectWeapon_FUN_004c0850(&this_ptr->inventory,(CDemonActor *)0x0,5,1);
  pCVar2[4].location.position.x = 1.4013e-43;
  return;
}
