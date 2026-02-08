// Name: core_stairs.cpp_CStairs_showEditorHelp_FUN_005bab90
// Address: 005bab90
// Address Range: [[005bab90, 005babe3]]
// Convention: __cdecl
// Signature: void __cdecl core_stairs_cpp_CStairs_showEditorHelp_FUN_005bab90(CStairs *this_ptr,int *y_pos)

#include "nocturne.h"

void __cdecl core_stairs_cpp_CStairs_showEditorHelp_FUN_005bab90(CStairs *this_ptr,int *y_pos)

{
  core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150(&this_ptr->base,y_pos);
  *y_pos = *y_pos + 0xb;
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"With CTRL held down:");
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"  Left/right adjusts width");
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"  Q/A adjusts rise");
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"  Up/Down adjusts run");
  return;
}
