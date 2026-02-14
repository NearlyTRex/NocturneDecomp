// Name: sound_mp3.cpp_antiAliasingButterfly_FUN_005334b0
// Address: 005334b0
// Address Range: [[005334b0, 00533684]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_antiAliasingButterfly_FUN_005334b0(float *input_samples,float *output_samples,SMpegFrame *frame_info,void *unused_param4)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_antiAliasingButterfly_FUN_005334b0(float *input_samples,float *output_samples,SMpegFrame *frame_info,void *unused_param4)

{
  double *pdVar1;
  double *pdVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  float *pfVar12;
  uint local_48;
  uint uStack_44;
  float *local_30;
  float *local_2c;
  float *local_28;
  float *local_24;
  float *local_20;
  int local_1c;
  int local_14;
  
  if (g_Mp3AntiAliasInitialized != 0) {
    iVar11 = 0;
    do {
      dVar5 = 1.0 / SQRT(*(double *)((int)g_Mp3AntiAliasCSSource + iVar11) *
                         *(double *)((int)g_Mp3AntiAliasCSSource + iVar11) + 1.0);
      iVar7 = iVar11 + 8;
      local_48 = SUB84(dVar5,0);
      *(uint *)((int)g_Mp3AntiAliasCA + iVar11) = local_48;
      uStack_44 = (uint)((ulonglong)dVar5 >> 0x20);
      *(double *)((int)g_Mp3AntiAliasCS + iVar11) =
           *(double *)((int)g_Mp3AntiAliasCSSource + iVar11) * dVar5;
      *(uint *)((int)g_Mp3AntiAliasCA + iVar11 + 4) = uStack_44;
      iVar11 = iVar7;
    } while (iVar7 != 0x40);
    g_Mp3AntiAliasInitialized = 0;
  }
  iVar11 = 0;
  local_24 = output_samples;
  pfVar9 = input_samples;
  do {
    pfVar9 = pfVar9 + 0x12;
    pfVar6 = input_samples + iVar11 * 0x12;
    pfVar8 = local_24;
    do {
      fVar3 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      *pfVar8 = fVar3;
      pfVar8 = pfVar8 + 1;
    } while (pfVar6 != pfVar9);
    iVar11 = iVar11 + 1;
    local_24 = local_24 + 0x12;
  } while (iVar11 < 0x20);
  if (((frame_info->samples_per_granule == 0) || (frame_info->js_bound != 2)) ||
     (frame_info->sblimit != 0)) {
    if (((frame_info->samples_per_granule == 0) || (frame_info->sblimit == 0)) ||
       (frame_info->js_bound != 2)) {
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
        pfVar6 = local_30 + 0x11;
        iVar11 = 0;
        pfVar9 = output_samples + (local_1c + 1) * 0x12;
        pfVar8 = local_20;
        do {
          fVar3 = *pfVar6;
          fVar4 = *pfVar8;
          *pfVar12 = fVar3 * (float)*(double *)((int)g_Mp3AntiAliasCA + iVar11) -
                     fVar4 * (float)*(double *)((int)g_Mp3AntiAliasCS + iVar11);
          pdVar1 = (double *)((int)g_Mp3AntiAliasCA + iVar11);
          pdVar2 = (double *)((int)g_Mp3AntiAliasCS + iVar11);
          pfVar10 = pfVar9 + 1;
          pfVar12 = pfVar12 + -1;
          iVar11 = iVar11 + 8;
          pfVar8 = pfVar8 + 1;
          pfVar6 = pfVar6 + -1;
          *pfVar9 = fVar3 * (float)*pdVar2 + fVar4 * (float)*pdVar1;
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
