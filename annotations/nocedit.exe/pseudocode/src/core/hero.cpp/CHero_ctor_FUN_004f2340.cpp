// Name: core_hero.cpp_CHero_ctor_FUN_004f2340
// Address: 004f2340
// Address Range: [[004f2340, 004f2467]]
// Convention: __cdecl
// Signature: CHero * __cdecl core_hero_cpp_CHero_ctor_FUN_004f2340(CHero *this_ptr)

#include "nocturne.h"

CHero * __cdecl core_hero_cpp_CHero_ctor_FUN_004f2340(CHero *this_ptr)

{
  CHero *this_ptr_00;
  CCharacter *pCVar1;
  CPathMap *pCVar2;
  CInventory *pCVar3;
  
  pCVar1 = core_charactr_cpp_CCharacter_ctor_FUN_00427e20(&this_ptr->base);
  pCVar2 = core_path_cpp_CPathMap_ctor_FUN_00546450((CPathMap *)((int)&pCVar1[1].base.orient + 4));
  pCVar3 = core_inv_cpp_CInventory_ctor_FUN_004fd020((CInventory *)&pCVar2[1].current_position.y);
  this_ptr_00 = (CHero *)(pCVar3[-0x74].message_text + 0xfc);
  pCVar3->owner = (CDemonActor *)this_ptr_00;
  pCVar3[-0x73].items[0x4c] = (CDemonActor *)&g_CHeroVTable;
  memset(pCVar3[-0x48].item_angles + 0x16,0,0x2c);
  pCVar3[-0x48].item_angles[0x14] = 0.0;
  pCVar3[-0x69].item_angles[0x1a] = 0.6;
  pCVar3[-0x69].item_angles[0x1b] = 0.9;
  pCVar3[-0x69].item_angles[0x1c] = 1e+06;
  pCVar3[-0x69].item_angles[0x1d] = 1e+06;
  pCVar3[-0x69].item_angles[0x1e] = 1.6;
  pCVar3[-0x69].item_angles[0x1f] = 6.0;
  pCVar3[-0x48].item_angles[0x15] = 2.8026e-45;
  pCVar3[-1].cached_ammo_count = 0;
  pCVar3[1].owner = (CDemonActor *)0x0;
  pCVar3[1].item_count = 0;
  pCVar3[1].items[0] = (CDemonActor *)0x0;
  pCVar3[1].items[1] = (CDemonActor *)0x0;
  pCVar3[1].items[2] = (CDemonActor *)0x0;
  pCVar3[1].items[3] = (CDemonActor *)0x0;
  pCVar3[1].items[4] = (CDemonActor *)0x0;
  pCVar3[1].battery_charge = 0.0;
  core_hero_cpp_CHero_createDefaultGun_FUN_004f2a30(this_ptr_00);
  pCVar3[1].items[0xb] = (CDemonActor *)0x2;
  pCVar3[-0x6b].item_angles[0x5c] = 0.0;
  pCVar3[-0x6b].items[0x48] = (CDemonActor *)0x1;
  return this_ptr_00;
}
