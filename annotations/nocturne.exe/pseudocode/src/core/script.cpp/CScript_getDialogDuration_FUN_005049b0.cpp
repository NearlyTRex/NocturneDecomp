// Name: core_script.cpp_CScript_getDialogDuration_FUN_005049b0
// Address: 005049b0
// Address Range: [[005049b0, 00504b69]]
// Convention: unknown
// Signature: float core_script_cpp_CScript_getDialogDuration_FUN_005049b0(void *param_1,char *param_2,char *param_3,char *param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float core_script_cpp_CScript_getDialogDuration_FUN_005049b0(void *param_1,char *param_2,char *param_3,char *param_4)

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
  if (*(float *)((int)param_1 + 0x44c) < 0.0) {
    iVar3 = sscanf(param_3,&DOUBLE_0058fa9a,&local_28);
    if (iVar3 != 1) {
      local_28 = (float)core_sound_cpp_FUN_0052ebc0(0x02DC9450,param_3);
      local_14 = local_28;
      if (local_28 < 0.0) {
        shape_edittool_cpp_CStrList_add_FUN_00473cb0((CStrList *)0x1e56c30,param_3);
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
    local_28 = *(float *)((int)param_1 + 0x44c);
  }
  pCVar2 = core_script_cpp_getActor_FUN_004fe180
                     (param_2,g_CCharacterActorType_00765a60.name_hash,
                      &g_CCharacterActorType_00765a60);
  *(CDemonActor **)((int)param_1 + 4) = pCVar2;
  if (pCVar2 == (CDemonActor *)0x0) {
    if (_DAT_01e56c2c != 0) {
      return 0.0;
    }
    return -1.0;
  }
  *(CDemonActor **)((int)param_1 + 8) = pCVar2;
  if ((*(int *)((int)param_1 + 0x14) == 0) &&
     (*(int *)((int)param_1 + 4) != *(int *)((int)param_1 + 0xc))) {
    *(uint *)((int)param_1 + 0x10) = 1;
    *(uint *)((int)param_1 + 0xc) = *(uint *)((int)param_1 + 4);
  }
  if (_DAT_01e56418 == 0) {
    pcVar5 = (char *)((int)param_1 + 0x4c);
    do {
      cVar1 = *param_4;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = param_4[1];
      param_4 = param_4 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
    if (*(int *)((int)param_1 + 4) != 0) {
      *(float *)(*(int *)((int)param_1 + 4) + 0x2610) = local_28;
    }
    if (local_18 != 0) {
      sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
      sound_sndmain_cpp_setNextSfxChannel_FUN_005261b0(2);
      uVar4 = core_sound_cpp_CSound_playSound_FUN_0052ea40(0x02DC9450,param_1,param_3);
      *(uint *)((int)param_1 + 0x24) = uVar4;
      sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
    }
  }
  return local_28;
}
