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
  byte bVar1;
  int iVar2;
  IDirectSound3DBuffer *this_ptr_00;
  uint uVar3;
  ushort uVar7;
  DWORD dwMode;
  IDirectSoundBuffer *pIVar4;
  uint extraout_EAX;
  uint extraout_EAX_00;
  uint uVar5;
  char *pcVar6;
  D3DVALUE DVar8;
  uint extraout_EDX;
  D3DVALUE extraout_EDX_00;
  D3DVALUE extraout_EDX_01;
  D3DVALUE extraout_EDX_02;
  D3DVALUE extraout_EDX_03;
  BADSPACEBASE *in_ESP;
  uint uVar9;
  bool bVar10;
  float10 in_ST0;
  double dVar11;
  ulonglong uStack_cc0;
  IDirectSoundBuffer *local_cb8;
  char acStack_b2c [408];
  char acStack_994 [400];
  char acStack_804 [392];
  char acStack_67c [400];
  char acStack_4ec [400];
  char acStack_35c [400];
  char acStack_1cc [396];
  longlong lStack_40;
  uint uStack_38;
  D3DVALUE DStack_34;
  D3DVALUE DStack_30;
  int *local_2c;
  LPDIRECTSOUNDBUFFER local_28;
  long local_24;
  IDirectSoundBuffer *local_20;
  uint uStack_1c;
  IDirectSoundBuffer *local_18;
  
  iVar2 = slot->hardware_buffer_handle;
  if ((((iVar2 < 1) || (0x1e < iVar2)) ||
      (g_DirectSoundHardwareSfxBuffers[iVar2] == (IDirectSoundBuffer *)0x0)) ||
     (g_DirectSound3DBufferInterfaces[iVar2] == (IDirectSound3DBuffer *)0x0)) {
    g_CurrentFilename = "..\\sound\\snddx.cpp";
    g_CurrentLineNumber = 0x322;
    core_main_c_displayErrorAndQuit_FUN_00506f10("DirectSoundDevice::setSfxPos - invalid handle");
  }
  uVar9 = 1;
  DVar8 = 0.0;
  local_20 = g_DirectSoundHardwareSfxBuffers[iVar2];
  local_24 = 0;
  this_ptr_00 = g_DirectSound3DBufferInterfaces[iVar2];
  if ((local_20 == (IDirectSoundBuffer *)0x0) || (this_ptr_00 == (IDirectSound3DBuffer *)0x0)) {
    return 0;
  }
  pIVar4 = local_20;
  if ((update_flags & 0x88U) != 0) {
    local_2c = (int *)slot->reference_distance;
    local_28 = (LPDIRECTSOUNDBUFFER)slot->max_distance;
    local_18 = (IDirectSoundBuffer *)
               sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90((slot->options).channel_index);
    bVar1 = (byte)(slot->options).flags;
    DVar8 = (D3DVALUE)CONCAT31 /* combine 2-byte values */((int3)((uint)extraout_EDX >> 8),bVar1);
    pIVar4 = local_18;
    local_cb8 = local_18;
    if (((bVar1 & 1) == 0) &&
       (pIVar4 = (IDirectSoundBuffer *)((uint)local_18 & 0xffff0000), 0.0 < (float)local_18)) {
      local_cb8 = (IDirectSoundBuffer *)((float)local_18 / (float)local_18);
      local_2c = (int *)((float)local_2c * (float)local_18);
      local_28 = (LPDIRECTSOUNDBUFFER)((float)local_28 * (float)local_18);
    }
  }
  uVar7 = (ushort)((uint)pIVar4 >> 0x10);
  if ((update_flags & 2U) != 0) {
    uVar9 = (*this_ptr_00->vtable->SetPosition)
                      (this_ptr_00,(float)(slot->options).position.x,
                       (float)(slot->options).position.y,(float)(slot->options).position.z,1);
    bVar10 = uVar9 != 0;
    DVar8 = extraout_EDX_00;
    if (bVar10) {
      sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar9);
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_804,"DirectSux: Unable to %s.  (%s)","Set hardware sfx 3d buffer position")
      ;
      sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_804);
      uVar9 = extraout_EAX;
      DVar8 = extraout_EDX_02;
    }
    uVar7 = (ushort)(uVar9 >> 0x10);
    uVar9 = (uint)!bVar10;
    local_24 = 1;
  }
  if ((update_flags & 4U) != 0) {
    uVar3 = (*this_ptr_00->vtable->SetVelocity)
                      (this_ptr_00,(float)(slot->options).velocity.x,
                       (float)(slot->options).velocity.y,(float)(slot->options).velocity.z,1);
    DVar8 = extraout_EDX_01;
    if (uVar3 != 0) {
      sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar3);
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_994,"DirectSux: Unable to %s.  (%s)","Set hardware sfx 3d buffer velocity")
      ;
      uVar9 = 0;
      sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_994);
      uVar3 = extraout_EAX_00;
      DVar8 = extraout_EDX_03;
    }
    uVar7 = (ushort)(uVar3 >> 0x10);
    local_24 = 1;
  }
  if ((update_flags & 8U) != 0) {
    uStack_cc0 = (double)((slot->options).current_volume * (float)local_cb8);
    if (0.0 < uStack_cc0) {
      uVar5 = CONCAT22 /* combine 2-byte values */(uVar7,(ushort)(1.0 < uStack_cc0) << 8 | (ushort)NAN(uStack_cc0) << 10 |
                             (ushort)(uStack_cc0 == 1.0) << 0xe);
      if (1.0 < uStack_cc0 || (uStack_cc0 == 1.0) != 0) {
        uStack_1c = 0;
      }
      else {
        crt_math_c_floor_FUN_005feb90((double)in_ST0);
        uStack_38 = uVar5;
        DStack_34 = DVar8;
        dVar11 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(DVar8,uVar5));
        local_24 = (long)ROUND(dVar11);
        if (local_24 < 1) {
          if (local_24 < -10000) goto LAB_005af8a8;
        }
        else {
          local_24 = 0;
        }
      }
    }
    else {
LAB_005af8a8:
      local_24 = -10000;
    }
    uVar3 = (*local_28->vtable->SetVolume)(local_28,local_24);
    if (uVar3 != 0) {
      pcVar6 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar3);
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_4ec,"DirectSux: Unable to %s.  (%s)","Set hardware sfx secondary buffer volume",
                 pcVar6);
      uVar9 = 0;
      sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_4ec);
    }
  }
  if ((update_flags & 0x10U) != 0) {
    dVar11 = crt_math_c_round_FUN_005fe6b0
                       ((double)((float)(slot->sample->sample_info).sample_rate *
                                (slot->options).base_frequency));
    lStack_40 = (longlong)ROUND(dVar11);
    uVar3 = (**(code **)(*local_2c + 0x44))();
    if (uVar3 != 0) {
      pcVar6 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar3);
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_b2c,"DirectSux: Unable to %s.  (%s)","Set hardware sfx secondary buffer frequency",
                 pcVar6);
      uVar9 = 0;
      sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_b2c);
    }
  }
  if ((update_flags & 0x40U) != 0) {
    dwMode = 0;
    if (((slot->options).flags & 1) != 0) {
      dwMode = 2;
    }
    uVar3 = (*this_ptr_00->vtable->SetMode)(this_ptr_00,dwMode,1);
    if (uVar3 != 0) {
      pcVar6 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar3);
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_67c,"DirectSux: Unable to %s.  (%s)","Set hardware sfx 3d buffer mode",
                 pcVar6);
      uVar9 = 0;
      sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_67c);
    }
    local_2c = (int *)&DAT_00000001;
  }
  if ((update_flags & 0x80U) == 0) {
    if (local_2c != (int *)0x0) goto LAB_005af982;
  }
  else {
    uVar3 = (*this_ptr_00->vtable->SetMinDistance)(this_ptr_00,DStack_34,1);
    if (uVar3 != 0) {
      pcVar6 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar3);
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_35c,"DirectSux: Unable to %s.  (%s)","Set hardware sfx 3d buffer minimum distance",
                 pcVar6);
      uVar9 = 0;
      sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_35c);
    }
    uVar3 = (*this_ptr_00->vtable->SetMaxDistance)(this_ptr_00,DStack_30,1);
    if (uVar3 != 0) {
      pcVar6 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar3);
      crt_stdio_c_sprintf_FUN_005fdbd0
                ((char *)((int)&uStack_cc0 + 4),"DirectSux: Unable to %s.  (%s)",
                 "Set hardware sfx 3d buffer maximum distance",pcVar6);
      uVar9 = 0;
      sound_sndmain_cpp_logSoundError_FUN_005adba0((char *)((int)&uStack_cc0 + 4));
    }
LAB_005af982:
    if (g_DirectSound3DListener == (IDirectSound3DListener *)0x0) {
      g_CurrentFilename = "..\\sound\\snddx.cpp";
      g_CurrentLineNumber = 0x3ab;
      core_main_c_displayErrorAndQuit_FUN_00506f10("DirectSoundDevice::setSfxOpt - no 3d listener allocated?!");
    }
    uVar3 = (*g_DirectSound3DListener->vtable->CommitDeferredSettings)(g_DirectSound3DListener);
    if (uVar3 != 0) {
      pcVar6 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar3);
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_1cc,"DirectSux: Unable to %s.  (%s)","Commit hardware sfx 3d buffer settings",
                 pcVar6);
      uVar9 = 0;
      sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_1cc);
      goto LAB_005af9c4;
    }
  }
  if (uVar9 != 0) {
    return uVar9;
  }
LAB_005af9c4:
  sound_sndmain_cpp_logSoundError_FUN_005adba0("DirectSoundDevice::setSfxOpt - failed\n");
  return uVar9;
}
