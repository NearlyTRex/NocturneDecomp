// Name: sound_snddx.cpp_CDirectSoundDevice_setSfxPos_FUN_005af750
// Address: 005af750
// Address Range: [[005af750, 005afcb4]]
// Convention: __cdecl
// Signature: int sound_snddx.cpp_CDirectSoundDevice_setSfxPos_FUN_005af750(CDirectSoundDevice * this_ptr, CSfxSlot * slot, int update_flags)

#include "nocturne.h"

int __cdecl
sound_snddx_cpp_CDirectSoundDevice_setSfxPos_FUN_005af750
          (CDirectSoundDevice *this_ptr,CSfxSlot *slot,int update_flags)

{
  int iVar1;
  IDirectSound3DBuffer *this_ptr_00;
  uint uVar2;
  DWORD dwMode;
  CSfxSlot *extraout_EBX;
  uint uVar3;
  double dVar4;
  float fStack_cb4;
  char acStack_cb0 [400];
  char acStack_b20 [400];
  char acStack_990 [400];
  char acStack_800 [400];
  char acStack_670 [400];
  char acStack_4e0 [400];
  char acStack_350 [400];
  char acStack_1c0 [396];
  double dStack_34;
  float local_28;
  float local_24;
  int *local_20;
  IDirectSoundBuffer *pIStack_1c;
  long local_18;
  float fStack_14;
  
  iVar1 = slot->hardware_buffer_handle;
  if ((((iVar1 < 1) || (0x1e < iVar1)) ||
      (g_DirectSoundHardwareSfxBuffers[iVar1] == (IDirectSoundBuffer *)0x0)) ||
     (g_DirectSound3DBufferInterfaces[iVar1] == (IDirectSound3DBuffer *)0x0)) {
    g_CurrentFilename = "..\\sound\\snddx.cpp";
    g_CurrentLineNumber = 0x322;
    core_main_c_displayErrorAndQuit_FUN_00506f10("DirectSoundDevice::setSfxPos - invalid handle");
  }
  uVar3 = 1;
  pIStack_1c = g_DirectSoundHardwareSfxBuffers[iVar1];
  local_20 = (int *)0x0;
  this_ptr_00 = g_DirectSound3DBufferInterfaces[iVar1];
  if ((pIStack_1c == (IDirectSoundBuffer *)0x0) || (this_ptr_00 == (IDirectSound3DBuffer *)0x0)) {
    return 0;
  }
  if ((update_flags & 0x88U) != 0) {
    local_28 = slot->reference_distance;
    local_24 = slot->max_distance;
    fStack_14 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90((slot->options).channel_index);
    fStack_cb4 = fStack_14;
    if ((((slot->options).flags & 1) == 0) && (0.0 < fStack_14)) {
      fStack_cb4 = fStack_14 / fStack_14;
      local_28 = local_28 * fStack_14;
      local_24 = local_24 * fStack_14;
    }
  }
  if ((update_flags & 2U) != 0) {
    uVar3 = (*this_ptr_00->vtable->SetPosition)
                      (this_ptr_00,(float)(slot->options).position.x,
                       (float)(slot->options).position.y,(float)(slot->options).position.z,1);
    if (uVar3 != 0) {
      sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar3);
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_800,"DirectSux: Unable to %s.  (%s)","Set hardware sfx 3d buffer position")
      ;
      sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_800);
    }
    uVar3 = (uint)(uVar3 == 0);
    local_20 = (int *)&DAT_00000001;
  }
  if ((update_flags & 4U) != 0) {
    uVar2 = (*this_ptr_00->vtable->SetVelocity)
                      (this_ptr_00,(float)(slot->options).velocity.x,
                       (float)(slot->options).velocity.y,(float)(slot->options).velocity.z,1);
    if (uVar2 != 0) {
      sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar2);
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_990,"DirectSux: Unable to %s.  (%s)","Set hardware sfx 3d buffer velocity")
      ;
      uVar3 = 0;
      sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_990);
    }
    local_20 = (int *)&DAT_00000001;
  }
  if ((update_flags & 8U) != 0) {
    dVar4 = (double)((slot->options).current_volume * fStack_cb4);
    if (0.0 < dVar4) {
      if (dVar4 < 1.0) {
        dStack_34 = crt_math_c_floor_FUN_005feb90(dVar4 * 0.6931471805599453 * 868.58900000000006);
        dVar4 = crt_math_c_round_FUN_005fe6b0(dStack_34);
        local_20 = (int *)(int)ROUND(dVar4);
        slot = extraout_EBX;
        if ((int)local_20 < 1) {
          if ((int)local_20 < -10000) goto LAB_005af8a8;
        }
        else {
          local_20 = (int *)0x0;
        }
      }
      else {
        local_18 = 0;
      }
    }
    else {
LAB_005af8a8:
      local_18 = -10000;
    }
    uVar2 = (*pIStack_1c->vtable->SetVolume)(pIStack_1c,local_18);
    if (uVar2 != 0) {
      sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar2);
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_4e0,"DirectSux: Unable to %s.  (%s)","Set hardware sfx secondary buffer volume")
      ;
      uVar3 = 0;
      sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_4e0);
    }
  }
  if ((update_flags & 0x10U) != 0) {
    dVar4 = crt_math_c_round_FUN_005fe6b0
                      ((double)((float)(slot->sample->sample_info).sample_rate *
                               (slot->options).base_frequency));
    dStack_34 = (double)(longlong)ROUND(dVar4);
    uVar2 = (**(code **)(*local_20 + 0x44))();
    if (uVar2 != 0) {
      sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar2);
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_b20,"DirectSux: Unable to %s.  (%s)","Set hardware sfx secondary buffer frequency")
      ;
      uVar3 = 0;
      sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_b20);
    }
  }
  if ((update_flags & 0x40U) != 0) {
    dwMode = 0;
    if (((slot->options).flags & 1) != 0) {
      dwMode = 2;
    }
    uVar2 = (*this_ptr_00->vtable->SetMode)(this_ptr_00,dwMode,1);
    if (uVar2 != 0) {
      sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar2);
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_670,"DirectSux: Unable to %s.  (%s)","Set hardware sfx 3d buffer mode")
      ;
      uVar3 = 0;
      sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_670);
    }
    local_20 = (int *)&DAT_00000001;
  }
  if ((update_flags & 0x80U) == 0) {
    if (local_20 != (int *)0x0) goto LAB_005af982;
  }
  else {
    uVar2 = (*this_ptr_00->vtable->SetMinDistance)(this_ptr_00,local_28,1);
    if (uVar2 != 0) {
      sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar2);
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_350,"DirectSux: Unable to %s.  (%s)","Set hardware sfx 3d buffer minimum distance")
      ;
      uVar3 = 0;
      sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_350);
    }
    uVar2 = (*this_ptr_00->vtable->SetMaxDistance)(this_ptr_00,local_24,1);
    if (uVar2 != 0) {
      sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar2);
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_cb0,"DirectSux: Unable to %s.  (%s)","Set hardware sfx 3d buffer maximum distance")
      ;
      uVar3 = 0;
      sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_cb0);
    }
LAB_005af982:
    if (g_DirectSound3DListener == (IDirectSound3DListener *)0x0) {
      g_CurrentFilename = "..\\sound\\snddx.cpp";
      g_CurrentLineNumber = 0x3ab;
      core_main_c_displayErrorAndQuit_FUN_00506f10("DirectSoundDevice::setSfxOpt - no 3d listener allocated?!");
    }
    uVar2 = (*g_DirectSound3DListener->vtable->CommitDeferredSettings)(g_DirectSound3DListener);
    if (uVar2 != 0) {
      sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar2);
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_1c0,"DirectSux: Unable to %s.  (%s)","Commit hardware sfx 3d buffer settings")
      ;
      sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_1c0);
      goto LAB_005af9c4;
    }
  }
  if (uVar3 != 0) {
    return uVar3;
  }
LAB_005af9c4:
  sound_sndmain_cpp_logSoundError_FUN_005adba0("DirectSoundDevice::setSfxOpt - failed\n");
  return 0;
}
