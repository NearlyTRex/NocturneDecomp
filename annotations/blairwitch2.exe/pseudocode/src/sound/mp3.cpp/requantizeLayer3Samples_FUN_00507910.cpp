// Name: sound_mp3.cpp_requantizeLayer3Samples_FUN_00507910
// Address: 00507910
// Address Range: [[00507910, 00507dbc]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_requantizeLayer3Samples_FUN_00507910(SMpegSubbandQuantizedSamples *quantized_samples,SMpegSubbandSamples *output_samples,int *scalefactor_data,SMpegLayer3GranuleInfo *granule,int channel_index,SMpegFrame *frame)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_requantizeLayer3Samples_FUN_00507910(SMpegSubbandQuantizedSamples *quantized_samples,SMpegSubbandSamples *output_samples,int *scalefactor_data,SMpegLayer3GranuleInfo *granule,int channel_index,SMpegFrame *frame)

{
  int iVar1;
  float10 fVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
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
  
  iVar8 = 0;
  iVar9 = frame->header->sampling_rate_index + frame->header->mpeg_version * 3;
  if ((granule->window_switching_flag == 0) || (granule->block_type != 2)) {
    local_1c = (float *)g_INT_ARRAY_0061933c[iVar9 * 0x25];
  }
  else if (granule->mixed_block_flag == 0) {
    local_1c = (float *)(*(int *)(&DAT_00619398 + iVar9 * 0x94) * 3);
    local_28 = *(int *)(&DAT_00619398 + iVar9 * 0x94);
    local_2c = 0;
  }
  else {
    local_1c = (float *)g_INT_ARRAY_0061933c[iVar9 * 0x25];
  }
  if (g_INT_01d1edd4 == 0) {
    fVar13 = (float10)1.3333333333333299;
    iVar3 = 0;
    iVar10 = 0;
    do {
      fVar11 = pow((float10)iVar3,fVar13);
      iVar3 = iVar3 + 1;
      *(double *)((int)g_DOUBLE_ARRAY_01d1edd8 + iVar10) = (double)fVar11;
      iVar10 = iVar10 + 8;
    } while (iVar3 < 200);
    iVar10 = 0;
    fVar11 = (float10)2;
    fVar13 = (float10)0.25;
    iVar3 = 0;
    do {
      fVar2 = (float10)-iVar10 * fVar13;
      fVar12 = pow(fVar11,(float10)-iVar10 * fVar13);
      fVar11 = fVar13;
      fVar13 = fVar2;
      iVar10 = iVar10 + 1;
      *(double *)((int)g_DOUBLE_ARRAY_01d1f418 + iVar3) = (double)fVar12;
      iVar3 = iVar3 + 8;
    } while (iVar10 < 200);
    g_INT_01d1edd4 = 1;
  }
  local_44 = 0;
  iVar3 = iVar9 * 0x94;
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
    iVar10 = 0;
    do {
      if (local_20 == local_1c) {
        if ((granule->window_switching_flag == 0) || (granule->block_type != 2)) {
          iVar8 = iVar8 + 1;
          local_1c = (float *)g_INT_ARRAY_0061933c[iVar9 * 0x25 + iVar8];
        }
        else {
          iVar8 = iVar8 + 1;
          iVar7 = iVar8 * 4 + iVar3;
          if (granule->mixed_block_flag == 0) {
LAB_00507c10:
            iVar1 = *(int *)(&DAT_00619398 + iVar7);
            iVar4 = *(int *)(iVar7 + 0x619394);
            local_28 = *(int *)(&DAT_00619398 + iVar7) - iVar4;
          }
          else {
            if (local_20 != *(float **)(&DAT_00619358 + iVar3)) {
              if ((int)local_20 < (int)*(float **)(&DAT_00619358 + iVar3)) {
                local_1c = (float *)g_INT_ARRAY_0061933c[iVar9 * 0x25 + iVar8];
                goto LAB_00507aa0;
              }
              goto LAB_00507c10;
            }
            iVar1 = *(int *)(&DAT_006193a4 + iVar3);
            iVar4 = *(int *)(&DAT_006193a0 + iVar3);
            local_28 = *(int *)(&DAT_006193a4 + iVar3) - iVar4;
            iVar8 = 3;
          }
          local_1c = (float *)(iVar1 * 3);
          local_2c = iVar4 * 3;
        }
      }
LAB_00507aa0:
      if (*(int *)((int)quantized_samples->samples[0] + iVar10 + local_68) == 0) {
        *(uint *)((int)output_samples->samples[0] + iVar10 + local_68) = 0;
      }
      else {
        iVar7 = granule->global_gain + -0xd2;
        if ((granule->window_switching_flag == 0) ||
           (((granule->block_type != 2 || (granule->mixed_block_flag != 0)) &&
            ((granule->block_type != 2 || ((granule->mixed_block_flag == 0 || (local_44 < 2))))))))
        {
          iVar4 = (granule->scalefac_scale + 1) * -2 *
                  (scalefactor_data[channel_index * 0x3e + iVar8] +
                  granule->preflag * g_INT_ARRAY_00618de4[iVar8]);
        }
        else {
          iVar4 = ((int)local_38 - local_2c) / local_28;
          iVar7 = iVar7 + granule->subblock_gain[iVar4] * -8;
          iVar4 = (granule->scalefac_scale + 1) * -2 *
                  scalefactor_data[channel_index * 0x3e + iVar4 * 0xd + iVar8 + 0x17];
        }
        iVar7 = iVar7 + iVar4;
        if ((iVar7 < 1) && (-200 < iVar7)) {
          fVar13 = (float10)g_DOUBLE_ARRAY_01d1f418[-iVar7];
          pfVar5 = local_3c;
        }
        else {
          fVar13 = pow
                             ((float10)2,(float10)iVar7 * (float10)0.25
                             );
          pfVar5 = local_38;
        }
        *pfVar5 = (float)fVar13;
        uVar6 = *local_30 >> 0x1f;
        iVar7 = (*local_30 ^ uVar6) - uVar6;
        if (iVar7 < 200) {
          *local_18 = *local_18 * (float)g_DOUBLE_ARRAY_01d1edd8[iVar7];
        }
        else {
          fVar13 = pow((float10)iVar7,(float10)1.3333333333333299);
          *local_1c = (float)(fVar13 * (float10)*local_1c);
        }
        if (*(int *)((int)quantized_samples->samples[0] + iVar10 + local_68) < 0) {
          *(float *)((int)output_samples->samples[0] + iVar10 + local_68) =
               -*(float *)((int)output_samples->samples[0] + iVar10 + local_68);
        }
      }
      iVar10 = iVar10 + 4;
      local_20 = (float *)((int)local_20 + 1);
      local_38 = (float *)((int)local_38 + 1);
      local_3c = local_3c + 1;
      local_18 = local_18 + 1;
      local_30 = local_30 + 1;
    } while (iVar10 != 0x48);
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
