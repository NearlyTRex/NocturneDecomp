// Name: sound_sndmain.cpp_getSfxPlaybackPosition_FUN_00526d10
// Address: 00526d10
// Address Range: [[00526d10, 00526dc8]]
// Convention: unknown
// Signature: undefined8 sound_sndmain_cpp_getSfxPlaybackPosition_FUN_00526d10(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong sound_sndmain_cpp_getSfxPlaybackPosition_FUN_00526d10(uint param_1,uint param_2)

{
  CSfxSlot *this_ptr;
  int iVar1;
  ulonglong uVar2;
  
  this_ptr = (CSfxSlot *)sound_sndmain_cpp_getSfxSlotFromHandle_FUN_005234b0(param_1,1);
  if (this_ptr == (CSfxSlot *)0x0) {
    uVar2 = 0xbff0000000000000;
  }
  else {
    if (((this_ptr->options).dead != 0) && (_DAT_02dc8318 != 0)) {
      iVar1 = sound_sndmain_cpp_CSfxSlot_pollHwPlaybackPos_FUN_005257e0(this_ptr);
      if (iVar1 == 0) {
        sound_sndmain_cpp_unlockSound_FUN_00528890();
        return 0xbff0000000000000;
      }
    }
    uVar2 = sound_sndmain_cpp_CSampleInfo_cvtPlaybackPos_FUN_00525c70
                      (this_ptr->playback_state,*(uint *)&(this_ptr->options).trigger_time,
                       *(uint *)((int)&(this_ptr->options).trigger_time + 4),
                       (this_ptr->options).trigger_id,param_2);
    sound_sndmain_cpp_unlockSound_FUN_00528890();
  }
  return uVar2;
}
