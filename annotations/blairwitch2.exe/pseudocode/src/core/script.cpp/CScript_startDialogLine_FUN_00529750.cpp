// Name: core_script.cpp_CScript_startDialogLine_FUN_00529750
// Address: 00529750
// Address Range: [[00529750, 00529909]]
// Convention: __cdecl
// Signature: float __cdecl core_script_cpp_CScript_startDialogLine_FUN_00529750(CScript *this_ptr,char *actor_specifier,char *sound_name,char *dialog_text)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_script_cpp_CScript_startDialogLine_FUN_00529750(CScript *this_ptr,char *actor_specifier,char *sound_name,char *dialog_text)

{
  char cVar1;
  bool bVar2;
  CDemonActor *pCVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  byte bVar7;
  float local_28;
  
  bVar7 = 0;
  bVar2 = false;
  if (this_ptr->message_duration < 0.0) {
    iVar4 = sscanf(sound_name,&DAT_005e4d9b);
    if (iVar4 != 1) {
      local_28 = core_sound_cpp_CSound_getSoundDuration_FUN_0055af90(0x0264B290,sound_name);
      if (local_28 < 0.0) {
        shape_edittool_cpp_CStrList_add_FUN_00480e70(&g_ScriptPickList.base,sound_name);
        uVar5 = 0xffffffff;
        pcVar6 = dialog_text;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + (uint)bVar7 * -2 + 1;
        } while (cVar1 != '\0');
        local_28 = (float)((float10)(~uVar5 - 1) * (float10)_DAT_005e4da3 + (float10)_DAT_005e4dab);
      }
      if (_DAT_01e650f8 == 0) {
        bVar2 = true;
      }
    }
  }
  else {
    local_28 = this_ptr->message_duration;
  }
  pCVar3 = (CDemonActor *)
           core_script_cpp_getActor_FUN_00521290
                     (actor_specifier,g_CCharacterClassInfo.name_hash,&g_CCharacterClassInfo);
  this_ptr->who_is_speaking = pCVar3;
  if (pCVar3 == (CDemonActor *)0x0) {
    if (_DAT_01e6590c != 0) {
      return 0.0;
    }
    return -1.0;
  }
  this_ptr->last_speaker = pCVar3;
  if ((this_ptr->focus_actor_locked == 0) && (this_ptr->who_is_speaking != this_ptr->focus_actor)) {
    this_ptr->focus_actor_changed = 1;
    this_ptr->focus_actor = this_ptr->who_is_speaking;
  }
  if (_DAT_01e650f8 == 0) {
    pcVar6 = this_ptr->current_message;
    do {
      cVar1 = *dialog_text;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = dialog_text[1];
      dialog_text = dialog_text + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
    if (this_ptr->who_is_speaking != (CDemonActor *)0x0) {
      this_ptr->who_is_speaking[0xe].particle_systems[3].fade_end = local_28;
    }
    if (bVar2) {
      sound_sndmain_cpp_pushSfxOptions_FUN_00550450();
      sound_sndmain_cpp_setNextSfxChannel_FUN_00550310(2);
      uVar5 = core_sound_cpp_CSound_playSound_FUN_0055ae30(0x0264B290,this_ptr,sound_name);
      this_ptr->current_sfx_handle = uVar5;
      sound_sndmain_cpp_popSfxOptions_FUN_005504d0();
    }
  }
  return local_28;
}
