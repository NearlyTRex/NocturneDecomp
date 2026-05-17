// Name: sound_mp3.cpp_requantizeLayer3Samples_FUN_00531d50
// Address: 00531d50
// MANUAL RECONSTRUCTION
// Address Range: [[00531d50, 005321fc]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_requantizeLayer3Samples_FUN_00531d50(SMpegSubbandQuantizedSamples *quantized_samples,SMpegSubbandSamples *output_samples,int *scalefactor_data,SMpegLayer3GranuleInfo *granule,int channel_index,SMpegFrame *frame)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_requantizeLayer3Samples_FUN_00531d50(SMpegSubbandQuantizedSamples *quantized_samples,SMpegSubbandSamples *output_samples,int *scalefactor_data,SMpegLayer3GranuleInfo *granule,int channel_index,SMpegFrame *frame)

{
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar4;
  int iVar5;
  int iVar7;
  int iVar8;
  float10 fVar5;
  float10 fVar6;
  float10 fVar9;
  float10 fVar7;
  int local_44;
  int local_38;
  int *local_30;
  int local_2c;
  int local_28;
  int local_20;
  int local_1c;
  float *local_18;
  int sfb;
  int local_6c;
  int iVar1;

  sfb = 0;
  iVar7 = frame->header->sampling_rate_index + frame->header->mpeg_version * 3;
  if ((granule->window_switching_flag == 0) || (granule->block_type != 2)) {
    local_1c = g_Layer3BandIndex[iVar7].l[1];
  }
  else if (granule->mixed_block_flag == 0) {
    local_1c = g_Layer3BandIndex[iVar7].s[1] * 3;
    local_28 = g_Layer3BandIndex[iVar7].s[1];
    local_2c = 0;
  }
  else {
    local_1c = g_Layer3BandIndex[iVar7].l[1];
  }
  if (g_MpegRequantTablesInitialized == 0) {
    fVar7 = (float10)1.3333333333333299;
    iVar3 = 0;
    do {
      fVar5 = pow((float10)iVar3,fVar7);
      g_MpegRequantPowerTable[iVar3] = (double)fVar5;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 200);
    iVar4 = 0;
    do {
      fVar6 = pow((float10)2, (float10)-iVar4 * (float10)0.25);
      g_MpegRequantGainTable[iVar4] = (double)fVar6;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 200);
    g_MpegRequantTablesInitialized = 1;
  }
  local_44 = 0;
  local_6c = 0;
  do {
    local_20 = local_6c;
    local_38 = local_6c;
    local_18 = output_samples->samples[local_44];
    local_30 = quantized_samples->samples[local_44];
    iVar8 = 0;
    do {
      if (local_20 == local_1c) {
        if ((granule->window_switching_flag == 0) || (granule->block_type != 2)) {
          sfb = sfb + 1;
          local_1c = g_Layer3BandIndex[iVar7].l[sfb + 1];
        }
        else {
          sfb = sfb + 1;
          if (granule->mixed_block_flag == 0) {
LAB_00532050:
            iVar4 = g_Layer3BandIndex[iVar7].s[sfb + 1];
            iVar1 = g_Layer3BandIndex[iVar7].s[sfb];
            local_28 = iVar4 - iVar1;
          }
          else {
            if (local_20 != g_Layer3BandIndex[iVar7].l[8]) {
              if (local_20 < g_Layer3BandIndex[iVar7].l[8]) {
                local_1c = g_Layer3BandIndex[iVar7].l[sfb + 1];
                goto LAB_00531ee0;
              }
              goto LAB_00532050;
            }
            iVar4 = g_Layer3BandIndex[iVar7].s[4];
            iVar1 = g_Layer3BandIndex[iVar7].s[3];
            local_28 = iVar4 - iVar1;
            sfb = 3;
          }
          local_1c = iVar4 * 3;
          local_2c = iVar1 * 3;
        }
      }
LAB_00531ee0:
      if (*local_30 == 0) {
        *local_18 = 0.0;
      }
      else {
        iVar5 = granule->global_gain + -0xd2;
        if ((granule->window_switching_flag == 0) ||
           (((granule->block_type != 2 || (granule->mixed_block_flag != 0)) &&
            ((granule->block_type != 2 || ((granule->mixed_block_flag == 0 || (local_44 < 2))))))))
        {
          iVar3 = (granule->scalefac_scale + 1) * -2 *
                  (scalefactor_data[channel_index * 0x3e + sfb] +
                  granule->preflag * g_Layer3Pretab[sfb]);
        }
        else {
          iVar2 = (local_38 - local_2c) / local_28;
          iVar5 = iVar5 + granule->subblock_gain[iVar2] * -8;
          iVar3 = (granule->scalefac_scale + 1) * -2 *
                  scalefactor_data[channel_index * 0x3e + iVar2 * 0xd + sfb + 0x17];
        }
        iVar3 = iVar5 + iVar3;
        if ((iVar3 < 1) && (-200 < iVar3)) {
          fVar9 = (float10)g_MpegRequantGainTable[-iVar3];
        }
        else {
          fVar9 = pow((float10)2,(float10)iVar3 * (float10)0.25);
        }
        *local_18 = (float)fVar9;
        uVar4 = *local_30 >> 0x1f;
        iVar3 = (*local_30 ^ uVar4) - uVar4;
        if (iVar3 < 200) {
          *local_18 = *local_18 * (float)g_MpegRequantPowerTable[iVar3];
        }
        else {
          fVar7 = pow((float10)iVar3,(float10)1.3333333333333299);
          *local_18 = (float)(fVar7 * (float10)*local_18);
        }
        if (*local_30 < 0) {
          *local_18 = -*local_18;
        }
      }
      iVar8 = iVar8 + 1;
      local_20 = local_20 + 1;
      local_38 = local_38 + 1;
      local_18 = local_18 + 1;
      local_30 = local_30 + 1;
    } while (iVar8 != 0x12);
    local_6c = local_6c + 0x12;
    local_44 = local_44 + 1;
    if (0x1f < local_44) {
      return;
    }
  } while( true );
}
