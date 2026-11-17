// Name: sound_snddx.cpp_CDirectSoundDevice_setSfxPos_FUN_0052b270
// Address: 0052b270
// Address Range: [[0052b270, 0052b7d4]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_CDirectSoundDevice_setSfxPos_FUN_0052b270(CDirectSoundDevice *this_ptr,CSfxSlot *slot,int update_flags)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_CDirectSoundDevice_setSfxPos_FUN_0052b270(CDirectSoundDevice *this_ptr,CSfxSlot *slot,int update_flags)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  double dVar8;
  float local_cb8;
  char acStack_cb4 [400];
  char acStack_b24 [400];
  char acStack_994 [400];
  char acStack_804 [400];
  char acStack_674 [400];
  char acStack_4e4 [388];
  char acStack_360 [412];
  char acStack_1c4 [396];
  ulonglong uStack_38;
  uint uStack_30;
  float local_2c;
  float local_28;
  int *local_24;
  LPDIRECTSOUNDBUFFER local_20;
  long lStack_1c;
  float local_18;
  
  iVar1 = slot->hardware_buffer_handle;
  if ((((iVar1 < 1) || (0x1e < iVar1)) ||
      (g_IDirectSoundBuffer_PTR_ARRAY_02dc92a8[iVar1] == (IDirectSoundBuffer *)0x0)) ||
     (g_INT_ARRAY_02dc9324[iVar1] == 0)) {
    g_CurrentFilename = "..\\sound\\snddx.cpp";
    g_CurrentLineNumber = 755;
    core_main_c_displayErrorAndQuit_FUN_004c8440("DirectSoundDevice::setSfxPos - invalid handle");
  }
  uVar7 = 1;
  local_20 = g_IDirectSoundBuffer_PTR_ARRAY_02dc92a8[iVar1];
  local_24 = (int *)0x0;
  piVar2 = (int *)g_INT_ARRAY_02dc9324[iVar1];
  if ((local_20 == (IDirectSoundBuffer *)0x0) || (piVar2 == (int *)0x0)) {
    return 0;
  }
  if ((update_flags & 0x88U) != 0) {
    local_2c = slot->reference_distance;
    local_28 = slot->max_distance;
    local_18 = sound_sndmain_cpp_getSfxChannelVol_FUN_00527380((slot->options).channel_index);
    local_cb8 = local_18;
    if ((((slot->options).flags & 1) == 0) && (0.0 < local_18)) {
      local_cb8 = local_18 / local_18;
      local_2c = local_2c * local_18;
      local_28 = local_28 * local_18;
    }
  }
  if ((update_flags & 2U) != 0) {
    uVar7 = (**(code **)(*piVar2 + 0x4c))
                      (piVar2,(float)(slot->options).position.x,(float)(slot->options).position.y,
                       (float)(slot->options).position.z);
    if (uVar7 != 0) {
      sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(uVar7);
      _sprintf(acStack_804,"DirectSux: Unable to %s.  (%s)","Set hardware sfx 3d buffer position")
      ;
      sound_sndmain_cpp_logSoundError_FUN_00529980(acStack_804);
    }
    uVar7 = (uint)(uVar7 == 0);
    local_24 = (int *)0x1;
  }
  if ((update_flags & 4U) != 0) {
    uVar4 = (**(code **)(*piVar2 + 0x50))
                      (piVar2,(float)(slot->options).velocity.x,(float)(slot->options).velocity.y,
                       (float)(slot->options).velocity.z);
    if (uVar4 != 0) {
      sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(uVar4);
      _sprintf(acStack_994,"DirectSux: Unable to %s.  (%s)","Set hardware sfx 3d buffer velocity")
      ;
      uVar7 = 0;
      sound_sndmain_cpp_logSoundError_FUN_00529980(acStack_994);
    }
    local_24 = (int *)0x1;
  }
  if ((update_flags & 8U) != 0) {
    dVar8 = (double)((slot->options).current_volume * local_cb8);
    if (0.0 < dVar8) {
      if (dVar8 < 1.0) {
        dVar8 = floor(dVar8 * 0.6931471805599453 * 868.58900000000006);
        uStack_38._4_4_ = SUB84(__BITCAST_UINT64(dVar8),0);
        uStack_30 = (uint)((ulonglong)dVar8 >> 0x20);
        dVar8 = round(dVar8);
        local_20 = (LPDIRECTSOUNDBUFFER)(int)ROUND(dVar8);
        if ((int)local_20 < 1) {
          if ((int)local_20 < -10000) goto LAB_0052b3c8;
        }
        else {
          local_20 = (LPDIRECTSOUNDBUFFER)0x0;
        }
      }
      else {
        lStack_1c = 0;
      }
    }
    else {
LAB_0052b3c8:
      lStack_1c = -10000;
    }
    uVar4 = (*local_20->vtable->SetVolume)(local_20,lStack_1c);
    if (uVar4 != 0) {
      sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(uVar4);
      _sprintf(acStack_4e4,"DirectSux: Unable to %s.  (%s)","Set hardware sfx secondary buffer volume")
      ;
      uVar7 = 0;
      sound_sndmain_cpp_logSoundError_FUN_00529980(acStack_4e4);
    }
  }
  if ((update_flags & 0x10U) != 0) {
    dVar8 = round
                      ((double)((float)(slot->sample->sample_info).sample_rate *
                               (slot->options).base_frequency));
    uStack_38 = (longlong)ROUND(dVar8);
    uVar4 = (**(code **)(*local_24 + 0x44))(local_24,(uint)uStack_38);
    if (uVar4 != 0) {
      sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(uVar4);
      _sprintf(acStack_b24,"DirectSux: Unable to %s.  (%s)","Set hardware sfx secondary buffer frequency")
      ;
      uVar7 = 0;
      sound_sndmain_cpp_logSoundError_FUN_00529980(acStack_b24);
    }
  }
  if ((update_flags & 0x40U) != 0) {
    uVar5 = 0;
    if (((slot->options).flags & 1) != 0) {
      uVar5 = 2;
    }
    uVar4 = (**(code **)(*piVar2 + 0x48))(piVar2,uVar5);
    if (uVar4 != 0) {
      sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(uVar4);
      _sprintf(acStack_674,"DirectSux: Unable to %s.  (%s)","Set hardware sfx 3d buffer mode")
      ;
      uVar7 = 0;
      sound_sndmain_cpp_logSoundError_FUN_00529980(acStack_674);
    }
    local_24 = (int *)0x1;
  }
  if ((update_flags & 0x80U) == 0) {
    if (local_24 != (int *)0x0) goto LAB_0052b4a2;
  }
  else {
    uVar4 = (**(code **)(*piVar2 + 0x44))(piVar2,local_2c);
    lVar3 = uStack_38;
    if (uVar4 != 0) {
      pcVar6 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(uVar4);
      _sprintf(acStack_360,"DirectSux: Unable to %s.  (%s)","Set hardware sfx 3d buffer minimum distance",
                 pcVar6);
      uVar7 = 0;
      sound_sndmain_cpp_logSoundError_FUN_00529980(acStack_360);
      lVar3 = uStack_38;
    }
    uStack_38._4_4_ = (uint)((ulonglong)lVar3 >> 0x20);
    uVar4 = (**(code **)(*piVar2 + 0x40))(piVar2,uStack_38._4_4_,1);
    uStack_38 = lVar3;
    if (uVar4 != 0) {
      sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(uVar4);
      _sprintf(acStack_cb4,"DirectSux: Unable to %s.  (%s)","Set hardware sfx 3d buffer maximum distance")
      ;
      uVar7 = 0;
      sound_sndmain_cpp_logSoundError_FUN_00529980(acStack_cb4);
    }
LAB_0052b4a2:
    if (g_IDirectSound3DListener_PTR_02dc9220 == (IDirectSound3DListener *)0x0) {
      g_CurrentFilename = "..\\sound\\snddx.cpp";
      g_CurrentLineNumber = 892;
      core_main_c_displayErrorAndQuit_FUN_004c8440("DirectSoundDevice::setSfxOpt - no 3d listener allocated?!");
    }
    uVar4 = (*g_IDirectSound3DListener_PTR_02dc9220->vtable->CommitDeferredSettings)
                      (g_IDirectSound3DListener_PTR_02dc9220);
    if (uVar4 != 0) {
      sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(uVar4);
      _sprintf(acStack_1c4,"DirectSux: Unable to %s.  (%s)","Commit hardware sfx 3d buffer settings")
      ;
      sound_sndmain_cpp_logSoundError_FUN_00529980(acStack_1c4);
      goto LAB_0052b4e4;
    }
  }
  if (uVar7 != 0) {
    return uVar7;
  }
LAB_0052b4e4:
  sound_sndmain_cpp_logSoundError_FUN_00529980("DirectSoundDevice::setSfxOpt - failed\n");
  return 0;
}
