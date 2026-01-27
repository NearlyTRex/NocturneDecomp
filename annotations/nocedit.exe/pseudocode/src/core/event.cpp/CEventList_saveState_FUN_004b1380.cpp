// Name: core_event.cpp_CEventList_saveState_FUN_004b1380
// Address: 004b1380
// Address Range: [[004b1380, 004b1667]]
// Convention: __cdecl
// Signature: int core_event.cpp_CEventList_saveState_FUN_004b1380(CEventList * this_ptr, FILE * file_handle)

#include "nocturne.h"

int __cdecl core_event_cpp_CEventList_saveState_FUN_004b1380(CEventList *this_ptr,FILE *file_handle)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  CEventList *pCVar4;
  int local_18;
  int local_14;
  
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"// CEventList version\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%d\n",5);
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"// eventCount, list\n");
  iVar1 = 0;
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%d\n",this_ptr->event_count);
  if (0 < this_ptr->event_count) {
    piVar2 = this_ptr->event_list;
    do {
      iVar1 = iVar1 + 1;
      crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s\n",piVar2);
      piVar2 = piVar2 + 8;
    } while (iVar1 < this_ptr->event_count);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"// currentEventCount, list\n");
  iVar1 = 0;
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%d\n",this_ptr->current_event_count);
  if (0 < this_ptr->current_event_count) {
    piVar2 = this_ptr->current_event_list;
    do {
      iVar1 = iVar1 + 1;
      crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s\n",piVar2);
      piVar2 = piVar2 + 8;
    } while (iVar1 < this_ptr->current_event_count);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"// persistentEventCount, list\n");
  iVar1 = 0;
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%d\n",this_ptr->persistent_event_count);
  if (0 < this_ptr->persistent_event_count) {
    piVar2 = this_ptr->persistent_event_list;
    do {
      iVar1 = iVar1 + 1;
      crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s\n",piVar2);
      piVar2 = piVar2 + 8;
    } while (iVar1 < this_ptr->persistent_event_count);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"// timerCount, list(duration, name)\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%d\n",this_ptr->timer_count);
  local_18 = 0;
  if (0 < this_ptr->timer_count) {
    piVar2 = &this_ptr->timer_list;
    pCVar4 = this_ptr;
    do {
      crt_stdio_c_fprintf_FUN_005fe6d0
                (file_handle,"%f, %s\n",(double)*(float *)(pCVar4->unk5 + 0x13c),piVar2);
      pCVar4 = (CEventList *)pCVar4->event_list;
      piVar2 = piVar2 + 8;
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
  iVar3 = 0;
  iVar1 = crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%d\n",this_ptr->game_flag_count);
  if (0 < this_ptr->game_flag_count) {
    piVar2 = this_ptr->game_flag_list;
    do {
      iVar3 = iVar3 + 1;
      crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s\n",piVar2);
      iVar1 = this_ptr->game_flag_count;
      piVar2 = piVar2 + 8;
    } while (iVar3 < iVar1);
  }
  return iVar1;
}
