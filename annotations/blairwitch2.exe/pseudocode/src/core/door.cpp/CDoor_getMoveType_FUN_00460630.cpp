// Name: core_door.cpp_CDoor_getMoveType_FUN_00460630
// Address: 00460630
// Address Range: [[00460630, 004607fe]]
// Convention: __cdecl
// Signature: int __cdecl core_door_cpp_CDoor_getMoveType_FUN_00460630(CDoor *this_ptr,CDemonActor *opener,int ignore_lock)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_door_cpp_CDoor_getMoveType_FUN_00460630(CDoor *this_ptr,CDemonActor *opener,int ignore_lock)

{
  char *message;
  byte bVar1;
  float afStackY_1010 [1015];
  CVector3f local_28;
  float local_1c;
  float afStack_18 [2];
  
  bVar1 = 0;
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
            (&this_ptr->base,&(opener->location).position,&local_28);
  local_1c = local_28.x;
  afStack_18[(uint)bVar1 * -2] = *(float *)((int)&local_28 + (uint)bVar1 * -8 + 4);
  afStack_18[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1] =
       *(float *)((int)&local_28 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  if (ignore_lock == 0) {
    message = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("You cannot enter here.");
    if (afStack_18[1] <= 0.0) {
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
      afStack_18[1] = -afStack_18[1];
    }
    if (this_ptr->door_state != DOOR_STATE_CLOSED) {
      afStack_18[1] = -afStack_18[1];
    }
    if (0.0 <= afStack_18[1]) {
      return 4;
    }
    return 5;
  case DOOR_TYPE_TILT:
    return 1;
  default:
    _DAT_01d046a0 = "..\\core\\door.cpp";
    _DAT_01d046a4 = 0x3de;
    core_main_c_displayErrorAndQuit_FUN_004e4500("CDoor::getMoveType - invalid door!");
    return 0;
  }
  if (this_ptr->door_swing != DOOR_SWING_CLOCKWISE) {
    afStack_18[1] = -afStack_18[1];
  }
  if (this_ptr->door_state != DOOR_STATE_CLOSED) {
    afStack_18[1] = -afStack_18[1];
  }
  if (0.0 <= afStack_18[1]) {
    return 2;
  }
  return 3;
}
