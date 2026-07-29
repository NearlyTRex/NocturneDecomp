// Name: sound_sndmain.cpp_getSfxPlaybackPosition_FUN_00526d10
// Address: 00526d10
// Address Range: [[00526d10, 00526dc8]]
// Convention: __cdecl
// Signature: double __cdecl sound_sndmain_cpp_getSfxPlaybackPosition_FUN_00526d10(uint sfx_handle,uint output_format)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __cdecl sound_sndmain_cpp_getSfxPlaybackPosition_FUN_00526d10(uint sfx_handle,uint output_format)

{
  CSfxSlot *this_ptr;
  int iVar1;
  double dVar2;
  uint local_28;
  uint local_24;
  uint local_20;
  uint uStack_1c;
  
  this_ptr = (CSfxSlot *)sound_sndmain_cpp_getSfxSlotFromHandle_FUN_005234b0(sfx_handle,1);
  if (this_ptr == (CSfxSlot *)0x0) {
    local_24 = 0xbff00000;
    local_28 = 0;
  }
  else {
    if (((this_ptr->options).dead != 0) && (_DAT_02dc8318 != 0)) {
      iVar1 = sound_sndmain_cpp_CSfxSlot_pollHwPlaybackPos_FUN_005257e0(this_ptr);
      if (iVar1 == 0) {
        sound_sndmain_cpp_unlockSound_FUN_00528890();
        return -1.0;
      }
    }
    dVar2 = sound_sndmain_cpp_CSampleInfo_cvtPlaybackPos_FUN_00525c70
                      ((CSampleInfo *)this_ptr->playback_state,(this_ptr->options).trigger_time,
                       (this_ptr->options).trigger_id,output_format);
    sound_sndmain_cpp_unlockSound_FUN_00528890();
    local_20 = SUB84(__BITCAST_UINT64(dVar2),0);
    local_28 = local_20;
    uStack_1c = (uint)((ulonglong)dVar2 >> 0x20);
    local_24 = uStack_1c;
  }
  return __BITCAST_DOUBLE(CONCAT44(local_24,local_28));
}
