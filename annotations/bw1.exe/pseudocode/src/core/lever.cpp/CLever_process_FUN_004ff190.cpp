// Name: core_lever.cpp_CLever_process_FUN_004ff190
// Address: 004ff190
// Address Range: [[004ff190, 004ff3ec]]
// Convention: __cdecl
// Signature: void __cdecl core_lever_cpp_CLever_process_FUN_004ff190(CLever *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_lever_cpp_CLever_process_FUN_004ff190(CLever *this_ptr,float delta_time)

{
  float fVar1;
  float fVar2;
  CLever *this_ptr_00;
  int iVar3;
  int iVar4;
  char *commands;
  
  if (this_ptr->moving == 0) goto LAB_004ff1a8;
  fVar1 = this_ptr->param;
  if (this_ptr->move_to_pct <= fVar1) {
    fVar2 = fVar1 - delta_time * (float)6;
    this_ptr->param = fVar2;
    if (fVar2 < this_ptr->move_to_pct) {
      this_ptr->moving = 0;
      this_ptr->param = this_ptr->move_to_pct;
      if ((this_ptr->momentary_flag != 0) && (this_ptr->param < (float)0.10000000000000001)) {
        commands = this_ptr->off_event;
        goto LAB_004ff27c;
      }
    }
  }
  else {
    fVar2 = delta_time * (float)6 + fVar1;
    this_ptr->param = fVar2;
    if (this_ptr->move_to_pct < fVar2) {
      this_ptr->moving = 0;
      this_ptr->param = this_ptr->move_to_pct;
      if ((this_ptr->momentary_flag != 0) && ((float)0.90000000000000002 < this_ptr->param)) {
        commands = this_ptr->on_event;
LAB_004ff27c:
        core_event_cpp_CEventList_executeCommands_FUN_004a1b70(g_CEventList_PTR_0061b4d0,commands);
      }
    }
  }
  if (((0.0 < this_ptr->param) && (fVar1 <= 0.0)) ||
     (((int)this_ptr->param < 0x3f800000 && (1.0 <= fVar1)))) {
    (*((this_ptr->base).vtable._ub)->playSound)(&this_ptr->base,this_ptr->sound);
  }
  if (this_ptr->linked_lever != (CLever *)0x0) {
    core_lever_cpp_CLever_setState_FUN_004ff3f0(this_ptr->linked_lever,this_ptr->param,0);
  }
  iVar4 = 0;
  iVar3 = 0;
  while (iVar3 < g_CDemonSetPtr->actor_count) {
    this_ptr_00 = (CLever *)
                  core_actor_cpp_castToClassHash_FUN_0040c600
                            (*(CDemonActor **)((int)g_CDemonSetPtr->actors + iVar4),
                             g_CLeverClassInfo.name_hash);
    if ((this_ptr_00 == (CLever *)0x0) || (this_ptr != this_ptr_00->linked_lever)) {
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
    }
    else {
      core_lever_cpp_CLever_setState_FUN_004ff3f0(this_ptr_00,this_ptr_00->linked_lever->param,0);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
    }
  }
LAB_004ff1a8:
  if (this_ptr->momentary_flag == 0) {
    if ((this_ptr->param < (float)0.10000000000000001) && (this_ptr->off_event[0] != '\0')) {
      core_event_cpp_CEventList_executeCommands_FUN_004a1b70
                (g_CEventList_PTR_0061b4d0,this_ptr->off_event);
    }
    if (((float)0.90000000000000002 < this_ptr->param) && (this_ptr->on_event[0] != '\0')) {
      core_event_cpp_CEventList_executeCommands_FUN_004a1b70
                (g_CEventList_PTR_0061b4d0,this_ptr->on_event);
      return;
    }
  }
  return;
}
