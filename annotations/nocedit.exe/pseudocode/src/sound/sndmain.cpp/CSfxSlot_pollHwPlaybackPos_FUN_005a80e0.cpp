// Name: sound_sndmain.cpp_CSfxSlot_pollHwPlaybackPos_FUN_005a80e0
// Address: 005a80e0
// Address Range: [[005a80e0, 005a8167]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_CSfxSlot_pollHwPlaybackPos_FUN_005a80e0(CSfxSlot *this_ptr)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_CSfxSlot_pollHwPlaybackPos_FUN_005a80e0(CSfxSlot *this_ptr)

{
  double hardware_playback_pos;
  
  if (((this_ptr->hardware_buffer_handle != 0) && (g_CSoundDevicePtr != (CSoundDevice *)0x0)) &&
     (this_ptr->sample != (CSfxSample *)0x0)) {
    hardware_playback_pos =
         (*g_CSoundDevicePtr->vtable->getSfxPlaybackPos)(g_CSoundDevicePtr,this_ptr);
    if (hardware_playback_pos < 0.0) {
      sound_sndmain_cpp_logSoundError_FUN_005adba0
                ("Error polling hw playback pos %s\n",this_ptr->sample);
      return 0;
    }
    sound_sndmain_cpp_CSfxSlot_updatePlaybackPos_FUN_005a8170(this_ptr,hardware_playback_pos);
    return 1;
  }
  return 0;
}
