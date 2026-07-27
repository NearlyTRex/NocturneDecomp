// Name: core_script.cpp_CScript_getDialogDuration_FUN_005049b0
// Address: 005049b0
// Address Range: [[005049b0, 00504b69]]
// Convention: unknown
// Signature: float core_script_cpp_CScript_getDialogDuration_FUN_005049b0(int param_1,undefined4 param_2,undefined4 param_3,char *param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float core_script_cpp_CScript_getDialogDuration_FUN_005049b0(int param_1,uint param_2,uint param_3,char *param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
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
  if (*(float *)(param_1 + 0x44c) < 0.0) {
    iVar2 = sscanf(param_3,&DOUBLE_0058fa9a,&local_28);
    if (iVar2 != 1) {
      local_28 = (float)core_sound_cpp_FUN_0052ebc0(0x02DC9450,param_3);
      local_14 = local_28;
      if (local_28 < 0.0) {
        shape_edittool_cpp_CStrList_add_FUN_00473cb0(0x1e56c30,param_3);
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
      if (_DAT_01e56418 == 0) {
        local_18 = 1;
      }
    }
  }
  else {
    local_28 = *(float *)(param_1 + 0x44c);
  }
  iVar2 = core_script_cpp_getActor_FUN_004fe180
                    (param_2,g_CCharacterActorType_00765a60.name_hash,
                     &g_CCharacterActorType_00765a60);
  *(int *)(param_1 + 4) = iVar2;
  if (iVar2 == 0) {
    if (_DAT_01e56c2c != 0) {
      return 0.0;
    }
    return -1.0;
  }
  *(int *)(param_1 + 8) = iVar2;
  if ((*(int *)(param_1 + 0x14) == 0) && (*(int *)(param_1 + 4) != *(int *)(param_1 + 0xc))) {
    *(uint *)(param_1 + 0x10) = 1;
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 4);
  }
  if (_DAT_01e56418 == 0) {
    pcVar5 = (char *)(param_1 + 0x4c);
    do {
      cVar1 = *param_4;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = param_4[1];
      param_4 = param_4 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
    if (*(int *)(param_1 + 4) != 0) {
      *(float *)(*(int *)(param_1 + 4) + 0x2610) = local_28;
    }
    if (local_18 != 0) {
      sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
      sound_sndmain_cpp_setNextSfxChannel_FUN_005261b0(2);
      uVar3 = core_sound_cpp_CSound_playSound_FUN_0052ea40(0x02DC9450,param_1,param_3);
      *(uint *)(param_1 + 0x24) = uVar3;
      sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
    }
  }
  return local_28;
}
