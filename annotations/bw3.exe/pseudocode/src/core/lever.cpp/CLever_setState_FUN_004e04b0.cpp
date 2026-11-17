// Name: core_lever.cpp_CLever_setState_FUN_004e04b0
// Address: 004e04b0
// Address Range: [[004e04b0, 004e0620]]
// Convention: __cdecl
// Signature: void __cdecl core_lever_cpp_CLever_setState_FUN_004e04b0(CLever *this_ptr,float new_state,int silent)

#include "nocturne.h"

void __cdecl core_lever_cpp_CLever_setState_FUN_004e04b0(CLever *this_ptr,float new_state,int silent)

{
  CLever *this_ptr_00;
  int iVar1;
  int iVar2;
  
  if (this_ptr->param != new_state) {
    if (g_CDemonMission_PTR_00600530->is_in_editor == 0) {
      if ((new_state <= 0.0) && (0.0 < this_ptr->param)) {
        core_event_cpp_CEventList_executeCommands_FUN_0048c150
                  (g_CEventList_PTR_005fba60,this_ptr->off_event);
      }
      if ((1.0 <= new_state) && (this_ptr->param < 1.0)) {
        core_event_cpp_CEventList_executeCommands_FUN_0048c150
                  (g_CEventList_PTR_005fba60,this_ptr->on_event);
      }
    }
    if ((silent == 0) &&
       (((0.0 < new_state && (this_ptr->param <= 0.0)) ||
        (((int)new_state < 0x3f800000 && (1.0 <= this_ptr->param)))))) {
      (*((this_ptr->base).vtable._ub)->playSound)(&this_ptr->base,this_ptr->sound);
    }
    this_ptr->param = new_state;
    if (this_ptr->linked_lever != (CLever *)0x0) {
      core_lever_cpp_CLever_setState_FUN_004e04b0(this_ptr->linked_lever,new_state,silent);
    }
    iVar2 = 0;
    for (iVar1 = 0; iVar1 < g_CDemonSetPtr->actor_count; iVar1 = iVar1 + 1) {
      this_ptr_00 = (CLever *)
                    core_actor_cpp_castToClassHash_FUN_0040c840
                              (*(CDemonActor **)((int)g_CDemonSetPtr->actors + iVar2),
                               g_CLeverClassInfo.name_hash);
      if ((this_ptr_00 != (CLever *)0x0) && (this_ptr == this_ptr_00->linked_lever)) {
        core_lever_cpp_CLever_setState_FUN_004e04b0(this_ptr_00,new_state,silent);
      }
      iVar2 = iVar2 + 4;
    }
  }
  return;
}
