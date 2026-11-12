// Name: sound_sndmain.cpp_CSfxSlot_computeChannelVolumes_FUN_00554250
// Address: 00554250
// Address Range: [[00554250, 00554386]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSlot_computeChannelVolumes_FUN_00554250(CSfxSlot *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_CSfxSlot_computeChannelVolumes_FUN_00554250(CSfxSlot *this_ptr)

{
  float fVar1;
  int iVar2;
  CSfxSlot *pCVar3;
  float local_20;
  float local_14;
  
  if (_DAT_02cf341c < 1) {
    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
    _DAT_01d71de4 = 0xa9a;
    core_main_c_FUN_004e4330("SfxSlot::kill - must be locked!");
  }
  fVar1 = sound_sndmain_cpp_getSfxChannelVol_FUN_00556d20((this_ptr->options).channel_index);
  fVar1 = fVar1 * (this_ptr->options).current_volume;
  if (((this_ptr->options).flags & 1) == 0) {
    iVar2 = 0;
    pCVar3 = this_ptr;
    if (0 < DAT_0060422c) {
      do {
        local_14 = pCVar3->distance_to_speakers[0];
        if (pCVar3->distance_to_speakers[0] < this_ptr->min_distance) {
          local_14 = this_ptr->min_distance;
        }
        if (this_ptr->max_distance < local_14) {
          local_14 = this_ptr->max_distance;
        }
        if (this_ptr->reference_distance * _DAT_005d3086 < local_14) {
          local_20 = this_ptr->reference_distance / local_14;
        }
        else {
          local_20 = 20.0;
        }
        iVar2 = iVar2 + 1;
        pCVar3->channel_volumes[0] = fVar1 * local_20;
        pCVar3 = (CSfxSlot *)&(pCVar3->options).position;
      } while (iVar2 < DAT_0060422c);
    }
  }
  else {
    iVar2 = 0;
    if (0 < DAT_0060422c) {
      do {
        iVar2 = iVar2 + 1;
        this_ptr->channel_volumes[0] = fVar1;
        this_ptr = (CSfxSlot *)&(this_ptr->options).position;
      } while (iVar2 < DAT_0060422c);
    }
  }
  return;
}
