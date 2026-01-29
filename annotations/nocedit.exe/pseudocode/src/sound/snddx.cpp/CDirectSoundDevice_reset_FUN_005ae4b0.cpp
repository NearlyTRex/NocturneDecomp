// Name: sound_snddx.cpp_CDirectSoundDevice_reset_FUN_005ae4b0
// Address: 005ae4b0
// Address Range: [[005ae4b0, 005ae659]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_CDirectSoundDevice_reset_FUN_005ae4b0(CDirectSoundDevice *this_ptr)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_CDirectSoundDevice_reset_FUN_005ae4b0(CDirectSoundDevice *this_ptr)

{
  IDirectSound3DBuffer *this_ptr_00;
  IDirectSoundBuffer *this_ptr_01;
  uint uVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  char acStack_4c4 [400];
  char acStack_334 [400];
  char acStack_1a4 [400];
  int local_14;
  
  local_14 = 1;
  if (g_DirectSoundSecondaryBuffer != (IDirectSoundBuffer *)0x0) {
    uVar1 = (*g_DirectSoundSecondaryBuffer->vtable->Stop)(g_DirectSoundSecondaryBuffer);
    if (uVar1 != 0) {
      pcVar2 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar1);
      sprintf
                (acStack_1a4,"DirectSux: Unable to %s.  (%s)","Stop secondary sound buffer",
                 pcVar2);
      sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_1a4);
      local_14 = 0;
    }
  }
  if (g_DirectSoundPrimaryBuffer != (IDirectSoundBuffer *)0x0) {
    uVar1 = (*g_DirectSoundPrimaryBuffer->vtable->Stop)(g_DirectSoundPrimaryBuffer);
    if (uVar1 != 0) {
      pcVar2 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar1);
      sprintf
                (acStack_334,"DirectSux: Unable to %s.  (%s)","Stop primary sound buffer",
                 pcVar2);
      sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_334);
      local_14 = 0;
    }
  }
  iVar4 = 0;
  iVar3 = 0;
  do {
    if (*(int **)((int)g_DirectSoundHardwareSfxBuffers + iVar4) == (int *)0x0) {
LAB_005ae500:
      this_ptr_00 = g_DirectSound3DBufferInterfaces[iVar3];
      if (this_ptr_00 != (IDirectSound3DBuffer *)0x0) {
        (*this_ptr_00->vtable->Release)((IUnknown *)this_ptr_00);
        g_DirectSound3DBufferInterfaces[iVar3] = (IDirectSound3DBuffer *)0x0;
      }
      this_ptr_01 = g_DirectSoundHardwareSfxBuffers[iVar3];
      if (this_ptr_01 != (IDirectSoundBuffer *)0x0) {
        (*this_ptr_01->vtable->Release)((IUnknown *)this_ptr_01);
        g_DirectSoundHardwareSfxBuffers[iVar3] = (IDirectSoundBuffer *)0x0;
      }
    }
    else {
      uVar1 = (**(code **)(**(int **)((int)g_DirectSoundHardwareSfxBuffers + iVar4) + 0x48))();
      if (uVar1 == 0) goto LAB_005ae500;
      pcVar2 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar1);
      sprintf
                (acStack_4c4,"DirectSux: Unable to %s.  (%s)","Stop hardware sfx secondary buffer",
                 pcVar2);
      sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_4c4);
      local_14 = 0;
    }
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 4;
    if (0x1e < iVar3) {
      iVar3 = sound_sndmain_cpp_killSoundThread_FUN_005abcb0();
      if (iVar3 != 0) {
        return local_14;
      }
      return 0;
    }
  } while( true );
}
