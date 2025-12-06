// Name: core_hostage.cpp_CHostage_FUN_004f63e0
// Address: 004f63e0
// Address Range: [[004f63e0, 004f6442]]
// Convention: __cdecl
// Signature: int core_hostage.cpp_CHostage_FUN_004f63e0(CHostage * this_ptr)

#include "nocturne.h"

int __cdecl core_hostage_cpp_CHostage_FUN_004f63e0(CHostage *this_ptr)

{
  CDemonActor *in_stack_00000008;
  int in_stack_0000000c;
  uint in_stack_00000010;
  
  (this_ptr->base_npc).base_character.grabbed_type = in_stack_0000000c;
  (this_ptr->base_npc).base_character.grabbed_by = in_stack_00000008;
  if (in_stack_0000000c == 0) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base_npc).base_character.model.motion_controller,4,1);
    core_event_cpp_CEventList_FUN_004aabe0(g_CEventListPtr);
  }
  this_ptr->field8_0x1fae0[0xc] = '\0';
  this_ptr->field8_0x1fae0[0xd] = '\0';
  this_ptr->field8_0x1fae0[0xe] = '@';
  this_ptr->field8_0x1fae0[0xf] = '@';
  *(uint *)(this_ptr->field8_0x1fae0 + 8) = in_stack_00000010;
  return 1;
}
