// Name: core_event.cpp_CEventList_render_FUN_0047dd80
// Address: 0047dd80
// Address Range: [[0047dd80, 0047e0aa]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_CEventList_render_FUN_0047dd80(CEventList *this_ptr)

#include "nocturne.h"

void __cdecl core_event_cpp_CEventList_render_FUN_0047dd80(CEventList *this_ptr)

{
  int y;
  int iVar1;
  char (*pacVar2) [32];
  char *pcVar3;
  int iVar4;
  char (*pacVar5) [30];
  CEventList *pCVar6;
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
  
  y = 0x2c;
  iVar4 = 0;
  if (0 < (this_ptr->game_flags).count) {
    pacVar2 = (this_ptr->game_flags).names;
    iVar1 = y;
    do {
      _sprintf(local_218,"Game Flag: %s",pacVar2);
      iVar4 = iVar4 + 1;
      pacVar2 = pacVar2 + 1;
      y = iVar1 + 0xb;
      engine_2d_c_drawText_FUN_00402600(local_218,0,iVar1);
      iVar1 = y;
    } while (iVar4 < (this_ptr->game_flags).count);
  }
  iVar4 = 0;
  if (0 < (this_ptr->persistent_events).count) {
    pacVar2 = (this_ptr->persistent_events).names;
    iVar1 = y;
    do {
      _sprintf(local_3a8,"Persistent: %s",pacVar2);
      iVar4 = iVar4 + 1;
      pacVar2 = pacVar2 + 1;
      y = iVar1 + 0xb;
      engine_2d_c_drawText_FUN_00402600(local_3a8,0,iVar1);
      iVar1 = y;
    } while (iVar4 < (this_ptr->persistent_events).count);
  }
  iVar4 = 0;
  if (0 < (this_ptr->timers).count) {
    pacVar2 = (this_ptr->timers).names;
    local_24 = this_ptr;
    do {
      _sprintf(local_2e0,"Timer: %5.2f %s",(double)(local_24->timers).durations[0],pacVar2);
      iVar4 = iVar4 + 1;
      engine_2d_c_drawText_FUN_00402600(local_2e0,0,y);
      pacVar2 = pacVar2 + 1;
      y = y + 0xb;
      local_24 = (CEventList *)(local_24->events).names;
    } while (iVar4 < (this_ptr->timers).count);
  }
  iVar4 = 0;
  if (0 < (this_ptr->current_events).count) {
    pacVar2 = (this_ptr->current_events).names;
    iVar1 = y;
    do {
      iVar4 = iVar4 + 1;
      y = iVar1 + 0xb;
      engine_2d_c_drawText_FUN_00402600(*pacVar2,0,iVar1);
      pacVar2 = pacVar2 + 1;
      iVar1 = y;
    } while (iVar4 < (this_ptr->current_events).count);
  }
  iVar4 = 0;
  if (0 < (this_ptr->counters).count) {
    local_1c = (this_ptr->counters).names;
    pCVar6 = this_ptr;
    do {
      _sprintf(local_88,"%s=%d",local_1c,(pCVar6->counters).values[0]);
      pCVar6 = (CEventList *)(pCVar6->events).names;
      engine_2d_c_drawText_FUN_00402600(local_88,0,y);
      iVar4 = iVar4 + 1;
      y = y + 0xb;
      local_1c = local_1c + 1;
    } while (iVar4 < (this_ptr->counters).count);
  }
  iVar4 = 0;
  if (0 < (this_ptr->actor_vars).count) {
    pacVar5 = (this_ptr->actor_vars).actor_names;
    local_18 = (this_ptr->actor_vars).var_names;
    do {
      _sprintf(local_ec,"%s=%s",local_18,pacVar5);
      iVar4 = iVar4 + 1;
      engine_2d_c_drawText_FUN_00402600(local_ec,0,y);
      pacVar5 = pacVar5 + 1;
      y = y + 0xb;
      local_18 = local_18 + 1;
    } while (iVar4 < (this_ptr->actor_vars).count);
  }
  core_event_cpp_CEventList_updateSfxEntries_FUN_00480d60(this_ptr);
  local_14 = 0;
  if (0 < (this_ptr->sfx_handles).count) {
    local_20 = (this_ptr->sfx_handles).entries[0].handle_name;
    pcVar3 = (this_ptr->sfx_handles).entries[0].sound_filename;
    pCVar6 = this_ptr;
    do {
      _sprintf(local_150,"%s=%s %.1f",local_20,pcVar3,
                 *(uint *)&(pCVar6->sfx_handles).entries[0].playback_position,
                 *(uint *)((int)&(pCVar6->sfx_handles).entries[0].playback_position + 4));
      pCVar6 = (CEventList *)((pCVar6->events).names[8] + 0x1c);
      pcVar3 = pcVar3 + 0x120;
      engine_2d_c_drawText_FUN_00402600(local_150,0,y);
      local_20 = local_20 + 0x120;
      local_14 = local_14 + 1;
      y = y + 0xb;
    } while (local_14 < (this_ptr->sfx_handles).count);
  }
  return;
}
