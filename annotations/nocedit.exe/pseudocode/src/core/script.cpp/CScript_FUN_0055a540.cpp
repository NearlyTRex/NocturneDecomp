// Name: core_script.cpp_CScript_FUN_0055a540
// Address: 0055a540
// Address Range: [[0055a540, 0055a6b3]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_FUN_0055a540(CScript *this_ptr)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_FUN_0055a540(CScript *this_ptr)

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
  this_ptr->current_message = '\0';
  this_ptr->cmd_timer = -1.0;
  this_ptr->dialog_wav_time = -1.0;
  this_ptr->unk1[0] = '\0';
  iVar3 = g_LocalHeroIndex;
  this_ptr->unk1[1] = '\0';
  this_ptr->unk1[2] = '\0';
  this_ptr->unk1[3] = '\0';
  this_ptr->who_is_speaking = 0;
  this_ptr->focus_actor = (int)g_HeroActors[iVar3];
  pCVar2 = g_CGamePtr;
  this_ptr->unk3[0] = '\x01';
  this_ptr->unk3[1] = '\0';
  this_ptr->unk3[2] = '\0';
  this_ptr->unk3[3] = '\0';
  pCVar2->allow_damage_flag = 1;
  pCVar2->allow_enemy_attack_flag = 1;
  pCVar2->letterbox_mode = 0;
  FLOAT_0310f4a0 = 0.0;
  this_ptr->unk5[0x3ff] = '\0';
  this_ptr->unk5[0x400] = '\0';
  this_ptr->unk5[0x401] = -0x80;
  this_ptr->unk5[0x402] = -0x41;
  this_ptr->unk5[0x403] = -1;
  this_ptr->unk5[0x404] = -1;
  this_ptr->unk5[0x405] = -1;
  this_ptr->unk5[0x406] = -1;
  pcVar6 = g_CDemonSetPtr->geometry_filename;
  this_ptr->call_stack_count = 0;
  DAT_0310f4a8 = 0;
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
  iVar3 = stricmp(local_70,"smill.wav");
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
  iVar3 = stricmp(local_70,"town.wav");
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
  core_sound_cpp_CSound_playAmbientSound_FUN_005b39b0(g_CSoundPtr,local_70);
  this_ptr->unk4[0] = '\0';
  this_ptr->unk4[1] = '\0';
  this_ptr->unk4[2] = '\0';
  this_ptr->unk4[3] = '\0';
  return;
}
