// Name: sound_snddx.cpp_CDirectSoundDevice_applySfxChanges_FUN_00578f80
// Address: 00578f80
// Address Range: [[00578f80, 005798fd]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_CDirectSoundDevice_applySfxChanges_FUN_00578f80(CDirectSoundDevice *this_ptr,CSfxSlot *slot,int update_flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_snddx_cpp_CDirectSoundDevice_applySfxChanges_FUN_00578f80(CDirectSoundDevice *this_ptr,CSfxSlot *slot,int update_flags)

{
  int *piVar1;
  int *piVar2;
  CSfxSlot *pCVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  double dVar7;
  float fStack_1308;
  float fStack_1304;
  char acStack_1300 [400];
  char acStack_1170 [400];
  char acStack_fe0 [400];
  char acStack_e50 [400];
  char acStack_cc0 [400];
  char acStack_b30 [400];
  char acStack_9a0 [400];
  char acStack_810 [400];
  char acStack_680 [400];
  char acStack_4f0 [400];
  char acStack_360 [388];
  char acStack_1dc [408];
  ulonglong uStack_44;
  uint uStack_3c;
  int iStack_38;
  int iStack_34;
  float fStack_30;
  int iStack_2c;
  float fStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int *piStack_18;
  float fStack_14;
  
  iVar4 = slot->hardware_buffer_handle;
  if (((iVar4 < 1) || (0x1e < iVar4)) || (*(int *)(iVar4 * 0x24 + 0x2c823e0) == 0)) {
    _DAT_01d1d400 = "..\\sound\\snddx.cpp";
    _DAT_01d1d404 = 0x4f3;
    core_main_c_displayErrorAndQuit_FUN_005030e0("DirectSoundDevice::setSfxPos - invalid handle");
  }
  iStack_1c = 1;
  piStack_18 = (int *)(iVar4 * 0x24 + 0x2c823e0);
  piVar1 = (int *)*piStack_18;
  piVar2 = *(int **)(iVar4 * 0x24 + 0x2c823e4);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  if (piVar2 != (int *)0x0) {
    if ((update_flags & 0x88U) != 0) {
      fStack_28 = slot->reference_distance;
      fStack_30 = slot->max_distance;
      fStack_14 = sound_sndmain_cpp_getSfxChannelVol_FUN_00573bc0((slot->options).channel_index);
      fStack_1304 = fStack_14;
      if ((((slot->options).flags & 1) == 0) && (0.0 < fStack_14)) {
        fStack_1304 = fStack_14 / fStack_14;
        fStack_28 = fStack_28 * fStack_14;
        fStack_30 = fStack_30 * fStack_14;
      }
    }
    if (((update_flags & 2U) != 0) &&
       (uVar5 = (**(code **)(*piVar2 + 0x4c))
                          (piVar2,(float)(slot->options).position.x,
                           (float)(slot->options).position.y,(float)(slot->options).position.z),
       uVar5 != 0)) {
      sound_snddx_cpp_getDirectSoundErrorString_FUN_00577500(uVar5);
      _sprintf(acStack_b30,"DirectSux: Unable to %s.  (%s)");
      sound_sndmain_cpp_logSoundError_FUN_005773f0(acStack_b30);
      iStack_1c = 0;
    }
    if (((update_flags & 4U) != 0) &&
       (uVar5 = (**(code **)(*piVar2 + 0x50))
                          (piVar2,(slot->options).velocity.x,(slot->options).velocity.y,
                           (slot->options).velocity.z), uVar5 != 0)) {
      sound_snddx_cpp_getDirectSoundErrorString_FUN_00577500(uVar5);
      _sprintf(acStack_4f0,"DirectSux: Unable to %s.  (%s)");
      sound_sndmain_cpp_logSoundError_FUN_005773f0(acStack_4f0);
      iStack_1c = 0;
    }
    if (((update_flags & 8U) != 0) &&
       ((iStack_38 = sound_snddx_cpp_volumeToDirectSoundAttenuation_FUN_005779b0
                               ((slot->options).current_volume * fStack_1304), update_flags == -1 ||
        (uVar5 = iStack_38 - piStack_18[5] >> 0x1f,
        1 < (int)((iStack_38 - piStack_18[5] ^ uVar5) - uVar5))))) {
      uVar5 = (**(code **)(*piVar1 + 0x3c))(piVar1);
      if (uVar5 != 0) {
        sound_snddx_cpp_getDirectSoundErrorString_FUN_00577500(uVar5);
        _sprintf(acStack_fe0,"DirectSux: Unable to %s.  (%s)");
        sound_sndmain_cpp_logSoundError_FUN_005773f0(acStack_fe0);
        iStack_1c = 0;
      }
      piStack_18[5] = iStack_38;
    }
    if (((update_flags & 0x10U) != 0) &&
       ((iStack_34 = sound_snddx_cpp_clampDirectSoundFrequency_FUN_00577a50
                               ((float)(slot->sample->sample_info).sample_rate *
                                (slot->options).base_frequency), update_flags == -1 ||
        (uVar5 = iStack_34 - piStack_18[7] >> 0x1f,
        1 < (int)((iStack_34 - piStack_18[7] ^ uVar5) - uVar5))))) {
      uVar5 = (**(code **)(*piVar1 + 0x44))(piVar1);
      if (uVar5 != 0) {
        sound_snddx_cpp_getDirectSoundErrorString_FUN_00577500(uVar5);
        _sprintf(acStack_cc0,"DirectSux: Unable to %s.  (%s)");
        sound_sndmain_cpp_logSoundError_FUN_005773f0(acStack_cc0);
        iStack_1c = 0;
      }
      piStack_18[7] = iStack_34;
    }
    if ((update_flags & 0x40U) != 0) {
      iStack_24 = 0;
      if (((slot->options).flags & 1) != 0) {
        iStack_24 = 2;
      }
      if ((update_flags == -1) || (iStack_24 != piStack_18[8])) {
        uVar5 = (**(code **)(*piVar2 + 0x48))(piVar2,iStack_24);
        if (uVar5 != 0) {
          sound_snddx_cpp_getDirectSoundErrorString_FUN_00577500(uVar5);
          _sprintf(acStack_1170,"DirectSux: Unable to %s.  (%s)");
          sound_sndmain_cpp_logSoundError_FUN_005773f0(acStack_1170);
          iStack_1c = 0;
        }
        piStack_18[8] = iStack_24;
      }
    }
    if ((update_flags & 0x80U) != 0) {
      uVar5 = (**(code **)(*piVar2 + 0x44))(piVar2,fStack_28);
      if (uVar5 != 0) {
        sound_snddx_cpp_getDirectSoundErrorString_FUN_00577500(uVar5);
        _sprintf(acStack_1dc,"DirectSux: Unable to %s.  (%s)");
        sound_sndmain_cpp_logSoundError_FUN_005773f0(acStack_1dc);
        fStack_28 = 0.0;
      }
      uVar5 = (**(code **)(*piVar2 + 0x40))(piVar2,uStack_3c,1);
      if (uVar5 != 0) {
        sound_snddx_cpp_getDirectSoundErrorString_FUN_00577500(uVar5);
        _sprintf(acStack_810,"DirectSux: Unable to %s.  (%s)");
        sound_sndmain_cpp_logSoundError_FUN_005773f0(acStack_810);
        iStack_1c = 0;
      }
    }
    if ((update_flags & 0x100U) != 0) {
      dVar7 = round(slot->prev_hardware_playback_pos);
      uStack_44 = (longlong)ROUND(dVar7);
      uVar5 = (**(code **)(*piVar1 + 0x34))(piVar1,(uint)uStack_44);
      if (uVar5 != 0) {
        sound_snddx_cpp_getDirectSoundErrorString_FUN_00577500(uVar5);
        _sprintf(acStack_1300,"DirectSux: Unable to %s.  (%s)");
        sound_sndmain_cpp_logSoundError_FUN_005773f0(acStack_1300);
        iStack_1c = 0;
      }
    }
    goto LAB_005791b0;
  }
  if ((update_flags & 0xcaU) != 0) {
    iVar4 = sound_sndmain_cpp_getAudioChannelCount_FUN_00575240();
    iVar6 = 1;
    fStack_1308 = slot->channel_volumes[0];
    pCVar3 = slot;
    if (1 < iVar4) {
      do {
        if (fStack_1308 < pCVar3->channel_volumes[1]) {
          fStack_1308 = pCVar3->channel_volumes[1];
        }
        iVar6 = iVar6 + 1;
        pCVar3 = (CSfxSlot *)&(pCVar3->options).position;
      } while (iVar6 < iVar4);
    }
    iStack_2c = sound_snddx_cpp_volumeToDirectSoundAttenuation_FUN_005779b0(fStack_1308);
    iStack_20 = 0;
    if ((iVar4 == 2) && (0.0 < fStack_1308)) {
      if (slot->channel_volumes[1] <= slot->channel_volumes[0]) {
        if (slot->channel_volumes[0] < slot->channel_volumes[1]) {
          if (0.0 < slot->channel_volumes[1]) {
            dVar7 = floor
                              ((double)((slot->channel_volumes[0] / slot->channel_volumes[1]) *
                                        0.6931472 * (float)_DAT_005f528b));
            uStack_44._4_4_ = SUB84(__BITCAST_UINT64(dVar7),0);
            uStack_3c = (uint)((ulonglong)dVar7 >> 0x20);
            dVar7 = round(dVar7);
            iStack_24 = (int)ROUND(dVar7);
            if ((iStack_24 < 0) || (-10000 < iStack_24)) goto LAB_00579098;
          }
          else {
            iStack_20 = -10000;
          }
        }
      }
      else if (slot->channel_volumes[0] <= 0.0) {
LAB_00579098:
        iStack_20 = 10000;
      }
      else {
        dVar7 = floor
                          ((double)((slot->channel_volumes[1] / slot->channel_volumes[0]) *
                                    0.6931472 * (float)_DAT_005f5293));
        uStack_44._4_4_ = SUB84(__BITCAST_UINT64(dVar7),0);
        uStack_3c = (uint)((ulonglong)dVar7 >> 0x20);
        dVar7 = round(dVar7);
        iStack_24 = (int)ROUND(dVar7);
        if ((iStack_24 < 10000) || (0 < iStack_24)) {
          iStack_24 = 0;
        }
      }
    }
    if ((update_flags != -1) ||
       (uVar5 = iStack_2c - piStack_18[5] >> 0x1f,
       1 < (int)((iStack_2c - piStack_18[5] ^ uVar5) - uVar5))) {
      uVar5 = (**(code **)(*piVar1 + 0x3c))(piVar1);
      if (uVar5 != 0) {
        sound_snddx_cpp_getDirectSoundErrorString_FUN_00577500(uVar5);
        _sprintf(acStack_680,"DirectSux: Unable to %s.  (%s)");
        sound_sndmain_cpp_logSoundError_FUN_005773f0(acStack_680);
        iStack_1c = 0;
      }
      piStack_18[5] = iStack_2c;
    }
    if ((update_flags != -1) ||
       (uVar5 = iStack_20 - piStack_18[6] >> 0x1f,
       1 < (int)((iStack_20 - piStack_18[6] ^ uVar5) - uVar5))) {
      uVar5 = (**(code **)(*piVar1 + 0x40))(piVar1);
      if (uVar5 != 0) {
        sound_snddx_cpp_getDirectSoundErrorString_FUN_00577500(uVar5);
        _sprintf(acStack_e50,"DirectSux: Unable to %s.  (%s)");
        sound_sndmain_cpp_logSoundError_FUN_005773f0(acStack_e50);
        iStack_1c = 0;
      }
      piStack_18[6] = iStack_20;
    }
  }
  if ((update_flags & 0x96U) != 0) {
    iVar4 = sound_snddx_cpp_clampDirectSoundFrequency_FUN_00577a50
                      ((float)(slot->sample->sample_info).sample_rate * slot->effective_frequency);
    if ((update_flags != -1) ||
       (uVar5 = iVar4 - piStack_18[7] >> 0x1f, 1 < (int)((iVar4 - piStack_18[7] ^ uVar5) - uVar5)))
    {
      uVar5 = (**(code **)(*piVar1 + 0x44))(piVar1);
      if (uVar5 != 0) {
        sound_snddx_cpp_getDirectSoundErrorString_FUN_00577500(uVar5);
        _sprintf(acStack_9a0,"DirectSux: Unable to %s.  (%s)");
        sound_sndmain_cpp_logSoundError_FUN_005773f0(acStack_9a0);
        iStack_1c = 0;
      }
      piStack_18[7] = iVar4;
    }
  }
  if ((update_flags & 0x100U) != 0) {
    dVar7 = round(slot->prev_hardware_playback_pos);
    uStack_44 = (longlong)ROUND(dVar7);
    uVar5 = (**(code **)(*piVar1 + 0x34))(piVar1,(uint)uStack_44);
    if (uVar5 != 0) {
      sound_snddx_cpp_getDirectSoundErrorString_FUN_00577500(uVar5);
      _sprintf(acStack_360,"DirectSux: Unable to %s.  (%s)");
      sound_sndmain_cpp_logSoundError_FUN_005773f0(acStack_360);
      iStack_1c = 0;
    }
  }
LAB_005791b0:
  slot->changed_flags = slot->changed_flags & (~update_flags | 0x40000000U);
  if (iStack_1c == 0) {
    sound_sndmain_cpp_logSoundError_FUN_005773f0("DirectSoundDevice::setSfxOpt - failed\n");
  }
  return iStack_1c;
}
