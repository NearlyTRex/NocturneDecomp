// Name: core_lever.cpp_CLever_FUN_00504b20
// Address: 00504b20
// Address Range: [[00504b20, 00504c88]]
// Convention: __cdecl
// Signature: void __cdecl core_lever_cpp_CLever_FUN_00504b20(CLever *this_ptr)

#include "nocturne.h"

void __cdecl core_lever_cpp_CLever_FUN_00504b20(CLever *this_ptr)

{
  CLever *this_ptr_00;
  int iVar1;
  int iVar2;
  float in_stack_00000008;
  float in_stack_00000010;
  
  if (this_ptr->param != in_stack_00000008) {
    if (*(int *)(g_CDemonMissionPtr->unk1 + 4) == 0) {
      if ((in_stack_00000008 <= 0.0) && (0.0 < this_ptr->param)) {
        core_event_cpp_CEventList_FUN_004aabe0(g_CEventListPtr);
      }
      if ((1.0 <= in_stack_00000008) && (this_ptr->param < 1.0)) {
        core_event_cpp_CEventList_FUN_004aabe0(g_CEventListPtr);
      }
    }
    if (((0.0 < in_stack_00000008) && (this_ptr->param <= 0.0)) ||
       (((int)in_stack_00000008 < 0x3f800000 && (1.0 <= this_ptr->param)))) {
      (*((this_ptr->base).vtable._ub)->playSound)(&this_ptr->base,this_ptr->sound);
    }
    this_ptr->param = in_stack_00000010;
    if ((CLever *)this_ptr->linked_lever != (CLever *)0x0) {
      core_lever_cpp_CLever_FUN_00504b20((CLever *)this_ptr->linked_lever);
    }
    iVar1 = 0;
    for (iVar2 = 0; iVar2 < (int)g_CDemonSetPtr->actor_list_ptr; iVar2 = iVar2 + 1) {
      this_ptr_00 = (CLever *)
                    core_actor_cpp_castToClassHash_FUN_0040c790
                              (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar1),
                               g_CLeverClassInfo.name_hash);
      if ((this_ptr_00 != (CLever *)0x0) && (this_ptr == (CLever *)this_ptr_00->linked_lever)) {
        core_lever_cpp_CLever_FUN_00504b20(this_ptr_00);
      }
      iVar1 = iVar1 + 4;
    }
  }
  return;
}
