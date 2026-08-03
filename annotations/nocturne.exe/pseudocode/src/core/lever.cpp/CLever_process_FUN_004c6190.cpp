// Name: core_lever.cpp_CLever_process_FUN_004c6190
// Address: 004c6190
// Address Range: [[004c6190, 004c638c]]
// Convention: __cdecl
// Signature: void __cdecl core_lever_cpp_CLever_process_FUN_004c6190(CLever *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_lever_cpp_CLever_process_FUN_004c6190(CLever *this_ptr,float delta_time)

{
  float fVar1;
  CLever *this_ptr_00;
  int iVar2;
  int iVar3;
  char *commands;
  
  if (this_ptr->moving == 0) goto LAB_004c6314;
  if (this_ptr->move_to_pct <= this_ptr->param) {
    fVar1 = this_ptr->param - delta_time * (float)6;
    this_ptr->param = fVar1;
    if (fVar1 < this_ptr->move_to_pct) {
      this_ptr->moving = 0;
      this_ptr->param = this_ptr->move_to_pct;
      if ((this_ptr->momentary_flag != 0) && (this_ptr->param < (float)0.10000000000000001)) {
        commands = this_ptr->off_event;
        goto LAB_004c621d;
      }
    }
  }
  else {
    fVar1 = delta_time * (float)6 + this_ptr->param;
    this_ptr->param = fVar1;
    if (this_ptr->move_to_pct < fVar1) {
      this_ptr->moving = 0;
      this_ptr->param = this_ptr->move_to_pct;
      if ((this_ptr->momentary_flag != 0) && ((float)0.90000000000000002 < this_ptr->param)) {
        commands = this_ptr->on_event;
LAB_004c621d:
        core_event_cpp_CEventList_executeCommands_FUN_0047ab70(0x01C03A10,commands);
      }
    }
  }
  if (this_ptr->linked_lever != (CLever *)0x0) {
    core_lever_cpp_CLever_setState_FUN_004c6390(this_ptr->linked_lever,this_ptr->param);
  }
  iVar2 = 0;
  iVar3 = 0;
  while (iVar3 < g_CDemonSet_PTR_005be368->actor_count) {
    this_ptr_00 = (CLever *)
                  core_actor_cpp_castToClassHash_FUN_0040d890
                            (*(CDemonActor **)((int)g_CDemonSet_PTR_005be368->actors + iVar2),
                             g_CLeverActorType_01cc3628.name_hash);
    if ((this_ptr_00 == (CLever *)0x0) || (this_ptr != this_ptr_00->linked_lever)) {
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    }
    else {
      core_lever_cpp_CLever_setState_FUN_004c6390(this_ptr_00,this_ptr_00->linked_lever->param);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    }
  }
LAB_004c6314:
  if (this_ptr->momentary_flag == 0) {
    if ((this_ptr->param < (float)0.10000000000000001) && (this_ptr->off_event[0] != '\0')) {
      core_event_cpp_CEventList_executeCommands_FUN_0047ab70(0x01C03A10,this_ptr->off_event);
    }
    if (((float)0.90000000000000002 < this_ptr->param) && (this_ptr->on_event[0] != '\0')) {
      core_event_cpp_CEventList_executeCommands_FUN_0047ab70(0x01C03A10,this_ptr->on_event);
      return;
    }
  }
  return;
}
