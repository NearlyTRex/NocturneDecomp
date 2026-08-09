// Name: core_script.cpp_CScript_FUN_004feff0
// Address: 004feff0
// Address Range: [[004feff0, 004ff163]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_FUN_004feff0(CScript *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_script_cpp_CScript_FUN_004feff0(CScript *this_ptr)

{
  char cVar1;
  CGame *pCVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  byte bVar7;
  char local_70 [100];
  
  bVar7 = 0;
  this_ptr->next_cmd = 0;
  this_ptr->current_message[0] = '\0';
  this_ptr->cmd_timer = -1.0;
  this_ptr->dialog_wav_time = -1.0;
  this_ptr->script_pause_flag = 0;
  iVar3 = g_LocalHeroIndex;
  this_ptr->who_is_speaking = (CDemonActor *)0x0;
  this_ptr->focus_actor = (CDemonActor *)g_HeroActors[iVar3];
  pCVar2 = g_CGame_PTR_005b9354;
  this_ptr->focus_actor_changed = 1;
  pCVar2->allow_damage_flag = 1;
  pCVar2->allow_enemy_attack_flag = 1;
  pCVar2->letterbox_mode = 0;
  _DAT_01e56c20 = 0;
  this_ptr->message_duration = -1.0;
  this_ptr->saved_cmd_index = -1;
  pcVar6 = g_CDemonSet_PTR_005be368->geometry_filename;
  this_ptr->call_stack_count = 0;
  _DAT_01e56c28 = 0;
  this_ptr->focus_actor_locked = 0;
  splitpath(pcVar6,(char *)0x0,(char *)0x0,local_70,(char *)0x0);
  pcVar4 = ".wav";
  iVar3 = -1;
  pcVar6 = local_70;
  do {
    pcVar5 = pcVar6;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar5 = pcVar6 + (uint)bVar7 * -2 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar5;
  } while (cVar1 != '\0');
  pcVar5 = pcVar5 + -1;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  iVar3 = _stricmp(local_70,"smill.wav");
  if (iVar3 == 0) {
    pcVar4 = "@0.85";
    iVar3 = -1;
    pcVar6 = local_70;
    do {
      pcVar5 = pcVar6;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar5 = pcVar6 + (uint)bVar7 * -2 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar5;
    } while (cVar1 != '\0');
    pcVar5 = pcVar5 + -1;
    do {
      cVar1 = *pcVar4;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
  }
  iVar3 = _stricmp(local_70,"town.wav");
  if (iVar3 == 0) {
    pcVar4 = "@0.85";
    iVar3 = -1;
    pcVar6 = local_70;
    do {
      pcVar5 = pcVar6;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar5 = pcVar6 + (uint)bVar7 * -2 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar5;
    } while (cVar1 != '\0');
    pcVar5 = pcVar5 + -1;
    do {
      cVar1 = *pcVar4;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
  }
  core_sound_cpp_CSound_playAmbientSound_FUN_0052e9d0(g_CSound_PTR_005bed68,local_70);
  this_ptr->script_state = 0;
  return;
}
