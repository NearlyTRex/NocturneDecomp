// Name: sound_mp3.cpp_requantizeLayer3Samples_FUN_00531d50
// Address: 00531d50
// Address Range: [[00531d50, 005321fc]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_requantizeLayer3Samples_FUN_00531d50(SMpegSubbandQuantizedSamples *quantized_samples,SMpegSubbandSamples *output_samples,int *scalefactor_data,SMpegLayer3SideInfo *side_info,int channel_index,SMpegFrame *frame)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_requantizeLayer3Samples_FUN_00531d50(SMpegSubbandQuantizedSamples *quantized_samples,SMpegSubbandSamples *output_samples,int *scalefactor_data,SMpegLayer3SideInfo *side_info,int channel_index,SMpegFrame *frame)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float10 base;
  float10 fVar9;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  float10 extraout_ST2;
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
  
  iVar6 = 0;
  iVar7 = frame->header->sampling_rate_index + frame->header->mpeg_version * 3;
  if ((side_info->scfsi[2] == 0) || (side_info->scfsi[3] != 2)) {
    local_1c = (float *)g_Layer3BandIndex[iVar7].l[1];
  }
  else if (side_info->granules[0].part_2_3_length == 0) {
    local_1c = (float *)(g_Layer3BandIndex[iVar7].s[1] * 3);
    local_28 = g_Layer3BandIndex[iVar7].s[1];
    local_2c = 0;
  }
  else {
    local_1c = (float *)g_Layer3BandIndex[iVar7].l[1];
  }
  if (g_MpegRequantTablesInitialized == 0) {
    fVar9 = (float10)1.3333333333333299;
    iVar5 = 0;
    iVar8 = 0;
    do {
      fVar9 = pow((float10)iVar5,fVar9);
      iVar5 = iVar5 + 1;
      *(double *)((int)g_MpegRequantPowerTable + iVar8) = (double)fVar9;
      iVar8 = iVar8 + 8;
      fVar9 = extraout_ST1;
    } while (iVar5 < 200);
    iVar8 = 0;
    base = (float10)2;
    fVar9 = (float10)0.25;
    iVar5 = 0;
    do {
      fVar9 = pow(base,(float10)-iVar8 * fVar9);
      iVar8 = iVar8 + 1;
      *(double *)((int)g_MpegRequantGainTable + iVar5) = (double)fVar9;
      iVar5 = iVar5 + 8;
      fVar9 = extraout_ST1_00;
      base = extraout_ST2;
    } while (iVar8 < 200);
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
    iVar8 = 0;
    iVar5 = iVar6;
    do {
      iVar6 = iVar5;
      if (local_20 == local_1c) {
        if ((side_info->scfsi[2] == 0) || (side_info->scfsi[3] != 2)) {
          iVar6 = iVar5 + 1;
          local_1c = (float *)g_Layer3BandIndex[iVar7].l[iVar5 + 2];
        }
        else {
          iVar6 = iVar5 + 1;
          if (side_info->granules[0].part_2_3_length == 0) {
LAB_00532050:
            iVar2 = g_Layer3BandIndex[iVar7].s[iVar5 + 2];
            iVar1 = g_Layer3BandIndex[iVar7].s[iVar5 + 1];
            local_28 = g_Layer3BandIndex[iVar7].s[iVar5 + 2] - iVar1;
          }
          else {
            if (local_20 != (float *)g_Layer3BandIndex[iVar7].l[8]) {
              if ((int)local_20 < g_Layer3BandIndex[iVar7].l[8]) {
                local_1c = (float *)g_Layer3BandIndex[iVar7].l[iVar5 + 2];
                goto LAB_00531ee0;
              }
              goto LAB_00532050;
            }
            iVar2 = g_Layer3BandIndex[iVar7].s[4];
            iVar1 = g_Layer3BandIndex[iVar7].s[3];
            local_28 = g_Layer3BandIndex[iVar7].s[4] - iVar1;
            iVar6 = 3;
          }
          local_1c = (float *)(iVar2 * 3);
          local_2c = iVar1 * 3;
        }
      }
LAB_00531ee0:
      if (*(int *)((int)quantized_samples->samples[0] + iVar8 + local_68) == 0) {
        *(uint *)((int)output_samples->samples[0] + iVar8 + local_68) = 0;
      }
      else {
        iVar5 = side_info->scfsi[0] + -0xd2;
        if ((side_info->scfsi[2] == 0) ||
           (((side_info->scfsi[3] != 2 || (side_info->granules[0].part_2_3_length != 0)) &&
            ((side_info->scfsi[3] != 2 ||
             ((side_info->granules[0].part_2_3_length == 0 || (local_44 < 2)))))))) {
          iVar2 = (side_info->granules[0].subblock_gain[0] + 1) * -2 *
                  (scalefactor_data[channel_index * 0x3e + iVar6] +
                  side_info->granules[0].table_select[2] * g_Layer3Pretab[iVar6]);
        }
        else {
          iVar2 = ((int)local_38 - local_2c) / local_28;
          iVar5 = iVar5 + side_info->granules[0].table_select[iVar2 + -3] * -8;
          iVar2 = (side_info->granules[0].subblock_gain[0] + 1) * -2 *
                  scalefactor_data[channel_index * 0x3e + iVar2 * 0xd + iVar6 + 0x17];
        }
        iVar5 = iVar5 + iVar2;
        if ((iVar5 < 1) && (-200 < iVar5)) {
          fVar9 = (float10)g_MpegRequantGainTable[-iVar5];
          pfVar3 = local_3c;
        }
        else {
          fVar9 = pow
                            ((float10)2,(float10)iVar5 * (float10)0.25);
          pfVar3 = local_38;
        }
        *pfVar3 = (float)fVar9;
        uVar4 = *local_30 >> 0x1f;
        iVar5 = (*local_30 ^ uVar4) - uVar4;
        if (iVar5 < 200) {
          *local_18 = *local_18 * (float)g_MpegRequantPowerTable[iVar5];
        }
        else {
          fVar9 = pow((float10)iVar5,(float10)1.3333333333333299);
          *local_1c = (float)(fVar9 * (float10)*local_1c);
        }
        if (*(int *)((int)quantized_samples->samples[0] + iVar8 + local_68) < 0) {
          *(float *)((int)output_samples->samples[0] + iVar8 + local_68) =
               -*(float *)((int)output_samples->samples[0] + iVar8 + local_68);
        }
      }
      iVar8 = iVar8 + 4;
      local_20 = (float *)((int)local_20 + 1);
      local_38 = (float *)((int)local_38 + 1);
      local_3c = local_3c + 1;
      local_18 = local_18 + 1;
      local_30 = local_30 + 1;
      iVar5 = iVar6;
    } while (iVar8 != 0x48);
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
