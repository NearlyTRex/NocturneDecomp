// Name: sound_mp3.cpp_antiAliasingButterfly_FUN_005334b0
// Address: 005334b0
// Address Range: [[005334b0, 00533684]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_antiAliasingButterfly_FUN_005334b0(float *input_samples,float *output_samples,SMpegLayer3GranuleInfo *granule,SMpegFrameHeader *header)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_antiAliasingButterfly_FUN_005334b0(float *input_samples,float *output_samples,SMpegLayer3GranuleInfo *granule,SMpegFrameHeader *header)

{
  float fVar1;
  float *pfVar6;
  int iVar2;
  float *pfVar3;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  float *pfVar12;
  float *pfVar4;
  uint local_48;
  uint uStack_44;
  float *local_30;
  float *local_2c;
  float *local_28;
  float *local_24;
  float *local_20;
  int local_1c;
  int local_14;
  double *pdVar1;
  double *pdVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  
  if (g_Mp3AntiAliasInitialized != 0) {
    iVar2 = 0;
    do {
      dVar5 = 1.0 / SQRT(*(double *)((int)g_Mp3AntiAliasCSSource + iVar2) *
                         *(double *)((int)g_Mp3AntiAliasCSSource + iVar2) + 1.0);
      iVar7 = iVar2 + 8;
      local_48 = SUB84(__BITCAST_UINT64(dVar5),0);
      *(uint *)((int)g_Mp3AntiAliasCA + iVar2) = local_48;
      uStack_44 = (uint)((ulonglong)dVar5 >> 0x20);
      *(double *)((int)g_Mp3AntiAliasCS + iVar2) =
           *(double *)((int)g_Mp3AntiAliasCSSource + iVar2) * dVar5;
      *(uint *)((int)g_Mp3AntiAliasCA + iVar2 + 4) = uStack_44;
      iVar2 = iVar7;
    } while (iVar7 != 0x40);
    g_Mp3AntiAliasInitialized = 0;
  }
  iVar11 = 0;
  local_24 = output_samples;
  pfVar4 = input_samples;
  do {
    pfVar4 = pfVar4 + 0x12;
    pfVar6 = input_samples + iVar11 * 0x12;
    pfVar8 = local_24;
    do {
      pfVar8 = pfVar8 + 1;
      fVar3 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      *pfVar8 = fVar3;
      pfVar8 = pfVar8;
    } while (pfVar6 != pfVar4);
    iVar11 = iVar11 + 1;
    local_24 = local_24 + 0x12;
  } while (iVar11 < 0x20);
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
        pfVar12 = local_28 + 0x11;
        pfVar3 = local_30 + 0x11;
        pfVar9 = output_samples + (local_1c + 1) * 0x12;
        iVar2 = 0;
        pfVar4 = local_20;
        do {
          fVar1 = *pfVar3;
          fVar4 = *pfVar4;
          *pfVar12 = fVar1 * (float)*(double *)((int)g_Mp3AntiAliasCA + iVar2) -
                     fVar4 * (float)*(double *)((int)g_Mp3AntiAliasCS + iVar2);
          pdVar1 = (double *)((int)g_Mp3AntiAliasCA + iVar2);
          pdVar2 = (double *)((int)g_Mp3AntiAliasCS + iVar2);
          pfVar10 = pfVar9 + 1;
          pfVar12 = pfVar12 + -1;
          iVar2 = iVar2 + 8;
          pfVar4 = pfVar4 + 1;
          pfVar3 = pfVar3 + -1;
          *pfVar9 = fVar1 * (float)*pdVar2 + fVar4 * (float)*pdVar1;
          pfVar9 = pfVar10;
        } while (pfVar10 != local_2c);
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
