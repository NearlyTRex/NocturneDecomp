// Name: core_hero.cpp_CHero_ctor_FUN_004ce240
// Address: 004ce240
// Address Range: [[004ce240, 004ce3ad]]
// Convention: __cdecl
// Signature: CHero * __cdecl core_hero_cpp_CHero_ctor_FUN_004ce240(CHero *this_ptr)

#include "nocturne.h"

CHero * __cdecl core_hero_cpp_CHero_ctor_FUN_004ce240(CHero *this_ptr)

{
  CHero *this_ptr_00;
  CCharacter *pCVar1;
  CPathMap *pCVar2;
  CInventory *pCVar3;
  
  pCVar1 = core_charactr_cpp_CCharacter_ctor_FUN_00422340(&this_ptr->base);
  pCVar2 = core_path_cpp_CPathMap_ctor_FUN_00511c90((CPathMap *)&pCVar1[1].base.orient_matrix);
  pCVar3 = core_inv_cpp_CInventory_ctor_FUN_004da760((CInventory *)&pCVar2[1].current_position.y);
  pCVar3 = core_inv_cpp_CInventory_ctor_FUN_004da760(pCVar3 + 1);
  pCVar3 = core_inv_cpp_CInventory_ctor_FUN_004da760(pCVar3 + 1);
  this_ptr_00 = (CHero *)(pCVar3[-0x61].message_text + 0x8c);
  pCVar3[-2].owner = (CDemonActor *)this_ptr_00;
  pCVar3[-1].owner = (CDemonActor *)this_ptr_00;
  pCVar3->owner = (CDemonActor *)this_ptr_00;
  pCVar3[-0x60].items[0x16] = (CDemonActor *)&DAT_005f8274;
  pCVar3[1].items[0x10] = (CDemonActor *)0x0;
  memset(pCVar3[-0x35].items + 1,0,0x34);
  pCVar3[-0x35].item_count = 0;
  pCVar3[-0x58].items[0x2e] = (CDemonActor *)0x3f19999a;
  pCVar3[-0x58].items[0x2f] = (CDemonActor *)0x3f666666;
  pCVar3[-0x58].items[0x30] = (CDemonActor *)0x49742400;
  pCVar3[-0x58].items[0x31] = (CDemonActor *)0x49742400;
  pCVar3[-0x58].items[0x32] = (CDemonActor *)0x3fcccccd;
  pCVar3[-0x58].items[0x33] = (CDemonActor *)0x40c00000;
  pCVar3[-0x35].items[0] = (CDemonActor *)0x2;
  pCVar3[-3].selected_weapons[4] = (CWeapon *)0x0;
  pCVar3[1].items[2] = (CDemonActor *)0x0;
  pCVar3[1].items[3] = (CDemonActor *)0x0;
  pCVar3[1].items[4] = (CDemonActor *)0x0;
  pCVar3[1].items[5] = (CDemonActor *)0x0;
  pCVar3[1].items[6] = (CDemonActor *)0x0;
  pCVar3[1].items[7] = (CDemonActor *)0x0;
  pCVar3[1].items[8] = (CDemonActor *)0x0;
  pCVar3[1].battery_charge = 0.0;
  pCVar3[1].owner = (CDemonActor *)0x0;
  core_hero_cpp_CHero_createDefaultWeapon_FUN_004cec30(this_ptr_00);
  pCVar3[1].items[0xf] = (CDemonActor *)0x2;
  pCVar3[-0x5a].items[0x3f] = (CDemonActor *)0x0;
  pCVar3[-0x5b].item_groups[0x13] = 1;
  pCVar3[-0x5b].item_groups[0xe] = 0x41490fdb;
  return this_ptr_00;
}
