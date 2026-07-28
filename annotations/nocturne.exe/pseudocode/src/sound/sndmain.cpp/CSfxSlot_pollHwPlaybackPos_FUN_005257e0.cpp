// Name: sound_sndmain.cpp_CSfxSlot_pollHwPlaybackPos_FUN_005257e0
// Address: 005257e0
// Address Range: [[005257e0, 00525867]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_CSfxSlot_pollHwPlaybackPos_FUN_005257e0(CSfxSlot *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_CSfxSlot_pollHwPlaybackPos_FUN_005257e0(CSfxSlot *this_ptr)

{
  double dVar1;
  
  if ((((this_ptr->options).dead != 0) && (_DAT_02dc8318 != (int *)0x0)) &&
     (this_ptr->playback_state != 0)) {
    dVar1 = (double)(**(code **)(*_DAT_02dc8318 + 0x44))(_DAT_02dc8318,this_ptr);
    if (dVar1 < 0.0) {
      sound_sndmain_cpp_FUN_00529980("Error polling hw playback pos %s\n",this_ptr->playback_state);
      return 0;
    }
    sound_sndmain_cpp_CSfxSlot_updatePlaybackPos_FUN_00525870(this_ptr,dVar1);
    return 1;
  }
  return 0;
}
