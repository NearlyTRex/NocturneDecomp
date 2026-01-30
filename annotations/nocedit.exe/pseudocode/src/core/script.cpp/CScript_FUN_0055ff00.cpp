// Name: core_script.cpp_CScript_FUN_0055ff00
// Address: 0055ff00
// Address Range: [[0055ff00, 005600b9]]
// Convention: __cdecl
// Signature: float __cdecl core_script_cpp_CScript_FUN_0055ff00(CScript *this_ptr,int param_2,char *param_3,char *param_4)

#include "nocturne.h"

float __cdecl
core_script_cpp_CScript_FUN_0055ff00(CScript *this_ptr,int param_2,char *param_3,char *param_4)

{
  char cVar1;
  CHero *pCVar2;
  int iVar3;
  uint extraout_EAX;
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
  if (*(float *)(this_ptr->unk5 + 0x3ff) < 0.0) {
    iVar3 = sscanf(param_3,&DAT_006431a0,&local_28);
    if (iVar3 != 1) {
      local_28 = core_sound_cpp_CSound_getSoundDuration_FUN_005b3ba0(g_CSoundPtr,param_3);
      local_14 = local_28;
      if (local_28 < 0.0) {
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&DAT_0310f4b0.base,param_3);
        uVar4 = 0xffffffff;
        pcVar5 = param_4;
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
      if (DAT_0310ec9c == 0) {
        local_18 = 1;
      }
    }
  }
  else {
    local_28 = *(float *)(this_ptr->unk5 + 0x3ff);
  }
  pCVar2 = core_script_cpp_GetDemonActor_FUN_005594e0
                     ((char *)param_2,g_CCharacterClassInfo.name_hash,0x823c14);
  this_ptr->who_is_speaking = (int)pCVar2;
  if (pCVar2 == (CHero *)0x0) {
    if (DAT_0310f4ac != 0) {
      return 0.0;
    }
    return -1.0;
  }
  *(CHero **)this_ptr->unk2 = pCVar2;
  if ((this_ptr->focus_actor_locked == 0) && (this_ptr->who_is_speaking != this_ptr->focus_actor)) {
    iVar3 = this_ptr->who_is_speaking;
    this_ptr->unk3[0] = '\x01';
    this_ptr->unk3[1] = '\0';
    this_ptr->unk3[2] = '\0';
    this_ptr->unk3[3] = '\0';
    this_ptr->focus_actor = iVar3;
  }
  if (DAT_0310ec9c == 0) {
    pcVar5 = &this_ptr->current_message;
    do {
      cVar1 = *param_4;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = param_4[1];
      param_4 = param_4 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
    if (this_ptr->who_is_speaking != 0) {
      *(float *)(this_ptr->who_is_speaking + 0x2618) = local_28;
    }
    if (local_18 != 0) {
      sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
      sound_sndmain_cpp_setNextSfxChannel_FUN_005a8af0(2);
      core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,this_ptr,param_3);
      *(uint *)(this_ptr->unk4 + 0xc) = extraout_EAX;
      sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
    }
  }
  return local_28;
}
