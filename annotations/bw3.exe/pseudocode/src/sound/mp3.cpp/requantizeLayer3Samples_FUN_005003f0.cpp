// Name: sound_mp3.cpp_requantizeLayer3Samples_FUN_005003f0
// Address: 005003f0
// Address Range: [[005003f0, 0050089c]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_requantizeLayer3Samples_FUN_005003f0(SMpegSubbandQuantizedSamples *quantized_samples,SMpegSubbandSamples *output_samples,int *scalefactor_data,SMpegLayer3GranuleInfo *granule,int channel_index,SMpegFrame *frame)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_mp3_cpp_requantizeLayer3Samples_FUN_005003f0(SMpegSubbandQuantizedSamples *quantized_samples,SMpegSubbandSamples *output_samples,int *scalefactor_data,SMpegLayer3GranuleInfo *granule,int channel_index,SMpegFrame *frame)

{
  float10 fVar1;
  int iVar2;
  float *pfVar3;
  SMpegLayer3GranuleInfo *extraout_ECX;
  SMpegLayer3GranuleInfo *extraout_ECX_00;
  SMpegLayer3GranuleInfo *extraout_ECX_01;
  int iVar4;
  int extraout_EDX;
  int extraout_EDX_00;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  int *local_70;
  int local_6c;
  int local_68;
  float *local_64;
  int local_44;
  float *local_3c;
  int local_38;
  float *local_34;
  int *local_30;
  int local_2c;
  int local_28;
  int local_20;
  int local_1c;
  float *local_18;
  
  iVar7 = 0;
  iVar8 = frame->header->sampling_rate_index + frame->header->mpeg_version * 3;
  if ((granule->window_switching_flag == 0) || (granule->block_type != 2)) {
    local_1c = *(int *)(&DAT_0060166c + iVar8 * 0x94);
  }
  else {
    iVar4 = iVar8 * 0x94;
    if (granule->mixed_block_flag == 0) {
      local_1c = *(int *)(&DAT_006016c8 + iVar4) * 3;
      local_28 = *(int *)(&DAT_006016c8 + iVar4);
      local_2c = 0;
    }
    else {
      local_1c = *(int *)(&DAT_0060166c + iVar4);
    }
  }
  if (_DAT_01d90414 == 0) {
    iVar4 = 0;
    iVar6 = 0;
    do {
      fVar10 = (float10)iVar4;
      pow();
      iVar4 = extraout_EDX + 1;
      *(double *)(iVar6 + 0x1d90418) = (double)fVar10;
      iVar6 = iVar6 + 8;
    } while (iVar4 < 200);
    iVar6 = 0;
    fVar9 = (float10)_DAT_005ca27f;
    iVar4 = 0;
    fVar10 = (float10)_DAT_005ca28f;
    do {
      fVar1 = (float10)-iVar6 * fVar9;
      fVar11 = fVar9;
      pow();
      fVar9 = fVar1;
      iVar6 = extraout_EDX_00 + 1;
      *(double *)(iVar4 + 0x1d90a58) = (double)fVar10;
      iVar4 = iVar4 + 8;
      fVar10 = fVar11;
    } while (iVar6 < 200);
    _DAT_01d90414 = 1;
    granule = extraout_ECX;
  }
  local_44 = 0;
  iVar8 = iVar8 * 0x94;
  local_64 = (float *)output_samples;
  local_70 = (int *)quantized_samples;
  local_6c = 0;
  local_68 = 0;
  do {
    local_20 = local_6c;
    local_38 = local_6c;
    local_3c = local_64;
    local_34 = local_64;
    local_18 = local_64;
    local_30 = local_70;
    iVar4 = 0;
    do {
      if (local_20 == local_1c) {
        if ((granule->window_switching_flag == 0) || (granule->block_type != 2)) {
          iVar7 = iVar7 + 1;
          local_1c = *(int *)(&DAT_0060166c + iVar7 * 4 + iVar8);
        }
        else {
          iVar7 = iVar7 + 1;
          iVar6 = iVar7 * 4 + iVar8;
          if (granule->mixed_block_flag == 0) {
LAB_005006f0:
            local_1c = *(int *)(&DAT_006016c8 + iVar6);
            iVar2 = *(int *)(iVar6 + 0x6016c4);
            local_28 = *(int *)(&DAT_006016c8 + iVar6) - iVar2;
          }
          else {
            if (local_20 != *(int *)(&DAT_00601688 + iVar8)) {
              if (local_20 < *(int *)(&DAT_00601688 + iVar8)) {
                local_1c = *(int *)(&DAT_0060166c + iVar6);
                goto LAB_00500580;
              }
              goto LAB_005006f0;
            }
            local_1c = *(int *)(&DAT_006016d4 + iVar8);
            iVar2 = *(int *)(&DAT_006016d0 + iVar8);
            local_28 = *(int *)(&DAT_006016d4 + iVar8) - iVar2;
            iVar7 = 3;
          }
          local_1c = local_1c * 3;
          local_2c = iVar2 * 3;
        }
      }
LAB_00500580:
      if (*(int *)((int)quantized_samples->samples[0] + iVar4 + local_68) == 0) {
        *(uint *)((int)output_samples->samples[0] + iVar4 + local_68) = 0;
      }
      else {
        iVar6 = granule->global_gain + -0xd2;
        if ((granule->window_switching_flag == 0) ||
           (((granule->block_type != 2 || (granule->mixed_block_flag != 0)) &&
            ((granule->block_type != 2 || ((granule->mixed_block_flag == 0 || (local_44 < 2))))))))
        {
          iVar2 = (granule->scalefac_scale + 1) * -2 *
                  (scalefactor_data[channel_index * 0x3e + iVar7] +
                  granule->preflag * *(int *)(iVar7 * 4 + 0x601114));
        }
        else {
          iVar2 = (local_38 - local_2c) / local_28;
          iVar6 = iVar6 + granule->subblock_gain[iVar2] * -8;
          iVar2 = (granule->scalefac_scale + 1) * -2 *
                  scalefactor_data[channel_index * 0x3e + iVar2 * 0xd + iVar7 + 0x17];
        }
        iVar6 = iVar6 + iVar2;
        if ((iVar6 < 1) && (-200 < iVar6)) {
          fVar10 = (float10)*(double *)(iVar6 * -8 + 0x1d90a58);
          pfVar3 = local_3c;
        }
        else {
          fVar10 = (float10)_DAT_005ca28f;
          pow();
          pfVar3 = local_34;
          granule = extraout_ECX_00;
        }
        *pfVar3 = (float)fVar10;
        uVar5 = *local_30 >> 0x1f;
        iVar6 = (*local_30 ^ uVar5) - uVar5;
        if (iVar6 < 200) {
          *local_18 = *local_18 * (float)*(double *)(iVar6 * 8 + 0x1d90418);
        }
        else {
          fVar10 = (float10)iVar6;
          pow();
          *local_18 = (float)(fVar10 * (float10)*local_18);
          granule = extraout_ECX_01;
        }
        if (*(int *)((int)quantized_samples->samples[0] + iVar4 + local_68) < 0) {
          *(float *)((int)output_samples->samples[0] + iVar4 + local_68) =
               -*(float *)((int)output_samples->samples[0] + iVar4 + local_68);
        }
      }
      iVar4 = iVar4 + 4;
      local_20 = local_20 + 1;
      local_38 = local_38 + 1;
      local_3c = local_3c + 1;
      local_34 = local_34 + 1;
      local_18 = local_18 + 1;
      local_30 = local_30 + 1;
    } while (iVar4 != 0x48);
    local_6c = local_6c + 0x12;
    local_68 = local_68 + 0x48;
    local_64 = local_64 + 0x12;
    local_70 = local_70 + 0x12;
    local_44 = local_44 + 1;
    if (0x1f < local_44) {
      return;
    }
  } while( true );
}
