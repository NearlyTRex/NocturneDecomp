// Name: core_script.cpp_CScript_getDialogDuration_FUN_0055ff00
// Address: 0055ff00
// Address Range: [[0055ff00, 005600b9]]
// Convention: __cdecl
// Signature: float __cdecl core_script_cpp_CScript_getDialogDuration_FUN_0055ff00(CScript *this_ptr,char *actor_specifier,char *sound_name,char *dialog_text)

#include "nocturne.h"

float __cdecl core_script_cpp_CScript_getDialogDuration_FUN_0055ff00(CScript *this_ptr,char *actor_specifier,char *sound_name,char *dialog_text)

{
  char cVar2;
  CDemonActor *pCVar2;
  int iVar3;
  uint uVar4;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  byte bVar6;
  float local_28;
  uint local_24;
  uint uStack_20;
  int local_18;
  float local_14;
  char cVar1;
  
  bVar6 = 0;
  local_18 = 0;
  if (this_ptr->message_duration < 0.0) {
    iVar3 = sscanf(sound_name,"%f",&local_28);
    if (iVar3 != 1) {
      local_28 = core_sound_cpp_CSound_getSoundDuration_FUN_005b3ba0(g_CSoundPtr,sound_name);
      local_14 = local_28;
      if (local_28 < 0.0) {
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&g_ScriptPickList.base,sound_name);
        uVar3 = 0xffffffff;
        pcVar4 = dialog_text;
        do {
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          cVar2 = *pcVar4;
          pcVar4 = pcVar4 + (uint)bVar6 * -2 + 1;
        } while (cVar2 != '\0');
        local_24 = ~uVar3 - 1;
        uStack_20 = 0;
        local_28 = (float)((float10)local_24 * (float10)0.02 + (float10)0.40000000000000002);
      }
      if (g_ScriptEventsEnabled == 0) {
        local_18 = 1;
      }
    }
  }
  else {
    local_28 = this_ptr->message_duration;
  }
  pCVar2 = core_script_cpp_getActor_FUN_005594e0
                     (actor_specifier,g_CCharacterClassInfo.name_hash,&g_CCharacterClassInfo);
  this_ptr->who_is_speaking = pCVar2;
  if (pCVar2 == (CDemonActor *)0x0) {
    if (g_ActorLookedUpByVariable != 0) {
      return 0.0;
    }
    return -1.0;
  }
  this_ptr->last_speaker = pCVar2;
  if ((this_ptr->focus_actor_locked == 0) && (this_ptr->who_is_speaking != this_ptr->focus_actor)) {
    this_ptr->focus_actor_changed = 1;
    this_ptr->focus_actor = this_ptr->who_is_speaking;
  }
  if (g_ScriptEventsEnabled == 0) {
    pcVar5 = this_ptr->current_message;
    do {
      cVar1 = *dialog_text;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar2 = dialog_text[1];
      dialog_text = dialog_text + 2;
      pcVar5[1] = cVar2;
      pcVar5 = pcVar5 + 2;
    } while (cVar2 != '\0');
    if (this_ptr->who_is_speaking != (CDemonActor *)0x0) {
      *(float *)this_ptr->who_is_speaking[0x1c].create_event = local_28;
    }
    if (local_18 != 0) {
      sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
      sound_sndmain_cpp_setNextSfxChannel_FUN_005a8af0(2);
      uVar4 = core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,this_ptr,sound_name);
      this_ptr->current_sfx_handle = uVar4;
      sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
    }
  }
  return local_28;
}
