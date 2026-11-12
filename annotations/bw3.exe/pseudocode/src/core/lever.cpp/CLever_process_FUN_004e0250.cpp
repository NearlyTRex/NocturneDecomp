// Name: core_lever.cpp_CLever_process_FUN_004e0250
// Address: 004e0250
// Address Range: [[004e0250, 004e04ac]]
// Convention: __cdecl
// Signature: void __cdecl core_lever_cpp_CLever_process_FUN_004e0250(CLever *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_lever_cpp_CLever_process_FUN_004e0250(CLever *this_ptr,float delta_time)

{
  float fVar1;
  float fVar2;
  CDemonActor *pCVar3;
  int iVar4;
  int iVar5;
  char *commands;
  
  if (this_ptr->moving == 0) goto LAB_004e0268;
  fVar1 = this_ptr->param;
  if (this_ptr->move_to_pct <= fVar1) {
    fVar2 = fVar1 - delta_time * (float)_DAT_005c6902;
    this_ptr->param = fVar2;
    if (fVar2 < this_ptr->move_to_pct) {
      this_ptr->moving = 0;
      this_ptr->param = this_ptr->move_to_pct;
      if ((this_ptr->momentary_flag != 0) && (this_ptr->param < (float)_DAT_005c690a)) {
        commands = this_ptr->off_event;
        goto LAB_004e033c;
      }
    }
  }
  else {
    fVar2 = delta_time * (float)_DAT_005c6902 + fVar1;
    this_ptr->param = fVar2;
    if (this_ptr->move_to_pct < fVar2) {
      this_ptr->moving = 0;
      this_ptr->param = this_ptr->move_to_pct;
      if ((this_ptr->momentary_flag != 0) && ((float)_DAT_005c6912 < this_ptr->param)) {
        commands = this_ptr->on_event;
LAB_004e033c:
        core_event_cpp_CEventList_executeCommands_FUN_0048c150(0x01C6E360,commands);
      }
    }
  }
  if (((0.0 < this_ptr->param) && (fVar1 <= 0.0)) ||
     (((int)this_ptr->param < 0x3f800000 && (1.0 <= fVar1)))) {
    (*((this_ptr->base).vtable._ub)->playSound)(&this_ptr->base,this_ptr->sound);
  }
  if (this_ptr->linked_lever != (CLever *)0x0) {
    core_lever_cpp_FUN_004e04b0(this_ptr->linked_lever,this_ptr->param,0);
  }
  iVar5 = 0;
  iVar4 = 0;
  while (iVar4 < g_CDemonSetPtr->actor_count) {
    pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c840
                       (*(CDemonActor **)((int)g_CDemonSetPtr->actors + iVar5),
                        g_CLeverClassInfo.name_hash);
    if ((pCVar3 == (CDemonActor *)0x0) || (this_ptr != *(CLever **)(pCVar3[3].actor_name + 8))) {
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 4;
    }
    else {
      core_lever_cpp_FUN_004e04b0(pCVar3,(*(CLever **)(pCVar3[3].actor_name + 8))->param,0);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 4;
    }
  }
LAB_004e0268:
  if (this_ptr->momentary_flag == 0) {
    if ((this_ptr->param < (float)_DAT_005c690a) && (this_ptr->off_event[0] != '\0')) {
      core_event_cpp_CEventList_executeCommands_FUN_0048c150(0x01C6E360,this_ptr->off_event);
    }
    if (((float)_DAT_005c6912 < this_ptr->param) && (this_ptr->on_event[0] != '\0')) {
      core_event_cpp_CEventList_executeCommands_FUN_0048c150(0x01C6E360,this_ptr->on_event);
      return;
    }
  }
  return;
}
