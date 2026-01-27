// Name: core_event.cpp_CEventList_loadState_FUN_004b0fc0
// Address: 004b0fc0
// Address Range: [[004b0fc0, 004b1377]]
// Convention: __cdecl
// Signature: int core_event.cpp_CEventList_loadState_FUN_004b0fc0(CEventList * this_ptr)

#include "nocturne.h"

int __cdecl core_event_cpp_CEventList_loadState_FUN_004b0fc0(CEventList *this_ptr)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  FILE *in_stack_00000008;
  char local_120 [256];
  int local_20;
  char *local_1c;
  char *local_18;
  int local_14;
  
  core_event_cpp_CEventList_FUN_004aaa70(this_ptr);
  crt_stdio_c_fgets_FUN_005fefd0(local_120,0xff,in_stack_00000008);
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%d\n",&local_20);
  if (5 < local_20) {
    g_CurrentFilename = "..\\core\\event.cpp";
    g_CurrentLineNumber = 0xc2c;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CEventList::loadState - file version %d is newer than .EXE, which can only handle up to version %d",local_20,5);
  }
  crt_stdio_c_fgets_FUN_005fefd0(local_120,0xff,in_stack_00000008);
  iVar1 = 0;
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%d\n",this_ptr);
  if (0 < this_ptr->event_count) {
    piVar4 = this_ptr->event_list;
    do {
      iVar1 = iVar1 + 1;
      crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%[^\n]\n",piVar4);
      piVar4 = piVar4 + 8;
    } while (iVar1 < this_ptr->event_count);
  }
  crt_stdio_c_fgets_FUN_005fefd0(local_120,0xff,in_stack_00000008);
  iVar1 = 0;
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%d\n",&this_ptr->current_event_count);
  if (0 < this_ptr->current_event_count) {
    piVar4 = this_ptr->current_event_list;
    do {
      iVar1 = iVar1 + 1;
      crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%[^\n]\n",piVar4);
      piVar4 = piVar4 + 8;
    } while (iVar1 < this_ptr->current_event_count);
  }
  crt_stdio_c_fgets_FUN_005fefd0(local_120,0xff,in_stack_00000008);
  iVar2 = 0;
  iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0
                    (in_stack_00000008,"%d\n",&this_ptr->persistent_event_count);
  if (0 < this_ptr->persistent_event_count) {
    piVar4 = this_ptr->persistent_event_list;
    do {
      iVar2 = iVar2 + 1;
      iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%[^\n]\n",piVar4);
      piVar4 = piVar4 + 8;
    } while (iVar2 < this_ptr->persistent_event_count);
  }
  if (1 < local_20) {
    crt_stdio_c_fgets_FUN_005fefd0(local_120,0xff,in_stack_00000008);
    crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%d\n",&this_ptr->timer_count);
    iVar1 = this_ptr->timer_count;
    local_14 = 0;
    if (0 < iVar1) {
      piVar4 = &this_ptr->timer_list;
      pcVar3 = this_ptr->unk5 + 0x13c;
      do {
        iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%f, %[^\n]\n",pcVar3,piVar4);
        piVar4 = piVar4 + 8;
        pcVar3 = pcVar3 + 4;
        local_14 = local_14 + 1;
      } while (local_14 < this_ptr->timer_count);
    }
  }
  if (2 < local_20) {
    crt_stdio_c_fgets_FUN_005fefd0(local_120,0xff,in_stack_00000008);
    iVar2 = 0;
    crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%d\n",&this_ptr->counter_count);
    iVar1 = this_ptr->counter_count;
    if (0 < iVar1) {
      local_18 = this_ptr->unk6;
      pcVar3 = this_ptr->unk6 + 0x140;
      do {
        crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%d, %[^\n]\n",pcVar3,local_18);
        iVar2 = iVar2 + 1;
        pcVar3 = pcVar3 + 4;
        local_18 = local_18 + 0x20;
        iVar1 = this_ptr->counter_count;
      } while (iVar2 < iVar1);
    }
  }
  if (3 < local_20) {
    crt_stdio_c_fgets_FUN_005fefd0(local_120,0xff,in_stack_00000008);
    iVar2 = 0;
    iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0
                      (in_stack_00000008,"%d\n",&this_ptr->actor_var_count);
    if (0 < this_ptr->actor_var_count) {
      local_1c = this_ptr->variablesActorName1;
      pcVar3 = this_ptr->variablesVarName1;
      do {
        iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"\"%[^\"]\" , \"%[^\"]\"\n",pcVar3,local_1c);
        iVar2 = iVar2 + 1;
        pcVar3 = pcVar3 + 0x1e;
        local_1c = local_1c + 0x1e;
      } while (iVar2 < this_ptr->actor_var_count);
    }
  }
  if (4 < local_20) {
    crt_stdio_c_fgets_FUN_005fefd0(local_120,0xff,in_stack_00000008);
    iVar2 = 0;
    iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0
                      (in_stack_00000008,"%d\n",&this_ptr->game_flag_count);
    if (0 < this_ptr->game_flag_count) {
      piVar4 = this_ptr->game_flag_list;
      do {
        iVar2 = iVar2 + 1;
        crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%[^\n]\n",piVar4);
        piVar4 = piVar4 + 8;
      } while (iVar2 < this_ptr->game_flag_count);
      return this_ptr->game_flag_count;
    }
  }
  return iVar1;
}
