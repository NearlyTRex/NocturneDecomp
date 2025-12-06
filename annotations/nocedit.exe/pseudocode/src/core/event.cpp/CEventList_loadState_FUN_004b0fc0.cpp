// Name: core_event.cpp_CEventList_loadState_FUN_004b0fc0
// Address: 004b0fc0
// Address Range: [[004b0fc0, 004b1377]]
// Convention: __cdecl
// Signature: int core_event.cpp_CEventList_loadState_FUN_004b0fc0(CEventList * this_ptr)

#include "nocturne.h"

int __cdecl core_event_cpp_CEventList_loadState_FUN_004b0fc0(CEventList *this_ptr)

{
  BADSPACEBASE *in_ESP;
  int iVar1;
  int iVar2;
  FILE *in_stack_00000008;
  int iStack00000014;
  int local_14;
  
  core_event_cpp_CEventList_FUN_004aaa70(this_ptr);
  crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffee4,0xff,in_stack_00000008);
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%d\n");
  if (5 < local_14) {
    g_CurrentFilename = "..\\core\\event.cpp";
    g_CurrentLineNumber = 0xc2c;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CEventList::loadState - file version %d is newer than .EXE, which can only handle up to version %d");
  }
  crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffef0,0xff,in_stack_00000008);
  iVar1 = 0;
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%d\n");
  if (0 < this_ptr->event_count) {
    do {
      iVar1 = iVar1 + 1;
      crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%[^\n]\n");
    } while (iVar1 < this_ptr->event_count);
  }
  crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffef8,0xff,in_stack_00000008);
  iVar1 = 0;
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%d\n");
  if (0 < this_ptr->current_event_count) {
    do {
      iVar1 = iVar1 + 1;
      crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%[^\n]\n");
    } while (iVar1 < this_ptr->current_event_count);
  }
  crt_stdio_c_fgets_FUN_005fefd0(&stack0xffffff00,0xff,in_stack_00000008);
  iVar2 = 0;
  iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%d\n");
  if (0 < this_ptr->persistent_event_count) {
    do {
      iVar2 = iVar2 + 1;
      iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%[^\n]\n");
    } while (iVar2 < this_ptr->persistent_event_count);
  }
  if (1 < (int)in_stack_00000008) {
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xffffff08,0xff,in_stack_00000008);
    crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%d\n");
    iVar1 = this_ptr->timer_count;
    iStack00000014 = 0;
    if (0 < iVar1) {
      do {
        iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%f, %[^\n]\n");
        iStack00000014 = iStack00000014 + 1;
      } while (iStack00000014 < this_ptr->timer_count);
    }
  }
  if (2 < (int)in_stack_00000008) {
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xffffff08,0xff,in_stack_00000008);
    iVar2 = 0;
    crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%d\n");
    iVar1 = this_ptr->counter_count;
    if (0 < iVar1) {
      do {
        crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%d, %[^\n]\n");
        iVar2 = iVar2 + 1;
        iVar1 = this_ptr->counter_count;
      } while (iVar2 < iVar1);
    }
  }
  if (3 < (int)in_stack_00000008) {
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xffffff08,0xff,in_stack_00000008);
    iVar2 = 0;
    iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%d\n");
    if (0 < this_ptr->actor_var_count) {
      do {
        iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"\"%[^\"]\" , \"%[^\"]\"\n");
        iVar2 = iVar2 + 1;
      } while (iVar2 < this_ptr->actor_var_count);
    }
  }
  if (4 < (int)in_stack_00000008) {
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xffffff08,0xff,in_stack_00000008);
    iVar2 = 0;
    iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%d\n");
    if (0 < this_ptr->game_flag_count) {
      do {
        iVar2 = iVar2 + 1;
        crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%[^\n]\n");
      } while (iVar2 < this_ptr->game_flag_count);
      return this_ptr->game_flag_count;
    }
  }
  return iVar1;
}
