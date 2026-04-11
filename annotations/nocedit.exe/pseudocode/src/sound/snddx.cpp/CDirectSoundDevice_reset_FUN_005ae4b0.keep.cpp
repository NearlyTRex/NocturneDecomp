// Name: sound_snddx.cpp_CDirectSoundDevice_reset_FUN_005ae4b0
// Address: 005ae4b0
// MANUAL RECONSTRUCTION
// Address Range: [[005ae4b0, 005ae659]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_CDirectSoundDevice_reset_FUN_005ae4b0(CDirectSoundDevice *this_ptr)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_CDirectSoundDevice_reset_FUN_005ae4b0(CDirectSoundDevice *this_ptr)

{
  uint uVar2;
  int iVar1;
  uint uVar3;
  char *pcVar4;
  char *pcVar3;
  int iVar4;
  int iVar5;
  char acStack_4c4 [400];
  char acStack_334 [400];
  char acStack_1a4 [400];
  int local_14;
  IDirectSoundBuffer *piVar1;
  IDirectSound3DBuffer *this_ptr_00;
  IDirectSoundBuffer *this_ptr_01;

  local_14 = 1;
  if (g_DirectSoundSecondaryBuffer != (IDirectSoundBuffer *)0x0) {
    uVar3 = (*g_DirectSoundSecondaryBuffer->vtable->Stop)(g_DirectSoundSecondaryBuffer);
    if (uVar3 != 0) {
      pcVar4 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar3);
      _sprintf
                (acStack_1a4,"DirectSux: Unable to %s.  (%s)","Stop secondary sound buffer",
                 pcVar4);
      sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_1a4);
      local_14 = 0;
    }
  }
  if (g_DirectSoundPrimaryBuffer != (IDirectSoundBuffer *)0x0) {
    uVar3 = (*g_DirectSoundPrimaryBuffer->vtable->Stop)(g_DirectSoundPrimaryBuffer);
    if (uVar3 != 0) {
      pcVar4 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar3);
      _sprintf
                (acStack_334,"DirectSux: Unable to %s.  (%s)","Stop primary sound buffer",
                 pcVar4);
      sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_334);
      local_14 = 0;
    }
  }
  iVar4 = 0;
  do {
    piVar1 = g_DirectSoundHardwareSfxBuffers[iVar4];
    if (piVar1 == (IDirectSoundBuffer *)0x0) {
LAB_005ae500:
      this_ptr_00 = g_DirectSound3DBufferInterfaces[iVar4];
      if (this_ptr_00 != (IDirectSound3DBuffer *)0x0) {
        (*this_ptr_00->vtable->Release)((IUnknown *)this_ptr_00);
        g_DirectSound3DBufferInterfaces[iVar4] = (IDirectSound3DBuffer *)0x0;
      }
      this_ptr_01 = g_DirectSoundHardwareSfxBuffers[iVar4];
      if (this_ptr_01 != (IDirectSoundBuffer *)0x0) {
        (*this_ptr_01->vtable->Release)((IUnknown *)this_ptr_01);
        g_DirectSoundHardwareSfxBuffers[iVar4] = (IDirectSoundBuffer *)0x0;
      }
    }
    else {
      uVar2 = (*piVar1->vtable->Stop)(piVar1);
      if (uVar2 == 0) goto LAB_005ae500;
      pcVar3 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar2);
      _sprintf
                (acStack_4c4,"DirectSux: Unable to %s.  (%s)","Stop hardware sfx secondary buffer",
                 pcVar3);
      sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_4c4);
      local_14 = 0;
    }
    iVar4 = iVar4 + 1;
    if (0x1e < iVar4) {
      iVar1 = sound_sndmain_cpp_killSoundThread_FUN_005abcb0();
      if (iVar1 != 0) {
        return local_14;
      }
      return 0;
    }
  } while( true );
}
