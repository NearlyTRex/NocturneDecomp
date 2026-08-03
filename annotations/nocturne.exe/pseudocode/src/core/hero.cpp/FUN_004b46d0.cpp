// Name: core_hero.cpp_FUN_004b46d0
// Address: 004b46d0
// Address Range: [[004b46d0, 004b47f7]]
// Convention: __cdecl
// Signature: CHero * __cdecl core_hero_cpp_FUN_004b46d0(CHero *this_ptr)

#include "nocturne.h"

CHero * __cdecl core_hero_cpp_FUN_004b46d0(CHero *this_ptr)

{
  CHero *this_ptr_00;
  CCharacter *pCVar1;
  CPathMap *pCVar2;
  CInventory *pCVar3;
  
  pCVar1 = core_charactr_cpp_CCharacter_ctor_FUN_00423f40(&this_ptr->base);
  pCVar2 = core_path_cpp_CPathMap_ctor_FUN_004efd50((CPathMap *)((int)&pCVar1[1].base.orient + 4));
  pCVar3 = core_inv_cpp_CInventory_ctor_FUN_004bedc0((CInventory *)&pCVar2[1].current_position.y);
  this_ptr_00 = (CHero *)(pCVar3[-0x73].items + 0x5d);
  pCVar3->owner = (CDemonActor *)this_ptr_00;
  pCVar3[-0x73].item_angles[0x4c] = (float)&g_CHeroVTable;
  memset(pCVar3[-0x48].item_angles + 0x16,0,0x2c);
  pCVar3[-0x48].item_angles[0x14] = 0.0;
  pCVar3[-0xffffffff00000069].message_text[0x48] = -0x66;
  pCVar3[-0xffffffff00000069].message_text[0x49] = -0x67;
  pCVar3[-0xffffffff00000069].message_text[0x4a] = '\x19';
  pCVar3[-0xffffffff00000069].message_text[0x4b] = '?';
  pCVar3[-0xffffffff00000069].message_text[0x4c] = 'f';
  pCVar3[-0xffffffff00000069].message_text[0x4d] = 'f';
  pCVar3[-0xffffffff00000069].message_text[0x4e] = 'f';
  pCVar3[-0xffffffff00000069].message_text[0x4f] = '?';
  pCVar3[-0xffffffff00000069].message_text[0x50] = '\0';
  pCVar3[-0xffffffff00000069].message_text[0x51] = '$';
  pCVar3[-0xffffffff00000069].message_text[0x52] = 't';
  pCVar3[-0xffffffff00000069].message_text[0x53] = 'I';
  pCVar3[-0xffffffff00000069].message_text[0x54] = '\0';
  pCVar3[-0xffffffff00000069].message_text[0x55] = '$';
  pCVar3[-0xffffffff00000069].message_text[0x56] = 't';
  pCVar3[-0xffffffff00000069].message_text[0x57] = 'I';
  pCVar3[-0xffffffff00000069].message_text[0x58] = -0x33;
  pCVar3[-0xffffffff00000069].message_text[0x59] = -0x34;
  pCVar3[-0xffffffff00000069].message_text[0x5a] = -0x34;
  pCVar3[-0xffffffff00000069].message_text[0x5b] = '?';
  pCVar3[-0xffffffff00000069].message_text[0x5c] = '\0';
  pCVar3[-0xffffffff00000069].message_text[0x5d] = '\0';
  pCVar3[-0xffffffff00000069].message_text[0x5e] = -0x40;
  pCVar3[-0xffffffff00000069].message_text[0x5f] = '@';
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
  core_hero_cpp_CHero_createDefaultWeapon_FUN_004b4dd0(this_ptr_00);
  pCVar3[1].items[0xb] = (CDemonActor *)0x2;
  pCVar3[-0x6a].items[0xc] = (CDemonActor *)0x0;
  pCVar3[-0x6b].item_angles[0x48] = 1.4013e-45;
  return this_ptr_00;
}
