// Name: core_event.cpp_CEventList_saveState_FUN_004b1380
// Address: 004b1380
// MANUAL RECONSTRUCTION
// Address Range: [[004b1380, 004b1667]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_CEventList_saveState_FUN_004b1380(CEventList *this_ptr,_FILE *file_handle)

#include "nocturne.h"

int __cdecl core_event_cpp_CEventList_saveState_FUN_004b1380(CEventList *this_ptr,_FILE *file_handle)

{
  int iVar1;
  char (*pacVar1) [32];
  char (*pacVar2) [32];
  int iVar3;
  int iVar2;
  CEventList *pCVar4;
  int local_18;
  int local_14;
  
  _fprintf(file_handle,"// CEventList version\n");
  _fprintf(file_handle,"%d\n",5);
  _fprintf(file_handle,"// eventCount, list\n");
  iVar1 = 0;
  _fprintf(file_handle,"%d\n",(this_ptr->events).count);
  if (0 < (this_ptr->events).count) {
    pacVar1 = (this_ptr->events).names;
    do {
      iVar1 = iVar1 + 1;
      _fprintf(file_handle,"%s\n",*pacVar1);
      pacVar1 = pacVar1 + 1;
    } while (iVar1 < (this_ptr->events).count);
  }
  _fprintf(file_handle,"// currentEventCount, list\n");
  iVar2 = 0;
  _fprintf(file_handle,"%d\n",(this_ptr->current_events).count);
  if (0 < (this_ptr->current_events).count) {
    pacVar1 = (this_ptr->current_events).names;
    do {
      iVar2 = iVar2 + 1;
      _fprintf(file_handle,"%s\n",*pacVar1);
      pacVar1 = pacVar1 + 1;
    } while (iVar2 < (this_ptr->current_events).count);
  }
  _fprintf(file_handle,"// persistentEventCount, list\n");
  iVar2 = 0;
  _fprintf(file_handle,"%d\n",(this_ptr->persistent_events).count);
  if (0 < (this_ptr->persistent_events).count) {
    pacVar1 = (this_ptr->persistent_events).names;
    do {
      iVar2 = iVar2 + 1;
      _fprintf(file_handle,"%s\n",*pacVar1);
      pacVar1 = pacVar1 + 1;
    } while (iVar2 < (this_ptr->persistent_events).count);
  }
  _fprintf(file_handle,"// timerCount, list(duration, name)\n");
  _fprintf(file_handle,"%d\n",(this_ptr->timers).count);
  local_18 = 0;
  if (0 < (this_ptr->timers).count) {
    pacVar2 = (this_ptr->timers).names;
    pCVar4 = this_ptr;
    do {
      _fprintf(file_handle,"%f, %s\n",(double)(pCVar4->timers).durations[0],*pacVar2);
      pCVar4 = (CEventList *)(pCVar4->events).names;
      pacVar2 = pacVar2 + 1;
      local_18 = local_18 + 1;
    } while (local_18 < (this_ptr->timers).count);
  }
  _fprintf(file_handle,"// counterCount, list(value, name)\n");
  _fprintf(file_handle,"%d\n",(this_ptr->counters).count);
  local_14 = 0;
  if (0 < (this_ptr->counters).count) {
    do {
      _fprintf(file_handle,"%d, %s\n",(this_ptr->counters).values[local_14],(this_ptr->counters).names[local_14]);
      local_14 = local_14 + 1;
    } while (local_14 < (this_ptr->counters).count);
  }
  _fprintf(file_handle,"// actorVarCount, list(varName, actorName)\n");
  iVar2 = 0;
  _fprintf(file_handle,"%d\n",(this_ptr->actor_vars).count);
  if (0 < (this_ptr->actor_vars).count) {
    do {
      _fprintf(file_handle,"\"%s\", \"%s\"\n",(this_ptr->actor_vars).var_names[iVar2],(this_ptr->actor_vars).actor_names[iVar2]);
      iVar2 = iVar2 + 1;
    } while (iVar2 < (this_ptr->actor_vars).count);
  }
  _fprintf(file_handle,"// gameFlagCount, list\n");
  iVar3 = 0;
  iVar2 = _fprintf(file_handle,"%d\n",(this_ptr->game_flags).count);
  if (0 < (this_ptr->game_flags).count) {
    pacVar1 = (this_ptr->game_flags).names;
    do {
      iVar3 = iVar3 + 1;
      _fprintf(file_handle,"%s\n",*pacVar1);
      iVar2 = (this_ptr->game_flags).count;
      pacVar1 = pacVar1 + 1;
    } while (iVar3 < iVar2);
  }
  return iVar2;
}
