// Name: sound_mp3.cpp_reorderShortBlockSamples_FUN_00532200
// Address: 00532200
// Address Range: [[00532200, 0053253d]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_reorderShortBlockSamples_FUN_00532200(SMpegSubbandSamples *input_samples,SMpegSubbandSamples *output_samples,SMpegFrame *frame_info,SMpegLayer3Granule **granule_array)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_reorderShortBlockSamples_FUN_00532200(SMpegSubbandSamples *input_samples,SMpegSubbandSamples *output_samples,SMpegFrame *frame_info,SMpegLayer3Granule **granule_array)

{
  int *piVar1;
  float *pfVar2;
  float (*pafVar3) [18];
  float (*pafVar4) [18];
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
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
  
  local_4c = *(int *)((*granule_array)->unk3 + 8) + (*granule_array)->unk1 * 3;
  iVar8 = 0;
  pafVar4 = (float (*) [18])output_samples;
  do {
    pafVar4 = pafVar4 + 1;
    pafVar3 = output_samples->samples + iVar8;
    do {
      (*pafVar3)[0] = 0.0;
      pafVar3 = (float (*) [18])(*pafVar3 + 1);
    } while (pafVar3 != pafVar4);
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0x20);
  if ((frame_info->samples_per_granule == 0) || (frame_info->js_bound != 2)) {
    local_58 = (float *)output_samples;
    iVar8 = 0;
    pafVar4 = (float (*) [18])input_samples;
    do {
      pafVar4 = pafVar4 + 1;
      pafVar3 = input_samples->samples + iVar8;
      pfVar9 = local_58;
      do {
        pfVar2 = *pafVar3;
        pafVar3 = (float (*) [18])(*pafVar3 + 1);
        *pfVar9 = *pfVar2;
        pfVar9 = pfVar9 + 1;
      } while (pafVar3 != pafVar4);
      iVar8 = iVar8 + 1;
      local_58 = local_58 + 0x12;
    } while (iVar8 < 0x20);
  }
  else if (frame_info->sblimit == 0) {
    local_4c = local_4c * 0x94;
    iVar8 = 0;
    local_38 = *(int *)(&DAT_0067e728 + local_4c);
    iVar14 = local_4c + 0x34;
    do {
      local_24 = 0;
      local_2c = iVar8 * 3;
      do {
        if (0 < local_38) {
          iVar10 = local_24 * local_38 + iVar8 * 3;
          iVar6 = local_38 + iVar10;
          iVar5 = local_2c;
          do {
            iVar11 = iVar10 / 0x12;
            iVar12 = iVar10 % 0x12;
            iVar7 = iVar5 / 0x12;
            iVar13 = iVar5 % 0x12;
            iVar10 = iVar10 + 1;
            iVar5 = iVar5 + 3;
            output_samples->samples[iVar7][iVar13] = input_samples->samples[iVar11][iVar12];
          } while (iVar10 < iVar6);
        }
        local_24 = local_24 + 1;
        local_2c = local_2c + 1;
      } while (local_24 < 3);
      iVar8 = *(int *)(&DAT_0067e728 + local_4c);
      piVar1 = (int *)(&DAT_0067e72c + local_4c);
      local_4c = local_4c + 4;
      local_38 = *piVar1 - iVar8;
    } while (local_4c != iVar14);
  }
  else {
    local_54 = (float *)output_samples;
    iVar8 = 0;
    local_5c = (float (*) [18])input_samples;
    do {
      local_5c = local_5c + 1;
      pafVar4 = input_samples->samples + iVar8;
      pfVar9 = local_54;
      do {
        pfVar2 = *pafVar4;
        pafVar4 = (float (*) [18])(*pafVar4 + 1);
        *pfVar9 = *pfVar2;
        pfVar9 = pfVar9 + 1;
      } while (pafVar4 != local_5c);
      iVar8 = iVar8 + 1;
      local_54 = local_54 + 0x12;
    } while (iVar8 < 2);
    local_4c = local_4c * 0x94;
    iVar8 = *(int *)(&DAT_0067e730 + local_4c);
    local_34 = *(int *)(&DAT_0067e734 + local_4c) - iVar8;
    local_50 = local_4c + 0xc;
    do {
      local_28 = 0;
      local_30 = iVar8 * 3;
      do {
        if (0 < local_34) {
          iVar5 = local_28 * local_34 + iVar8 * 3;
          iVar10 = local_34 + iVar5;
          iVar14 = local_30;
          do {
            iVar6 = iVar5 / 0x12;
            iVar11 = iVar5 % 0x12;
            iVar5 = iVar5 + 1;
            output_samples->samples[iVar14 / 0x12][iVar14 % 0x12] =
                 input_samples->samples[iVar6][iVar11];
            iVar14 = iVar14 + 3;
          } while (iVar5 < iVar10);
        }
        local_28 = local_28 + 1;
        local_30 = local_30 + 1;
      } while (local_28 < 3);
      iVar8 = *(int *)(&DAT_0067e728 + local_50);
      piVar1 = (int *)(&DAT_0067e72c + local_50);
      local_50 = local_50 + 4;
      local_34 = *piVar1 - iVar8;
    } while (local_50 != local_4c + 0x34);
  }
  return;
}
