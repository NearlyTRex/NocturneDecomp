// Name: core_inv.cpp_CInventory_ctor_FUN_004fd020
// Address: 004fd020
// Address Range: [[004fd020, 004fd0b7]]
// Convention: __cdecl
// Signature: void core_inv.cpp_CInventory_ctor_FUN_004fd020(CInventory * this_ptr)
// Cross-references:
//   core_hero.cpp_FUN_004f2340 (004f2340) at 004f2362 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_ctor_FUN_004fd020(CInventory *this_ptr)

{
  this_ptr->save_version = 0;
  this_ptr->selected_weapon = (CWeapon *)0x0;
  this_ptr->selected_item = (CDemonActor *)0x0;
  this_ptr->battery_charge = 100.0;
  this_ptr->owner = (CDemonActor *)0x0;
  this_ptr->weapon_highlight_timer = 0.0;
  this_ptr->item_highlight_timer = 0.0;
  this_ptr->inventory_display_timer = 0.0;
  this_ptr->render_mode_flag = 0;
  this_ptr->preserve_items = 0;
  this_ptr->light_gun_ptr = (CLightGun *)0x0;
  this_ptr->message_display_timer = 0.0;
  this_ptr->message_text[0] = '\0';
  this_ptr->ammo_ptr = (CAmmo *)0x0;
  this_ptr->cached_ammo_count = 0;
  this_ptr->item_count = 0;
  return;
}


// Assembly code:
// 004fd020: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_inv.cpp_CInventory_ctor_FUN_004fd020
//   XREF to: Stack[0x4] (READ)
// 004fd024: MOV dword ptr [EAX + 0x32c],0x0
// 004fd02e: MOV dword ptr [EAX + 0x330],0x0
// 004fd038: MOV dword ptr [EAX + 0x334],0x0
// 004fd042: MOV dword ptr [EAX],0x42c80000
// 004fd048: MOV dword ptr [EAX + 0x4],0x0
// 004fd04f: MOV dword ptr [EAX + 0x338],0x0
// 004fd059: MOV dword ptr [EAX + 0x33c],0x0
// 004fd063: MOV dword ptr [EAX + 0x340],0x0
// 004fd06d: MOV dword ptr [EAX + 0x44c],0x0
// 004fd077: MOV dword ptr [EAX + 0x450],0x0
// 004fd081: MOV dword ptr [EAX + 0x454],0x0
// 004fd08b: MOV dword ptr [EAX + 0x344],0x0
// 004fd095: MOV byte ptr [EAX + 0x34c],0x0
// 004fd09c: MOV dword ptr [EAX + 0x458],0x0
// 004fd0a6: MOV dword ptr [EAX + 0x45c],0x0
// 004fd0b0: MOV dword ptr [EAX + 0x8],0x0
// 004fd0b7: RET
