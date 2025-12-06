// Name: sound_snddx.cpp_CDirectSoundDevice_getSfxPlaybackPos_FUN_005afd60
// Address: 005afd60
// Address Range: [[005afd60, 005afe79]]
// Convention: __cdecl
// Signature: double sound_snddx.cpp_CDirectSoundDevice_getSfxPlaybackPos_FUN_005afd60(CDirectSoundDevice * this_ptr, CSfxSlot * slot)

#include "nocturne.h"

double __cdecl
sound_snddx_cpp_CDirectSoundDevice_getSfxPlaybackPos_FUN_005afd60
          (CDirectSoundDevice *this_ptr,CSfxSlot *slot)

{
  CSoundDeviceFull_vtable *pCVar1;
  uint uVar2;
  char *pcVar3;
  BADSPACEBASE *in_ESP;
  uint in_stack_00000004;
  char acStack_198 [4];
  char acStack_194 [384];
  DWORD local_14;
  
  pCVar1 = this_ptr[0x1c].base.vtable;
  if (((((int)pCVar1 < 1) || (0x1e < (int)pCVar1)) ||
      (g_DirectSoundHardwareSfxBuffers[(int)pCVar1] == (IDirectSoundBuffer *)0x0)) ||
     (g_DirectSound3DBufferInterfaces[(int)pCVar1] == (IDirectSound3DBuffer *)0x0)) {
    g_CurrentFilename = "..\\sound\\snddx.cpp";
    g_CurrentLineNumber = 0x3d6;
    core_main_c_displayErrorAndQuit_FUN_00506f10("DirectSoundDevice::getSfxPlaybackPos - invalid handle");
  }
  uVar2 = (*g_DirectSoundHardwareSfxBuffers[(int)pCVar1]->vtable->GetCurrentPosition)
                    (g_DirectSoundHardwareSfxBuffers[(int)pCVar1],(LPDWORD)&stack0xfffffff0,
                     &local_14);
  if (uVar2 != 0) {
    pcVar3 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar2);
    crt_stdio_c_sprintf_FUN_005fdbd0
              (acStack_198,"DirectSux: Unable to %s.  (%s)","Get playback cursor of hardware sfx secondary buffer",
               pcVar3);
    sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_194);
    return -1.0;
  }
  uVar2 = sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_005a8550
                    ((CSfxSample *)this_ptr[0x1e].base.vtable);
  return (double)(in_stack_00000004 / uVar2);
}
