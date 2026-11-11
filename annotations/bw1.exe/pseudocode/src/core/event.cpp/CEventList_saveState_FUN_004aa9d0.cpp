// Name: core_event.cpp_CEventList_saveState_FUN_004aa9d0
// Address: 004aa9d0
// Address Range: [[004aa9d0, 004aacb7]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_CEventList_saveState_FUN_004aa9d0(CEventList *this_ptr,_FILE *file_handle)

#include "nocturne.h"

int __cdecl core_event_cpp_CEventList_saveState_FUN_004aa9d0(CEventList *this_ptr,_FILE *file_handle)

{
  int iVar1;
  char (*pacVar2) [32];
  CEventList *pCVar3;
  int iVar4;
  char (*pacVar5) [30];
  char (*local_1c) [30];
  int local_18;
  int local_14;
  
  FUN_005c03c0();
  FUN_005c03c0(file_handle,&DAT_005deec6,5);
  FUN_005c03c0();
  iVar1 = 0;
  FUN_005c03c0(file_handle,&DAT_005deedf,(this_ptr->events).count);
  if (0 < (this_ptr->events).count) {
    pacVar2 = (this_ptr->events).names;
    do {
      iVar1 = iVar1 + 1;
      FUN_005c03c0(file_handle,&DAT_005deee3,pacVar2);
      pacVar2 = pacVar2 + 1;
    } while (iVar1 < (this_ptr->events).count);
  }
  FUN_005c03c0();
  iVar1 = 0;
  FUN_005c03c0(file_handle,&DAT_005def03,(this_ptr->current_events).count);
  if (0 < (this_ptr->current_events).count) {
    pacVar2 = (this_ptr->current_events).names;
    do {
      iVar1 = iVar1 + 1;
      FUN_005c03c0(file_handle,&DAT_005def07,pacVar2);
      pacVar2 = pacVar2 + 1;
    } while (iVar1 < (this_ptr->current_events).count);
  }
  FUN_005c03c0();
  iVar1 = 0;
  FUN_005c03c0(file_handle,&DAT_005def2a,(this_ptr->persistent_events).count);
  if (0 < (this_ptr->persistent_events).count) {
    pacVar2 = (this_ptr->persistent_events).names;
    do {
      iVar1 = iVar1 + 1;
      FUN_005c03c0(file_handle,&DAT_005def2e,pacVar2);
      pacVar2 = pacVar2 + 1;
    } while (iVar1 < (this_ptr->persistent_events).count);
  }
  FUN_005c03c0();
  FUN_005c03c0(file_handle,&DAT_005def57,(this_ptr->timers).count);
  local_18 = 0;
  if (0 < (this_ptr->timers).count) {
    pacVar2 = (this_ptr->timers).names;
    pCVar3 = this_ptr;
    do {
      FUN_005c03c0
                (file_handle,"%f, %s\n",(double)(pCVar3->timers).durations[0],pacVar2);
      pCVar3 = (CEventList *)(pCVar3->events).names;
      pacVar2 = pacVar2 + 1;
      local_18 = local_18 + 1;
    } while (local_18 < (this_ptr->timers).count);
  }
  FUN_005c03c0();
  FUN_005c03c0(file_handle,&DAT_005def87,(this_ptr->counters).count);
  local_14 = 0;
  if (0 < (this_ptr->counters).count) {
    pacVar2 = (this_ptr->counters).names;
    pCVar3 = this_ptr;
    do {
      FUN_005c03c0(file_handle,"%d, %s\n",(pCVar3->counters).values[0],pacVar2);
      pCVar3 = (CEventList *)(pCVar3->events).names;
      pacVar2 = pacVar2 + 1;
      local_14 = local_14 + 1;
    } while (local_14 < (this_ptr->counters).count);
  }
  FUN_005c03c0();
  iVar1 = 0;
  FUN_005c03c0(file_handle,&DAT_005defbf,(this_ptr->actor_vars).count);
  if (0 < (this_ptr->actor_vars).count) {
    local_1c = (this_ptr->actor_vars).actor_names;
    pacVar5 = (this_ptr->actor_vars).var_names;
    do {
      FUN_005c03c0(file_handle,"\"%s\", \"%s\"\n",pacVar5,local_1c);
      iVar1 = iVar1 + 1;
      pacVar5 = pacVar5 + 1;
      local_1c = local_1c + 1;
    } while (iVar1 < (this_ptr->actor_vars).count);
  }
  FUN_005c03c0();
  iVar4 = 0;
  iVar1 = FUN_005c03c0(file_handle,&DAT_005defe7,(this_ptr->game_flags).count);
  if (0 < (this_ptr->game_flags).count) {
    pacVar2 = (this_ptr->game_flags).names;
    do {
      iVar4 = iVar4 + 1;
      FUN_005c03c0(file_handle,&DAT_005defeb,pacVar2);
      iVar1 = (this_ptr->game_flags).count;
      pacVar2 = pacVar2 + 1;
    } while (iVar4 < iVar1);
  }
  return iVar1;
}
