// Name: core_door.cpp_CDoor_getMoveType_FUN_00478b40
// Address: 00478b40
// Address Range: [[00478b40, 00478d0e]]
// Convention: __cdecl
// Signature: int __cdecl core_door_cpp_CDoor_getMoveType_FUN_00478b40(CDoor *this_ptr,CDemonActor *opener)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_door_cpp_CDoor_getMoveType_FUN_00478b40(CDoor *this_ptr,CDemonActor *opener)

{
  char *message;
  byte bVar1;
  int in_stack_0000000c;
  float afStackY_1010 [1015];
  uint local_28;
  uint local_1c;
  float local_14;
  
  bVar1 = 0;
  core_actor_cpp_FUN_00408bb0(this_ptr,&opener->field_0x20);
  local_1c = local_28;
  *(uint *)(&stack0xffffffe8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffdc + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffec + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffe0 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (in_stack_0000000c == 0) {
    message = support_newmsg_cpp_getLocalizedString_FUN_00531090("The door is locked.");
    if (local_14 <= 0.0) {
      if ((this_ptr->field_0x9d8 & 2) == 0) {
        if (*(int *)&this_ptr->field_0x9d8 != 0) {
          core_door_cpp_FUN_00478d10(this_ptr);
          core_game_cpp_CGame_displayMessage_FUN_004cc190(g_CGamePtr,message,5.0);
          return 0;
        }
        return 0;
      }
    }
    else if ((this_ptr->field_0x9d8 & 1) == 0) {
      if (*(int *)&this_ptr->field_0x9d8 != 0) {
        core_door_cpp_FUN_00478d10(this_ptr);
        core_game_cpp_CGame_displayMessage_FUN_004cc190(g_CGamePtr,message,5.0);
      }
      return 0;
    }
  }
  switch(*(uint *)&this_ptr->field_0x2d8) {
  case 0:
    break;
  case 1:
    if (*(int *)&this_ptr->field_0x2e0 == 0) {
      return 6;
    }
    return 7;
  case 2:
    if (*(int *)&this_ptr->field_0x2dc != 1) {
      local_14 = -local_14;
    }
    if (*(int *)&this_ptr->field_0x2e0 != 0) {
      local_14 = -local_14;
    }
    if (0.0 <= local_14) {
      return 4;
    }
    return 5;
  case 3:
    return 1;
  default:
    _DAT_01d1d400 = "..\\core\\door.cpp";
    _DAT_01d1d404 = 0x3de;
    core_main_c_FUN_005030e0("CDoor::getMoveType - invalid door!");
    return 0;
  }
  if (*(int *)&this_ptr->field_0x2e4 != 0) {
    local_14 = -local_14;
  }
  if (*(int *)&this_ptr->field_0x2e0 != 0) {
    local_14 = -local_14;
  }
  if (0.0 <= local_14) {
    return 2;
  }
  return 3;
}
