// Name: core_event.cpp_CEventList_saveState_FUN_004b1380
// Address: 004b1380
// Address Range: [[004b1380, 004b1667]]
// Convention: __cdecl
// Signature: int core_event.cpp_CEventList_saveState_FUN_004b1380(CEventList * this_ptr, FILE * file_handle)

#include "nocturne.h"

int __cdecl core_event_cpp_CEventList_saveState_FUN_004b1380(CEventList *this_ptr,FILE *file_handle)

{
  int iVar1;
  int iVar2;
  CEvent *pCVar3;
  CEvent *pCStack00000020;
  
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"// CEventList version\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%d\n",5);
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"// eventCount, list\n");
  iVar1 = 0;
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%d\n",this_ptr->event_count);
  if (0 < this_ptr->event_count) {
    pCVar3 = this_ptr->event_list;
    do {
      iVar1 = iVar1 + 1;
      crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s\n","%s\n",pCVar3);
      pCVar3 = pCVar3 + 0x20;
    } while (iVar1 < this_ptr->event_count);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"// currentEventCount, list\n");
  iVar1 = 0;
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%d\n",this_ptr->current_event_count);
  if (0 < this_ptr->current_event_count) {
    pCVar3 = this_ptr->current_event_list;
    do {
      iVar1 = iVar1 + 1;
      crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s\n","%s\n",pCVar3);
      pCVar3 = pCVar3 + 0x20;
    } while (iVar1 < this_ptr->current_event_count);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"// persistentEventCount, list\n");
  iVar1 = 0;
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%d\n",this_ptr->persistent_event_count);
  if (0 < this_ptr->persistent_event_count) {
    do {
      iVar1 = iVar1 + 1;
      crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s\n");
    } while (iVar1 < this_ptr->persistent_event_count);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"// timerCount, list(duration, name)\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%d\n");
  iVar1 = 0;
  if (0 < this_ptr->timer_count) {
    do {
      crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%f, %s\n");
      iVar1 = iVar1 + 1;
    } while (iVar1 < this_ptr->timer_count);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"// counterCount, list(value, name)\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%d\n");
  iVar1 = 0;
  if (0 < this_ptr->counter_count) {
    do {
      crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%d, %s\n");
      iVar1 = iVar1 + 1;
    } while (iVar1 < this_ptr->counter_count);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"// actorVarCount, list(varName, actorName)\n");
  iVar1 = 0;
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%d\n");
  if (0 < this_ptr->actor_var_count) {
    do {
      crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"\"%s\", \"%s\"\n");
      iVar1 = iVar1 + 1;
    } while (iVar1 < this_ptr->actor_var_count);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"// gameFlagCount, list\n");
  iVar2 = 0;
  iVar1 = crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%d\n");
  if (0 < this_ptr->game_flag_count) {
    pCStack00000020 = this_ptr->game_flag_list;
    do {
      iVar2 = iVar2 + 1;
      pCVar3 = pCStack00000020 + 0x20;
      crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s\n");
      iVar1 = this_ptr->game_flag_count;
      pCStack00000020 = pCVar3;
    } while (iVar2 < iVar1);
  }
  return iVar1;
}
