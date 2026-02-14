// Name: sound_snddx.cpp_CDirectSoundDevice_setSfxPos_FUN_005af750
// Address: 005af750
// Address Range: [[005af750, 005afcb4]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_CDirectSoundDevice_setSfxPos_FUN_005af750(CDirectSoundDevice *this_ptr,CSfxSlot *slot,int update_flags)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_CDirectSoundDevice_setSfxPos_FUN_005af750(CDirectSoundDevice *this_ptr,CSfxSlot *slot,int update_flags)

{
  int iVar1;
  IDirectSound3DBuffer *this_ptr_00;
  uint uVar2;
  DWORD dwMode;
  char *pcVar3;
  CSfxSlot *extraout_EBX;
  uint uVar4;
  double dVar5;
  uint uVar6;
  ulonglong uStack_cc0;
  float local_cb8;
  char acStack_b2c [408];
  char acStack_994 [400];
  char acStack_804 [392];
  char acStack_67c [400];
  char acStack_4ec [400];
  char acStack_35c [400];
  char acStack_1cc [396];
  longlong lStack_40;
  ulonglong uStack_38;
  D3DVALUE DStack_30;
  int *local_2c;
  LPDIRECTSOUNDBUFFER local_28;
  long local_24;
  IDirectSoundBuffer *local_20;
  uint uStack_1c;
  float local_18;
  
  iVar1 = slot->hardware_buffer_handle;
  if ((((iVar1 < 1) || (0x1e < iVar1)) ||
      (g_DirectSoundHardwareSfxBuffers[iVar1] == (IDirectSoundBuffer *)0x0)) ||
     (g_DirectSound3DBufferInterfaces[iVar1] == (IDirectSound3DBuffer *)0x0)) {
    g_CurrentFilename = "..\\sound\\snddx.cpp";
    g_CurrentLineNumber = 0x322;
    core_main_c_displayErrorAndQuit_FUN_00506f10("DirectSoundDevice::setSfxPos - invalid handle");
  }
  uVar4 = 1;
  local_20 = g_DirectSoundHardwareSfxBuffers[iVar1];
  local_24 = 0;
  this_ptr_00 = g_DirectSound3DBufferInterfaces[iVar1];
  if ((local_20 == (IDirectSoundBuffer *)0x0) || (this_ptr_00 == (IDirectSound3DBuffer *)0x0)) {
    return 0;
  }
  if ((update_flags & 0x88U) != 0) {
    local_2c = (int *)slot->reference_distance;
    local_28 = (LPDIRECTSOUNDBUFFER)slot->max_distance;
    local_18 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90((slot->options).channel_index);
    local_cb8 = local_18;
    if ((((slot->options).flags & 1) == 0) && (0.0 < local_18)) {
      local_cb8 = local_18 / local_18;
      local_2c = (int *)((float)local_2c * local_18);
      local_28 = (LPDIRECTSOUNDBUFFER)((float)local_28 * local_18);
    }
  }
  if ((update_flags & 2U) != 0) {
    uVar4 = (*this_ptr_00->vtable->SetPosition)
                      (this_ptr_00,(float)(slot->options).position.x,
                       (float)(slot->options).position.y,(float)(slot->options).position.z,1);
    if (uVar4 != 0) {
      sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar4);
      _sprintf
                (acStack_804,"DirectSux: Unable to %s.  (%s)","Set hardware sfx 3d buffer position")
      ;
      sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_804);
    }
    uVar4 = (uint)(uVar4 == 0);
    local_24 = 1;
  }
  if ((update_flags & 4U) != 0) {
    uVar2 = (*this_ptr_00->vtable->SetVelocity)
                      (this_ptr_00,(float)(slot->options).velocity.x,
                       (float)(slot->options).velocity.y,(float)(slot->options).velocity.z,1);
    if (uVar2 != 0) {
      sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar2);
      _sprintf
                (acStack_994,"DirectSux: Unable to %s.  (%s)","Set hardware sfx 3d buffer velocity")
      ;
      uVar4 = 0;
      sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_994);
    }
    local_24 = 1;
  }
  if ((update_flags & 8U) != 0) {
    uStack_cc0 = (double)((slot->options).current_volume * local_cb8);
    if (0.0 < uStack_cc0) {
      if (uStack_cc0 < 1.0) {
        uStack_38 = floor(uStack_cc0 * 0.6931471805599453 * 868.58900000000006)
        ;
        dVar5 = round(uStack_38);
        local_24 = (long)ROUND(dVar5);
        slot = extraout_EBX;
        if (local_24 < 1) {
          if (local_24 < -10000) goto LAB_005af8a8;
        }
        else {
          local_24 = 0;
        }
      }
      else {
        uStack_1c = 0;
      }
    }
    else {
LAB_005af8a8:
      local_24 = -10000;
    }
    uVar2 = (*local_28->vtable->SetVolume)(local_28,local_24);
    if (uVar2 != 0) {
      pcVar3 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar2);
      _sprintf
                (acStack_4ec,"DirectSux: Unable to %s.  (%s)","Set hardware sfx secondary buffer volume",
                 pcVar3);
      uVar4 = 0;
      sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_4ec);
    }
  }
  if ((update_flags & 0x10U) != 0) {
    uVar6 = 0x5af8ee;
    dVar5 = round
                      ((double)((float)(slot->sample->sample_info).sample_rate *
                               (slot->options).base_frequency));
    lStack_40 = (longlong)ROUND(dVar5);
    uVar2 = (**(code **)(*local_2c + 0x44))(local_2c,(uint)lStack_40,uVar6);
    if (uVar2 != 0) {
      pcVar3 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar2);
      _sprintf
                (acStack_b2c,"DirectSux: Unable to %s.  (%s)","Set hardware sfx secondary buffer frequency",
                 pcVar3);
      uVar4 = 0;
      sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_b2c);
    }
  }
  if ((update_flags & 0x40U) != 0) {
    dwMode = 0;
    if (((slot->options).flags & 1) != 0) {
      dwMode = 2;
    }
    uVar2 = (*this_ptr_00->vtable->SetMode)(this_ptr_00,dwMode,1);
    if (uVar2 != 0) {
      pcVar3 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar2);
      _sprintf
                (acStack_67c,"DirectSux: Unable to %s.  (%s)","Set hardware sfx 3d buffer mode",
                 pcVar3);
      uVar4 = 0;
      sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_67c);
    }
    local_2c = (int *)0x1;
  }
  if ((update_flags & 0x80U) == 0) {
    if (local_2c != (int *)0x0) goto LAB_005af982;
  }
  else {
    uVar2 = (*this_ptr_00->vtable->SetMinDistance)(this_ptr_00,uStack_38._4_4_,1);
    if (uVar2 != 0) {
      pcVar3 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar2);
      _sprintf
                (acStack_35c,"DirectSux: Unable to %s.  (%s)","Set hardware sfx 3d buffer minimum distance",
                 pcVar3);
      uVar4 = 0;
      sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_35c);
    }
    uVar2 = (*this_ptr_00->vtable->SetMaxDistance)(this_ptr_00,DStack_30,1);
    if (uVar2 != 0) {
      pcVar3 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar2);
      _sprintf
                ((char *)((int)&uStack_cc0 + 4),"DirectSux: Unable to %s.  (%s)",
                 "Set hardware sfx 3d buffer maximum distance",pcVar3);
      uVar4 = 0;
      sound_sndmain_cpp_logSoundError_FUN_005adba0((char *)((int)&uStack_cc0 + 4));
    }
LAB_005af982:
    if (g_DirectSound3DListener == (IDirectSound3DListener *)0x0) {
      g_CurrentFilename = "..\\sound\\snddx.cpp";
      g_CurrentLineNumber = 0x3ab;
      core_main_c_displayErrorAndQuit_FUN_00506f10("DirectSoundDevice::setSfxOpt - no 3d listener allocated?!");
    }
    uVar2 = (*g_DirectSound3DListener->vtable->CommitDeferredSettings)(g_DirectSound3DListener);
    if (uVar2 != 0) {
      pcVar3 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar2);
      _sprintf
                (acStack_1cc,"DirectSux: Unable to %s.  (%s)","Commit hardware sfx 3d buffer settings",
                 pcVar3);
      sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_1cc);
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
