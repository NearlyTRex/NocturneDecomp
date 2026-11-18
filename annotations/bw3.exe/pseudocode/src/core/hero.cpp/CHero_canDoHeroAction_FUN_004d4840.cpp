// Name: core_hero.cpp_CHero_canDoHeroAction_FUN_004d4840
// Address: 004d4840
// Address Range: [[004d4840, 004d48af] [004d48b3, 004d48c5]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_canDoHeroAction_FUN_004d4840(CHero *this_ptr,int action_type)

#include "nocturne.h"

int __cdecl core_hero_cpp_CHero_canDoHeroAction_FUN_004d4840(CHero *this_ptr,int action_type)

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
    case 4:
    case 6:
    case 7:
    case 8:
    case 9:
    case 0xb:
    case 0xc:
      iVar1 = core_charactr_cpp_CCharacter_isCarryingAnything_FUN_00432060(&this_ptr->base);
      if (iVar1 == 0) {
        return 1;
      }
      break;
    case 1:
    case 2:
    case 3:
      return 1;
    case 10:
      iVar1 = core_charactr_cpp_CCharacter_isCarryingAnything_FUN_00432060(&this_ptr->base);
      if (iVar1 == 0) {
        return 1;
      }
    }
  }
  return 0;
}
