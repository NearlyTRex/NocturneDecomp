// Name: sound_sndmain.cpp_CSfxSlot_computeChannelDelays_FUN_00570c40
// Address: 00570c40
// Address Range: [[00570c40, 00570d49]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSlot_computeChannelDelays_FUN_00570c40(CSfxSlot *this_ptr)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_CSfxSlot_computeChannelDelays_FUN_00570c40(CSfxSlot *this_ptr)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  CSfxSlot *pCVar7;
  double dVar8;
  
  if (g_SoundLockCount < 1) {
    g_CHAR_PTR_01d1d400 = "..\\sound\\sndmain.cpp";
    g_INT_01d1d404 = 0xa69;
    core_main_c_displayErrorAndQuit_FUN_005030e0("SfxSlot::kill - must be locked!");
  }
  iVar4 = g_AudioChannelCount;
  if (g_AudioChannelCount < 2) {
    this_ptr->channel_target_buffer_offsets[0] = 0;
  }
  else if (((this_ptr->options).flags & 1) == 0) {
    fVar2 = (1.0 / 1116.4f) * g_FLOAT_00623304;
    fVar3 = (float)g_AudioSampleRate;
    iVar6 = 99999;
    iVar5 = 0;
    pCVar7 = this_ptr;
    if (0 < g_AudioChannelCount) {
      do {
        dVar8 = round
                          ((double)(pCVar7->distance_to_speakers[0] * fVar3 * fVar2));
        iVar1 = (int)ROUND(dVar8);
        pCVar7->channel_target_buffer_offsets[0] = iVar1;
        if (iVar1 < iVar6) {
          iVar6 = iVar1;
        }
        iVar5 = iVar5 + 1;
        pCVar7 = (CSfxSlot *)&(pCVar7->options).position;
      } while (iVar5 < iVar4);
    }
    iVar5 = 0;
    if (0 < iVar4) {
      do {
        iVar5 = iVar5 + 1;
        this_ptr->channel_target_buffer_offsets[0] =
             this_ptr->channel_target_buffer_offsets[0] - iVar6;
        this_ptr = (CSfxSlot *)&(this_ptr->options).position;
      } while (iVar5 < iVar4);
      g_AudioChannelCount = iVar4;
      return;
    }
  }
  else {
    iVar6 = 0;
    if (0 < g_AudioChannelCount) {
      do {
        iVar6 = iVar6 + 1;
        this_ptr->channel_target_buffer_offsets[0] = 0;
        this_ptr = (CSfxSlot *)&(this_ptr->options).position;
      } while (iVar6 < g_AudioChannelCount);
    }
  }
  g_AudioChannelCount = iVar4;
  return;
}
