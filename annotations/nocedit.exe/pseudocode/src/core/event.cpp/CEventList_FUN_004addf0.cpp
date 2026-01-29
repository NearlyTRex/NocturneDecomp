// Name: core_event.cpp_CEventList_FUN_004addf0
// Address: 004addf0
// Address Range: [[004addf0, 004ae11a]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_CEventList_FUN_004addf0(CEventList *this_ptr)

#include "nocturne.h"

void __cdecl core_event_cpp_CEventList_FUN_004addf0(CEventList *this_ptr)

{
  int y_pos;
  int iVar1;
  int *piVar2;
  int iVar3;
  CEventList *pCVar4;
  char local_3a8 [200];
  char local_2e0 [200];
  char local_218 [200];
  char local_150 [100];
  char local_ec [100];
  char local_88 [100];
  CEventList *local_24;
  int *local_20;
  char *local_1c;
  char *local_18;
  int local_14;
  
  y_pos = 0x2c;
  iVar3 = 0;
  if (0 < this_ptr->game_flag_count) {
    piVar2 = this_ptr->game_flag_list;
    iVar1 = y_pos;
    do {
      sprintf(local_218,"Game Flag: %s",piVar2);
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 8;
      y_pos = iVar1 + 0xb;
      engine_2d_c_drawText_FUN_00401fd0(local_218,0,iVar1);
      iVar1 = y_pos;
    } while (iVar3 < this_ptr->game_flag_count);
  }
  iVar3 = 0;
  if (0 < this_ptr->persistent_event_count) {
    piVar2 = this_ptr->persistent_event_list;
    iVar1 = y_pos;
    do {
      sprintf(local_3a8,"Persistent: %s",piVar2);
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 8;
      y_pos = iVar1 + 0xb;
      engine_2d_c_drawText_FUN_00401fd0(local_3a8,0,iVar1);
      iVar1 = y_pos;
    } while (iVar3 < this_ptr->persistent_event_count);
  }
  iVar3 = 0;
  if (0 < this_ptr->timer_count) {
    piVar2 = &this_ptr->timer_list;
    local_24 = this_ptr;
    do {
      sprintf
                (local_2e0,"Timer: %5.2f %s",(double)*(float *)(local_24->unk5 + 0x13c),piVar2
                );
      iVar3 = iVar3 + 1;
      engine_2d_c_drawText_FUN_00401fd0(local_2e0,0,y_pos);
      piVar2 = piVar2 + 8;
      y_pos = y_pos + 0xb;
      local_24 = (CEventList *)local_24->event_list;
    } while (iVar3 < this_ptr->timer_count);
  }
  iVar3 = 0;
  if (0 < this_ptr->current_event_count) {
    piVar2 = this_ptr->current_event_list;
    iVar1 = y_pos;
    do {
      iVar3 = iVar3 + 1;
      y_pos = iVar1 + 0xb;
      engine_2d_c_drawText_FUN_00401fd0((char *)piVar2,0,iVar1);
      piVar2 = piVar2 + 8;
      iVar1 = y_pos;
    } while (iVar3 < this_ptr->current_event_count);
  }
  iVar3 = 0;
  if (0 < this_ptr->counter_count) {
    local_1c = this_ptr->unk6;
    do {
      sprintf(local_88,"%s=%d");
      engine_2d_c_drawText_FUN_00401fd0(local_88,0,y_pos);
      iVar3 = iVar3 + 1;
      y_pos = y_pos + 0xb;
      local_1c = local_1c + 0x20;
    } while (iVar3 < this_ptr->counter_count);
  }
  iVar3 = 0;
  if (0 < this_ptr->actor_var_count) {
    local_18 = this_ptr->variablesVarName1;
    do {
      sprintf(local_ec,"%s=%s");
      iVar3 = iVar3 + 1;
      engine_2d_c_drawText_FUN_00401fd0(local_ec,0,y_pos);
      y_pos = y_pos + 0xb;
      local_18 = local_18 + 0x1e;
    } while (iVar3 < this_ptr->actor_var_count);
  }
  core_event_cpp_CEventList_FUN_004b0db0(this_ptr);
  local_14 = 0;
  if (0 < this_ptr[1].event_count) {
    local_20 = this_ptr[1].event_list + 1;
    piVar2 = this_ptr[1].event_list + 6;
    pCVar4 = this_ptr;
    do {
      sprintf
                (local_150,"%s=%s %.1f",local_20,piVar2,*(uint *)(pCVar4[1].unk1 + 0xb4),
                 *(uint *)(pCVar4[1].unk1 + 0xb8));
      pCVar4 = (CEventList *)(pCVar4->unk1 + 0xb8);
      piVar2 = piVar2 + 0x48;
      engine_2d_c_drawText_FUN_00401fd0(local_150,0,y_pos);
      local_20 = local_20 + 0x48;
      local_14 = local_14 + 1;
      y_pos = y_pos + 0xb;
    } while (local_14 < this_ptr[1].event_count);
  }
  return;
}
