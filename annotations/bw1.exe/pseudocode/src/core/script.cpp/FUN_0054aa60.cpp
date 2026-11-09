// Name: core_script.cpp_FUN_0054aa60
// Address: 0054aa60
// Address Range: [[0054aa60, 0054ac19]]
// Convention: unknown
// Signature: float core_script_cpp_FUN_0054aa60(void *param_1,undefined4 param_2,char *param_3,char *param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float core_script_cpp_FUN_0054aa60(void *param_1,uint param_2,char *param_3,char *param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  byte bVar6;
  float local_28;
  
  bVar6 = 0;
  bVar2 = false;
  if (*(float *)((int)param_1 + 0x450) < 0.0) {
    iVar3 = sscanf(param_3,&DAT_005efdbf);
    if (iVar3 != 1) {
      local_28 = core_sound_cpp_CSound_getSoundDuration_FUN_0057d9e0(0x02C82A60,param_3);
      if (local_28 < 0.0) {
        shape_edittool_cpp_CStrList_add_FUN_004994d0((CStrList *)&g_ScriptPickList,param_3);
        uVar4 = 0xffffffff;
        pcVar5 = param_4;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
        } while (cVar1 != '\0');
        local_28 = (float)((float10)(~uVar4 - 1) * (float10)_DAT_005efdc7 + (float10)_DAT_005efdcf);
      }
      if (_DAT_01e810a8 == 0) {
        bVar2 = true;
      }
    }
  }
  else {
    local_28 = *(float *)((int)param_1 + 0x450);
  }
  iVar3 = core_script_cpp_getActor_FUN_005433c0
                    (param_2,g_CCharacterClassInfo.name_hash,&g_CCharacterClassInfo);
  *(int *)((int)param_1 + 4) = iVar3;
  if (iVar3 == 0) {
    if (_DAT_01e818bc != 0) {
      return 0.0;
    }
    return -1.0;
  }
  *(int *)((int)param_1 + 8) = iVar3;
  if ((*(int *)((int)param_1 + 0x14) == 0) &&
     (*(int *)((int)param_1 + 4) != *(int *)((int)param_1 + 0xc))) {
    *(uint *)((int)param_1 + 0x10) = 1;
    *(uint *)((int)param_1 + 0xc) = *(uint *)((int)param_1 + 4);
  }
  if (_DAT_01e810a8 == 0) {
    pcVar5 = (char *)((int)param_1 + 0x50);
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
      *(float *)(*(int *)((int)param_1 + 4) + 0x27b4) = local_28;
    }
    if (bVar2) {
      sound_sndmain_cpp_FUN_00572ac0();
      sound_sndmain_cpp_FUN_00572980(2);
      uVar4 = core_sound_cpp_CSound_playSound_FUN_0057d880(0x02C82A60,param_1,param_3);
      *(uint *)((int)param_1 + 0x28) = uVar4;
      sound_sndmain_cpp_FUN_00572b40();
    }
  }
  return local_28;
}
