// Name: core_lever.cpp_CLever_showEditorHelp_FUN_00505390
// Address: 00505390
// Address Range: [[00505390, 0050542d]]
// Convention: __cdecl
// Signature: void __cdecl core_lever_cpp_CLever_showEditorHelp_FUN_00505390(CLever *this_ptr,int *y_pos)

#include "nocturne.h"

void __cdecl core_lever_cpp_CLever_showEditorHelp_FUN_00505390(CLever *this_ptr,int *y_pos)

{
  core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150(&this_ptr->base,y_pos);
  *y_pos = *y_pos + 0xb;
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"A lever will strobe the on event when the lever switches to the on state.");
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"Likewise, the off event will be strobed when the lever switches to the off state.");
  *y_pos = *y_pos + 0xb;
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"If the momentary flag is TRUE, then the on.off events will constantly be raised");
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"as long as the lever is in the appropriate state.");
  *y_pos = *y_pos + 0xb;
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"Linked levers behave as one.  There is no master or slave lever,");
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"All linked levers always have the same value.  The first lever");
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"to change in a network of linked levers will immediately update");
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"all levers in the group.");
  return;
}
