// Name: core_door.cpp_CDoor_getMoveType_FUN_00460630
// Address: 00460630
// Address Range: [[00460630, 004607fe]]
// Convention: __cdecl
// Signature: int __cdecl core_door_cpp_CDoor_getMoveType_FUN_00460630(CDoor *this_ptr,CDemonActor *opener)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_door_cpp_CDoor_getMoveType_FUN_00460630(CDoor *this_ptr,CDemonActor *opener)

{
  char *message;
  byte bVar1;
  int in_stack_0000000c;
  float afStackY_1010 [1015];
  uint local_28;
  uint local_1c;
  float local_14;
  
  bVar1 = 0;
  core_actor_cpp_FUN_00408de0(this_ptr,&opener->field_0x20);
  local_1c = local_28;
  *(uint *)(&stack0xffffffe8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffdc + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffec + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffe0 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (in_stack_0000000c == 0) {
    message = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("You cannot enter here.");
    if (local_14 <= 0.0) {
      if ((this_ptr->allowed_sides & DOOR_OPEN_SIDES_NEG_Z) == DOOR_OPEN_SIDES_NEITHER) {
        if (this_ptr->allowed_sides != DOOR_OPEN_SIDES_NEITHER) {
          core_door_cpp_CDoor_onLocked_FUN_00460800(this_ptr);
          core_game_cpp_CGame_displayMessage_FUN_004b31a0(g_CGamePtr,message,5.0);
          return 0;
        }
        return 0;
      }
    }
    else if ((this_ptr->allowed_sides & DOOR_OPEN_SIDES_POS_Z) == DOOR_OPEN_SIDES_NEITHER) {
      if (this_ptr->allowed_sides != DOOR_OPEN_SIDES_NEITHER) {
        core_door_cpp_CDoor_onLocked_FUN_00460800(this_ptr);
        core_game_cpp_CGame_displayMessage_FUN_004b31a0(g_CGamePtr,message,5.0);
      }
      return 0;
    }
  }
  switch(this_ptr->door_type) {
  case DOOR_TYPE_SWING:
    break;
  case DOOR_TYPE_VERTICAL:
    if (this_ptr->door_state == DOOR_STATE_CLOSED) {
      return 6;
    }
    return 7;
  case DOOR_TYPE_SLIDE:
    if (this_ptr->door_side != DOOR_SIDE_RIGHT) {
      local_14 = -local_14;
    }
    if (this_ptr->door_state != DOOR_STATE_CLOSED) {
      local_14 = -local_14;
    }
    if (0.0 <= local_14) {
      return 4;
    }
    return 5;
  case DOOR_TYPE_TILT:
    return 1;
  default:
    _DAT_01d046a0 = "..\\core\\door.cpp";
    _DAT_01d046a4 = 0x3de;
    core_main_c_FUN_004e4500("CDoor::getMoveType - invalid door!");
    return 0;
  }
  if (this_ptr->door_swing != DOOR_SWING_CLOCKWISE) {
    local_14 = -local_14;
  }
  if (this_ptr->door_state != DOOR_STATE_CLOSED) {
    local_14 = -local_14;
  }
  if (0.0 <= local_14) {
    return 2;
  }
  return 3;
}
