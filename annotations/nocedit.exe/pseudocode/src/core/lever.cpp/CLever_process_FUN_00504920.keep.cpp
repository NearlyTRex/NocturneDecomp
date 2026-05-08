// Name: core_lever.cpp_CLever_process_FUN_00504920
// Address: 00504920
// MANUAL RECONSTRUCTION
// Address Range: [[00504920, 00504b1c]]
// Convention: __cdecl
// Signature: void __cdecl core_lever_cpp_CLever_process_FUN_00504920(CLever *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_lever_cpp_CLever_process_FUN_00504920(CLever *this_ptr,float delta_time)

{
  float fVar1;
  CLever *this_ptr_00;
  int iVar3;
  char *commands;
  
  if (this_ptr->moving == 0) goto LAB_00504aa4;
  if (this_ptr->move_to_pct <= this_ptr->param) {
    fVar1 = this_ptr->param - delta_time * (float)6;
    this_ptr->param = fVar1;
    if (fVar1 < this_ptr->move_to_pct) {
      this_ptr->moving = 0;
      this_ptr->param = this_ptr->move_to_pct;
      if ((this_ptr->momentary_flag != 0) && (this_ptr->param < (float)0.10000000000000001)) {
        commands = this_ptr->off_event;
        goto LAB_005049ad;
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
LAB_005049ad:
        core_event_cpp_CEventList_executeCommands_FUN_004aabe0(g_CEventListPtr,commands);
      }
    }
  }
  if ((CLever *)this_ptr->linked_lever != (CLever *)0x0) {
    core_lever_cpp_CLever_setState_FUN_00504b20((CLever *)this_ptr->linked_lever,this_ptr->param);
  }
  iVar3 = 0;
  while (iVar3 < g_CDemonSetPtr->actor_count) {
    this_ptr_00 = (CLever *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (g_CDemonSetPtr->actors[iVar3],g_CLeverClassInfo.name_hash);
    if ((this_ptr_00 == (CLever *)0x0) || (this_ptr != (CLever *)this_ptr_00->linked_lever)) {
      iVar3 = iVar3 + 1;
    }
    else {
      core_lever_cpp_CLever_setState_FUN_00504b20
                (this_ptr_00,((CLever *)this_ptr_00->linked_lever)->param);
      iVar3 = iVar3 + 1;
    }
  }
LAB_00504aa4:
  if (this_ptr->momentary_flag == 0) {
    if ((this_ptr->param < (float)0.10000000000000001) && (this_ptr->off_event[0] != '\0')) {
      core_event_cpp_CEventList_executeCommands_FUN_004aabe0(g_CEventListPtr,this_ptr->off_event);
    }
    if (((float)0.90000000000000002 < this_ptr->param) && (this_ptr->on_event[0] != '\0')) {
      core_event_cpp_CEventList_executeCommands_FUN_004aabe0(g_CEventListPtr,this_ptr->on_event);
      return;
    }
  }
  return;
}
