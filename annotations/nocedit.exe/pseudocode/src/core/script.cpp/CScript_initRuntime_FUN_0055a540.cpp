// Name: core_script.cpp_CScript_initRuntime_FUN_0055a540
// Address: 0055a540
// Address Range: [[0055a540, 0055a6b3]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_initRuntime_FUN_0055a540(CScript *this_ptr)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_initRuntime_FUN_0055a540(CScript *this_ptr)

{
  char cVar2;
  int iVar4;
  int iVar3;
  char *pcVar4;
  char *pcVar7;
  char *pcVar5;
  char *pcVar8;
  char *pcVar9;
  char *pcVar6;
  byte bVar7;
  char local_70 [100];
  CGame *pCVar2;
  char cVar1;
  
  bVar7 = 0;
  this_ptr->next_cmd = 0;
  this_ptr->current_message[0] = '\0';
  this_ptr->cmd_timer = -1.0;
  this_ptr->dialog_wav_time = -1.0;
  this_ptr->script_pause_flag = 0;
  iVar4 = g_LocalHeroIndex;
  this_ptr->who_is_speaking = (CDemonActor *)0x0;
  this_ptr->focus_actor = (CDemonActor *)g_HeroActors[iVar4];
  pCVar2 = g_CGamePtr;
  this_ptr->focus_actor_changed = 1;
  pCVar2->allow_damage_flag = 1;
  pCVar2->allow_enemy_attack_flag = 1;
  pCVar2->letterbox_mode = 0;
  g_ScriptTimeScale = 0.0;
  this_ptr->message_duration = -1.0;
  this_ptr->saved_cmd_index = -1;
  pcVar8 = g_CDemonSetPtr->geometry_filename;
  this_ptr->call_stack_count = 0;
  g_ScriptLoopWarningShown = 0;
  this_ptr->focus_actor_locked = 0;
  splitpath(pcVar8,(char *)0x0,(char *)0x0,local_70,(char *)0x0);
  pcVar4 = ".wav";
  iVar3 = -1;
  pcVar5 = local_70;
  do {
    pcVar5 = pcVar5;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar5 = pcVar5 + (uint)bVar7 * -2 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5;
  } while (cVar1 != '\0');
  pcVar8 = pcVar5 + -1;
  do {
    cVar2 = *pcVar4;
    *pcVar8 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar8[1] = cVar2;
    pcVar8 = pcVar8 + 2;
  } while (cVar2 != '\0');
  iVar4 = _stricmp(local_70,"smill.wav");
  if (iVar4 == 0) {
    pcVar7 = "@0.85";
    iVar4 = -1;
    pcVar8 = local_70;
    do {
      pcVar9 = pcVar8;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar9 = pcVar8 + (uint)bVar7 * -2 + 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar9;
    } while (cVar2 != '\0');
    pcVar9 = pcVar9 + -1;
    do {
      cVar2 = *pcVar7;
      *pcVar9 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar9[1] = cVar2;
      pcVar9 = pcVar9 + 2;
    } while (cVar2 != '\0');
  }
  iVar4 = _stricmp(local_70,"town.wav");
  if (iVar4 == 0) {
    pcVar8 = "@0.85";
    iVar4 = -1;
    pcVar6 = local_70;
    do {
      pcVar6 = pcVar6;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar6 = pcVar6 + (uint)bVar7 * -2 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar6;
    } while (cVar2 != '\0');
    pcVar7 = pcVar6 + -1;
    do {
      cVar2 = *pcVar8;
      *pcVar7 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar7[1] = cVar2;
      pcVar7 = pcVar7 + 2;
    } while (cVar2 != '\0');
  }
  core_sound_cpp_CSound_playAmbientSound_FUN_005b39b0(g_CSoundPtr,local_70);
  this_ptr->script_state = 0;
  return;
}
