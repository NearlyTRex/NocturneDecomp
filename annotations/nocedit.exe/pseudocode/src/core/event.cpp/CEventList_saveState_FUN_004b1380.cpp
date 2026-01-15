// Name: core_event.cpp_CEventList_saveState_FUN_004b1380
// Address: 004b1380
// Address Range: [[004b1380, 004b1667]]
// Convention: __cdecl
// Signature: int core_event.cpp_CEventList_saveState_FUN_004b1380(CEventList * this_ptr, FILE * file_handle)

#include "nocturne.h"

int __cdecl core_event_cpp_CEventList_saveState_FUN_004b1380(CEventList *this_ptr,FILE *file_handle)

{
  int iVar1;
  CEvent *pCVar2;
  int *piVar3;
  int iVar4;
  CEventList *pCVar5;
  int local_18;
  int local_14;
  
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"// CEventList version\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%d\n",5);
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"// eventCount, list\n");
  iVar1 = 0;
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%d\n",this_ptr->event_count);
  if (0 < this_ptr->event_count) {
    pCVar2 = this_ptr->event_list;
    do {
      iVar1 = iVar1 + 1;
      crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s\n",pCVar2);
      pCVar2 = pCVar2 + 0x20;
    } while (iVar1 < this_ptr->event_count);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"// currentEventCount, list\n");
  iVar1 = 0;
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%d\n",this_ptr->current_event_count);
  if (0 < this_ptr->current_event_count) {
    pCVar2 = this_ptr->current_event_list;
    do {
      iVar1 = iVar1 + 1;
      crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s\n",pCVar2);
      pCVar2 = pCVar2 + 0x20;
    } while (iVar1 < this_ptr->current_event_count);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"// persistentEventCount, list\n");
  iVar1 = 0;
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%d\n",this_ptr->persistent_event_count);
  if (0 < this_ptr->persistent_event_count) {
    pCVar2 = this_ptr->persistent_event_list;
    do {
      iVar1 = iVar1 + 1;
      crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s\n",pCVar2);
      pCVar2 = pCVar2 + 0x20;
    } while (iVar1 < this_ptr->persistent_event_count);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"// timerCount, list(duration, name)\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%d\n",this_ptr->timer_count);
  local_18 = 0;
  if (0 < this_ptr->timer_count) {
    piVar3 = &this_ptr->timer_list;
    pCVar5 = this_ptr;
    do {
      crt_stdio_c_fprintf_FUN_005fe6d0
                (file_handle,"%f, %s\n",(double)*(float *)(pCVar5->field14_0x3218 + 0x13c),
                 piVar3);
      pCVar5 = (CEventList *)pCVar5->event_list;
      piVar3 = piVar3 + 8;
      local_18 = local_18 + 1;
    } while (local_18 < this_ptr->timer_count);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"// counterCount, list(value, name)\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%d\n",this_ptr->counter_count);
  local_14 = 0;
  if (0 < this_ptr->counter_count) {
    do {
      crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%d, %s\n");
      local_14 = local_14 + 1;
    } while (local_14 < this_ptr->counter_count);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"// actorVarCount, list(varName, actorName)\n");
  iVar1 = 0;
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%d\n",this_ptr->actor_var_count);
  if (0 < this_ptr->actor_var_count) {
    do {
      crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"\"%s\", \"%s\"\n");
      iVar1 = iVar1 + 1;
    } while (iVar1 < this_ptr->actor_var_count);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"// gameFlagCount, list\n");
  iVar4 = 0;
  iVar1 = crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%d\n",this_ptr->game_flag_count);
  if (0 < this_ptr->game_flag_count) {
    pCVar2 = this_ptr->game_flag_list;
    do {
      iVar4 = iVar4 + 1;
      crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s\n",pCVar2);
      iVar1 = this_ptr->game_flag_count;
      pCVar2 = pCVar2 + 0x20;
    } while (iVar4 < iVar1);
  }
  return iVar1;
}
