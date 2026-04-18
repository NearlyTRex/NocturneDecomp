// Name: sound_sndmain.cpp_getSfxPlaybackPosition_FUN_005a9720
// Address: 005a9720
// MANUAL RECONSTRUCTION
// Address Range: [[005a9720, 005a97d8]]
// Convention: __cdecl
// Signature: double __cdecl sound_sndmain_cpp_getSfxPlaybackPosition_FUN_005a9720(uint sfx_handle,uint output_format)

#include "nocturne.h"

double __cdecl sound_sndmain_cpp_getSfxPlaybackPosition_FUN_005a9720(uint sfx_handle,uint output_format)

{
  CSfxSlot *this_ptr;
  int iVar1;
  double dVar2;

  this_ptr = sound_sndmain_cpp_getSfxSlotFromHandle_FUN_005a5d00(sfx_handle,1);
  if (this_ptr == (CSfxSlot *)0x0) {
    return -1.0;
  }
  if ((this_ptr->hardware_buffer_handle != 0) && (g_CSoundDevicePtr != (CSoundDevice *)0x0)) {
    iVar1 = sound_sndmain_cpp_CSfxSlot_pollHwPlaybackPos_FUN_005a80e0(this_ptr);
    if (iVar1 == 0) {
      sound_sndmain_cpp_unlockSound_FUN_005abdc0();
      return -1.0;
    }
  }
  dVar2 = sound_sndmain_cpp_CSampleInfo_cvtPlaybackPos_FUN_005a8580
                    (&this_ptr->sample->sample_info,(this_ptr->options).trigger_time,
                     (this_ptr->options).trigger_id,output_format);
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  return dVar2;
}
