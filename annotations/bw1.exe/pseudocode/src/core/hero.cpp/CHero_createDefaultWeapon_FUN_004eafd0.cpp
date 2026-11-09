// Name: core_hero.cpp_CHero_createDefaultWeapon_FUN_004eafd0
// Address: 004eafd0
// Address Range: [[004eafd0, 004eb080]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_createDefaultWeapon_FUN_004eafd0(CHero *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_hero_cpp_CHero_createDefaultWeapon_FUN_004eafd0(CHero *this_ptr)

{
  char cVar1;
  uint uVar2;
  CDemonActor *item_actor;
  char *pcVar3;
  CDemonActor *pCVar4;
  
  core_inv_cpp_CInventory_initialize_FUN_004f7050((CInventory *)(this_ptr + 0x1fae8));
  uVar2 = core_actor_cpp_createActorByName_FUN_0040c2b0(&DAT_005e4800,g_CWeaponClassInfo.name_hash);
  item_actor = (CDemonActor *)core_actor_cpp_castToClassHash_FUN_0040c600(uVar2);
  if (item_actor == (CDemonActor *)0x0) {
    _DAT_01d1d400 = "..\\core\\hero.cpp";
    _DAT_01d1d404 = 0x1d3;
    core_main_c_FUN_005030e0("Out of memory!");
  }
  pcVar3 = "Your_weapon";
  pCVar4 = item_actor;
  do {
    cVar1 = *pcVar3;
    *(char *)pCVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pCVar4->field_0x1 = cVar1;
    pCVar4 = (CDemonActor *)&pCVar4->field_0x2;
  } while (cVar1 != '\0');
  core_inv_cpp_FUN_004f7690((CInventory *)(this_ptr + 0x1fae8),item_actor,1);
  core_inv_cpp_FUN_004f8dc0((CInventory *)(this_ptr + 0x1fae8),(CDemonActor *)0x0,5,1);
  *(uint *)&item_actor[4].field_0x8 = 100;
  return;
}
