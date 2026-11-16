// Name: core_event.cpp_CEventList_saveState_FUN_00495850
// Address: 00495850
// Address Range: [[00495850, 00495b37]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_CEventList_saveState_FUN_00495850(CEventList *this_ptr,_FILE *file_handle)

#include "nocturne.h"

int __cdecl core_event_cpp_CEventList_saveState_FUN_00495850(CEventList *this_ptr,_FILE *file_handle)

{
  int iVar1;
  int iVar2;
  int local_18;
  int local_14;
  
  _fprintf(file_handle,"// CEventList version\n");
  _fprintf(file_handle,&DAT_005c0202);
  _fprintf(file_handle,"// eventCount, list\n");
  iVar1 = 0;
  _fprintf(file_handle,&DAT_005c021b);
  if (0 < (this_ptr->events).count) {
    do {
      iVar1 = iVar1 + 1;
      _fprintf(file_handle,&DAT_005c021f);
    } while (iVar1 < (this_ptr->events).count);
  }
  _fprintf(file_handle,"// currentEventCount, list\n");
  iVar1 = 0;
  _fprintf(file_handle,&DAT_005c023f);
  if (0 < (this_ptr->current_events).count) {
    do {
      iVar1 = iVar1 + 1;
      _fprintf(file_handle,&DAT_005c0243);
    } while (iVar1 < (this_ptr->current_events).count);
  }
  _fprintf(file_handle,"// persistentEventCount, list\n");
  iVar1 = 0;
  _fprintf(file_handle,&DAT_005c0266);
  if (0 < (this_ptr->persistent_events).count) {
    do {
      iVar1 = iVar1 + 1;
      _fprintf(file_handle,&DAT_005c026a);
    } while (iVar1 < (this_ptr->persistent_events).count);
  }
  _fprintf(file_handle,"// timerCount, list(duration, name)\n");
  _fprintf(file_handle,&DAT_005c0293);
  local_18 = 0;
  if (0 < (this_ptr->timers).count) {
    do {
      _fprintf(file_handle,"%f, %s\n");
      local_18 = local_18 + 1;
    } while (local_18 < (this_ptr->timers).count);
  }
  _fprintf(file_handle,"// counterCount, list(value, name)\n");
  _fprintf(file_handle,&DAT_005c02c3);
  local_14 = 0;
  if (0 < (this_ptr->counters).count) {
    do {
      _fprintf(file_handle,"%d, %s\n");
      local_14 = local_14 + 1;
    } while (local_14 < (this_ptr->counters).count);
  }
  _fprintf(file_handle,"// actorVarCount, list(varName, actorName)\n");
  iVar1 = 0;
  _fprintf(file_handle,&DAT_005c02fb);
  if (0 < (this_ptr->actor_vars).count) {
    do {
      _fprintf(file_handle,"\"%s\", \"%s\"\n");
      iVar1 = iVar1 + 1;
    } while (iVar1 < (this_ptr->actor_vars).count);
  }
  _fprintf(file_handle,"// gameFlagCount, list\n");
  iVar2 = 0;
  iVar1 = _fprintf(file_handle,&DAT_005c0323);
  if (0 < (this_ptr->game_flags).count) {
    do {
      iVar2 = iVar2 + 1;
      _fprintf(file_handle,&DAT_005c0327);
      iVar1 = (this_ptr->game_flags).count;
    } while (iVar2 < iVar1);
  }
  return iVar1;
}
