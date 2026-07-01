// Name: sound_snddx.cpp_CDirectSoundDevice_setSfxPos_FUN_005af750
// Address: 005af750
// MANUAL RECONSTRUCTION
// Address Range: [[005af750, 005afcb4]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_CDirectSoundDevice_setSfxPos_FUN_005af750(CDirectSoundDevice *this_ptr,CSfxSlot *slot,int update_flags)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_CDirectSoundDevice_setSfxPos_FUN_005af750(CDirectSoundDevice *this_ptr,CSfxSlot *slot,int update_flags)

{
  LPDIRECTSOUNDBUFFER this_ptr_01;
  bool bVar1;
  float fVar2;
  uint uVar5;
  uint uVar3;
  DWORD dwMode;
  uint uVar4;
  double dVar6;
  float local_cb8;
  char acStack_cb4 [400];
  char acStack_b24 [400];
  char acStack_994 [400];
  char acStack_804 [400];
  char acStack_674 [400];
  char acStack_4e4 [400];
  char acStack_354 [400];
  char acStack_1c4 [400];
  float local_2c;
  float local_28;
  long lStack_1c;
  int iVar2;
  double dVar1;
  char *pcVar7;
  IDirectSound3DBuffer *this_ptr_00;
  
  iVar2 = slot->hardware_buffer_handle;
  if ((((iVar2 < 1) || (0x1e < iVar2)) ||
      (g_DirectSoundHardwareSfxBuffers[iVar2] == (IDirectSoundBuffer *)0x0)) ||
     (g_DirectSound3DBufferInterfaces[iVar2] == (IDirectSound3DBuffer *)0x0)) {
    g_CurrentFilename = "..\\sound\\snddx.cpp";
    g_CurrentLineNumber = 802;
    core_main_c_displayErrorAndQuit_FUN_00506f10("DirectSoundDevice::setSfxPos - invalid handle");
  }
  uVar4 = 1;
  this_ptr_01 = g_DirectSoundHardwareSfxBuffers[iVar2];
  bVar1 = false;
  this_ptr_00 = g_DirectSound3DBufferInterfaces[iVar2];
  if ((this_ptr_01 == (LPDIRECTSOUNDBUFFER)0x0) || (this_ptr_00 == (IDirectSound3DBuffer *)0x0)) {
    return 0;
  }
  if ((update_flags & 0x88U) != 0) {
    local_2c = slot->reference_distance;
    local_28 = slot->max_distance;
    fVar2 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90((slot->options).channel_index);
    local_cb8 = fVar2;
    if ((((slot->options).flags & 1) == 0) && (0.0 < fVar2)) {
      local_cb8 = fVar2 / fVar2;
      local_2c = local_2c * fVar2;
      local_28 = local_28 * fVar2;
    }
  }
  if ((update_flags & 2U) != 0) {
    uVar5 = (*this_ptr_00->vtable->SetPosition)
                      (this_ptr_00,(float)(slot->options).position.x,
                       (float)(slot->options).position.y,(float)(slot->options).position.z,1);
    if (uVar5 != 0) {
      pcVar7 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar5);
      _sprintf(acStack_804,"DirectSux: Unable to %s.  (%s)","Set hardware sfx 3d buffer position",pcVar7);
      sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_804);
    }
    uVar4 = (uint)(uVar5 == 0);
    bVar1 = true;
  }
  if ((update_flags & 4U) != 0) {
    uVar3 = (*this_ptr_00->vtable->SetVelocity)
                      (this_ptr_00,(float)(slot->options).velocity.x,
                       (float)(slot->options).velocity.y,(float)(slot->options).velocity.z,1);
    if (uVar3 != 0) {
      pcVar7 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar3);
      _sprintf(acStack_994,"DirectSux: Unable to %s.  (%s)","Set hardware sfx 3d buffer velocity",pcVar7);
      uVar4 = 0;
      sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_994);
    }
    bVar1 = true;
  }
  if ((update_flags & 8U) != 0) {
    dVar1 = (double)((slot->options).current_volume * local_cb8);
    if (0.0 < dVar1) {
      if (dVar1 < 1.0) {
        dVar6 = floor(dVar1 * 0.6931471805599453 * 868.58900000000006);
        lStack_1c = (long)ROUND(ROUND(dVar6));
        if (lStack_1c < 1) {
          if (lStack_1c < -10000) goto LAB_005af8a8;
        }
        else {
          lStack_1c = 0;
        }
      }
      else {
        lStack_1c = 0;
      }
    }
    else {
LAB_005af8a8:
      lStack_1c = -10000;
    }
    uVar5 = (*this_ptr_01->vtable->SetVolume)(this_ptr_01,lStack_1c);
    if (uVar5 != 0) {
      pcVar7 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar5);
      _sprintf(acStack_4e4,"DirectSux: Unable to %s.  (%s)","Set hardware sfx secondary buffer volume",pcVar7);
      uVar4 = 0;
      sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_4e4);
    }
  }
  if (((update_flags & 0x10U) != 0) &&
     (uVar5 = (*this_ptr_01->vtable->SetFrequency)
                        (this_ptr_01,
                         (DWORD)(longlong)
                                ROUND(ROUND((float)(slot->sample->sample_info).sample_rate *
                                            (slot->options).base_frequency))), uVar5 != 0)) {
    pcVar7 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar5);
    _sprintf(acStack_b24,"DirectSux: Unable to %s.  (%s)","Set hardware sfx secondary buffer frequency",pcVar7);
    uVar4 = 0;
    sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_b24);
  }
  if ((update_flags & 0x40U) != 0) {
    dwMode = 0;
    if (((slot->options).flags & 1) != 0) {
      dwMode = 2;
    }
    uVar5 = (*this_ptr_00->vtable->SetMode)(this_ptr_00,dwMode,1);
    if (uVar5 != 0) {
      pcVar7 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar5);
      _sprintf(acStack_674,"DirectSux: Unable to %s.  (%s)","Set hardware sfx 3d buffer mode",pcVar7);
      uVar4 = 0;
      sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_674);
    }
    bVar1 = true;
  }
  if ((update_flags & 0x80U) == 0) {
    if (bVar1) goto LAB_005af982;
  }
  else {
    uVar5 = (*this_ptr_00->vtable->SetMinDistance)(this_ptr_00,local_2c,1);
    if (uVar5 != 0) {
      pcVar7 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar5);
      _sprintf(acStack_354,"DirectSux: Unable to %s.  (%s)","Set hardware sfx 3d buffer minimum distance",pcVar7);
      uVar4 = 0;
      sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_354);
    }
    uVar5 = (*this_ptr_00->vtable->SetMaxDistance)(this_ptr_00,local_28,1);
    if (uVar5 != 0) {
      pcVar7 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar5);
      _sprintf(acStack_cb4,"DirectSux: Unable to %s.  (%s)","Set hardware sfx 3d buffer maximum distance",pcVar7);
      uVar4 = 0;
      sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_cb4);
    }
LAB_005af982:
    if (g_DirectSound3DListener == (IDirectSound3DListener *)0x0) {
      g_CurrentFilename = "..\\sound\\snddx.cpp";
      g_CurrentLineNumber = 939;
      core_main_c_displayErrorAndQuit_FUN_00506f10("DirectSoundDevice::setSfxOpt - no 3d listener allocated?!");
    }
    uVar5 = (*g_DirectSound3DListener->vtable->CommitDeferredSettings)(g_DirectSound3DListener);
    if (uVar5 != 0) {
      pcVar7 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar5);
      _sprintf(acStack_1c4,"DirectSux: Unable to %s.  (%s)","Commit hardware sfx 3d buffer settings",pcVar7);
      sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_1c4);
      goto LAB_005af9c4;
    }
  }
  if (uVar4 != 0) {
    return uVar4;
  }
LAB_005af9c4:
  sound_sndmain_cpp_logSoundError_FUN_005adba0("DirectSoundDevice::setSfxOpt - failed\n");
  return 0;
}
