// Name: core_lever.cpp_CLever_process_FUN_004e1d70
// Address: 004e1d70
// Address Range: [[004e1d70, 004e1f6c]]
// Convention: __cdecl
// Signature: void __cdecl core_lever_cpp_CLever_process_FUN_004e1d70(CLever *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_lever_cpp_CLever_process_FUN_004e1d70(CLever *this_ptr,float delta_time)

{
  float fVar1;
  CLever *this_ptr_00;
  int iVar2;
  int iVar3;
  char *commands;
  
  if (this_ptr->moving == 0) goto LAB_004e1ef4;
  if (this_ptr->move_to_pct <= this_ptr->param) {
    fVar1 = this_ptr->param - delta_time * (float)_DAT_005dbf3a;
    this_ptr->param = fVar1;
    if (fVar1 < this_ptr->move_to_pct) {
      this_ptr->moving = 0;
      this_ptr->param = this_ptr->move_to_pct;
      if ((this_ptr->momentary_flag != 0) && (this_ptr->param < (float)_DAT_005dbf42)) {
        commands = this_ptr->off_event;
        goto LAB_004e1dfd;
      }
    }
  }
  else {
    fVar1 = delta_time * (float)_DAT_005dbf3a + this_ptr->param;
    this_ptr->param = fVar1;
    if (this_ptr->move_to_pct < fVar1) {
      this_ptr->moving = 0;
      this_ptr->param = this_ptr->move_to_pct;
      if ((this_ptr->momentary_flag != 0) && ((float)_DAT_005dbf4a < this_ptr->param)) {
        commands = this_ptr->on_event;
LAB_004e1dfd:
        core_event_cpp_CEventList_executeCommands_FUN_004894f0(0x01C38BC0,commands);
      }
    }
  }
  if (this_ptr->linked_lever != (CLever *)0x0) {
    core_lever_cpp_CLever_setState_FUN_004e1f70(this_ptr->linked_lever,this_ptr->param);
  }
  iVar2 = 0;
  iVar3 = 0;
  while (iVar3 < g_CDemonSetPtr->actor_count) {
    this_ptr_00 = (CLever *)
                  core_actor_cpp_castToClassHash_FUN_0040c8f0
                            (*(uint *)((int)g_CDemonSetPtr->actors + iVar2),
                             g_CLeverClassInfo.name_hash);
    if ((this_ptr_00 == (CLever *)0x0) || (this_ptr != this_ptr_00->linked_lever)) {
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    }
    else {
      core_lever_cpp_CLever_setState_FUN_004e1f70(this_ptr_00,this_ptr_00->linked_lever->param);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    }
  }
LAB_004e1ef4:
  if (this_ptr->momentary_flag == 0) {
    if ((this_ptr->param < (float)_DAT_005dbf42) && (this_ptr->off_event[0] != '\0')) {
      core_event_cpp_CEventList_executeCommands_FUN_004894f0(0x01C38BC0,this_ptr->off_event);
    }
    if (((float)_DAT_005dbf4a < this_ptr->param) && (this_ptr->on_event[0] != '\0')) {
      core_event_cpp_CEventList_executeCommands_FUN_004894f0(0x01C38BC0,this_ptr->on_event);
      return;
    }
  }
  return;
}
