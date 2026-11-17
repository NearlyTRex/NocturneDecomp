// Name: sound_snddx.cpp_CDirectSoundDevice_allocateSfx_FUN_0052af50
// Address: 0052af50
// Address Range: [[0052af50, 0052b236]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_CDirectSoundDevice_allocateSfx_FUN_0052af50(CDirectSoundDevice *this_ptr,int sample_buffer_id)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_CDirectSoundDevice_allocateSfx_FUN_0052af50(CDirectSoundDevice *this_ptr,int sample_buffer_id)

{
  IDirectSoundBuffer *pIVar1;
  LPDIRECTSOUNDBUFFER pIVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  char acStack_650 [400];
  char acStack_4c0 [400];
  char acStack_330 [400];
  char acStack_1a0 [400];
  
  if (((sample_buffer_id < 1) || (0x18 < sample_buffer_id)) ||
     (g_DirectSoundSampleBuffers[sample_buffer_id] == (IDirectSoundBuffer *)0x0)) {
    g_CurrentFilename = "..\\sound\\snddx.cpp";
    g_CurrentLineNumber = 702;
    core_main_c_displayErrorAndQuit_FUN_004c8440
              ("DirectSoundDevice::allocateSfx - Invalid sample handle: %d",sample_buffer_id);
  }
  if (g_DirectSound == (IDirectSound *)0x0) {
    g_CurrentFilename = "..\\sound\\snddx.cpp";
    g_CurrentLineNumber = 703;
    core_main_c_displayErrorAndQuit_FUN_004c8440("DirectSoundDevice::allocateSfx - dSound not allocated?");
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
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (g_CConsolePtr,"DirectSoundDevice::allocateSfx - no free buffers\n");
    return 0;
  }
  pIVar2 = g_DirectSoundHardwareSfxBuffers[iVar7];
  if ((pIVar2 == (LPDIRECTSOUNDBUFFER)0x0) || (uVar5 = (*pIVar2->vtable->Stop)(pIVar2), uVar5 == 0))
  {
    piVar3 = (int *)g_INT_ARRAY_02dc9324[iVar7];
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3);
      g_INT_ARRAY_02dc9324[iVar7] = 0;
    }
    pIVar1 = g_DirectSoundHardwareSfxBuffers[iVar7];
    if (pIVar1 != (IDirectSoundBuffer *)0x0) {
      (*pIVar1->vtable->Release)((IUnknown *)pIVar1);
      g_DirectSoundHardwareSfxBuffers[iVar7] = (IDirectSoundBuffer *)0x0;
    }
  }
  else {
    pcVar6 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(uVar5);
    _sprintf(acStack_650,"DirectSux: Unable to %s.  (%s)","Stop hardware sfx secondary buffer",
               pcVar6);
    sound_sndmain_cpp_logSoundError_FUN_00529980(acStack_650);
  }
  uVar5 = (*g_DirectSound->vtable->DuplicateSoundBuffer)
                    (g_DirectSound,g_DirectSoundSampleBuffers[sample_buffer_id],
                     g_DirectSoundHardwareSfxBuffers + iVar7);
  if (uVar5 == 0) {
    pIVar1 = g_DirectSoundHardwareSfxBuffers[iVar7];
    if (pIVar1 != (IDirectSoundBuffer *)0x0) {
      uVar5 = (*pIVar1->vtable->QueryInterface)
                        ((IUnknown *)pIVar1,&g_IID_IDirectSound3DBuffer,
                         (void **)(g_INT_ARRAY_02dc9324 + iVar7));
      if (uVar5 == 0) {
        if (g_INT_ARRAY_02dc9324[iVar7] != 0) {
          return iVar7;
        }
      }
      else {
        pcVar6 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(uVar5);
        _sprintf(acStack_4c0,"DirectSux: Unable to %s.  (%s)","get DirectSound3DBuffer interface from sfx secondary buffer"
                   ,pcVar6);
        sound_sndmain_cpp_logSoundError_FUN_00529980(acStack_4c0);
      }
    }
  }
  else {
    pcVar6 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(uVar5);
    _sprintf(acStack_330,"DirectSux: Unable to %s.  (%s)","Duplicate sound buffer",
               pcVar6);
    sound_sndmain_cpp_logSoundError_FUN_00529980(acStack_330);
  }
  pIVar2 = g_DirectSoundHardwareSfxBuffers[iVar7];
  if ((pIVar2 != (LPDIRECTSOUNDBUFFER)0x0) && (uVar5 = (*pIVar2->vtable->Stop)(pIVar2), uVar5 != 0))
  {
    pcVar6 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(uVar5);
    _sprintf(acStack_1a0,"DirectSux: Unable to %s.  (%s)","Stop hardware sfx secondary buffer",
               pcVar6);
    sound_sndmain_cpp_logSoundError_FUN_00529980(acStack_1a0);
    return 0;
  }
  piVar3 = (int *)g_INT_ARRAY_02dc9324[iVar7];
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
    g_INT_ARRAY_02dc9324[iVar7] = 0;
  }
  pIVar1 = g_DirectSoundHardwareSfxBuffers[iVar7];
  if (pIVar1 != (IDirectSoundBuffer *)0x0) {
    (*pIVar1->vtable->Release)((IUnknown *)pIVar1);
    g_DirectSoundHardwareSfxBuffers[iVar7] = (IDirectSoundBuffer *)0x0;
  }
  return 0;
}
