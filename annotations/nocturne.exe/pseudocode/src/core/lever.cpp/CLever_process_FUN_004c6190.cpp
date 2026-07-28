// Name: core_lever.cpp_CLever_process_FUN_004c6190
// Address: 004c6190
// Address Range: [[004c6190, 004c638c]]
// Convention: unknown
// Signature: void core_lever_cpp_CLever_process_FUN_004c6190(CLever *param_1,float param_2)

#include "nocturne.h"

void core_lever_cpp_CLever_process_FUN_004c6190(CLever *param_1,float param_2)

{
  float fVar1;
  CLever *this_ptr;
  int iVar2;
  int iVar3;
  char *commands;
  
  if (param_1->moving == 0) goto LAB_004c6314;
  if (param_1->move_to_pct <= param_1->param) {
    fVar1 = param_1->param - param_2 * (float)6;
    param_1->param = fVar1;
    if (fVar1 < param_1->move_to_pct) {
      param_1->moving = 0;
      param_1->param = param_1->move_to_pct;
      if ((param_1->momentary_flag != 0) && (param_1->param < (float)0.10000000000000001)) {
        commands = param_1->off_event;
        goto LAB_004c621d;
      }
    }
  }
  else {
    fVar1 = param_2 * (float)6 + param_1->param;
    param_1->param = fVar1;
    if (param_1->move_to_pct < fVar1) {
      param_1->moving = 0;
      param_1->param = param_1->move_to_pct;
      if ((param_1->momentary_flag != 0) && ((float)0.90000000000000002 < param_1->param)) {
        commands = param_1->on_event;
LAB_004c621d:
        core_event_cpp_CEventList_executeCommands_FUN_0047ab70(0x01C03A10,commands);
      }
    }
  }
  if (param_1->linked_lever != (CLever *)0x0) {
    core_lever_cpp_CLever_setState_FUN_004c6390(param_1->linked_lever,param_1->param);
  }
  iVar2 = 0;
  iVar3 = 0;
  while (iVar3 < *(int *)(0x01E57284 + 0x14cd6c)) {
    this_ptr = (CLever *)
               core_actor_cpp_castToClassHash_FUN_0040d890
                         (*(CDemonActor **)(iVar2 + 0x14cd70 + 0x01E57284),
                          g_CLeverActorType_01cc3628.name_hash);
    if ((this_ptr == (CLever *)0x0) || (param_1 != this_ptr->linked_lever)) {
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    }
    else {
      core_lever_cpp_CLever_setState_FUN_004c6390(this_ptr,this_ptr->linked_lever->param);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    }
  }
LAB_004c6314:
  if (param_1->momentary_flag == 0) {
    if ((param_1->param < (float)0.10000000000000001) && (param_1->off_event[0] != '\0')) {
      core_event_cpp_CEventList_executeCommands_FUN_0047ab70(0x01C03A10,param_1->off_event);
    }
    if (((float)0.90000000000000002 < param_1->param) && (param_1->on_event[0] != '\0')) {
      core_event_cpp_CEventList_executeCommands_FUN_0047ab70(0x01C03A10,param_1->on_event);
      return;
    }
  }
  return;
}
