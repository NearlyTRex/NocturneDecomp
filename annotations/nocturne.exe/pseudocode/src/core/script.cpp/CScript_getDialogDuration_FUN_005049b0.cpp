// Name: core_script.cpp_CScript_getDialogDuration_FUN_005049b0
// Address: 005049b0
// Address Range: [[005049b0, 00504b69]]
// Convention: __cdecl
// Signature: float __cdecl core_script_cpp_CScript_getDialogDuration_FUN_005049b0(CScript *this_ptr,char *actor_specifier,char *sound_name,char *dialog_text)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_script_cpp_CScript_getDialogDuration_FUN_005049b0(CScript *this_ptr,char *actor_specifier,char *sound_name,char *dialog_text)

{
  char cVar1;
  CDemonActor *pCVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  byte bVar6;
  float local_28;
  uint local_24;
  uint uStack_20;
  int local_18;
  float local_14;
  
  bVar6 = 0;
  local_18 = 0;
  if (this_ptr->message_duration < 0.0) {
    iVar3 = sscanf(sound_name,(char *)&DOUBLE_0058fa9a,&local_28);
    if (iVar3 != 1) {
      local_28 = core_sound_cpp_CSound_FUN_0052ebc0(g_CSound_PTR_005bed68,sound_name);
      local_14 = local_28;
      if (local_28 < 0.0) {
        shape_edittool_cpp_CStrList_add_FUN_00473cb0(&g_CPickList_01e56c30.base,sound_name);
        uVar4 = 0xffffffff;
        pcVar5 = dialog_text;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
        } while (cVar1 != '\0');
        local_24 = ~uVar4 - 1;
        uStack_20 = 0;
        local_28 = (float)((float10)local_24 * (float10)0.02 + (float10)0.40000000000000002);
      }
      if (_DAT_01e56418 == 0) {
        local_18 = 1;
      }
    }
  }
  else {
    local_28 = this_ptr->message_duration;
  }
  pCVar2 = core_script_cpp_getActor_FUN_004fe180
                     (actor_specifier,g_CCharacterActorType_00765a60.name_hash,
                      &g_CCharacterActorType_00765a60);
  this_ptr->who_is_speaking = pCVar2;
  if (pCVar2 == (CDemonActor *)0x0) {
    if (_DAT_01e56c2c != 0) {
      return 0.0;
    }
    return -1.0;
  }
  this_ptr->last_speaker = pCVar2;
  if ((this_ptr->focus_actor_locked == 0) && (this_ptr->who_is_speaking != this_ptr->focus_actor)) {
    this_ptr->focus_actor_changed = 1;
    this_ptr->focus_actor = this_ptr->who_is_speaking;
  }
  if (_DAT_01e56418 == 0) {
    pcVar5 = this_ptr->current_message;
    do {
      cVar1 = *dialog_text;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = dialog_text[1];
      dialog_text = dialog_text + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
    if (this_ptr->who_is_speaking != (CDemonActor *)0x0) {
      *(float *)this_ptr->who_is_speaking[0x1d].actor_name = local_28;
    }
    if (local_18 != 0) {
      sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
      sound_sndmain_cpp_setNextSfxChannel_FUN_005261b0(2);
      uVar4 = core_sound_cpp_CSound_playSound_FUN_0052ea40
                        (g_CSound_PTR_005bed68,this_ptr,sound_name);
      this_ptr->current_sfx_handle = uVar4;
      sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
    }
  }
  return local_28;
}
