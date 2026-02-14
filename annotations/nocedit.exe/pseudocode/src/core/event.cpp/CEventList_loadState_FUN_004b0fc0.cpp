// Name: core_event.cpp_CEventList_loadState_FUN_004b0fc0
// Address: 004b0fc0
// Address Range: [[004b0fc0, 004b1377]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_CEventList_loadState_FUN_004b0fc0(CEventList *this_ptr,_FILE *file_handle)

#include "nocturne.h"

int __cdecl core_event_cpp_CEventList_loadState_FUN_004b0fc0(CEventList *this_ptr,_FILE *file_handle)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  char (*pacVar4) [32];
  int *piVar5;
  char (*pacVar6) [30];
  char local_120 [256];
  int local_20;
  char (*local_1c) [30];
  char (*local_18) [32];
  int local_14;
  
  core_event_cpp_CEventList_reset_FUN_004aaa70(this_ptr);
  _fgets(local_120,0xff,file_handle);
  _fscanf(file_handle,"%d\n",&local_20);
  if (5 < local_20) {
    g_CurrentFilename = "..\\core\\event.cpp";
    g_CurrentLineNumber = 0xc2c;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CEventList::loadState - file version %d is newer than .EXE, which can only handle up to version %d",local_20,5);
  }
  _fgets(local_120,0xff,file_handle);
  iVar1 = 0;
  _fscanf(file_handle,"%d\n",this_ptr);
  if (0 < (this_ptr->events).count) {
    pacVar4 = (this_ptr->events).names;
    do {
      iVar1 = iVar1 + 1;
      _fscanf(file_handle,"%[^\n]\n",pacVar4);
      pacVar4 = pacVar4 + 1;
    } while (iVar1 < (this_ptr->events).count);
  }
  _fgets(local_120,0xff,file_handle);
  iVar1 = 0;
  _fscanf(file_handle,"%d\n",&this_ptr->current_events);
  if (0 < (this_ptr->current_events).count) {
    pacVar4 = (this_ptr->current_events).names;
    do {
      iVar1 = iVar1 + 1;
      _fscanf(file_handle,"%[^\n]\n",pacVar4);
      pacVar4 = pacVar4 + 1;
    } while (iVar1 < (this_ptr->current_events).count);
  }
  _fgets(local_120,0xff,file_handle);
  iVar2 = 0;
  iVar1 = _fscanf(file_handle,"%d\n",&this_ptr->persistent_events);
  if (0 < (this_ptr->persistent_events).count) {
    pacVar4 = (this_ptr->persistent_events).names;
    do {
      iVar2 = iVar2 + 1;
      iVar1 = _fscanf(file_handle,"%[^\n]\n",pacVar4);
      pacVar4 = pacVar4 + 1;
    } while (iVar2 < (this_ptr->persistent_events).count);
  }
  if (1 < local_20) {
    _fgets(local_120,0xff,file_handle);
    _fscanf(file_handle,"%d\n",&this_ptr->timers);
    iVar1 = (this_ptr->timers).count;
    local_14 = 0;
    if (0 < iVar1) {
      pacVar4 = (this_ptr->timers).names;
      pfVar3 = (this_ptr->timers).durations;
      do {
        iVar1 = _fscanf(file_handle,"%f, %[^\n]\n",pfVar3,pacVar4);
        pacVar4 = pacVar4 + 1;
        pfVar3 = pfVar3 + 1;
        local_14 = local_14 + 1;
      } while (local_14 < (this_ptr->timers).count);
    }
  }
  if (2 < local_20) {
    _fgets(local_120,0xff,file_handle);
    iVar2 = 0;
    _fscanf(file_handle,"%d\n",&this_ptr->counters);
    iVar1 = (this_ptr->counters).count;
    if (0 < iVar1) {
      local_18 = (this_ptr->counters).names;
      piVar5 = (this_ptr->counters).values;
      do {
        _fscanf(file_handle,"%d, %[^\n]\n",piVar5,local_18);
        iVar2 = iVar2 + 1;
        piVar5 = piVar5 + 1;
        local_18 = local_18 + 1;
        iVar1 = (this_ptr->counters).count;
      } while (iVar2 < iVar1);
    }
  }
  if (3 < local_20) {
    _fgets(local_120,0xff,file_handle);
    iVar2 = 0;
    iVar1 = _fscanf(file_handle,"%d\n",&this_ptr->actor_vars);
    if (0 < (this_ptr->actor_vars).count) {
      local_1c = (this_ptr->actor_vars).actor_names;
      pacVar6 = (this_ptr->actor_vars).var_names;
      do {
        iVar1 = _fscanf(file_handle,"\"%[^\"]\" , \"%[^\"]\"\n",pacVar6,local_1c);
        iVar2 = iVar2 + 1;
        pacVar6 = pacVar6 + 1;
        local_1c = local_1c + 1;
      } while (iVar2 < (this_ptr->actor_vars).count);
    }
  }
  if (4 < local_20) {
    _fgets(local_120,0xff,file_handle);
    iVar2 = 0;
    iVar1 = _fscanf(file_handle,"%d\n",&this_ptr->game_flags);
    if (0 < (this_ptr->game_flags).count) {
      pacVar4 = (this_ptr->game_flags).names;
      do {
        iVar2 = iVar2 + 1;
        _fscanf(file_handle,"%[^\n]\n",pacVar4);
        iVar1 = (this_ptr->game_flags).count;
        pacVar4 = pacVar4 + 1;
      } while (iVar2 < iVar1);
      return iVar1;
    }
  }
  return iVar1;
}
