// Name: core_lever.cpp_FUN_004e1f70
// Address: 004e1f70
// Address Range: [[004e1f70, 004e20db]]
// Convention: __cdecl
// Signature: void __cdecl core_lever_cpp_FUN_004e1f70(CLever *this_ptr,float new_state)

#include "nocturne.h"

void __cdecl core_lever_cpp_FUN_004e1f70(CLever *this_ptr,float new_state)

{
  CLever *this_ptr_00;
  int iVar1;
  int iVar2;
  
  if (*(float *)&this_ptr->field_0x438 != new_state) {
    if (*(int *)(0x01D182F0 + 0x1008) == 0) {
      if ((new_state <= 0.0) && (0.0 < *(float *)&this_ptr->field_0x438)) {
        core_event_cpp_CEventList_executeCommands_FUN_004894f0(0x01C38BC0,&this_ptr->field_0x4a0);
      }
      if ((1.0 <= new_state) && (*(float *)&this_ptr->field_0x438 < 1.0)) {
        core_event_cpp_CEventList_executeCommands_FUN_004894f0(0x01C38BC0,&this_ptr->field_0x43c);
      }
    }
    if (((0.0 < new_state) && (*(float *)&this_ptr->field_0x438 <= 0.0)) ||
       (((int)new_state < 0x3f800000 && (1.0 <= *(float *)&this_ptr->field_0x438)))) {
      (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x34))(this_ptr,&this_ptr->field_0x504);
    }
    *(float *)&this_ptr->field_0x438 = new_state;
    if (*(CLever **)&this_ptr->field_0x56c != (CLever *)0x0) {
      core_lever_cpp_FUN_004e1f70(*(CLever **)&this_ptr->field_0x56c,new_state);
    }
    iVar1 = 0;
    for (iVar2 = 0; iVar2 < *(int *)&g_CDemonSetPtr->field_0x14d164; iVar2 = iVar2 + 1) {
      this_ptr_00 = (CLever *)
                    core_actor_cpp_castToClassHash_FUN_0040c8f0
                              (*(uint *)(&g_CDemonSetPtr->field_0x14d168 + iVar1),
                               g_CLeverClassInfo.name_hash);
      if ((this_ptr_00 != (CLever *)0x0) && (this_ptr == *(CLever **)&this_ptr_00->field_0x56c)) {
        core_lever_cpp_FUN_004e1f70(this_ptr_00,new_state);
      }
      iVar1 = iVar1 + 4;
    }
  }
  return;
}
