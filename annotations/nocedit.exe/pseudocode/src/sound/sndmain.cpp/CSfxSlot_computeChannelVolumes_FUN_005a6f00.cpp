// Name: sound_sndmain.cpp_CSfxSlot_computeChannelVolumes_FUN_005a6f00
// Address: 005a6f00
// Address Range: [[005a6f00, 005a7067]]
// Convention: __cdecl
// Signature: float sound_sndmain.cpp_CSfxSlot_computeChannelVolumes_FUN_005a6f00(CSfxSlot * this_ptr)

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
  float local_28;
  float local_20;
  float local_18;
  
  if (g_SoundLockCount < 1) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0x924;
    core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSlot::kill - must be locked!");
  }
  fVar4 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90((this_ptr->options).channel_index);
  fVar3 = (fVar4 * (this_ptr->options).current_volume) / local_20;
  bVar1 = (byte)(this_ptr->options).flags;
  fVar4 = (float)CONCAT22 /* combine 2-byte values */((short)((uint)fVar4 >> 0x10),CONCAT11 /* combine 2-byte values */(bVar1,SUB41 /* extract 2-byte value */(fVar4,0)));
  if ((bVar1 & 1) == 0) {
    iVar6 = 0;
    pCVar7 = this_ptr;
    if (0 < g_AudioChannelCount) {
      do {
        local_28 = pCVar7->distance_to_speakers[0];
        fVar4 = this_ptr->min_distance;
        fVar2 = this_ptr->max_distance;
        fVar5 = (float)((uint)CONCAT21 /* combine 2-byte values */((short)((uint)fVar2 >> 0x10),local_28 < fVar4) << 8);
        if (local_28 < fVar4) {
          fVar5 = fVar4;
          local_28 = fVar4;
        }
        fVar4 = (float)((uint)fVar5 & 0xffff0000);
        if (fVar2 < local_28) {
          fVar4 = fVar2;
          local_28 = fVar2;
        }
        fVar2 = this_ptr->reference_distance * (float)0.050000000000000003;
        if (local_28 < fVar2 || (local_28 == fVar2) != 0) {
          local_18 = 20.0;
        }
        else {
          local_18 = this_ptr->reference_distance / local_28;
        }
        iVar6 = iVar6 + 1;
        pCVar7->channel_volumes[0] = fVar3 * local_18;
        fVar4 = (float)CONCAT22 /* combine 2-byte values */((short)((uint)fVar4 >> 0x10),
                                (ushort)(local_28 < fVar2) << 8 |
                                (ushort)(NAN(local_28) || NAN(fVar2)) << 10 |
                                (ushort)(local_28 == fVar2) << 0xe);
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
