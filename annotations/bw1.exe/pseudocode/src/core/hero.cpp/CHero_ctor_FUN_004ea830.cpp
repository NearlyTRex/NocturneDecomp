// Name: core_hero.cpp_CHero_ctor_FUN_004ea830
// Address: 004ea830
// Address Range: [[004ea830, 004ea97f]]
// Convention: __cdecl
// Signature: CHero * __cdecl core_hero_cpp_CHero_ctor_FUN_004ea830(CHero *this_ptr)

#include "nocturne.h"

CHero * __cdecl core_hero_cpp_CHero_ctor_FUN_004ea830(CHero *this_ptr)

{
  CHero *this_ptr_00;
  CCharacter *pCVar1;
  CPathMap *pCVar2;
  CInventory *pCVar3;
  
  pCVar1 = core_charactr_cpp_CCharacter_ctor_FUN_0042c080(&this_ptr->base);
  pCVar2 = core_path_cpp_CPathMap_ctor_FUN_00532fe0((CPathMap *)((int)&pCVar1[1].base.orient + 8));
  pCVar3 = core_inv_cpp_CInventory_ctor_FUN_004f6ed0((CInventory *)&pCVar2[1].current_position.y);
  this_ptr_00 = (CHero *)(pCVar3[-0x73].items + 0x62);
  pCVar3->owner = (CDemonActor *)this_ptr_00;
  pCVar3[-0x73].item_angles[0x53] = (float)&PTR_core_hero_cpp_CHero_setup_FUN_004eaa10_00601d34;
  memset(pCVar3[-0x47].items + 0x34,0,0x30);
  pCVar3[-0x47].items[0x32] = (CDemonActor *)0x0;
  pCVar3[-0x68].items[0x34] = (CDemonActor *)0x3f19999a;
  pCVar3[-0x68].items[0x35] = (CDemonActor *)0x3f666666;
  pCVar3[-0x68].items[0x36] = (CDemonActor *)0x49742400;
  pCVar3[-0x68].items[0x37] = (CDemonActor *)0x49742400;
  pCVar3[-0x68].items[0x38] = (CDemonActor *)0x3fcccccd;
  pCVar3[-0x68].items[0x39] = (CDemonActor *)0x40c00000;
  pCVar3[-0x47].items[0x33] = (CDemonActor *)0x2;
  pCVar3[-1].cached_ammo_count = 0;
  pCVar3[1].show_compass = 0;
  pCVar3[1].items[3] = (CDemonActor *)0x0;
  pCVar3[1].items[4] = (CDemonActor *)0x0;
  pCVar3[1].items[5] = (CDemonActor *)0x0;
  pCVar3[1].items[6] = (CDemonActor *)0x0;
  pCVar3[1].items[7] = (CDemonActor *)0x0;
  pCVar3[1].items[8] = (CDemonActor *)0x0;
  pCVar3[1].items[9] = (CDemonActor *)0x0;
  pCVar3[1].battery_charge = 0.0;
  pCVar3[1].owner = (CDemonActor *)0x0;
  core_hero_cpp_CHero_createDefaultWeapon_FUN_004eafd0(this_ptr_00);
  pCVar3[1].items[0x10] = (CDemonActor *)0x2;
  pCVar3[-0x6a].items[0x5f] = (CDemonActor *)0x0;
  pCVar3[-0xffffffff0000006b].message_text[0x28] = '\x01';
  pCVar3[-0xffffffff0000006b].message_text[0x29] = '\0';
  pCVar3[-0xffffffff0000006b].message_text[0x2a] = '\0';
  pCVar3[-0xffffffff0000006b].message_text[0x2b] = '\0';
  pCVar3[-0xffffffff0000006b].message_text[0x18] = -0x25;
  pCVar3[-0xffffffff0000006b].message_text[0x19] = '\x0f';
  pCVar3[-0xffffffff0000006b].message_text[0x1a] = 'I';
  pCVar3[-0xffffffff0000006b].message_text[0x1b] = '@';
  pCVar3[-0xffffffff0000006b].message_text[0x14] = -0x25;
  pCVar3[-0xffffffff0000006b].message_text[0x15] = '\x0f';
  pCVar3[-0xffffffff0000006b].message_text[0x16] = 'I';
  pCVar3[-0xffffffff0000006b].message_text[0x17] = 'A';
  return this_ptr_00;
}
