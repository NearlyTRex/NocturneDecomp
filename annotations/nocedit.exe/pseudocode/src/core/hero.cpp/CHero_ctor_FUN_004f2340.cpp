// Name: core_hero.cpp_CHero_ctor_FUN_004f2340
// Address: 004f2340
// Address Range: [[004f2340, 004f2467]]
// Convention: __cdecl
// Signature: CHero * __cdecl core_hero_cpp_CHero_ctor_FUN_004f2340(CHero *this_ptr)

#include "nocturne.h"

CHero * __cdecl core_hero_cpp_CHero_ctor_FUN_004f2340(CHero *this_ptr)

{
  CHero *this_ptr_00;
  CHero *pCVar1;
  CHero_ptr_48728 pCVar2;
  CHero_ptr_128824 pCVar3;
  
  pCVar1 = (CHero *)core_charactr_cpp_CCharacter_ctor_FUN_00427e20(&this_ptr->base);
  pCVar2 = core_path_cpp_CPathMap_ctor_FUN_00546450(&pCVar1->path_map);
  pCVar3 = core_inv_cpp_CInventory_ctor_FUN_004fd020(&ADJ(pCVar2)->inventory);
  this_ptr_00 = ADJ(pCVar3);
  pCVar3->owner = (CDemonActor *)this_ptr_00;
  ADJ(pCVar3)->base.base.vtable._ub = &g_CHeroVTable;
  memset(&ADJ(pCVar3)->player_input,0,0x2c);
  ADJ(pCVar3)->invincibility_timer = 0.0;
  ADJ(pCVar3)->base.collision_cylinder_height = 0.6;
  ADJ(pCVar3)->base.collision_cylinder_radius = 0.9;
  ADJ(pCVar3)->base.ai_detection_range_min = 1e+06;
  ADJ(pCVar3)->base.ai_detection_range_max = 1e+06;
  ADJ(pCVar3)->base.collision_cylinder_bottom = 1.6;
  ADJ(pCVar3)->base.collision_cylinder_top = 6.0;
  ADJ(pCVar3)->control_type = HERO_CONTROL_AI;
  ADJ(pCVar3)->aim_mode = AIM_MODE_AUTO;
  ADJ(pCVar3)->door_to_open = (CDoor *)0x0;
  ADJ(pCVar3)->object_to_pick_up = (CDemonActor *)0x0;
  ADJ(pCVar3)->pushed_object = (CBoxActor *)0x0;
  ADJ(pCVar3)->lever_to_pull = (CLever *)0x0;
  ADJ(pCVar3)->ladder_to_climb = (CLadder *)0x0;
  ADJ(pCVar3)->nearby_interactive_actor = (CDemonActor *)0x0;
  ADJ(pCVar3)->target_actor = (CDemonActor *)0x0;
  ADJ(pCVar3)->is_wearing_gas_mask = 0;
  core_hero_cpp_CHero_createDefaultWeapon_FUN_004f2a30(this_ptr_00);
  ADJ(pCVar3)->ai_task = HERO_TASK_KILL;
  ADJ(pCVar3)->base.show_in_editor = 0;
  ADJ(pCVar3)->base.health_bar_mode = 1;
  return this_ptr_00;
}
