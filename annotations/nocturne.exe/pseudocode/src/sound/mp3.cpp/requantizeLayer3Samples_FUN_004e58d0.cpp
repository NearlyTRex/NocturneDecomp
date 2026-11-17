// Name: sound_mp3.cpp_requantizeLayer3Samples_FUN_004e58d0
// Address: 004e58d0
// Address Range: [[004e58d0, 004e5d7c]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_requantizeLayer3Samples_FUN_004e58d0(SMpegSubbandQuantizedSamples *quantized_samples,SMpegSubbandSamples *output_samples,int *scalefactor_data,SMpegLayer3GranuleInfo *granule,int channel_index,SMpegFrame *frame)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_requantizeLayer3Samples_FUN_004e58d0(SMpegSubbandQuantizedSamples *quantized_samples,SMpegSubbandSamples *output_samples,int *scalefactor_data,SMpegLayer3GranuleInfo *granule,int channel_index,SMpegFrame *frame)

{
  int iVar1;
  float10 fVar2;
  int iVar3;
  float *pfVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  int *local_70;
  float *local_6c;
  int local_68;
  float *local_64;
  int local_44;
  float *local_3c;
  float *local_38;
  int *local_30;
  int local_2c;
  int local_28;
  float *local_20;
  float *local_1c;
  float *local_18;
  
  iVar7 = 0;
  iVar8 = frame->header->sampling_rate_index + frame->header->mpeg_version * 3;
  if ((granule->window_switching_flag == 0) || (granule->block_type != 2)) {
    local_1c = (float *)g_Layer3BandIndex[iVar8].l[1];
  }
  else if (granule->mixed_block_flag == 0) {
    local_1c = (float *)(g_Layer3BandIndex[iVar8].s[1] * 3);
    local_28 = g_Layer3BandIndex[iVar8].s[1];
    local_2c = 0;
  }
  else {
    local_1c = (float *)g_Layer3BandIndex[iVar8].l[1];
  }
  if (g_MpegRequantTablesInitialized == 0) {
    fVar12 = (float10)1.3333333333333299;
    iVar6 = 0;
    iVar9 = 0;
    do {
      fVar10 = pow((float10)iVar6,fVar12);
      iVar6 = iVar6 + 1;
      *(double *)((int)g_MpegRequantPowerTable + iVar9) = (double)fVar10;
      iVar9 = iVar9 + 8;
    } while (iVar6 < 200);
    iVar9 = 0;
    fVar10 = (float10)2;
    fVar12 = (float10)0.25;
    iVar6 = 0;
    do {
      fVar2 = (float10)-iVar9 * fVar12;
      fVar11 = pow(fVar10,(float10)-iVar9 * fVar12);
      fVar10 = fVar12;
      fVar12 = fVar2;
      iVar9 = iVar9 + 1;
      *(double *)((int)g_MpegRequantGainTable + iVar6) = (double)fVar11;
      iVar6 = iVar6 + 8;
    } while (iVar9 < 200);
    g_MpegRequantTablesInitialized = 1;
  }
  local_44 = 0;
  local_64 = (float *)output_samples;
  local_70 = (int *)quantized_samples;
  local_6c = (float *)0x0;
  local_68 = 0;
  do {
    local_20 = local_6c;
    local_38 = local_6c;
    local_3c = local_64;
    local_18 = local_64;
    local_30 = local_70;
    iVar9 = 0;
    iVar6 = iVar7;
    do {
      iVar7 = iVar6;
      if (local_20 == local_1c) {
        if ((granule->window_switching_flag == 0) || (granule->block_type != 2)) {
          iVar7 = iVar6 + 1;
          local_1c = (float *)g_Layer3BandIndex[iVar8].l[iVar6 + 2];
        }
        else {
          iVar7 = iVar6 + 1;
          if (granule->mixed_block_flag == 0) {
LAB_004e5bd0:
            iVar3 = g_Layer3BandIndex[iVar8].s[iVar6 + 2];
            iVar1 = g_Layer3BandIndex[iVar8].s[iVar6 + 1];
            local_28 = g_Layer3BandIndex[iVar8].s[iVar6 + 2] - iVar1;
          }
          else {
            if (local_20 != (float *)g_Layer3BandIndex[iVar8].l[8]) {
              if ((int)local_20 < g_Layer3BandIndex[iVar8].l[8]) {
                local_1c = (float *)g_Layer3BandIndex[iVar8].l[iVar6 + 2];
                goto LAB_004e5a60;
              }
              goto LAB_004e5bd0;
            }
            iVar3 = g_Layer3BandIndex[iVar8].s[4];
            iVar1 = g_Layer3BandIndex[iVar8].s[3];
            local_28 = g_Layer3BandIndex[iVar8].s[4] - iVar1;
            iVar7 = 3;
          }
          local_1c = (float *)(iVar3 * 3);
          local_2c = iVar1 * 3;
        }
      }
LAB_004e5a60:
      if (*(int *)((int)quantized_samples->samples[0] + iVar9 + local_68) == 0) {
        *(uint *)((int)output_samples->samples[0] + iVar9 + local_68) = 0;
      }
      else {
        iVar6 = granule->global_gain + -0xd2;
        if ((granule->window_switching_flag == 0) ||
           (((granule->block_type != 2 || (granule->mixed_block_flag != 0)) &&
            ((granule->block_type != 2 || ((granule->mixed_block_flag == 0 || (local_44 < 2))))))))
        {
          iVar3 = (granule->scalefac_scale + 1) * -2 *
                  (scalefactor_data[channel_index * 0x3e + iVar7] +
                  granule->preflag * g_Layer3Pretab[iVar7]);
        }
        else {
          iVar3 = ((int)local_38 - local_2c) / local_28;
          iVar6 = iVar6 + granule->subblock_gain[iVar3] * -8;
          iVar3 = (granule->scalefac_scale + 1) * -2 *
                  scalefactor_data[channel_index * 0x3e + iVar3 * 0xd + iVar7 + 0x17];
        }
        iVar6 = iVar6 + iVar3;
        if ((iVar6 < 1) && (-200 < iVar6)) {
          fVar12 = (float10)g_MpegRequantGainTable[-iVar6];
          pfVar4 = local_3c;
        }
        else {
          fVar12 = pow
                             ((float10)2,(float10)iVar6 * (float10)0.25);
          pfVar4 = local_38;
        }
        *pfVar4 = (float)fVar12;
        uVar5 = *local_30 >> 0x1f;
        iVar6 = (*local_30 ^ uVar5) - uVar5;
        if (iVar6 < 200) {
          *local_18 = *local_18 * (float)g_MpegRequantPowerTable[iVar6];
        }
        else {
          fVar12 = pow((float10)iVar6,(float10)1.3333333333333299);
          *local_1c = (float)(fVar12 * (float10)*local_1c);
        }
        if (*(int *)((int)quantized_samples->samples[0] + iVar9 + local_68) < 0) {
          *(float *)((int)output_samples->samples[0] + iVar9 + local_68) =
               -*(float *)((int)output_samples->samples[0] + iVar9 + local_68);
        }
      }
      iVar9 = iVar9 + 4;
      local_20 = (float *)((int)local_20 + 1);
      local_38 = (float *)((int)local_38 + 1);
      local_3c = local_3c + 1;
      local_18 = local_18 + 1;
      local_30 = local_30 + 1;
      iVar6 = iVar7;
    } while (iVar9 != 0x48);
    local_6c = (float *)((int)local_6c + 0x12);
    local_68 = local_68 + 0x48;
    local_64 = local_64 + 0x12;
    local_70 = local_70 + 0x12;
    local_44 = local_44 + 1;
    if (0x1f < local_44) {
      return;
    }
  } while( true );
}
