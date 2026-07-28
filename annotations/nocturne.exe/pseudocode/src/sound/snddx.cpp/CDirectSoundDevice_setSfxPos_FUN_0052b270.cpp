// Name: sound_snddx.cpp_CDirectSoundDevice_setSfxPos_FUN_0052b270
// Address: 0052b270
// Address Range: [[0052b270, 0052b7d4]]
// Convention: unknown
// Signature: bool sound_snddx_cpp_CDirectSoundDevice_setSfxPos_FUN_0052b270(undefined4 param_1,int *param_2,byte param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool sound_snddx_cpp_CDirectSoundDevice_setSfxPos_FUN_0052b270(uint param_1,int *param_2,byte param_3)

{
  int iVar1;
  int *piVar2;
  byte auVar3 [8];
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  bool bVar7;
  double dVar8;
  float local_cb8;
  byte auStack_cb4 [400];
  byte auStack_b24 [400];
  byte auStack_994 [400];
  byte auStack_804 [400];
  byte auStack_674 [400];
  byte auStack_4e4 [388];
  byte auStack_360 [412];
  byte auStack_1c4 [396];
  byte auStack_38 [8];
  uint uStack_30;
  float local_2c;
  float local_28;
  int *local_24;
  int *local_20;
  uint uStack_1c;
  float local_18;
  
  iVar1 = param_2[0x1b];
  if ((((iVar1 < 1) || (0x1e < iVar1)) || (*(int *)(iVar1 * 4 + 0x2dc92a8) == 0)) ||
     (*(int *)(iVar1 * 4 + 0x2dc9324) == 0)) {
    PTR_01cc4800 = "..\\sound\\snddx.cpp";
    INT_01cc4804 = 0x2f3;
    core_main_c_FUN_004c8440();
  }
  bVar7 = true;
  local_20 = *(int **)(iVar1 * 4 + 0x2dc92a8);
  local_24 = (int *)0x0;
  piVar2 = *(int **)(iVar1 * 4 + 0x2dc9324);
  if ((local_20 == (int *)0x0) || (piVar2 == (int *)0x0)) {
    return false;
  }
  if ((param_3 & 0x88) != 0) {
    local_2c = (float)param_2[0x3f];
    local_28 = (float)param_2[0x41];
    local_18 = sound_sndmain_cpp_getSfxChannelVol_FUN_00527380(*param_2);
    local_cb8 = local_18;
    if (((*(byte *)(param_2 + 0x17) & 1) == 0) && (0.0 < local_18)) {
      local_cb8 = local_18 / local_18;
      local_2c = local_2c * local_18;
      local_28 = local_28 * local_18;
    }
  }
  if ((param_3 & 2) != 0) {
    uVar4 = (**(code **)(*piVar2 + 0x4c))
                      (piVar2,(float)*(double *)(param_2 + 1),(float)*(double *)(param_2 + 3),
                       (float)*(double *)(param_2 + 5));
    if (uVar4 != 0) {
      sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(uVar4);
      _sprintf(auStack_804,"DirectSux: Unable to %s.  (%s)","Set hardware sfx 3d buffer position")
      ;
      sound_sndmain_cpp_FUN_00529980();
    }
    bVar7 = uVar4 == 0;
    local_24 = (int *)0x1;
  }
  if ((param_3 & 4) != 0) {
    uVar4 = (**(code **)(*piVar2 + 0x50))
                      (piVar2,(float)*(double *)(param_2 + 9),(float)*(double *)(param_2 + 0xb),
                       (float)*(double *)(param_2 + 0xd));
    if (uVar4 != 0) {
      sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(uVar4);
      _sprintf(auStack_994,"DirectSux: Unable to %s.  (%s)","Set hardware sfx 3d buffer velocity")
      ;
      bVar7 = false;
      sound_sndmain_cpp_FUN_00529980();
    }
    local_24 = (int *)0x1;
  }
  dVar8 = unique0x100005fe;
  if ((param_3 & 8) != 0) {
    dVar8 = (double)((float)param_2[0x11] * local_cb8);
    if (0.0 < dVar8) {
      if (dVar8 < 1.0) {
        join_0x00000008_0x00000000_ =
             (double)floor(dVar8 * 0.6931471805599453 * 868.58900000000006);
        dVar8 = round(join_0x00000008_0x00000000_);
        local_20 = (int *)(int)ROUND(dVar8);
        if ((int)local_20 < 1) {
          if ((int)local_20 < -10000) goto LAB_0052b3c8;
        }
        else {
          local_20 = (int *)0x0;
        }
      }
      else {
        uStack_1c = 0;
      }
    }
    else {
LAB_0052b3c8:
      uStack_1c = 0xffffd8f0;
    }
    uVar4 = (**(code **)(*local_20 + 0x3c))(local_20);
    dVar8 = stack0xffffffcc;
    if (uVar4 != 0) {
      sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(uVar4);
      _sprintf(auStack_4e4,"DirectSux: Unable to %s.  (%s)","Set hardware sfx secondary buffer volume")
      ;
      bVar7 = false;
      sound_sndmain_cpp_FUN_00529980();
      dVar8 = stack0xffffffcc;
    }
  }
  uStack_30 = (uint)((ulonglong)dVar8 >> 0x20);
  auStack_38._4_4_ = SUB84(__BITCAST_UINT64(dVar8),0);
  if ((param_3 & 0x10) != 0) {
    dVar8 = round
                      ((double)((float)*(int *)(param_2[0x1d] + 0x10c) * (float)param_2[0x12]));
    auStack_38 = (byte  [8])(longlong)ROUND(dVar8);
    uVar4 = (**(code **)(*local_24 + 0x44))(local_24,auStack_38._0_4_);
    if (uVar4 != 0) {
      sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(uVar4);
      _sprintf(auStack_b24,"DirectSux: Unable to %s.  (%s)","Set hardware sfx secondary buffer frequency")
      ;
      bVar7 = false;
      sound_sndmain_cpp_FUN_00529980();
    }
  }
  if ((param_3 & 0x40) != 0) {
    uVar5 = 0;
    if ((*(byte *)(param_2 + 0x17) & 1) != 0) {
      uVar5 = 2;
    }
    uVar4 = (**(code **)(*piVar2 + 0x48))(piVar2,uVar5);
    if (uVar4 != 0) {
      sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(uVar4);
      _sprintf(auStack_674,"DirectSux: Unable to %s.  (%s)","Set hardware sfx 3d buffer mode")
      ;
      bVar7 = false;
      sound_sndmain_cpp_FUN_00529980();
    }
    local_24 = (int *)0x1;
  }
  if ((param_3 & 0x80) == 0) {
    if (local_24 != (int *)0x0) goto LAB_0052b4a2;
  }
  else {
    uVar4 = (**(code **)(*piVar2 + 0x44))(piVar2,local_2c);
    auVar3 = auStack_38;
    if (uVar4 != 0) {
      pcVar6 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(uVar4);
      _sprintf(auStack_360,"DirectSux: Unable to %s.  (%s)","Set hardware sfx 3d buffer minimum distance",
                 pcVar6);
      bVar7 = false;
      sound_sndmain_cpp_FUN_00529980(auStack_360);
      auVar3 = auStack_38;
    }
    auStack_38._4_4_ = (uint)((ulonglong)auVar3 >> 0x20);
    uVar4 = (**(code **)(*piVar2 + 0x40))(piVar2,auStack_38._4_4_,1);
    auStack_38 = auVar3;
    if (uVar4 != 0) {
      sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(uVar4);
      _sprintf(auStack_cb4,"DirectSux: Unable to %s.  (%s)","Set hardware sfx 3d buffer maximum distance")
      ;
      bVar7 = false;
      sound_sndmain_cpp_FUN_00529980();
    }
LAB_0052b4a2:
    if (_DAT_02dc9220 == (int *)0x0) {
      PTR_01cc4800 = "..\\sound\\snddx.cpp";
      INT_01cc4804 = 0x37c;
      core_main_c_FUN_004c8440();
    }
    uVar4 = (**(code **)(*_DAT_02dc9220 + 0x44))();
    if (uVar4 != 0) {
      pcVar6 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(uVar4);
      _sprintf(auStack_1c4,"DirectSux: Unable to %s.  (%s)","Commit hardware sfx 3d buffer settings",
                 pcVar6);
      sound_sndmain_cpp_FUN_00529980();
      goto LAB_0052b4e4;
    }
  }
  if (bVar7 != false) {
    return bVar7;
  }
LAB_0052b4e4:
  sound_sndmain_cpp_FUN_00529980();
  return false;
}
