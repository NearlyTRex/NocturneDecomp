// Name: sound_sndmain.cpp_CSfxSlot_pollHwPlaybackPos_FUN_005a80e0
// Address: 005a80e0
// Address Range: [[005a80e0, 005a8167]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_CSfxSlot_pollHwPlaybackPos_FUN_005a80e0(CSfxSlot * this_ptr)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_CSfxSlot_pollHwPlaybackPos_FUN_005a80e0(CSfxSlot *this_ptr)

{
  double *pdVar1;
  uint extraout_EDX;
  CSfxSlot *in_stack_ffffffe0;
  
  if (((this_ptr->hardware_buffer_handle != 0) && (g_CSoundDevicePtr != (CSoundDevice *)0x0)) &&
     (this_ptr->sample != (CSfxSample *)0x0)) {
    pdVar1 = (*g_CSoundDevicePtr->vtable->getSfxPlaybackPos)
                       ((double *)g_CSoundDevicePtr,(CSoundDevice *)this_ptr,in_stack_ffffffe0);
    if ((double)CONCAT44(extraout_EDX,pdVar1) < 0.0) {
      sound_sndmain_cpp_logSoundError_FUN_005adba0
                ("Error polling hw playback pos %s\n",this_ptr->sample);
      return 0;
    }
    sound_sndmain_cpp_CSfxSlot_updatePlaybackPos_FUN_005a8170
              (this_ptr,(double)CONCAT44(extraout_EDX,pdVar1));
    return 1;
  }
  return 0;
}
