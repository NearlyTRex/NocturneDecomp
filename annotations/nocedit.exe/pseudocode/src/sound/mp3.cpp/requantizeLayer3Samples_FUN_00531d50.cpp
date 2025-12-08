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
  float *pfVar2;
  SMpegLayer3Granule *extraout_ECX;
  SMpegLayer3Granule *extraout_ECX_00;
  SMpegLayer3Granule *extraout_ECX_01;
  int iVar3;
  int extraout_EDX;
  int extraout_EDX_00;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float10 base;
  float10 fVar8;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  float10 extraout_ST2;
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
  
  iVar6 = 0;
  iVar7 = *(int *)((*granule_array)->field2_0x8 + 8) + (*granule_array)->field0_0x0 * 3;
  if ((*(int *)(granule_info->field2_0x8 + 8) == 0) ||
     (*(int *)(granule_info->field2_0x8 + 0xc) != 2)) {
    local_1c = *(int *)(&DAT_0067e6cc + iVar7 * 0x94);
  }
  else {
    iVar3 = iVar7 * 0x94;
    if (granule_info->part_2_3_length_maybe == 0) {
      local_1c = *(int *)(&DAT_0067e728 + iVar3) * 3;
      local_28 = *(int *)(&DAT_0067e728 + iVar3);
      local_2c = 0;
    }
    else {
      local_1c = *(int *)(&DAT_0067e6cc + iVar3);
    }
  }
  if (g_MpegRequantTablesInitialized == 0) {
    fVar8 = (float10)1.3333333333333299;
    iVar3 = 0;
    iVar5 = 0;
    do {
      fVar8 = crt_math_c_pow_FUN_005ffd76((float10)iVar3,fVar8);
      iVar3 = extraout_EDX + 1;
      *(double *)((int)g_MpegRequantPowerTable + iVar5) = (double)fVar8;
      iVar5 = iVar5 + 8;
      fVar8 = extraout_ST1;
    } while (iVar3 < 200);
    iVar5 = 0;
    base = (float10)2;
    fVar8 = (float10)0.25;
    iVar3 = 0;
    do {
      fVar8 = crt_math_c_pow_FUN_005ffd76(base,(float10)-iVar5 * fVar8);
      iVar5 = extraout_EDX_00 + 1;
      *(double *)((int)g_MpegRequantGainTable + iVar3) = (double)fVar8;
      iVar3 = iVar3 + 8;
      fVar8 = extraout_ST1_00;
      base = extraout_ST2;
    } while (iVar5 < 200);
    g_MpegRequantTablesInitialized = 1;
    granule_info = extraout_ECX;
  }
  local_44 = 0;
  iVar7 = iVar7 * 0x94;
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
    iVar3 = 0;
    do {
      if (local_20 == local_1c) {
        if ((*(int *)(granule_info->field2_0x8 + 8) == 0) ||
           (*(int *)(granule_info->field2_0x8 + 0xc) != 2)) {
          iVar6 = iVar6 + 1;
          local_1c = *(int *)(&DAT_0067e6cc + iVar6 * 4 + iVar7);
        }
        else {
          iVar6 = iVar6 + 1;
          iVar5 = iVar6 * 4 + iVar7;
          if (granule_info->part_2_3_length_maybe == 0) {
LAB_00532050:
            local_1c = *(int *)(&DAT_0067e728 + iVar5);
            iVar1 = *(int *)(iVar5 + 0x67e724);
            local_28 = *(int *)(&DAT_0067e728 + iVar5) - iVar1;
          }
          else {
            if (local_20 != *(int *)(&DAT_0067e6e8 + iVar7)) {
              if (local_20 < *(int *)(&DAT_0067e6e8 + iVar7)) {
                local_1c = *(int *)(&DAT_0067e6cc + iVar5);
                goto LAB_00531ee0;
              }
              goto LAB_00532050;
            }
            local_1c = *(int *)(&DAT_0067e734 + iVar7);
            iVar1 = *(int *)(&DAT_0067e730 + iVar7);
            local_28 = *(int *)(&DAT_0067e734 + iVar7) - iVar1;
            iVar6 = 3;
          }
          local_1c = local_1c * 3;
          local_2c = iVar1 * 3;
        }
      }
LAB_00531ee0:
      if (*(int *)((int)quantized_samples->samples[0] + iVar3 + local_68) == 0) {
        *(uint *)((int)output_samples->samples[0] + iVar3 + local_68) = 0;
      }
      else {
        iVar5 = *(int *)granule_info->field2_0x8 + -0xd2;
        if ((*(int *)(granule_info->field2_0x8 + 8) == 0) ||
           (((*(int *)(granule_info->field2_0x8 + 0xc) != 2 ||
             (granule_info->part_2_3_length_maybe != 0)) &&
            ((*(int *)(granule_info->field2_0x8 + 0xc) != 2 ||
             ((granule_info->part_2_3_length_maybe == 0 || (local_44 < 2)))))))) {
          iVar1 = (granule_info->subblock_gain[0] + 1) * -2 *
                  (scalefactor_data[channel_index * 0x3e + iVar6] +
                  granule_info->table_select[2] * *(int *)(iVar6 * 4 + 0x67e174));
        }
        else {
          iVar1 = (local_38 - local_2c) / local_28;
          iVar5 = iVar5 + granule_info->table_select[iVar1 + -3] * -8;
          iVar1 = (granule_info->subblock_gain[0] + 1) * -2 *
                  scalefactor_data[channel_index * 0x3e + iVar1 * 0xd + iVar6 + 0x17];
        }
        iVar5 = iVar5 + iVar1;
        if ((iVar5 < 1) && (-200 < iVar5)) {
          fVar8 = (float10)g_MpegRequantGainTable[-iVar5];
          pfVar2 = local_3c;
        }
        else {
          fVar8 = crt_math_c_pow_FUN_005ffd76
                            ((float10)2,(float10)iVar5 * (float10)0.25);
          pfVar2 = local_34;
          granule_info = extraout_ECX_00;
        }
        *pfVar2 = (float)fVar8;
        uVar4 = *local_30 >> 0x1f;
        iVar5 = (*local_30 ^ uVar4) - uVar4;
        if (iVar5 < 200) {
          *local_18 = *local_18 * (float)g_MpegRequantPowerTable[iVar5];
        }
        else {
          fVar8 = crt_math_c_pow_FUN_005ffd76((float10)iVar5,(float10)1.3333333333333299);
          *local_18 = (float)(fVar8 * (float10)*local_18);
          granule_info = extraout_ECX_01;
        }
        if (*(int *)((int)quantized_samples->samples[0] + iVar3 + local_68) < 0) {
          *(float *)((int)output_samples->samples[0] + iVar3 + local_68) =
               -*(float *)((int)output_samples->samples[0] + iVar3 + local_68);
        }
      }
      iVar3 = iVar3 + 4;
      local_20 = local_20 + 1;
      local_38 = local_38 + 1;
      local_3c = local_3c + 1;
      local_34 = local_34 + 1;
      local_18 = local_18 + 1;
      local_30 = local_30 + 1;
    } while (iVar3 != 0x48);
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
