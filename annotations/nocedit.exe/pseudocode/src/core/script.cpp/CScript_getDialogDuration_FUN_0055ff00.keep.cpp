// Name: core_script.cpp_CScript_getDialogDuration_FUN_0055ff00
// Address: 0055ff00
// MANUAL RECONSTRUCTION
// Address Range: [[0055ff00, 005600b9]]
// Convention: __cdecl
// Signature: float __cdecl core_script_cpp_CScript_getDialogDuration_FUN_0055ff00(CScript *this_ptr,char *actor_specifier,char *sound_name,char *dialog_text)

#include "nocturne.h"

float __cdecl core_script_cpp_CScript_getDialogDuration_FUN_0055ff00(CScript *this_ptr,char *actor_specifier,char *sound_name,char *dialog_text)

{
  CCharacter *pCVar2;
  int iVar3;
  uint uVar4;
  float local_28;
  uint local_24;
  int local_18;
  uint uStack_20;
  float local_14;

  local_18 = 0;
  if (this_ptr->message_duration < 0.0) {
    iVar3 = sscanf(sound_name,"%f",&local_28);
    if (iVar3 != 1) {
      local_28 = core_sound_cpp_CSound_getSoundDuration_FUN_005b3ba0(g_CSoundPtr,sound_name);
      local_14 = local_28;
      if (local_28 < 0.0) {
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&g_ScriptPickList.base,sound_name);
        local_24 = strlen(dialog_text);
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
  pCVar2 = (CCharacter *)
           core_script_cpp_getActor_FUN_005594e0
                     (actor_specifier,g_CCharacterClassInfo.name_hash,&g_CCharacterClassInfo);
  this_ptr->who_is_speaking = (CDemonActor *)pCVar2;
  if (pCVar2 == (CCharacter *)0x0) {
    if (g_ActorLookedUpByVariable != 0) {
      return 0.0;
    }
    return -1.0;
  }
  this_ptr->last_speaker = (CDemonActor *)pCVar2;
  if ((this_ptr->focus_actor_locked == 0) && (this_ptr->who_is_speaking != this_ptr->focus_actor)) {
    this_ptr->focus_actor_changed = 1;
    this_ptr->focus_actor = this_ptr->who_is_speaking;
  }
  if (g_ScriptEventsEnabled == 0) {
    strcpy(this_ptr->current_message,dialog_text);
    if (this_ptr->who_is_speaking != (CDemonActor *)0x0) {
      ((CCharacter *)this_ptr->who_is_speaking)->speech_timer = local_28;
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
