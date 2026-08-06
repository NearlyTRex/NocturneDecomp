// Name: core_door.cpp_CDoor_getMoveType_FUN_004564b0
// Address: 004564b0
// Address Range: [[004564b0, 0045664e]]
// Convention: __cdecl
// Signature: int __cdecl core_door_cpp_CDoor_getMoveType_FUN_004564b0(CDoor *this_ptr,CDemonActor *opener)

#include "nocturne.h"

int __cdecl core_door_cpp_CDoor_getMoveType_FUN_004564b0(CDoor *this_ptr,CDemonActor *opener)

{
  char *message;
  CVector3f local_18;
  
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
            (&this_ptr->base,&local_18,&(opener->location).position);
  message = support_newmsg_cpp_getLocalizedString_FUN_004ee370("The door is locked from the other side.");
  if (local_18.z <= 0.0) {
    if ((this_ptr->allowed_sides & 2) != 0) goto LAB_0045663d;
    if (this_ptr->allowed_sides != 0) {
      core_door_cpp_CDoor_onLocked_FUN_00456650(this_ptr);
      core_game_cpp_CGame_displayMessage_FUN_0049aa30(g_CGame_PTR_005b9354,message,5.0);
      return 0;
    }
  }
  else {
    if ((this_ptr->allowed_sides & 1) != 0) {
LAB_0045663d:
      switch(this_ptr->door_type) {
      case DOOR_TYPE_SWING:
        if (this_ptr->door_swing != 0) {
          local_18.z = -local_18.z;
        }
        if (this_ptr->door_state != DOOR_STATE_CLOSED) {
          local_18.z = -local_18.z;
        }
        if (0.0 <= local_18.z) {
          return 2;
        }
        return 3;
      case DOOR_TYPE_VERTICAL:
        if (this_ptr->door_state == DOOR_STATE_CLOSED) {
          return 6;
        }
        return 7;
      case DOOR_TYPE_SLIDE:
        goto switchD_00456648_caseD_2;
      case DOOR_TYPE_TILT:
        return 1;
      default:
        g_CurrentFilename = "..\\core\\door.cpp";
        g_CurrentLineNumber = 926;
        core_main_c_displayErrorAndQuit_FUN_004c8440("CDoor::getMoveType - invalid door!");
        return 0;
      }
    }
    if (this_ptr->allowed_sides != 0) {
      core_door_cpp_CDoor_onLocked_FUN_00456650(this_ptr);
      core_game_cpp_CGame_displayMessage_FUN_0049aa30(g_CGame_PTR_005b9354,message,5.0);
    }
  }
  return 0;
switchD_00456648_caseD_2:
  if (this_ptr->door_side != 1) {
    local_18.z = -local_18.z;
  }
  if (this_ptr->door_state != DOOR_STATE_CLOSED) {
    local_18.z = -local_18.z;
  }
  if (0.0 <= local_18.z) {
    return 4;
  }
  return 5;
}
