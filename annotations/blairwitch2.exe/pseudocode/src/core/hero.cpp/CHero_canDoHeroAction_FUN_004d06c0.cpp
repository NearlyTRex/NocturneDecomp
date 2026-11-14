// Name: core_hero.cpp_CHero_canDoHeroAction_FUN_004d06c0
// Address: 004d06c0
// Address Range: [[004d06c0, 004d0745]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_canDoHeroAction_FUN_004d06c0(CHero *this_ptr,int action_type)

#include "nocturne.h"

int __cdecl core_hero_cpp_CHero_canDoHeroAction_FUN_004d06c0(CHero *this_ptr,int action_type)

{
  int iVar1;
  
  if ((((this_ptr->nearby_interactive_actor == (CDemonActor *)0x0) &&
       (this_ptr->door_to_open == (CDoor *)0x0)) &&
      (this_ptr->object_to_pick_up == (CDemonActor *)0x0)) &&
     (((this_ptr->pushed_object == (CBoxActor *)0x0 && (this_ptr->lever_to_pull == (CLever *)0x0))
      && ((this_ptr->ladder_to_climb == (CLadder *)0x0 &&
          (this_ptr->target_actor == (CDemonActor *)0x0)))))) {
    switch(action_type) {
    case 0:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 10:
    case 0xb:
      iVar1 = core_charactr_cpp_CCharacter_isCarryingAnything_FUN_00429180(&this_ptr->base);
      if (iVar1 == 0) {
        return 1;
      }
      break;
    case 1:
    case 2:
      return 1;
    case 9:
      iVar1 = core_charactr_cpp_CCharacter_isCarryingAnything_FUN_00429180(&this_ptr->base);
      if (iVar1 == 0) {
        return 1;
      }
    }
  }
  return 0;
}
