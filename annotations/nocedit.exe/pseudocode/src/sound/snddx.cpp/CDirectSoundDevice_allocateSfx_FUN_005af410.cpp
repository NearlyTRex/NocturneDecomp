// Name: sound_snddx.cpp_CDirectSoundDevice_allocateSfx_FUN_005af410
// Address: 005af410
// Address Range: [[005af410, 005af711]]
// Convention: __cdecl
// Signature: int sound_snddx.cpp_CDirectSoundDevice_allocateSfx_FUN_005af410(CDirectSoundDevice * this_ptr, int sample_buffer_id)

#include "nocturne.h"

int __cdecl
sound_snddx_cpp_CDirectSoundDevice_allocateSfx_FUN_005af410
          (CDirectSoundDevice *this_ptr,int sample_buffer_id)

{
  IDirectSoundBuffer *pIVar1;
  LPDIRECTSOUNDBUFFER pIVar2;
  IDirectSound3DBuffer *pIVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  BADSPACEBASE *in_ESP;
  char acStack_618 [340];
  char acStack_4c4 [4];
  char acStack_4c0 [440];
  char acStack_308 [4];
  char acStack_304 [396];
  char acStack_178 [4];
  char acStack_174 [356];
  
  if ((((sample_buffer_id < 1) || (0x18 < sample_buffer_id)) ||
      (g_DirectSoundSampleBuffers[sample_buffer_id] == (IDirectSoundBuffer *)0x0)) ||
     (g_DirectSoundBufferMetadata[sample_buffer_id].field0_0x0 < 1)) {
    g_CurrentFilename = "..\\sound\\snddx.cpp";
    g_CurrentLineNumber = 0x2ed;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("DirectSoundDevice::allocateSfx - Invalid sample handle: %d",sample_buffer_id);
  }
  if (g_DirectSound == (IDirectSound *)0x0) {
    g_CurrentFilename = "..\\sound\\snddx.cpp";
    g_CurrentLineNumber = 0x2ee;
    core_main_c_displayErrorAndQuit_FUN_00506f10("DirectSoundDevice::allocateSfx - dSound not allocated?");
  }
  iVar7 = 1;
  iVar4 = 4;
  pIVar1 = g_DirectSoundHardwareSfxBuffers[1];
  while (pIVar1 != (IDirectSoundBuffer *)0x0) {
    iVar7 = iVar7 + 1;
    if (0x7b < iVar4 + 4) break;
    pIVar1 = *(IDirectSoundBuffer **)((int)g_DirectSoundHardwareSfxBuffers + iVar4 + 4);
    iVar4 = iVar4 + 4;
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
    crt_stdio_c_sprintf_FUN_005fdbd0
              (acStack_4c4,"DirectSux: Unable to %s.  (%s)","Stop hardware sfx secondary buffer",
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
                         g_DirectSound3DBufferInterfaces + iVar7);
      if (uVar5 == 0) {
        if (g_DirectSound3DBufferInterfaces[iVar7] != (IDirectSound3DBuffer *)0x0) {
          return iVar7;
        }
      }
      else {
        pcVar6 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar5);
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (acStack_308,"DirectSux: Unable to %s.  (%s)",
                   "get DirectSound3DBuffer interface from sfx secondary buffer",pcVar6);
        sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_304);
      }
    }
  }
  else {
    pcVar6 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar5);
    crt_stdio_c_sprintf_FUN_005fdbd0
              (acStack_178,"DirectSux: Unable to %s.  (%s)","Duplicate sound buffer",
               pcVar6);
    sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_174);
  }
  pIVar2 = g_DirectSoundHardwareSfxBuffers[iVar7];
  if ((pIVar2 != (LPDIRECTSOUNDBUFFER)0x0) && (uVar5 = (*pIVar2->vtable->Stop)(pIVar2), uVar5 != 0))
  {
    pcVar6 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar5);
    crt_stdio_c_sprintf_FUN_005fdbd0
              (&stack0xfffff9e4,"DirectSux: Unable to %s.  (%s)",
               "Stop hardware sfx secondary buffer",pcVar6);
    sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_618);
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
