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
  IDirectSoundBuffer *error_code;
  uint uVar2;
  DWORD dwMode;
  IDirectSoundBuffer *extraout_EAX;
  IDirectSoundBuffer *extraout_EAX_00;
  LPDIRECTSOUNDBUFFER extraout_EAX_01;
  IDirectSoundBuffer *extraout_EAX_02;
  char *pcVar3;
  uint extraout_EDX;
  BADSPACEBASE *in_ESP;
  uint uVar4;
  bool bVar5;
  float10 in_ST0;
  float10 fVar6;
  ulonglong uStack_cbc;
  IDirectSoundBuffer *apIStack_cb4 [99];
  char acStack_b28 [4];
  char acStack_b24 [396];
  char acStack_998 [4];
  char acStack_994 [396];
  char acStack_808 [4];
  char acStack_804 [396];
  char acStack_678 [4];
  char acStack_674 [396];
  char acStack_4e8 [4];
  char acStack_4e4 [368];
  char acStack_374 [4];
  char acStack_370 [424];
  char acStack_1c8 [4];
  char acStack_1c4 [380];
  longlong lStack_48;
  D3DVALUE DStack_40;
  LPDIRECTSOUNDBUFFER pIStack_34;
  float local_28;
  float local_24;
  int local_20;
  IDirectSoundBuffer *pIStack_1c;
  long local_18;
  IDirectSoundBuffer *pIStack_14;
  
  iVar1 = slot->hardware_buffer_handle;
  if ((((iVar1 < 1) || (0x1e < iVar1)) ||
      (g_DirectSoundHardwareSfxBuffers[iVar1] == (IDirectSoundBuffer *)0x0)) ||
     (g_DirectSound3DBufferInterfaces[iVar1] == (IDirectSound3DBuffer *)0x0)) {
    g_CurrentFilename = "..\\sound\\snddx.cpp";
    g_CurrentLineNumber = 0x322;
    core_main_c_displayErrorAndQuit_FUN_00506f10("DirectSoundDevice::setSfxPos - invalid handle");
  }
  uVar4 = 1;
  pIStack_1c = g_DirectSoundHardwareSfxBuffers[iVar1];
  local_20 = 0;
  this_ptr_00 = g_DirectSound3DBufferInterfaces[iVar1];
  if ((pIStack_1c == (IDirectSoundBuffer *)0x0) || (this_ptr_00 == (IDirectSound3DBuffer *)0x0)) {
    return 0;
  }
  error_code = pIStack_1c;
  if ((update_flags & 0x88U) != 0) {
    local_28 = slot->reference_distance;
    local_24 = slot->max_distance;
    pIStack_14 = (IDirectSoundBuffer *)
                 sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90((slot->options).channel_index);
    error_code = pIStack_14;
    apIStack_cb4[0] = pIStack_14;
    if ((((slot->options).flags & 1) == 0) &&
       (error_code = (IDirectSoundBuffer *)
                     CONCAT22 /* combine 2-byte values */((short)((uint)pIStack_14 >> 0x10),
                              (ushort)(0.0 < (float)pIStack_14) << 8 |
                              (ushort)NAN((float)pIStack_14) << 10 |
                              (ushort)((float)pIStack_14 == 0.0) << 0xe), 0.0 < (float)pIStack_14))
    {
      apIStack_cb4[0] = (IDirectSoundBuffer *)((float)pIStack_14 / (float)pIStack_14);
      local_28 = local_28 * (float)pIStack_14;
      local_24 = local_24 * (float)pIStack_14;
    }
  }
  if ((update_flags & 2U) != 0) {
    error_code = (IDirectSoundBuffer *)
                 (*this_ptr_00->vtable->SetPosition)
                           (this_ptr_00,(float)(slot->options).position.x,
                            (float)(slot->options).position.y,(float)(slot->options).position.z,1);
    bVar5 = error_code != (IDirectSoundBuffer *)0x0;
    if (bVar5) {
      pcVar3 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70((uint)error_code);
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_808,"DirectSux: Unable to %s.  (%s)","Set hardware sfx 3d buffer position",
                 pcVar3);
      sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_804);
      error_code = extraout_EAX;
    }
    uVar4 = (uint)!bVar5;
    local_20 = 1;
  }
  if ((update_flags & 4U) != 0) {
    error_code = (IDirectSoundBuffer *)
                 (*this_ptr_00->vtable->SetVelocity)
                           (this_ptr_00,(float)(slot->options).velocity.x,
                            (float)(slot->options).velocity.y,(float)(slot->options).velocity.z,1);
    if (error_code != (IDirectSoundBuffer *)0x0) {
      pcVar3 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70((uint)error_code);
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_998,"DirectSux: Unable to %s.  (%s)","Set hardware sfx 3d buffer velocity",
                 pcVar3);
      uVar4 = 0;
      sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_994);
      error_code = extraout_EAX_00;
    }
    local_20 = 1;
  }
  if ((update_flags & 8U) != 0) {
    uStack_cbc = (double)((slot->options).current_volume * (float)apIStack_cb4[0]);
    if (0.0 < uStack_cbc) {
      if (uStack_cbc < 1.0) {
        crt_math_c_floor_FUN_005feb90((double)in_ST0);
        fVar6 = (float10)(double)CONCAT44 /* combine 2-byte values */(extraout_EDX,extraout_EAX_01);
        pIStack_34 = extraout_EAX_01;
        crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,extraout_EAX_01));
        local_18 = (long)ROUND(fVar6);
        if (local_18 < 1) {
          if (local_18 < -10000) goto LAB_005af8a8;
        }
        else {
          local_18 = 0;
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
    error_code = (IDirectSoundBuffer *)(*pIStack_1c->vtable->SetVolume)(pIStack_1c,local_18);
    if (error_code != (IDirectSoundBuffer *)0x0) {
      pcVar3 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70((uint)error_code);
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_4e8,"DirectSux: Unable to %s.  (%s)","Set hardware sfx secondary buffer volume",
                 pcVar3);
      uVar4 = 0;
      sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_4e4);
      error_code = extraout_EAX_02;
    }
  }
  if ((update_flags & 0x10U) != 0) {
    fVar6 = (float10)(slot->sample->sample_info).sample_rate *
            (float10)(slot->options).base_frequency;
    crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(slot->sample,error_code));
    lStack_48 = (longlong)ROUND(fVar6);
    uVar2 = (*pIStack_34->vtable->SetFrequency)(pIStack_34,(DWORD)lStack_48);
    if (uVar2 != 0) {
      pcVar3 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar2);
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_b28,"DirectSux: Unable to %s.  (%s)","Set hardware sfx secondary buffer frequency",
                 pcVar3);
      uVar4 = 0;
      sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_b24);
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
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_678,"DirectSux: Unable to %s.  (%s)","Set hardware sfx 3d buffer mode",
                 pcVar3);
      uVar4 = 0;
      sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_674);
    }
    local_20 = 1;
  }
  if ((update_flags & 0x80U) == 0) {
    if (local_20 != 0) goto LAB_005af982;
  }
  else {
    uVar2 = (*this_ptr_00->vtable->SetMinDistance)(this_ptr_00,local_28,1);
    if (uVar2 != 0) {
      pcVar3 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar2);
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_374,"DirectSux: Unable to %s.  (%s)","Set hardware sfx 3d buffer minimum distance",
                 pcVar3);
      uVar4 = 0;
      sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_370);
    }
    uVar2 = (*this_ptr_00->vtable->SetMaxDistance)(this_ptr_00,DStack_40,1);
    if (uVar2 != 0) {
      pcVar3 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar2);
      crt_stdio_c_sprintf_FUN_005fdbd0
                ((char *)((int)&uStack_cbc + 4),"DirectSux: Unable to %s.  (%s)",
                 "Set hardware sfx 3d buffer maximum distance",pcVar3);
      uVar4 = 0;
      sound_sndmain_cpp_logSoundError_FUN_005adba0((char *)apIStack_cb4);
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
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_1c8,"DirectSux: Unable to %s.  (%s)","Commit hardware sfx 3d buffer settings",
                 pcVar3);
      uVar4 = 0;
      sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_1c4);
      goto LAB_005af9c4;
    }
  }
  if (uVar4 != 0) {
    return uVar4;
  }
LAB_005af9c4:
  sound_sndmain_cpp_logSoundError_FUN_005adba0("DirectSoundDevice::setSfxOpt - failed\n");
  return uVar4;
}
