// Name: core_event.cpp_CEventList_FUN_004addf0
// Address: 004addf0
// Address Range: [[004addf0, 004ae11a]]
// Convention: __cdecl
// Signature: void core_event.cpp_CEventList_FUN_004addf0(CEventList * this_ptr)

#include "nocturne.h"

void __cdecl core_event_cpp_CEventList_FUN_004addf0(CEventList *this_ptr)

{
  int iVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  int unaff_ESI;
  int iVar3;
  CEvent *pCVar4;
  char acStack_2e4 [4];
  char local_2e0 [196];
  char acStack_21c [4];
  char local_218 [204];
  char acStack_14c [4];
  char acStack_148 [88];
  char acStack_f0 [4];
  char local_ec [96];
  char acStack_8c [4];
  char local_88 [100];
  CEventList *local_24;
  CEvent *local_1c;
  char *local_18;
  int local_14;
  
  iVar1 = 0x2c;
  iVar3 = 0;
  iVar2 = iVar1;
  if (0 < this_ptr->game_flag_count) {
    do {
      crt_stdio_c_sprintf_FUN_005fdbd0(local_218,"Game Flag: %s");
      iVar3 = iVar3 + 1;
      iVar2 = iVar1 + 0xb;
      engine_2d_c_drawText_FUN_00401fd0(acStack_21c,0,iVar1);
      iVar1 = iVar2;
    } while (iVar3 < this_ptr->game_flag_count);
  }
  iVar3 = 0;
  iVar1 = iVar2;
  if (0 < this_ptr->persistent_event_count) {
    do {
      crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffc58,"Persistent: %s");
      iVar3 = iVar3 + 1;
      iVar1 = iVar2 + 0xb;
      engine_2d_c_drawText_FUN_00401fd0(&stack0xfffffc54,0,iVar2);
      iVar2 = iVar1;
    } while (iVar3 < this_ptr->persistent_event_count);
  }
  iVar2 = 0;
  if (0 < this_ptr->timer_count) {
    local_24 = this_ptr;
    do {
      crt_stdio_c_sprintf_FUN_005fdbd0
                (local_2e0,"Timer: %5.2f %s",local_2e0,"Timer: %5.2f %s",
                 (double)*(float *)(local_24->field14_0x3218 + 0x13c));
      iVar2 = iVar2 + 1;
      engine_2d_c_drawText_FUN_00401fd0(acStack_2e4,0,iVar1);
      iVar1 = iVar1 + 0xb;
      local_24 = (CEventList *)local_24->event_list;
    } while (iVar2 < this_ptr->timer_count);
  }
  iVar2 = 0;
  if (0 < this_ptr->current_event_count) {
    pCVar4 = this_ptr->current_event_list;
    iVar3 = iVar1;
    do {
      iVar2 = iVar2 + 1;
      iVar1 = iVar3 + 0xb;
      engine_2d_c_drawText_FUN_00401fd0((char *)pCVar4,0,iVar3);
      pCVar4 = pCVar4 + 0x20;
      iVar3 = iVar1;
    } while (iVar2 < this_ptr->current_event_count);
  }
  iVar2 = 0;
  if (0 < this_ptr->counter_count) {
    local_1c = (CEvent *)this_ptr->field16_0x3380;
    do {
      crt_stdio_c_sprintf_FUN_005fdbd0(local_88,"%s=%d");
      engine_2d_c_drawText_FUN_00401fd0(acStack_8c,0,iVar1);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0xb;
      local_1c = local_1c + 0x20;
    } while (iVar2 < this_ptr->counter_count);
  }
  iVar2 = 0;
  if (0 < this_ptr->actor_var_count) {
    local_18 = this_ptr->variablesVarName1;
    do {
      crt_stdio_c_sprintf_FUN_005fdbd0(local_ec,"%s=%s");
      iVar2 = iVar2 + 1;
      engine_2d_c_drawText_FUN_00401fd0(acStack_f0,0,iVar1);
      iVar1 = iVar1 + 0xb;
      local_18 = local_18 + 0x1e;
    } while (iVar2 < this_ptr->actor_var_count);
  }
  core_event_cpp_CEventList_FUN_004b0db0(this_ptr);
  if (0 < this_ptr[1].event_count) {
    local_1c = this_ptr[1].event_list + 4;
    pCVar4 = this_ptr[1].event_list + 0x18;
    do {
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_14c,"%s=%s %.1f",local_1c,pCVar4);
      pCVar4 = pCVar4 + 0x120;
      engine_2d_c_drawText_FUN_00401fd0(acStack_148,0,iVar1);
      local_14 = local_14 + 0x120;
      unaff_ESI = unaff_ESI + 1;
      iVar1 = iVar1 + 0xb;
    } while (unaff_ESI < this_ptr[1].event_count);
  }
  return;
}
