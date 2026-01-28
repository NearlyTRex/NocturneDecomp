// Name: core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150
// Address: 0040d150
// Address Range: [[0040d150, 0040d1d9]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150(CDemonActor *this_ptr,int *y_pos)

#include "nocturne.h"

void __cdecl
core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150(CDemonActor *this_ptr,int *y_pos)

{
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"Use standard slew keys to move:");
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"  Arrow keys move around");
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"  Q/A move up/down");
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"  End/PgDn rotate hozontally (heading)");
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"  F5/F8 Pitch");
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"  Home/PgUp bank");
  *y_pos = *y_pos + 0xb;
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"Use right mouse button to move to the mouse cursor.");
  *y_pos = *y_pos + 0xb;
  core_actor_cpp_drawTwoColumnPropertyLine_FUN_0040d1e0
            (y_pos,"G","Position to ground.");
  return;
}
