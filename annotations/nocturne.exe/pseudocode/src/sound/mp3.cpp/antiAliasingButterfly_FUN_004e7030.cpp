// Name: sound_mp3.cpp_antiAliasingButterfly_FUN_004e7030
// Address: 004e7030
// Address Range: [[004e7030, 004e7204]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_antiAliasingButterfly_FUN_004e7030(float *input_samples,float *output_samples,SMpegLayer3GranuleInfo *granule,SMpegFrameHeader *header)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_antiAliasingButterfly_FUN_004e7030(float *input_samples,float *output_samples,SMpegLayer3GranuleInfo *granule,SMpegFrameHeader *header)

{
  double *pdVar1;
  double *pdVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  float *pfVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  float *pfVar13;
  uint local_48;
  uint uStack_44;
  float *local_30;
  float *local_2c;
  float *local_28;
  float *local_24;
  float *local_20;
  int local_1c;
  int local_14;
  
  if (DAT_005bbbfc != 0) {
    iVar12 = 0;
    do {
      dVar6 = 1.0 / SQRT(*(double *)((int)&DAT_005bbc00 + iVar12) *
                         *(double *)((int)&DAT_005bbc00 + iVar12) + 1.0);
      dVar5 = *(double *)((int)&DAT_005bbc00 + iVar12);
      iVar8 = iVar12 + 8;
      local_48 = SUB84(__BITCAST_UINT64(dVar6),0);
      *(uint *)(iVar12 + 0x1cd6fe8) = local_48;
      uStack_44 = (uint)((ulonglong)dVar6 >> 0x20);
      *(double *)(iVar12 + 0x1cd6fa8) = dVar5 * dVar6;
      *(uint *)(iVar12 + 0x1cd6fec) = uStack_44;
      iVar12 = iVar8;
    } while (iVar8 != 0x40);
    DAT_005bbbfc = 0;
  }
  iVar12 = 0;
  local_24 = output_samples;
  pfVar10 = input_samples;
  do {
    pfVar10 = pfVar10 + 0x12;
    pfVar7 = input_samples + iVar12 * 0x12;
    pfVar9 = local_24;
    do {
      fVar3 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      *pfVar9 = fVar3;
      pfVar9 = pfVar9 + 1;
    } while (pfVar7 != pfVar10);
    iVar12 = iVar12 + 1;
    local_24 = local_24 + 0x12;
  } while (iVar12 < 0x20);
  if (((granule->window_switching_flag == 0) || (granule->block_type != 2)) ||
     (granule->mixed_block_flag != 0)) {
    if (((granule->window_switching_flag == 0) || (granule->mixed_block_flag == 0)) ||
       (granule->block_type != 2)) {
      local_14 = 0x1f;
    }
    else {
      local_14 = 1;
    }
    local_1c = 0;
    if (local_14 != 0) {
      local_2c = output_samples + 0x1a;
      local_28 = output_samples;
      local_30 = input_samples;
      do {
        local_20 = input_samples + 0x12;
        pfVar13 = local_28 + 0x11;
        pfVar7 = local_30 + 0x11;
        iVar12 = 0;
        pfVar10 = output_samples + (local_1c + 1) * 0x12;
        pfVar9 = local_20;
        do {
          fVar3 = *pfVar7;
          fVar4 = *pfVar9;
          *pfVar13 = fVar3 * (float)*(double *)(iVar12 + 0x1cd6fe8) -
                     fVar4 * (float)*(double *)(iVar12 + 0x1cd6fa8);
          pdVar1 = (double *)(iVar12 + 0x1cd6fe8);
          pdVar2 = (double *)(iVar12 + 0x1cd6fa8);
          pfVar11 = pfVar10 + 1;
          pfVar13 = pfVar13 + -1;
          iVar12 = iVar12 + 8;
          pfVar9 = pfVar9 + 1;
          pfVar7 = pfVar7 + -1;
          *pfVar10 = fVar3 * (float)*pdVar2 + fVar4 * (float)*pdVar1;
          pfVar10 = pfVar11;
        } while (pfVar11 != local_2c);
        local_2c = local_2c + 0x12;
        local_28 = local_28 + 0x12;
        local_30 = local_30 + 0x12;
        local_1c = local_1c + 1;
        input_samples = local_20;
      } while (local_1c < local_14);
    }
  }
  return;
}
