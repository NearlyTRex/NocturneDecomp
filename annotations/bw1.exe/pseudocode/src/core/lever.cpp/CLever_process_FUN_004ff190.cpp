// Name: core_lever.cpp_CLever_process_FUN_004ff190
// Address: 004ff190
// Address Range: [[004ff190, 004ff3ec]]
// Convention: __cdecl
// Signature: void __cdecl core_lever_cpp_CLever_process_FUN_004ff190(CLever *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_lever_cpp_CLever_process_FUN_004ff190(CLever *this_ptr,float delta_time)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *commands;
  
  if (this_ptr->moving == 0) goto LAB_004ff1a8;
  fVar1 = this_ptr->param;
  if (this_ptr->move_to_pct <= fVar1) {
    fVar2 = fVar1 - delta_time * (float)_DAT_005e6d42;
    this_ptr->param = fVar2;
    if (fVar2 < this_ptr->move_to_pct) {
      this_ptr->moving = 0;
      this_ptr->param = this_ptr->move_to_pct;
      if ((this_ptr->momentary_flag != 0) && (this_ptr->param < (float)_DAT_005e6d4a)) {
        commands = this_ptr->off_event;
        goto LAB_004ff27c;
      }
    }
  }
  else {
    fVar2 = delta_time * (float)_DAT_005e6d42 + fVar1;
    this_ptr->param = fVar2;
    if (this_ptr->move_to_pct < fVar2) {
      this_ptr->moving = 0;
      this_ptr->param = this_ptr->move_to_pct;
      if ((this_ptr->momentary_flag != 0) && ((float)_DAT_005e6d52 < this_ptr->param)) {
        commands = this_ptr->on_event;
LAB_004ff27c:
        core_event_cpp_CEventList_executeCommands_FUN_004a1b70(0x01C51D80,commands);
      }
    }
  }
  if (((0.0 < this_ptr->param) && (fVar1 <= 0.0)) ||
     (((int)this_ptr->param < 0x3f800000 && (1.0 <= fVar1)))) {
    (*((this_ptr->base).vtable._ub)->playSound)(&this_ptr->base,this_ptr->sound);
  }
  if (this_ptr->linked_lever != (CLever *)0x0) {
    core_lever_cpp_FUN_004ff3f0(this_ptr->linked_lever,this_ptr->param,0);
  }
  iVar5 = 0;
  iVar4 = 0;
  while (iVar4 < g_CDemonSetPtr->actor_count) {
    iVar3 = core_actor_cpp_castToClassHash_FUN_0040c600
                      (*(uint *)((int)g_CDemonSetPtr->actors + iVar5),
                       g_CLeverClassInfo.name_hash);
    if ((iVar3 == 0) || (this_ptr != *(CLever **)(iVar3 + 0x410))) {
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 4;
    }
    else {
      core_lever_cpp_FUN_004ff3f0(iVar3,(*(CLever **)(iVar3 + 0x410))->param,0);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 4;
    }
  }
LAB_004ff1a8:
  if (this_ptr->momentary_flag == 0) {
    if ((this_ptr->param < (float)_DAT_005e6d4a) && (this_ptr->off_event[0] != '\0')) {
      core_event_cpp_CEventList_executeCommands_FUN_004a1b70(0x01C51D80,this_ptr->off_event);
    }
    if (((float)_DAT_005e6d52 < this_ptr->param) && (this_ptr->on_event[0] != '\0')) {
      core_event_cpp_CEventList_executeCommands_FUN_004a1b70(0x01C51D80,this_ptr->on_event);
      return;
    }
  }
  return;
}
