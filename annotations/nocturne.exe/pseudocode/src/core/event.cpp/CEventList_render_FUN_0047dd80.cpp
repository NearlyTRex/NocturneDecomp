// Name: core_event.cpp_CEventList_render_FUN_0047dd80
// Address: 0047dd80
// Address Range: [[0047dd80, 0047e0aa]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_CEventList_render_FUN_0047dd80(CEventList *this_ptr)

#include "nocturne.h"

void __cdecl core_event_cpp_CEventList_render_FUN_0047dd80(CEventList *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char (*text) [32];
  char local_3a8 [200];
  char local_2e0 [200];
  char local_218 [200];
  char local_150 [100];
  char local_ec [100];
  char local_88 [100];
  CEventList *local_24;
  char *local_20;
  char (*local_1c) [32];
  char (*local_18) [30];
  int local_14;
  
  iVar1 = 0x2c;
  iVar3 = 0;
  iVar2 = iVar1;
  if (0 < (this_ptr->game_flags).count) {
    do {
      _sprintf(local_218,"Game Flag: %s");
      iVar3 = iVar3 + 1;
      iVar2 = iVar1 + 0xb;
      engine_2d_c_drawText_FUN_00402600(local_218,0,iVar1);
      iVar1 = iVar2;
    } while (iVar3 < (this_ptr->game_flags).count);
  }
  iVar3 = 0;
  iVar1 = iVar2;
  if (0 < (this_ptr->persistent_events).count) {
    do {
      _sprintf(local_3a8,"Persistent: %s");
      iVar3 = iVar3 + 1;
      iVar1 = iVar2 + 0xb;
      engine_2d_c_drawText_FUN_00402600(local_3a8,0,iVar2);
      iVar2 = iVar1;
    } while (iVar3 < (this_ptr->persistent_events).count);
  }
  iVar2 = 0;
  if (0 < (this_ptr->timers).count) {
    local_24 = this_ptr;
    do {
      _sprintf(local_2e0,"Timer: %5.2f %s");
      iVar2 = iVar2 + 1;
      engine_2d_c_drawText_FUN_00402600(local_2e0,0,iVar1);
      iVar1 = iVar1 + 0xb;
      local_24 = (CEventList *)(local_24->events).names;
    } while (iVar2 < (this_ptr->timers).count);
  }
  iVar2 = 0;
  if (0 < (this_ptr->current_events).count) {
    text = (this_ptr->current_events).names;
    iVar3 = iVar1;
    do {
      iVar2 = iVar2 + 1;
      iVar1 = iVar3 + 0xb;
      engine_2d_c_drawText_FUN_00402600(*text,0,iVar3);
      text = text + 1;
      iVar3 = iVar1;
    } while (iVar2 < (this_ptr->current_events).count);
  }
  iVar2 = 0;
  if (0 < (this_ptr->counters).count) {
    local_1c = (this_ptr->counters).names;
    do {
      _sprintf(local_88,"%s=%d");
      engine_2d_c_drawText_FUN_00402600(local_88,0,iVar1);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0xb;
      local_1c = local_1c + 1;
    } while (iVar2 < (this_ptr->counters).count);
  }
  iVar2 = 0;
  if (0 < (this_ptr->actor_vars).count) {
    local_18 = (this_ptr->actor_vars).var_names;
    do {
      _sprintf(local_ec,"%s=%s");
      iVar2 = iVar2 + 1;
      engine_2d_c_drawText_FUN_00402600(local_ec,0,iVar1);
      iVar1 = iVar1 + 0xb;
      local_18 = local_18 + 1;
    } while (iVar2 < (this_ptr->actor_vars).count);
  }
  core_event_cpp_CEventList_updateSfxEntries_FUN_00480d60(this_ptr);
  local_14 = 0;
  if (0 < (this_ptr->sfx_handles).count) {
    local_20 = (this_ptr->sfx_handles).entries[0].handle_name;
    do {
      _sprintf(local_150,"%s=%s %.1f");
      engine_2d_c_drawText_FUN_00402600(local_150,0,iVar1);
      local_20 = local_20 + 0x120;
      local_14 = local_14 + 1;
      iVar1 = iVar1 + 0xb;
    } while (local_14 < (this_ptr->sfx_handles).count);
  }
  return;
}
