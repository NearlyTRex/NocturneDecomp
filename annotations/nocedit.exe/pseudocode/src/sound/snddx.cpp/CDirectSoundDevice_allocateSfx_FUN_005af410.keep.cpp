// Name: sound_snddx.cpp_CDirectSoundDevice_allocateSfx_FUN_005af410
// Address: 005af410
// MANUAL RECONSTRUCTION
// Address Range: [[005af410, 005af711]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_CDirectSoundDevice_allocateSfx_FUN_005af410(CDirectSoundDevice *this_ptr,int sample_buffer_id)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_CDirectSoundDevice_allocateSfx_FUN_005af410(CDirectSoundDevice *this_ptr,int sample_buffer_id)

{
  IDirectSoundBuffer *pIVar1;
  LPDIRECTSOUNDBUFFER pIVar2;
  IDirectSound3DBuffer *pIVar3;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  char acStack_650 [400];
  char acStack_4c0 [400];
  char acStack_330 [400];
  char acStack_1a0 [400];
  
  if ((((sample_buffer_id < 1) || (0x18 < sample_buffer_id)) ||
      (g_DirectSoundSampleBuffers[sample_buffer_id] == (IDirectSoundBuffer *)0x0)) ||
     (g_DirectSoundBufferMetadata[sample_buffer_id].dwBytesPerSample < 1)) {
    g_CurrentFilename = "..\\sound\\snddx.cpp";
    g_CurrentLineNumber = 749;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("DirectSoundDevice::allocateSfx - Invalid sample handle: %d",sample_buffer_id);
  }
  if (g_DirectSound == (IDirectSound *)0x0) {
    g_CurrentFilename = "..\\sound\\snddx.cpp";
    g_CurrentLineNumber = 750;
    core_main_c_displayErrorAndQuit_FUN_00506f10("DirectSoundDevice::allocateSfx - dSound not allocated?");
  }
  iVar7 = 1;
  pIVar1 = g_DirectSoundHardwareSfxBuffers[1];
  while (pIVar1 != (IDirectSoundBuffer *)0x0) {
    iVar7 = iVar7 + 1;
    if (iVar7 > 0x1e) break;
    pIVar1 = g_DirectSoundHardwareSfxBuffers[iVar7];
  }
  if (0x1e < iVar7) {
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"DirectSoundDevice::allocateSfx - no free buffers\n");
    return 0;
  }
  pIVar2 = g_DirectSoundHardwareSfxBuffers[iVar7];
  if ((pIVar2 == (LPDIRECTSOUNDBUFFER)0x0) || (uVar5 = (*pIVar2->vtable->Stop)(pIVar2), uVar5 == 0))
  {
    pIVar3 = g_DirectSound3DBufferInterfaces[iVar7];
    if (pIVar3 != (IDirectSound3DBuffer *)0x0) {
      (*pIVar3->vtable->Release)((IUnknown *)pIVar3);
      g_DirectSound3DBufferInterfaces[iVar7] = (IDirectSound3DBuffer *)0x0;
    }
    pIVar1 = g_DirectSoundHardwareSfxBuffers[iVar7];
    if (pIVar1 != (IDirectSoundBuffer *)0x0) {
      (*pIVar1->vtable->Release)((IUnknown *)pIVar1);
      g_DirectSoundHardwareSfxBuffers[iVar7] = (IDirectSoundBuffer *)0x0;
    }
  }
  else {
    pcVar6 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar5);
    _sprintf
              (acStack_4c0,"DirectSux: Unable to %s.  (%s)","Stop hardware sfx secondary buffer",
               pcVar6);
    sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_4c0);
  }
  uVar5 = (*g_DirectSound->vtable->DuplicateSoundBuffer)
                    (g_DirectSound,g_DirectSoundSampleBuffers[sample_buffer_id],
                     g_DirectSoundHardwareSfxBuffers + iVar7);
  if (uVar5 == 0) {
    pIVar1 = g_DirectSoundHardwareSfxBuffers[iVar7];
    if (pIVar1 != (IDirectSoundBuffer *)0x0) {
      uVar5 = (*pIVar1->vtable->QueryInterface)
                        ((IUnknown *)pIVar1,&g_IID_IDirectSound3DBuffer,
                         (void **)(g_DirectSound3DBufferInterfaces + iVar7));
      if (uVar5 == 0) {
        if (g_DirectSound3DBufferInterfaces[iVar7] != (IDirectSound3DBuffer *)0x0) {
          return iVar7;
        }
      }
      else {
        pcVar6 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar5);
        _sprintf
                  (acStack_330,"DirectSux: Unable to %s.  (%s)",
                   "get DirectSound3DBuffer interface from sfx secondary buffer",pcVar6);
        sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_330);
      }
    }
  }
  else {
    pcVar6 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar5);
    _sprintf
              (acStack_1a0,"DirectSux: Unable to %s.  (%s)","Duplicate sound buffer",
               pcVar6);
    sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_1a0);
  }
  pIVar2 = g_DirectSoundHardwareSfxBuffers[iVar7];
  if ((pIVar2 != (LPDIRECTSOUNDBUFFER)0x0) && (uVar5 = (*pIVar2->vtable->Stop)(pIVar2), uVar5 != 0))
  {
    pcVar6 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar5);
    _sprintf
              (acStack_650,"DirectSux: Unable to %s.  (%s)","Stop hardware sfx secondary buffer",
               pcVar6);
    sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_650);
    return 0;
  }
  pIVar3 = g_DirectSound3DBufferInterfaces[iVar7];
  if (pIVar3 != (IDirectSound3DBuffer *)0x0) {
    (*pIVar3->vtable->Release)((IUnknown *)pIVar3);
    g_DirectSound3DBufferInterfaces[iVar7] = (IDirectSound3DBuffer *)0x0;
  }
  pIVar1 = g_DirectSoundHardwareSfxBuffers[iVar7];
  if (pIVar1 != (IDirectSoundBuffer *)0x0) {
    (*pIVar1->vtable->Release)((IUnknown *)pIVar1);
    g_DirectSoundHardwareSfxBuffers[iVar7] = (IDirectSoundBuffer *)0x0;
  }
  return 0;
}
