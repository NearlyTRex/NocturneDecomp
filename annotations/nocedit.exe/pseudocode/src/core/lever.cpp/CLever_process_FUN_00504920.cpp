// Name: core_lever.cpp_CLever_process_FUN_00504920
// Address: 00504920
// Address Range: [[00504920, 00504b1c]]
// Convention: __cdecl
// Signature: void __cdecl core_lever_cpp_CLever_process_FUN_00504920(CLever *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_lever_cpp_CLever_process_FUN_00504920(CLever *this_ptr,float delta_time)

{
  float fVar1;
  CLever *this_ptr_00;
  int iVar2;
  int iVar3;
  
  if (this_ptr->moving == 0) goto LAB_00504aa4;
  if (this_ptr->move_to_pct <= this_ptr->param) {
    fVar1 = this_ptr->param - delta_time * (float)6;
    this_ptr->param = fVar1;
    if (fVar1 < this_ptr->move_to_pct) {
      this_ptr->moving = 0;
      this_ptr->param = this_ptr->move_to_pct;
      if ((this_ptr->momentary_flag != 0) && (this_ptr->param < (float)0.10000000000000001))
      goto LAB_005049ad;
    }
  }
  else {
    fVar1 = delta_time * (float)6 + this_ptr->param;
    this_ptr->param = fVar1;
    if (this_ptr->move_to_pct < fVar1) {
      this_ptr->moving = 0;
      this_ptr->param = this_ptr->move_to_pct;
      if ((this_ptr->momentary_flag != 0) && ((float)0.90000000000000002 < this_ptr->param)) {
LAB_005049ad:
        core_event_cpp_CEventList_FUN_004aabe0(g_CEventListPtr);
      }
    }
  }
  if ((CLever *)this_ptr->linked_lever != (CLever *)0x0) {
    core_lever_cpp_CLever_FUN_00504b20((CLever *)this_ptr->linked_lever);
  }
  iVar2 = 0;
  iVar3 = 0;
  while (iVar3 < (int)g_CDemonSetPtr->actor_list_ptr) {
    this_ptr_00 = (CLever *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar2),
                             g_CLeverClassInfo.name_hash);
    if ((this_ptr_00 == (CLever *)0x0) || (this_ptr != (CLever *)this_ptr_00->linked_lever)) {
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    }
    else {
      core_lever_cpp_CLever_FUN_00504b20(this_ptr_00);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    }
  }
LAB_00504aa4:
  if (this_ptr->momentary_flag == 0) {
    if ((this_ptr->param < (float)0.10000000000000001) && (*(char *)&this_ptr->off_event != '\0')) {
      core_event_cpp_CEventList_FUN_004aabe0(g_CEventListPtr);
    }
    if (((float)0.90000000000000002 < this_ptr->param) && (*(char *)&this_ptr->on_event != '\0')) {
      core_event_cpp_CEventList_FUN_004aabe0(g_CEventListPtr);
      return;
    }
  }
  return;
}
