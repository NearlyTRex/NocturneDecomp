// Name: core_script.cpp_FUN_004feff0
// Address: 004feff0
// Address Range: [[004feff0, 004ff163]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_FUN_004feff0(CScript *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_script_cpp_FUN_004feff0(CScript *this_ptr)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  byte bVar6;
  char local_70 [100];
  
  bVar6 = 0;
  (this_ptr->script_text).data_array = (char **)0x0;
  *(byte *)&this_ptr->cmd_timer = 0;
  (this_ptr->script_text).vtable._us = (CStrList_vtable *)0xbf800000;
  this_ptr->next_cmd = -0x40800000;
  this_ptr->script_pause_flag = 0;
  iVar3 = _DAT_01cae0e8;
  this_ptr->who_is_speaking = (CDemonActor *)0x0;
  this_ptr->focus_actor = *(CDemonActor **)(iVar3 * 4 + 0x1cae0d8);
  iVar3 = 0x01C775EC;
  this_ptr->focus_actor_changed = 1;
  *(uint *)(iVar3 + 0x22c) = 1;
  *(uint *)(iVar3 + 0x230) = 1;
  *(uint *)(iVar3 + 0x228) = 0;
  _DAT_01e56c20 = 0;
  this_ptr->current_message[0x3f8] = '\0';
  this_ptr->current_message[0x3f9] = '\0';
  this_ptr->current_message[0x3fa] = -0x80;
  this_ptr->current_message[0x3fb] = -0x41;
  this_ptr->current_message[0x3fc] = -1;
  this_ptr->current_message[0x3fd] = -1;
  this_ptr->current_message[0x3fe] = -1;
  this_ptr->current_message[0x3ff] = -1;
  pcVar2 = (char *)(0x01E57284 + 0x14cd08);
  this_ptr->message_duration = 0.0;
  _DAT_01e56c28 = 0;
  this_ptr->focus_actor_locked = 0;
  splitpath(pcVar2,(char *)0x0,(char *)0x0,local_70,(char *)0x0);
  pcVar4 = ".wav";
  iVar3 = -1;
  pcVar2 = local_70;
  do {
    pcVar5 = pcVar2;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar5 = pcVar2 + (uint)bVar6 * -2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar5;
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
    pcVar2 = local_70;
    do {
      pcVar5 = pcVar2;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar5 = pcVar2 + (uint)bVar6 * -2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar5;
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
    pcVar2 = local_70;
    do {
      pcVar5 = pcVar2;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar5 = pcVar2 + (uint)bVar6 * -2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar5;
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
  core_sound_cpp_CSound_playAmbientSound_FUN_0052e9d0(0x02DC9450,local_70);
  this_ptr->script_state = 0;
  return;
}
