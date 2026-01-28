// Name: core_lever.cpp_FUN_00505390
// Address: 00505390
// Address Range: [[00505390, 0050542d]]
// Convention: unknown
// Signature: void core_lever_cpp_FUN_00505390(void)

#include "nocturne.h"

/* Signature: byte actors_other_lever.cpp_FUN_00505390(uint param_1, uint param_2)
    */

void core_lever_cpp_FUN_00505390(void)

{
  CDemonActor *in_stack_00000004;
  int *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150(in_stack_00000004,in_stack_00000008);
  *in_stack_00000008 = *in_stack_00000008 + 0xb;
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"A lever will strobe the on event when the lever switches to the on state.");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"Likewise, the off event will be strobed when the lever switches to the off state.");
  *in_stack_00000008 = *in_stack_00000008 + 0xb;
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"If the momentary flag is TRUE, then the on.off events will constantly be raised");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"as long as the lever is in the appropriate state.");
  *in_stack_00000008 = *in_stack_00000008 + 0xb;
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"Linked levers behave as one.  There is no master or slave lever,");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"All linked levers always have the same value.  The first lever");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"to change in a network of linked levers will immediately update");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"all levers in the group.");
  return;
}
