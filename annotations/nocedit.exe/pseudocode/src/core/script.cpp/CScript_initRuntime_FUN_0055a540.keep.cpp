// Name: core_script.cpp_CScript_initRuntime_FUN_0055a540
// Address: 0055a540
// MANUAL RECONSTRUCTION
// Address Range: [[0055a540, 0055a6b3]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_initRuntime_FUN_0055a540(CScript *this_ptr)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_initRuntime_FUN_0055a540(CScript *this_ptr)

{
  int iVar4;
  char *pcVar8;
  char local_70 [100];
  CGame *pCVar2;
  byte bVar7;

  bVar7 = 0;
  this_ptr->next_cmd = 0;
  this_ptr->current_message[0] = '\0';
  this_ptr->cmd_timer = -1.0;
  this_ptr->dialog_wav_time = -1.0;
  this_ptr->mission_ended = 0;
  iVar4 = g_LocalHeroIndex;
#if !NOCTURNE_AUTHENTIC_NETPLAY
  if ((g_HeroActors[iVar4] == (CHero *)0x0) ||
     ((g_HeroActors[iVar4]->base).base.location.area_id < 0)) {
    for (iVar4 = 0; iVar4 < 4; iVar4 = iVar4 + 1) {
      if ((g_HeroActors[iVar4] != (CHero *)0x0) &&
         (-1 < (g_HeroActors[iVar4]->base).base.location.area_id)) break;
    }
    if (iVar4 == 4) {
      iVar4 = g_LocalHeroIndex;
    }
  }
#endif
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
  strcat(local_70,".wav");
  iVar4 = _stricmp(local_70,"smill.wav");
  if (iVar4 == 0) {
    strcat(local_70,"@0.85");
  }
  iVar4 = _stricmp(local_70,"town.wav");
  if (iVar4 == 0) {
    strcat(local_70,"@0.85");
  }
  core_sound_cpp_CSound_playAmbientSound_FUN_005b39b0(g_CSoundPtr,local_70);
  this_ptr->script_state = 0;
  return;
}
