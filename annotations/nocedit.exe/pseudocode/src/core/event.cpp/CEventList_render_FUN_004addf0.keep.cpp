// Name: core_event.cpp_CEventList_render_FUN_004addf0
// Address: 004addf0
// MANUAL RECONSTRUCTION
// Address Range: [[004addf0, 004ae11a]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_CEventList_render_FUN_004addf0(CEventList *this_ptr)

#include "nocturne.h"

void __cdecl core_event_cpp_CEventList_render_FUN_004addf0(CEventList *this_ptr)

{
  int y;
  int y_00;
  int iVar1;
  char (*pacVar1) [32];
  int iVar2;
  char (*pacVar2) [32];
  char *pcVar3;
  int iVar4;
  CEventList *pCVar5;
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
    pacVar1 = (this_ptr->game_flags).names;
    iVar2 = y;
    do {
      _sprintf(local_218,"Game Flag: %s",*pacVar1);
      iVar4 = iVar4 + 1;
      pacVar1 = pacVar1 + 1;
      y = iVar2 + 0xb;
      engine_2d_c_drawText_FUN_00401fd0(local_218,0,iVar2);
      iVar2 = y;
    } while (iVar4 < (this_ptr->game_flags).count);
  }
  iVar2 = 0;
  if (0 < (this_ptr->persistent_events).count) {
    pacVar1 = (this_ptr->persistent_events).names;
    y_00 = y;
    do {
      _sprintf(local_3a8,"Persistent: %s",*pacVar1);
      iVar2 = iVar2 + 1;
      pacVar1 = pacVar1 + 1;
      y = y_00 + 0xb;
      engine_2d_c_drawText_FUN_00401fd0(local_3a8,0,y_00);
      y_00 = y;
    } while (iVar2 < (this_ptr->persistent_events).count);
  }
  iVar2 = 0;
  if (0 < (this_ptr->timers).count) {
    pacVar2 = (this_ptr->timers).names;
    local_24 = this_ptr;
    do {
      _sprintf
                (local_2e0,"Timer: %5.2f %s",(double)(local_24->timers).durations[0],*pacVar2);
      iVar2 = iVar2 + 1;
      engine_2d_c_drawText_FUN_00401fd0(local_2e0,0,y);
      pacVar2 = pacVar2 + 1;
      y = y + 0xb;
      local_24 = (CEventList *)(local_24->events).names;
    } while (iVar2 < (this_ptr->timers).count);
  }
  iVar2 = 0;
  if (0 < (this_ptr->current_events).count) {
    pacVar1 = (this_ptr->current_events).names;
    iVar1 = y;
    do {
      iVar2 = iVar2 + 1;
      y = iVar1 + 0xb;
      engine_2d_c_drawText_FUN_00401fd0(*pacVar1,0,iVar1);
      pacVar1 = pacVar1 + 1;
      iVar1 = y;
    } while (iVar2 < (this_ptr->current_events).count);
  }
  iVar2 = 0;
  if (0 < (this_ptr->counters).count) {
    do {
      _sprintf(local_88,"%s=%d",(this_ptr->counters).names[iVar2],(this_ptr->counters).values[iVar2]);
      engine_2d_c_drawText_FUN_00401fd0(local_88,0,y);
      iVar2 = iVar2 + 1;
      y = y + 0xb;
    } while (iVar2 < (this_ptr->counters).count);
  }
  iVar2 = 0;
  if (0 < (this_ptr->actor_vars).count) {
    do {
      _sprintf(local_ec,"%s=%s",(this_ptr->actor_vars).var_names[iVar2],(this_ptr->actor_vars).actor_names[iVar2]);
      iVar2 = iVar2 + 1;
      engine_2d_c_drawText_FUN_00401fd0(local_ec,0,y);
      y = y + 0xb;
    } while (iVar2 < (this_ptr->actor_vars).count);
  }
  core_event_cpp_CEventList_updateSfxEntries_FUN_004b0db0(this_ptr);
  local_14 = 0;
  if (0 < (this_ptr->sfx_handles).count) {
    local_20 = (this_ptr->sfx_handles).entries[0].handle_name;
    pcVar3 = (this_ptr->sfx_handles).entries[0].sound_filename;
    pCVar5 = this_ptr;
    do {
      _sprintf
                (local_150,"%s=%s %.1f",local_20,pcVar3,
                 (pCVar5->sfx_handles).entries[0].playback_position);
      pCVar5 = (CEventList *)((pCVar5->events).names[8] + 0x1c);
      pcVar3 = pcVar3 + 0x120;
      engine_2d_c_drawText_FUN_00401fd0(local_150,0,y);
      local_20 = local_20 + 0x120;
      local_14 = local_14 + 1;
      y = y + 0xb;
    } while (local_14 < (this_ptr->sfx_handles).count);
  }
  return;
}
