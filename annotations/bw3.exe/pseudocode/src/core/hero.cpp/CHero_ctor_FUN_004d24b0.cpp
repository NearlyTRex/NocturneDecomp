// Name: core_hero.cpp_CHero_ctor_FUN_004d24b0
// Address: 004d24b0
// Address Range: [[004d24b0, 004d261d]]
// Convention: __cdecl
// Signature: CHero * __cdecl core_hero_cpp_CHero_ctor_FUN_004d24b0(CHero *this_ptr)

#include "nocturne.h"

CHero * __cdecl core_hero_cpp_CHero_ctor_FUN_004d24b0(CHero *this_ptr)

{
  CCharacter *pCVar1;
  CPathMap *pCVar2;
  CInventory *pCVar3;
  
  pCVar1 = core_charactr_cpp_CCharacter_ctor_FUN_0042ac20(&this_ptr->base);
  pCVar2 = core_path_cpp_CPathMap_ctor_FUN_0050acc0((CPathMap *)&pCVar1[1].base.orient_matrix);
  pCVar3 = core_inv_cpp_CInventory_ctor_FUN_004da360((CInventory *)&pCVar2[1].current_position.y);
  pCVar3->owner = (CDemonActor *)(pCVar3[-0x75].items + 0xd);
  pCVar3[-0x75].items[0x62] = (CDemonActor *)&PTR_core_hero_cpp_FUN_004d26b0_005e1534;
  memset(pCVar3[-0x47].item_angles + 0x16,0,0x34);
  pCVar3[-0x47].item_angles[0x14] = 0.0;
  pCVar3[-0x6a].item_angles[0x10] = 0.6;
  pCVar3[-0x6a].item_angles[0x11] = 0.9;
  pCVar3[-0x6a].item_angles[0x12] = 1e+06;
  pCVar3[-0x6a].item_angles[0x13] = 1e+06;
  pCVar3[-0x6a].item_angles[0x14] = 1.6;
  pCVar3[-0x6a].item_angles[0x15] = 6.0;
  pCVar3[-0x47].item_angles[0x15] = 2.8026e-45;
  pCVar3[-1].cached_mana_count = 0;
  pCVar3[1].show_sps = 0;
  pCVar3[1].items[10] = (CDemonActor *)0x0;
  pCVar3[1].items[0xb] = (CDemonActor *)0x0;
  pCVar3[1].items[0xc] = (CDemonActor *)0x0;
  pCVar3[1].items[0xd] = (CDemonActor *)0x0;
  pCVar3[1].items[0xe] = (CDemonActor *)0x0;
  pCVar3[1].items[0xf] = (CDemonActor *)0x0;
  pCVar3[1].items[0x10] = (CDemonActor *)0x0;
  pCVar3[1].battery_charge = 0.0;
  pCVar3[1].owner = (CDemonActor *)0x0;
  core_hero_cpp_FUN_004d2cd0();
  pCVar3[1].items[0x17] = (CDemonActor *)0x2;
  pCVar3[-0x6c].items[1] = (CDemonActor *)0x0;
  pCVar3[-0x6d].item_angles[0x19] = 1.4013e-45;
  pCVar3[-0x6d].item_angles[0x14] = 12.566371;
  pCVar3[1].items[5] = (CDemonActor *)0x64;
  pCVar3[1].items[6] = (CDemonActor *)0x1e;
  pCVar3[1].show_compass = 0;
  pCVar3[1].items[7] = (CDemonActor *)0x0;
  return (CHero *)(pCVar3[-0x75].items + 0xd);
}
