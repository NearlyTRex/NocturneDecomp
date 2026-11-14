// Name: sound_sndmain.cpp_CSfxSlot_computeChannelDelays_FUN_00554140
// Address: 00554140
// Address Range: [[00554140, 00554249]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSlot_computeChannelDelays_FUN_00554140(CSfxSlot *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_CSfxSlot_computeChannelDelays_FUN_00554140(CSfxSlot *this_ptr)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int extraout_ECX;
  int iVar4;
  CSfxSlot *pCVar5;
  int extraout_EDX;
  int iVar6;
  float10 fVar7;
  
  if (_DAT_02cf341c < 1) {
    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
    _DAT_01d71de4 = 0xa6b;
    core_main_c_FUN_004e4330("SfxSlot::kill - must be locked!");
  }
  iVar3 = DAT_0060422c;
  if (DAT_0060422c < 2) {
    this_ptr->channel_target_buffer_offsets[0] = 0;
  }
  else if (((this_ptr->options).flags & 1) == 0) {
    fVar1 = (1.0 / _DAT_005e4844) * DAT_00604240;
    fVar2 = (float)DAT_00604230;
    iVar4 = 99999;
    pCVar5 = this_ptr;
    if (0 < DAT_0060422c) {
      do {
        fVar7 = (float10)pCVar5->distance_to_speakers[0] * (float10)(fVar2 * fVar1);
        round();
        iVar6 = (int)ROUND(fVar7);
        *(int *)(extraout_EDX + 0xb0) = iVar6;
        if (iVar6 < iVar4) {
          iVar4 = iVar6;
        }
        pCVar5 = (CSfxSlot *)(extraout_EDX + 4);
      } while (extraout_ECX + 1 < iVar3);
    }
    iVar6 = 0;
    if (0 < iVar3) {
      do {
        iVar6 = iVar6 + 1;
        this_ptr->channel_target_buffer_offsets[0] =
             this_ptr->channel_target_buffer_offsets[0] - iVar4;
        this_ptr = (CSfxSlot *)&(this_ptr->options).position;
      } while (iVar6 < iVar3);
      DAT_0060422c = iVar3;
      return;
    }
  }
  else {
    iVar4 = 0;
    if (0 < DAT_0060422c) {
      do {
        iVar4 = iVar4 + 1;
        this_ptr->channel_target_buffer_offsets[0] = 0;
        this_ptr = (CSfxSlot *)&(this_ptr->options).position;
      } while (iVar4 < DAT_0060422c);
    }
  }
  DAT_0060422c = iVar3;
  return;
}
