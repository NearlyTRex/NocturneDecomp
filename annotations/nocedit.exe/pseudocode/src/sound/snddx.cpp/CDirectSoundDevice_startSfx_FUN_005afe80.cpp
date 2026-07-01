// Name: sound_snddx.cpp_CDirectSoundDevice_startSfx_FUN_005afe80
// Address: 005afe80
// Address Range: [[005afe80, 005b0028]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_CDirectSoundDevice_startSfx_FUN_005afe80(CDirectSoundDevice *this_ptr,CSfxSlot *slot)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_CDirectSoundDevice_startSfx_FUN_005afe80(CDirectSoundDevice *this_ptr,CSfxSlot *slot)

{
  int iVar1;
  int iVar2;
  uint error_code;
  int iVar3;
  char *pcVar4;
  char acStack_198 [392];
  DWORD dwFlags;
  
  iVar1 = slot->hardware_buffer_handle;
  if ((((iVar1 < 1) || (0x1e < iVar1)) ||
      (g_DirectSoundHardwareSfxBuffers[iVar1] == (IDirectSoundBuffer *)0x0)) ||
     (g_DirectSound3DBufferInterfaces[iVar1] == (IDirectSound3DBuffer *)0x0)) {
    g_CurrentFilename = "..\\sound\\snddx.cpp";
    g_CurrentLineNumber = 1000;
    core_main_c_displayErrorAndQuit_FUN_00506f10("DirectSoundDevice::startSfx - invalid handle: %d",iVar1);
  }
  iVar2 = (*((this_ptr->base).vtable)->setSfxPos)(&this_ptr->base,slot,-1);
  iVar3 = 0;
  if (iVar2 != 0) {
    dwFlags = 0;
    if (slot->sample == (CSfxSample *)0x0) {
      g_CurrentFilename = "..\\sound\\snddx.cpp";
      g_CurrentLineNumber = 1010;
      core_main_c_displayErrorAndQuit_FUN_00506f10("DirectSoundDevice::startSfx - no sample??");
    }
    if ((1 < slot->sample->loop_marker_count) || (0 < slot->sample->loop_destinations[0])) {
      g_CurrentFilename = "..\\sound\\snddx.cpp";
      g_CurrentLineNumber = 1012;
      core_main_c_displayErrorAndQuit_FUN_00506f10("DirectSoundDevice::startSfx - exotic jump sequences not allowed for hardware mixed sounds");
    }
    if ((slot->sample->loop_marker_count == 1) && (-1 < slot->sample->loop_destinations[0])) {
      dwFlags = 1;
    }
    if (slot->sample->streaming_buffer_size != (slot->sample->sample_info).sample_count) {
      dwFlags = 1;
    }
    error_code = (*g_DirectSoundHardwareSfxBuffers[iVar1]->vtable->Play)
                           (g_DirectSoundHardwareSfxBuffers[iVar1],0,0,dwFlags);
    if (error_code != 0) {
      pcVar4 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(error_code);
      _sprintf(acStack_198,"DirectSux: Unable to %s.  (%s)","Play hardware sfx secondary buffer",
                 pcVar4);
      sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_198);
      return 0;
    }
    iVar3 = 1;
  }
  return iVar3;
}
