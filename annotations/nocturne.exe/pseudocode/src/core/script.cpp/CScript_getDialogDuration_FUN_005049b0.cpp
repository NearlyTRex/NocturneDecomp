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
    iVar4 = sscanf(sound_name,(char *)&DOUBLE_0058fa9a);
    if (iVar4 != 1) {
      local_28 = (float)core_sound_cpp_FUN_0052ebc0(g_CSound_PTR_005bed68,sound_name);
      if (local_28 < 0.0) {
        shape_edittool_cpp_CStrList_add_FUN_00473cb0(&g_CPickList_01e56c30.base,sound_name);
        uVar5 = 0xffffffff;
        pcVar6 = dialog_text;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + (uint)bVar7 * -2 + 1;
        } while (cVar1 != '\0');
        local_28 = (float)((float10)(~uVar5 - 1) * (float10)0.02 +
                          (float10)0.40000000000000002);
      }
      if (_DAT_01e56418 == 0) {
        bVar2 = true;
      }
    }
  }
  else {
    local_28 = this_ptr->message_duration;
  }
  pCVar3 = core_script_cpp_getActor_FUN_004fe180
                     (actor_specifier,g_CCharacterActorType_00765a60.name_hash,
                      &g_CCharacterActorType_00765a60);
  this_ptr->who_is_speaking = pCVar3;
  if (pCVar3 == (CDemonActor *)0x0) {
    if (_DAT_01e56c2c != 0) {
      return 0.0;
    }
    return -1.0;
  }
  this_ptr->last_speaker = pCVar3;
  if ((this_ptr->focus_actor_locked == 0) && (this_ptr->who_is_speaking != this_ptr->focus_actor)) {
    this_ptr->focus_actor_changed = 1;
    this_ptr->focus_actor = this_ptr->who_is_speaking;
  }
  if (_DAT_01e56418 == 0) {
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
      *(float *)this_ptr->who_is_speaking[0x1d].actor_name = local_28;
    }
    if (bVar2) {
      sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
      sound_sndmain_cpp_setNextSfxChannel_FUN_005261b0(2);
      uVar5 = core_sound_cpp_CSound_playSound_FUN_0052ea40
                        (g_CSound_PTR_005bed68,this_ptr,sound_name);
      this_ptr->current_sfx_handle = uVar5;
      sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
    }
  }
  return local_28;
}
