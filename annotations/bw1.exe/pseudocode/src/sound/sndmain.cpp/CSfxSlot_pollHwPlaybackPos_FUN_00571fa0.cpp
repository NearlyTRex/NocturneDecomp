// Name: sound_sndmain.cpp_CSfxSlot_pollHwPlaybackPos_FUN_00571fa0
// Address: 00571fa0
// Address Range: [[00571fa0, 00572027]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_CSfxSlot_pollHwPlaybackPos_FUN_00571fa0(CSfxSlot *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_CSfxSlot_pollHwPlaybackPos_FUN_00571fa0(CSfxSlot *this_ptr)

{
  double hardware_playback_pos;
  
  if (((*(int *)&this_ptr->field_0x60 != 0) && (_DAT_02c80650 != (int *)0x0)) &&
     (*(int *)&this_ptr->field_0x68 != 0)) {
    hardware_playback_pos = (double)(**(code **)(*_DAT_02c80650 + 0x48))(_DAT_02c80650,this_ptr);
    if (hardware_playback_pos < 0.0) {
      sound_sndmain_cpp_FUN_005773f0
                ("Error polling hw playback pos %s\n",*(uint *)&this_ptr->field_0x68);
      return 0;
    }
    sound_sndmain_cpp_CSfxSlot_updatePlaybackPos_FUN_00572030(this_ptr,hardware_playback_pos);
    return 1;
  }
  return 0;
}
