// Name: core_lever.cpp_CLever_setState_FUN_00504b20
// Address: 00504b20
// MANUAL RECONSTRUCTION
// Address Range: [[00504b20, 00504c88]]
// Convention: __cdecl
// Signature: void __cdecl core_lever_cpp_CLever_setState_FUN_00504b20(CLever *this_ptr,float new_state)

#include "nocturne.h"

void __cdecl core_lever_cpp_CLever_setState_FUN_00504b20(CLever *this_ptr,float new_state)

{
  CLever *this_ptr_00;
  int iVar2;
  
  if (this_ptr->param != new_state) {
    if (g_CDemonMissionPtr->is_in_editor == 0) {
      if ((new_state <= 0.0) && (0.0 < this_ptr->param)) {
        core_event_cpp_CEventList_executeCommands_FUN_004aabe0(g_CEventListPtr,this_ptr->off_event);
      }
      if ((1.0 <= new_state) && (this_ptr->param < 1.0)) {
        core_event_cpp_CEventList_executeCommands_FUN_004aabe0(g_CEventListPtr,this_ptr->on_event);
      }
    }
    if (((0.0 < new_state) && (this_ptr->param <= 0.0)) ||
       (((int)new_state < 0x3f800000 && (1.0 <= this_ptr->param)))) {
      (*((this_ptr->base).vtable._ub)->playSound)(&this_ptr->base,this_ptr->sound);
    }
    this_ptr->param = new_state;
    if ((CLever *)this_ptr->linked_lever != (CLever *)0x0) {
      core_lever_cpp_CLever_setState_FUN_00504b20((CLever *)this_ptr->linked_lever,new_state);
    }
    for (iVar2 = 0; iVar2 < g_CDemonSetPtr->actor_count; iVar2 = iVar2 + 1) {
      this_ptr_00 = (CLever *)
                    core_actor_cpp_castToClassHash_FUN_0040c790
                              (g_CDemonSetPtr->actors[iVar2],
                               g_CLeverClassInfo.name_hash);
      if ((this_ptr_00 != (CLever *)0x0) && (this_ptr == (CLever *)this_ptr_00->linked_lever)) {
        core_lever_cpp_CLever_setState_FUN_00504b20(this_ptr_00,new_state);
      }
    }
  }
  return;
}
