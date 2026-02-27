// Name: sound_mp3.cpp_reorderShortBlockSamples_FUN_00532200
// Address: 00532200
// Address Range: [[00532200, 0053253d]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_reorderShortBlockSamples_FUN_00532200(SMpegSubbandSamples *input_samples,SMpegSubbandSamples *output_samples,SMpegFrame *frame_info,SMpegFrame *frame)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_reorderShortBlockSamples_FUN_00532200(SMpegSubbandSamples *input_samples,SMpegSubbandSamples *output_samples,SMpegFrame *frame_info,SMpegFrame *frame)

{
  float *pfVar1;
  float (*pafVar2) [18];
  float (*pafVar3) [18];
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  float (*local_5c) [18];
  float *local_58;
  float *local_54;
  int local_50;
  int local_4c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  iVar7 = frame->header->sampling_rate_index + frame->header->mpeg_version * 3;
  iVar6 = 0;
  pafVar3 = (float (*) [18])output_samples;
  do {
    pafVar3 = pafVar3 + 1;
    pafVar2 = output_samples->samples + iVar6;
    do {
      (*pafVar2)[0] = 0.0;
      pafVar2 = (float (*) [18])(*pafVar2 + 1);
    } while (pafVar2 != pafVar3);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x20);
  if ((frame_info->samples_per_granule == 0) || (frame_info->js_bound != 2)) {
    local_58 = (float *)output_samples;
    iVar6 = 0;
    pafVar3 = (float (*) [18])input_samples;
    do {
      pafVar3 = pafVar3 + 1;
      pafVar2 = input_samples->samples + iVar6;
      pfVar8 = local_58;
      do {
        pfVar1 = *pafVar2;
        pafVar2 = (float (*) [18])(*pafVar2 + 1);
        *pfVar8 = *pfVar1;
        pfVar8 = pfVar8 + 1;
      } while (pafVar2 != pafVar3);
      iVar6 = iVar6 + 1;
      local_58 = local_58 + 0x12;
    } while (iVar6 < 0x20);
  }
  else if (frame_info->sblimit == 0) {
    local_4c = iVar7 * 0x94;
    iVar6 = 0;
    local_38 = g_Layer3BandIndex[iVar7].s[1];
    iVar7 = local_4c + 0x34;
    do {
      local_24 = 0;
      local_2c = iVar6 * 3;
      do {
        if (0 < local_38) {
          iVar4 = local_24 * local_38 + iVar6 * 3;
          iVar9 = local_38 + iVar4;
          iVar13 = local_2c;
          do {
            iVar5 = iVar4 / 0x12;
            iVar11 = iVar4 % 0x12;
            iVar10 = iVar13 / 0x12;
            iVar12 = iVar13 % 0x12;
            iVar4 = iVar4 + 1;
            iVar13 = iVar13 + 3;
            output_samples->samples[iVar10][iVar12] = input_samples->samples[iVar5][iVar11];
          } while (iVar4 < iVar9);
        }
        local_24 = local_24 + 1;
        local_2c = local_2c + 1;
      } while (local_24 < 3);
      iVar6 = *(int *)((int)g_Layer3BandIndex[0].s + local_4c + 4);
      iVar13 = local_4c + 8;
      local_4c = local_4c + 4;
      local_38 = *(int *)((int)g_Layer3BandIndex[0].s + iVar13) - iVar6;
    } while (local_4c != iVar7);
  }
  else {
    local_54 = (float *)output_samples;
    iVar6 = 0;
    local_5c = (float (*) [18])input_samples;
    do {
      local_5c = local_5c + 1;
      pafVar3 = input_samples->samples + iVar6;
      pfVar8 = local_54;
      do {
        pfVar1 = *pafVar3;
        pafVar3 = (float (*) [18])(*pafVar3 + 1);
        *pfVar8 = *pfVar1;
        pfVar8 = pfVar8 + 1;
      } while (pafVar3 != local_5c);
      iVar6 = iVar6 + 1;
      local_54 = local_54 + 0x12;
    } while (iVar6 < 2);
    iVar6 = g_Layer3BandIndex[iVar7].s[3];
    local_34 = g_Layer3BandIndex[iVar7].s[4] - iVar6;
    local_50 = iVar7 * 0x94 + 0xc;
    do {
      local_28 = 0;
      local_30 = iVar6 * 3;
      do {
        if (0 < local_34) {
          iVar4 = local_28 * local_34 + iVar6 * 3;
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
      iVar6 = *(int *)((int)g_Layer3BandIndex[0].s + local_50 + 4);
      iVar13 = local_50 + 8;
      local_50 = local_50 + 4;
      local_34 = *(int *)((int)g_Layer3BandIndex[0].s + iVar13) - iVar6;
    } while (local_50 != iVar7 * 0x94 + 0x34);
  }
  return;
}
