// Name: sound_sndmain.cpp_getSfxPlaybackPosition_FUN_00550c30
// Address: 00550c30
// Address Range: [[00550c30, 00550ce8]]
// Convention: __cdecl
// Signature: double __cdecl sound_sndmain_cpp_getSfxPlaybackPosition_FUN_00550c30(uint sfx_handle,uint output_format)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __cdecl sound_sndmain_cpp_getSfxPlaybackPosition_FUN_00550c30(uint sfx_handle,uint output_format)

{
  CSfxSlot *this_ptr;
  int iVar1;
  double dVar2;
  uint local_28;
  uint local_24;
  uint local_20;
  uint uStack_1c;
  
  this_ptr = sound_sndmain_cpp_FUN_0054d3a0(sfx_handle,1);
  if (this_ptr == (CSfxSlot *)0x0) {
    local_24 = 0xbff00000;
    local_28 = 0;
  }
  else {
    if ((*(int *)&this_ptr->field_0x60 != 0) && (_DAT_02648e80 != 0)) {
      iVar1 = sound_sndmain_cpp_CSfxSlot_pollHwPlaybackPos_FUN_0054f930(this_ptr);
      if (iVar1 == 0) {
        sound_sndmain_cpp_FUN_00551440();
        return -1.0;
      }
    }
    dVar2 = sound_sndmain_cpp_CSampleInfo_cvtPlaybackPos_FUN_0054fdc0
                      (*(CSampleInfo **)&this_ptr->field_0x68,*(double *)&this_ptr->field_0x50,
                       *(uint *)&this_ptr->field_0x58,output_format);
    sound_sndmain_cpp_FUN_00551440();
    local_20 = SUB84(__BITCAST_UINT64(dVar2),0);
    local_28 = local_20;
    uStack_1c = (uint)((ulonglong)dVar2 >> 0x20);
    local_24 = uStack_1c;
  }
  return __BITCAST_DOUBLE(CONCAT44(local_24,local_28));
}
