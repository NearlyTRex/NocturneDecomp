// Name: sound_sndmain.cpp_CSfxSlot_computeChannelVolumes_FUN_005a6f00
// Address: 005a6f00
// Address Range: [[005a6f00, 005a7067]]
// Convention: __cdecl
// Signature: float __cdecl sound_sndmain_cpp_CSfxSlot_computeChannelVolumes_FUN_005a6f00(CSfxSlot *this_ptr)

#include "nocturne.h"

float __cdecl sound_sndmain_cpp_CSfxSlot_computeChannelVolumes_FUN_005a6f00(CSfxSlot *this_ptr)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  CSfxSlot *pCVar7;
  float local_30;
  float local_20;
  
  if (g_SoundLockCount < 1) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0x924;
    core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSlot::kill - must be locked!");
  }
  iVar6 = (this_ptr->sample->sample_info).bit_depth;
  fVar4 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90((this_ptr->options).channel_index);
  fVar3 = (fVar4 * (this_ptr->options).current_volume) / (float)(1 << ((char)iVar6 - 1U & 0x1f));
  bVar1 = (byte)(this_ptr->options).flags;
  fVar4 = (float)CONCAT22((short)((uint)fVar4 >> 0x10),CONCAT11(bVar1,SUB41(fVar4,0)));
  if ((bVar1 & 1) == 0) {
    iVar6 = 0;
    pCVar7 = this_ptr;
    if (0 < g_AudioChannelCount) {
      do {
        local_30 = pCVar7->distance_to_speakers[0];
        fVar4 = this_ptr->min_distance;
        fVar2 = this_ptr->max_distance;
        fVar5 = (float)((uint)CONCAT21((short)((uint)fVar2 >> 0x10),local_30 < fVar4) << 8);
        if (local_30 < fVar4) {
          fVar5 = fVar4;
          local_30 = fVar4;
        }
        fVar4 = (float)((uint)fVar5 & 0xffff0000);
        if (fVar2 < local_30) {
          fVar4 = fVar2;
          local_30 = fVar2;
        }
        fVar2 = this_ptr->reference_distance * (float)0.050000000000000003;
        if (local_30 < fVar2 || (local_30 == fVar2) != 0) {
          local_20 = 20.0;
        }
        else {
          local_20 = this_ptr->reference_distance / local_30;
        }
        iVar6 = iVar6 + 1;
        pCVar7->channel_volumes[0] = fVar3 * local_20;
        fVar4 = (float)CONCAT22((short)((uint)fVar4 >> 0x10),
                                (ushort)(local_30 < fVar2) << 8 |
                                (ushort)(NAN(local_30) || NAN(fVar2)) << 10 |
                                (ushort)(local_30 == fVar2) << 0xe);
        pCVar7 = (CSfxSlot *)&(pCVar7->options).position;
      } while (iVar6 < g_AudioChannelCount);
    }
  }
  else {
    iVar6 = 0;
    if (0 < g_AudioChannelCount) {
      do {
        iVar6 = iVar6 + 1;
        this_ptr->channel_volumes[0] = fVar3;
        fVar4 = fVar3;
        this_ptr = (CSfxSlot *)&(this_ptr->options).position;
      } while (iVar6 < g_AudioChannelCount);
    }
  }
  return fVar4;
}
