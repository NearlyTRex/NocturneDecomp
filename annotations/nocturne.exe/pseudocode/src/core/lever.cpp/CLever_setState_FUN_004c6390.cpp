// Name: core_lever.cpp_CLever_setState_FUN_004c6390
// Address: 004c6390
// Address Range: [[004c6390, 004c64f8]]
// Convention: __cdecl
// Signature: void __cdecl core_lever_cpp_CLever_setState_FUN_004c6390(CLever *this_ptr,float new_state)

#include "nocturne.h"

void __cdecl core_lever_cpp_CLever_setState_FUN_004c6390(CLever *this_ptr,float new_state)

{
  CLever *this_ptr_00;
  int iVar1;
  int iVar2;
  
  if (this_ptr->param != new_state) {
    if (*(int *)(0x01CC9450 + 4) == 0) {
      if ((new_state <= 0.0) && (0.0 < this_ptr->param)) {
        core_event_cpp_CEventList_executeCommands_FUN_0047ab70(0x01C03A10,this_ptr->off_event);
      }
      if ((1.0 <= new_state) && (this_ptr->param < 1.0)) {
        core_event_cpp_CEventList_executeCommands_FUN_0047ab70(0x01C03A10,this_ptr->on_event);
      }
    }
    if (((0.0 < new_state) && (this_ptr->param <= 0.0)) ||
       (((int)new_state < 0x3f800000 && (1.0 <= this_ptr->param)))) {
      (*((this_ptr->base).vtable._ub)->playSound)(&this_ptr->base,this_ptr->sound);
    }
    this_ptr->param = new_state;
    if (this_ptr->linked_lever != (CLever *)0x0) {
      core_lever_cpp_CLever_setState_FUN_004c6390(this_ptr->linked_lever,new_state);
    }
    iVar1 = 0;
    for (iVar2 = 0; iVar2 < *(int *)(0x01E57284 + 0x14cd6c); iVar2 = iVar2 + 1) {
      this_ptr_00 = (CLever *)
                    core_actor_cpp_castToClassHash_FUN_0040d890
                              (*(CDemonActor **)(iVar1 + 0x14cd70 + 0x01E57284),
                               g_CLeverActorType_01cc3628.name_hash);
      if ((this_ptr_00 != (CLever *)0x0) && (this_ptr == this_ptr_00->linked_lever)) {
        core_lever_cpp_CLever_setState_FUN_004c6390(this_ptr_00,new_state);
      }
      iVar1 = iVar1 + 4;
    }
  }
  return;
}
