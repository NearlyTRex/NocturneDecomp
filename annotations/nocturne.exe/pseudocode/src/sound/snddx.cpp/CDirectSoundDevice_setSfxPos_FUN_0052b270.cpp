// Name: sound_snddx.cpp_CDirectSoundDevice_setSfxPos_FUN_0052b270
// Address: 0052b270
// Address Range: [[0052b270, 0052b7d4]]
// Convention: unknown
// Signature: bool sound_snddx_cpp_CDirectSoundDevice_setSfxPos_FUN_0052b270(undefined4 param_1,int param_2,byte param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool sound_snddx_cpp_CDirectSoundDevice_setSfxPos_FUN_0052b270(uint param_1,int param_2,byte param_3)

{
  double dVar1;
  int *piVar2;
  byte auVar3 [8];
  int iVar4;
  uint uVar5;
  bool bVar6;
  float10 fVar7;
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
  
  iVar4 = *(int *)(param_2 + 0x6c);
  if ((((iVar4 < 1) || (0x1e < iVar4)) || (*(int *)(iVar4 * 4 + 0x2dc92a8) == 0)) ||
     (*(int *)(iVar4 * 4 + 0x2dc9324) == 0)) {
    PTR_01cc4800 = "..\\sound\\snddx.cpp";
    INT_01cc4804 = 0x2f3;
    core_main_c_FUN_004c8440();
  }
  bVar6 = true;
  local_20 = *(int **)(iVar4 * 4 + 0x2dc92a8);
  local_24 = (int *)0x0;
  piVar2 = *(int **)(iVar4 * 4 + 0x2dc9324);
  if ((local_20 == (int *)0x0) || (piVar2 == (int *)0x0)) {
    return false;
  }
  if ((param_3 & 0x88) != 0) {
    local_2c = *(float *)(param_2 + 0xfc);
    local_28 = *(float *)(param_2 + 0x104);
    local_18 = (float)sound_sndmain_cpp_getSfxChannelVol_FUN_00527380();
    local_cb8 = local_18;
    if (((*(byte *)(param_2 + 0x5c) & 1) == 0) && (0.0 < local_18)) {
      local_cb8 = local_18 / local_18;
      local_2c = local_2c * local_18;
      local_28 = local_28 * local_18;
    }
  }
  if ((param_3 & 2) != 0) {
    iVar4 = (**(code **)(*piVar2 + 0x4c))
                      (piVar2,(float)*(double *)(param_2 + 4),(float)*(double *)(param_2 + 0xc),
                       (float)*(double *)(param_2 + 0x14),1);
    if (iVar4 != 0) {
      uVar5 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90();
      _sprintf(auStack_804,"DirectSux: Unable to %s.  (%s)","Set hardware sfx 3d buffer position",
                 uVar5);
      sound_sndmain_cpp_FUN_00529980();
    }
    bVar6 = iVar4 == 0;
    local_24 = (int *)0x1;
  }
  if ((param_3 & 4) != 0) {
    iVar4 = (**(code **)(*piVar2 + 0x50))
                      (piVar2,(float)*(double *)(param_2 + 0x24),(float)*(double *)(param_2 + 0x2c),
                       (float)*(double *)(param_2 + 0x34),1);
    if (iVar4 != 0) {
      uVar5 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90();
      _sprintf(auStack_994,"DirectSux: Unable to %s.  (%s)","Set hardware sfx 3d buffer velocity",
                 uVar5);
      bVar6 = false;
      sound_sndmain_cpp_FUN_00529980();
    }
    local_24 = (int *)0x1;
  }
  dVar1 = unique0x100005af;
  if ((param_3 & 8) != 0) {
    dVar1 = (double)(*(float *)(param_2 + 0x44) * local_cb8);
    if (0.0 < dVar1) {
      if (dVar1 < 1.0) {
        join_0x00000008_0x00000000_ =
             (double)floor(dVar1 * 0.6931471805599453 * 868.58900000000006);
        fVar7 = (float10)round((float10)join_0x00000008_0x00000000_);
        local_20 = (int *)(int)ROUND(fVar7);
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
    iVar4 = (**(code **)(*local_20 + 0x3c))(local_20,uStack_1c);
    dVar1 = stack0xffffffcc;
    if (iVar4 != 0) {
      uVar5 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90();
      _sprintf(auStack_4e4,"DirectSux: Unable to %s.  (%s)","Set hardware sfx secondary buffer volume",
                 uVar5);
      bVar6 = false;
      sound_sndmain_cpp_FUN_00529980();
      dVar1 = stack0xffffffcc;
    }
  }
  uStack_30 = (uint)((ulonglong)dVar1 >> 0x20);
  auStack_38._4_4_ = SUB84(__BITCAST_UINT64(dVar1),0);
  if ((param_3 & 0x10) != 0) {
    fVar7 = (float10)round
                               ((float10)*(int *)(*(int *)(param_2 + 0x74) + 0x10c) *
                                (float10)*(float *)(param_2 + 0x48));
    auStack_38 = (byte  [8])(longlong)ROUND(fVar7);
    iVar4 = (**(code **)(*local_24 + 0x44))(local_24,auStack_38._0_4_);
    if (iVar4 != 0) {
      uVar5 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90();
      _sprintf(auStack_b24,"DirectSux: Unable to %s.  (%s)","Set hardware sfx secondary buffer frequency",
                 uVar5);
      bVar6 = false;
      sound_sndmain_cpp_FUN_00529980();
    }
  }
  if ((param_3 & 0x40) != 0) {
    uVar5 = 0;
    if ((*(byte *)(param_2 + 0x5c) & 1) != 0) {
      uVar5 = 2;
    }
    iVar4 = (**(code **)(*piVar2 + 0x48))(piVar2,uVar5,1);
    if (iVar4 != 0) {
      uVar5 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90();
      _sprintf(auStack_674,"DirectSux: Unable to %s.  (%s)","Set hardware sfx 3d buffer mode",
                 uVar5);
      bVar6 = false;
      sound_sndmain_cpp_FUN_00529980();
    }
    local_24 = (int *)0x1;
  }
  if ((param_3 & 0x80) == 0) {
    if (local_24 != (int *)0x0) goto LAB_0052b4a2;
  }
  else {
    iVar4 = (**(code **)(*piVar2 + 0x44))(piVar2,local_2c,1);
    auVar3 = auStack_38;
    if (iVar4 != 0) {
      uVar5 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(iVar4);
      _sprintf(auStack_360,"DirectSux: Unable to %s.  (%s)","Set hardware sfx 3d buffer minimum distance",
                 uVar5);
      bVar6 = false;
      sound_sndmain_cpp_FUN_00529980(auStack_360);
      auVar3 = auStack_38;
    }
    auStack_38._4_4_ = (uint)((ulonglong)auVar3 >> 0x20);
    iVar4 = (**(code **)(*piVar2 + 0x40))(piVar2,auStack_38._4_4_,1);
    auStack_38 = auVar3;
    if (iVar4 != 0) {
      uVar5 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90();
      _sprintf(auStack_cb4,"DirectSux: Unable to %s.  (%s)","Set hardware sfx 3d buffer maximum distance",
                 uVar5);
      bVar6 = false;
      sound_sndmain_cpp_FUN_00529980();
    }
LAB_0052b4a2:
    if (_DAT_02dc9220 == (int *)0x0) {
      PTR_01cc4800 = "..\\sound\\snddx.cpp";
      INT_01cc4804 = 0x37c;
      core_main_c_FUN_004c8440();
    }
    iVar4 = (**(code **)(*_DAT_02dc9220 + 0x44))();
    if (iVar4 != 0) {
      uVar5 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90();
      _sprintf(auStack_1c4,"DirectSux: Unable to %s.  (%s)","Commit hardware sfx 3d buffer settings",
                 uVar5);
      sound_sndmain_cpp_FUN_00529980();
      goto LAB_0052b4e4;
    }
  }
  if (bVar6 != false) {
    return bVar6;
  }
LAB_0052b4e4:
  sound_sndmain_cpp_FUN_00529980();
  return false;
}
