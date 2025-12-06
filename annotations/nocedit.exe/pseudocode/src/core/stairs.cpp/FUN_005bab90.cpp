// Name: core_stairs.cpp_FUN_005bab90
// Address: 005bab90
// Address Range: [[005bab90, 005babe3]]
// Convention: unknown
// Signature: undefined core_stairs.cpp_FUN_005bab90()

#include "nocturne.h"

/* Signature: byte actors_other_stairs.cpp_FUN_005bab90(uint param_1, uint
   param_2) */

void core_stairs_cpp_FUN_005bab90(void)

{
  CDemonActor *in_stack_00000004;
  int *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150(in_stack_00000004,in_stack_00000008);
  *in_stack_00000008 = *in_stack_00000008 + 0xb;
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"With CTRL held down:");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"  Left/right adjusts width");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"  Q/A adjusts rise");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"  Up/Down adjusts run");
  return;
}
