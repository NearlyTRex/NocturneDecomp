// Name: sound_mp3.cpp_reorderShortBlockSamples_FUN_00532200
// Address: 00532200
// MANUAL RECONSTRUCTION
// Address Range: [[00532200, 0053253d]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_reorderShortBlockSamples_FUN_00532200(SMpegSubbandSamples *input_samples,SMpegSubbandSamples *output_samples,SMpegLayer3GranuleInfo *granule,SMpegFrame *frame)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_reorderShortBlockSamples_FUN_00532200(SMpegSubbandSamples *input_samples,SMpegSubbandSamples *output_samples,SMpegLayer3GranuleInfo *granule,SMpegFrame *frame)

{
  int iVar4;
  int iVar5;
  int iVar3;
  int iVar8;
  int iVar14;
  int iVar7;
  int iVar9;
  int iVar10;
  int iVar16;
  int iVar11;
  int iVar12;
  int iVar18;
  int iVar13;
  int iVar19;
  int sfb;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;

  iVar7 = frame->header->sampling_rate_index + frame->header->mpeg_version * 3;
  memset(output_samples,0,sizeof(*output_samples));
  if ((granule->window_switching_flag == 0) || (granule->block_type != 2)) {
    memcpy(output_samples,input_samples,sizeof(*output_samples));
  }
  else if (granule->mixed_block_flag == 0) {
    for (sfb = 0; sfb < 13; sfb = sfb + 1) {
      iVar18 = (sfb == 0) ? 0 : g_Layer3BandIndex[iVar7].s[sfb];
      local_38 = g_Layer3BandIndex[iVar7].s[sfb + 1] - iVar18;
      local_24 = 0;
      local_2c = iVar18 * 3;
      do {
        if (0 < local_38) {
          iVar3 = local_24 * local_38 + iVar18 * 3;
          iVar16 = local_38 + iVar3;
          iVar19 = local_2c;
          do {
            iVar8 = iVar3 / 0x12;
            iVar11 = iVar3 % 0x12;
            iVar14 = iVar19 / 0x12;
            iVar12 = iVar19 % 0x12;
            iVar3 = iVar3 + 1;
            iVar19 = iVar19 + 3;
            output_samples->samples[iVar14][iVar12] = input_samples->samples[iVar8][iVar11];
          } while (iVar3 < iVar16);
        }
        local_24 = local_24 + 1;
        local_2c = local_2c + 1;
      } while (local_24 < 3);
    }
  }
  else {
    memcpy(output_samples,input_samples,2 * sizeof(output_samples->samples[0]));
    for (sfb = 3; sfb < 13; sfb = sfb + 1) {
      iVar18 = g_Layer3BandIndex[iVar7].s[sfb];
      local_34 = g_Layer3BandIndex[iVar7].s[sfb + 1] - iVar18;
      local_28 = 0;
      local_30 = iVar18 * 3;
      do {
        if (0 < local_34) {
          iVar4 = local_28 * local_34 + iVar18 * 3;
          iVar9 = local_34 + iVar4;
          iVar13 = local_30;
          do {
            iVar5 = iVar4 / 0x12;
            iVar10 = iVar4 % 0x12;
            iVar4 = iVar4 + 1;
            output_samples->samples[iVar13 / 0x12][iVar13 % 0x12] =
                 input_samples->samples[iVar5][iVar10];
            iVar13 = iVar13 + 3;
          } while (iVar4 < iVar9);
        }
        local_28 = local_28 + 1;
        local_30 = local_30 + 1;
      } while (local_28 < 3);
    }
  }
  return;
}
