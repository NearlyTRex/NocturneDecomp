// Name: sound_sndmain.cpp_CSfxSlot_pollHwPlaybackPos_FUN_005554a0
// Address: 005554a0
// Address Range: [[005554a0, 00555527]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_CSfxSlot_pollHwPlaybackPos_FUN_005554a0(CSfxSlot *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_CSfxSlot_pollHwPlaybackPos_FUN_005554a0(CSfxSlot *this_ptr)

{
  double hardware_playback_pos;
  
  if (((*(int *)&this_ptr->field_0x60 != 0) && (_DAT_02cf3280 != (int *)0x0)) &&
     (*(int *)&this_ptr->field_0x68 != 0)) {
    hardware_playback_pos = (double)(**(code **)(*_DAT_02cf3280 + 0x48))(_DAT_02cf3280,this_ptr);
    if (hardware_playback_pos < 0.0) {
      sound_sndmain_cpp_FUN_0055a560
                ("Error polling hw playback pos %s\n",*(uint *)&this_ptr->field_0x68);
      return 0;
    }
    sound_sndmain_cpp_CSfxSlot_updatePlaybackPos_FUN_00555530(this_ptr,hardware_playback_pos);
    return 1;
  }
  return 0;
}
