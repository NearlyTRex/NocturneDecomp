// Name: sound_mp3.cpp_applyScalefactorsToSubbands_FUN_004e3e70
// Address: 004e3e70
// Address Range: [[004e3e70, 004e3f1d]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_applyScalefactorsToSubbands_FUN_004e3e70(float *spectral_samples,int *scalefactor_band_indices,SMpegFrame *frame_info,int channel_or_granule_index)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_applyScalefactorsToSubbands_FUN_004e3e70(float *spectral_samples,int *scalefactor_band_indices,SMpegFrame *frame_info,int channel_or_granule_index)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  iVar1 = frame_info->channel_count;
  iVar2 = frame_info->sblimit;
  if (0 < iVar2) {
    iVar7 = 0;
    do {
      iVar5 = 0;
      if (0 < iVar1) {
        piVar6 = (int *)(channel_or_granule_index * 0x80 + iVar7 + (int)scalefactor_band_indices);
        pfVar4 = (float *)((int)spectral_samples + iVar7);
        do {
          *pfVar4 = *pfVar4 * (float)*(double *)(&DAT_005bbdf0 + *piVar6 * 8);
          pfVar4[0x20] = pfVar4[0x20] * (float)*(double *)(&DAT_005bbdf0 + *piVar6 * 8);
          iVar3 = *piVar6;
          piVar6 = piVar6 + 0x60;
          iVar5 = iVar5 + 1;
          pfVar4[0x40] = pfVar4[0x40] * (float)*(double *)(&DAT_005bbdf0 + iVar3 * 8);
          pfVar4 = pfVar4 + 0x60;
        } while (iVar5 < iVar1);
      }
      iVar7 = iVar7 + 4;
    } while (iVar7 < iVar2 << 2);
  }
  return;
}
