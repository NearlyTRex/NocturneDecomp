// Name: sound_sndmain.cpp_CSfxSlot_pollHwPlaybackPos_FUN_00571fa0
// Address: 00571fa0
// Address Range: [[00571fa0, 00572027]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_CSfxSlot_pollHwPlaybackPos_FUN_00571fa0(CSfxSlot *this_ptr)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_CSfxSlot_pollHwPlaybackPos_FUN_00571fa0(CSfxSlot *this_ptr)

{
  double hardware_playback_pos;
  
  if (((this_ptr->hardware_buffer_handle != 0) &&
      (g_CSoundDevice_PTR_02c80650 != (CSoundDevice *)0x0)) &&
     (this_ptr->sample != (CSfxSample *)0x0)) {
    hardware_playback_pos =
         (*g_CSoundDevice_PTR_02c80650->vtable->getSfxPlaybackPos)
                   (g_CSoundDevice_PTR_02c80650,this_ptr);
    if (hardware_playback_pos < 0.0) {
      sound_sndmain_cpp_logSoundError_FUN_005773f0
                ("Error polling hw playback pos %s\n",this_ptr->sample);
      return 0;
    }
    sound_sndmain_cpp_CSfxSlot_updatePlaybackPos_FUN_00572030(this_ptr,hardware_playback_pos);
    return 1;
  }
  return 0;
}
