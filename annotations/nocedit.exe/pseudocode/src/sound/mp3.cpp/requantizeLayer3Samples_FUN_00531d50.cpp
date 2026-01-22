// Name: sound_mp3.cpp_requantizeLayer3Samples_FUN_00531d50
// Address: 00531d50
// Address Range: [[00531d50, 005321fc]]
// Convention: __cdecl
// Signature: void sound_mp3.cpp_requantizeLayer3Samples_FUN_00531d50(SMpegSubbandQuantizedSamples * quantized_samples, SMpegSubbandSamples * output_samples, int * scalefactor_data, SMpegLayer3Granule * granule_info, int channel_index, SMpegLayer3Granule * * granule_array)

#include "nocturne.h"

void __cdecl
sound_mp3_cpp_requantizeLayer3Samples_FUN_00531d50
          (SMpegSubbandQuantizedSamples *quantized_samples,SMpegSubbandSamples *output_samples,
          int *scalefactor_data,SMpegLayer3Granule *granule_info,int channel_index,
          SMpegLayer3Granule **granule_array)

{
  int iVar1;
  float10 fVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  uint uVar6;
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
  
  iVar8 = 0;
  iVar9 = *(int *)((*granule_array)->field2_0x8 + 8) + (*granule_array)->field0_0x0 * 3;
  if ((*(int *)(granule_info->field2_0x8 + 8) == 0) ||
     (*(int *)(granule_info->field2_0x8 + 0xc) != 2)) {
    local_1c = *(float **)(&DAT_0067e6cc + iVar9 * 0x94);
  }
  else {
    iVar5 = iVar9 * 0x94;
    if (granule_info->part_2_3_length_maybe == 0) {
      local_1c = (float *)(*(int *)(&DAT_0067e728 + iVar5) * 3);
      local_28 = *(int *)(&DAT_0067e728 + iVar5);
      local_2c = 0;
    }
    else {
      local_1c = *(float **)(&DAT_0067e6cc + iVar5);
    }
  }
  if (g_MpegRequantTablesInitialized == 0) {
    fVar12 = (float10)1.3333333333333299;
    iVar5 = 0;
    iVar7 = 0;
    do {
      fVar10 = crt_math_c_pow_FUN_005ffd76((float10)iVar5,fVar12);
      iVar5 = iVar5 + 1;
      *(double *)((int)g_MpegRequantPowerTable + iVar7) = (double)fVar10;
      iVar7 = iVar7 + 8;
    } while (iVar5 < 200);
    iVar7 = 0;
    fVar10 = (float10)2;
    fVar12 = (float10)0.25;
    iVar5 = 0;
    do {
      fVar2 = (float10)-iVar7 * fVar12;
      fVar11 = crt_math_c_pow_FUN_005ffd76(fVar10,(float10)-iVar7 * fVar12);
      fVar10 = fVar12;
      fVar12 = fVar2;
      iVar7 = iVar7 + 1;
      *(double *)((int)g_MpegRequantGainTable + iVar5) = (double)fVar11;
      iVar5 = iVar5 + 8;
    } while (iVar7 < 200);
    g_MpegRequantTablesInitialized = 1;
  }
  local_44 = 0;
  iVar9 = iVar9 * 0x94;
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
    iVar5 = 0;
    do {
      if (local_20 == local_1c) {
        if ((*(int *)(granule_info->field2_0x8 + 8) == 0) ||
           (*(int *)(granule_info->field2_0x8 + 0xc) != 2)) {
          iVar8 = iVar8 + 1;
          local_1c = *(float **)(&DAT_0067e6cc + iVar8 * 4 + iVar9);
        }
        else {
          iVar8 = iVar8 + 1;
          iVar7 = iVar8 * 4 + iVar9;
          if (granule_info->part_2_3_length_maybe == 0) {
LAB_00532050:
            iVar1 = *(int *)(&DAT_0067e728 + iVar7);
            iVar3 = *(int *)(iVar7 + 0x67e724);
            local_28 = *(int *)(&DAT_0067e728 + iVar7) - iVar3;
          }
          else {
            if (local_20 != *(float **)(&DAT_0067e6e8 + iVar9)) {
              if ((int)local_20 < (int)*(float **)(&DAT_0067e6e8 + iVar9)) {
                local_1c = *(float **)(&DAT_0067e6cc + iVar7);
                goto LAB_00531ee0;
              }
              goto LAB_00532050;
            }
            iVar1 = *(int *)(&DAT_0067e734 + iVar9);
            iVar3 = *(int *)(&DAT_0067e730 + iVar9);
            local_28 = *(int *)(&DAT_0067e734 + iVar9) - iVar3;
            iVar8 = 3;
          }
          local_1c = (float *)(iVar1 * 3);
          local_2c = iVar3 * 3;
        }
      }
LAB_00531ee0:
      if (*(int *)((int)quantized_samples->samples[0] + iVar5 + local_68) == 0) {
        *(uint *)((int)output_samples->samples[0] + iVar5 + local_68) = 0;
      }
      else {
        iVar7 = *(int *)granule_info->field2_0x8 + -0xd2;
        if ((*(int *)(granule_info->field2_0x8 + 8) == 0) ||
           (((*(int *)(granule_info->field2_0x8 + 0xc) != 2 ||
             (granule_info->part_2_3_length_maybe != 0)) &&
            ((*(int *)(granule_info->field2_0x8 + 0xc) != 2 ||
             ((granule_info->part_2_3_length_maybe == 0 || (local_44 < 2)))))))) {
          iVar3 = (granule_info->subblock_gain[0] + 1) * -2 *
                  (scalefactor_data[channel_index * 0x3e + iVar8] +
                  granule_info->table_select[2] * *(int *)(iVar8 * 4 + 0x67e174));
        }
        else {
          iVar3 = ((int)local_38 - local_2c) / local_28;
          iVar7 = iVar7 + granule_info->table_select[iVar3 + -3] * -8;
          iVar3 = (granule_info->subblock_gain[0] + 1) * -2 *
                  scalefactor_data[channel_index * 0x3e + iVar3 * 0xd + iVar8 + 0x17];
        }
        iVar7 = iVar7 + iVar3;
        if ((iVar7 < 1) && (-200 < iVar7)) {
          fVar12 = (float10)g_MpegRequantGainTable[-iVar7];
          pfVar4 = local_3c;
        }
        else {
          fVar12 = crt_math_c_pow_FUN_005ffd76
                             ((float10)2,(float10)iVar7 * (float10)0.25);
          pfVar4 = local_38;
        }
        *pfVar4 = (float)fVar12;
        uVar6 = *local_30 >> 0x1f;
        iVar7 = (*local_30 ^ uVar6) - uVar6;
        if (iVar7 < 200) {
          *local_18 = *local_18 * (float)g_MpegRequantPowerTable[iVar7];
        }
        else {
          fVar12 = crt_math_c_pow_FUN_005ffd76((float10)iVar7,(float10)1.3333333333333299);
          *local_1c = (float)(fVar12 * (float10)*local_1c);
        }
        if (*(int *)((int)quantized_samples->samples[0] + iVar5 + local_68) < 0) {
          *(float *)((int)output_samples->samples[0] + iVar5 + local_68) =
               -*(float *)((int)output_samples->samples[0] + iVar5 + local_68);
        }
      }
      iVar5 = iVar5 + 4;
      local_20 = (float *)((int)local_20 + 1);
      local_38 = (float *)((int)local_38 + 1);
      local_3c = local_3c + 1;
      local_18 = local_18 + 1;
      local_30 = local_30 + 1;
    } while (iVar5 != 0x48);
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
