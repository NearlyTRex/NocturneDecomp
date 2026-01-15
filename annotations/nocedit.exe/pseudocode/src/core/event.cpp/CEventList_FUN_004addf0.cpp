// Name: core_event.cpp_CEventList_FUN_004addf0
// Address: 004addf0
// Address Range: [[004addf0, 004ae11a]]
// Convention: __cdecl
// Signature: void core_event.cpp_CEventList_FUN_004addf0(CEventList * this_ptr)

#include "nocturne.h"

void __cdecl core_event_cpp_CEventList_FUN_004addf0(CEventList *this_ptr)

{
  int y_pos;
  int iVar1;
  CEvent *pCVar2;
  int *piVar3;
  int iVar4;
  CEventList *pCVar5;
  char local_3a8 [200];
  char local_2e0 [200];
  char local_218 [200];
  char local_150 [100];
  char local_ec [100];
  char local_88 [100];
  CEventList *local_24;
  CEvent *local_20;
  char *local_1c;
  char *local_18;
  int local_14;
  
  y_pos = 0x2c;
  iVar4 = 0;
  if (0 < this_ptr->game_flag_count) {
    pCVar2 = this_ptr->game_flag_list;
    iVar1 = y_pos;
    do {
      crt_stdio_c_sprintf_FUN_005fdbd0(local_218,"Game Flag: %s",pCVar2);
      iVar4 = iVar4 + 1;
      pCVar2 = pCVar2 + 0x20;
      y_pos = iVar1 + 0xb;
      engine_2d_c_drawText_FUN_00401fd0(local_218,0,iVar1);
      iVar1 = y_pos;
    } while (iVar4 < this_ptr->game_flag_count);
  }
  iVar4 = 0;
  if (0 < this_ptr->persistent_event_count) {
    pCVar2 = this_ptr->persistent_event_list;
    iVar1 = y_pos;
    do {
      crt_stdio_c_sprintf_FUN_005fdbd0(local_3a8,"Persistent: %s",pCVar2);
      iVar4 = iVar4 + 1;
      pCVar2 = pCVar2 + 0x20;
      y_pos = iVar1 + 0xb;
      engine_2d_c_drawText_FUN_00401fd0(local_3a8,0,iVar1);
      iVar1 = y_pos;
    } while (iVar4 < this_ptr->persistent_event_count);
  }
  iVar4 = 0;
  if (0 < this_ptr->timer_count) {
    piVar3 = &this_ptr->timer_list;
    local_24 = this_ptr;
    do {
      crt_stdio_c_sprintf_FUN_005fdbd0
                (local_2e0,"Timer: %5.2f %s",
                 (double)*(float *)(local_24->field14_0x3218 + 0x13c),piVar3);
      iVar4 = iVar4 + 1;
      engine_2d_c_drawText_FUN_00401fd0(local_2e0,0,y_pos);
      piVar3 = piVar3 + 8;
      y_pos = y_pos + 0xb;
      local_24 = (CEventList *)local_24->event_list;
    } while (iVar4 < this_ptr->timer_count);
  }
  iVar4 = 0;
  if (0 < this_ptr->current_event_count) {
    pCVar2 = this_ptr->current_event_list;
    iVar1 = y_pos;
    do {
      iVar4 = iVar4 + 1;
      y_pos = iVar1 + 0xb;
      engine_2d_c_drawText_FUN_00401fd0((char *)pCVar2,0,iVar1);
      pCVar2 = pCVar2 + 0x20;
      iVar1 = y_pos;
    } while (iVar4 < this_ptr->current_event_count);
  }
  iVar4 = 0;
  if (0 < this_ptr->counter_count) {
    local_1c = this_ptr->field16_0x3380;
    do {
      crt_stdio_c_sprintf_FUN_005fdbd0(local_88,"%s=%d");
      engine_2d_c_drawText_FUN_00401fd0(local_88,0,y_pos);
      iVar4 = iVar4 + 1;
      y_pos = y_pos + 0xb;
      local_1c = local_1c + 0x20;
    } while (iVar4 < this_ptr->counter_count);
  }
  iVar4 = 0;
  if (0 < this_ptr->actor_var_count) {
    local_18 = this_ptr->variablesVarName1;
    do {
      crt_stdio_c_sprintf_FUN_005fdbd0(local_ec,"%s=%s");
      iVar4 = iVar4 + 1;
      engine_2d_c_drawText_FUN_00401fd0(local_ec,0,y_pos);
      y_pos = y_pos + 0xb;
      local_18 = local_18 + 0x1e;
    } while (iVar4 < this_ptr->actor_var_count);
  }
  core_event_cpp_CEventList_FUN_004b0db0(this_ptr);
  local_14 = 0;
  if (0 < this_ptr[1].event_count) {
    local_20 = this_ptr[1].event_list + 4;
    pCVar2 = this_ptr[1].event_list + 0x18;
    pCVar5 = this_ptr;
    do {
      crt_stdio_c_sprintf_FUN_005fdbd0
                (local_150,"%s=%s %.1f",local_20,pCVar2,
                 *(uint *)(pCVar5[1].field2_0x68 + 0xb4),
                 *(uint *)(pCVar5[1].field2_0x68 + 0xb8));
      pCVar5 = (CEventList *)(pCVar5->field2_0x68 + 0xb8);
      pCVar2 = pCVar2 + 0x120;
      engine_2d_c_drawText_FUN_00401fd0(local_150,0,y_pos);
      local_20 = local_20 + 0x120;
      local_14 = local_14 + 1;
      y_pos = y_pos + 0xb;
    } while (local_14 < this_ptr[1].event_count);
  }
  return;
}
