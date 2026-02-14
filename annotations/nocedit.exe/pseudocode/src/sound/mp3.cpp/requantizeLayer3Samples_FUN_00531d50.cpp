// Name: sound_mp3.cpp_requantizeLayer3Samples_FUN_00531d50
// Address: 00531d50
// Address Range: [[00531d50, 005321fc]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_requantizeLayer3Samples_FUN_00531d50(SMpegSubbandQuantizedSamples *quantized_samples,SMpegSubbandSamples *output_samples,int *scalefactor_data,SMpegLayer3Granule *granule_info,int channel_index,SMpegLayer3Granule **granule_array)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_requantizeLayer3Samples_FUN_00531d50(SMpegSubbandQuantizedSamples *quantized_samples,SMpegSubbandSamples *output_samples,int *scalefactor_data,SMpegLayer3Granule *granule_info,int channel_index,SMpegLayer3Granule **granule_array)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float10 base;
  float10 fVar10;
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
  
  iVar7 = 0;
  iVar8 = *(int *)((*granule_array)->unk3 + 8) + (*granule_array)->unk1 * 3;
  if ((*(int *)(granule_info->unk3 + 8) == 0) || (*(int *)(granule_info->unk3 + 0xc) != 2)) {
    local_1c = (float *)(&INT_0067e6cc)[iVar8 * 0x25];
  }
  else if (granule_info->part_2_3_length_maybe == 0) {
    local_1c = (float *)(*(int *)(&DAT_0067e728 + iVar8 * 0x94) * 3);
    local_28 = *(int *)(&DAT_0067e728 + iVar8 * 0x94);
    local_2c = 0;
  }
  else {
    local_1c = (float *)(&INT_0067e6cc)[iVar8 * 0x25];
  }
  if (g_MpegRequantTablesInitialized == 0) {
    fVar10 = (float10)1.3333333333333299;
    iVar2 = 0;
    iVar9 = 0;
    do {
      fVar10 = pow((float10)iVar2,fVar10);
      iVar2 = iVar2 + 1;
      *(double *)((int)g_MpegRequantPowerTable + iVar9) = (double)fVar10;
      iVar9 = iVar9 + 8;
      fVar10 = extraout_ST1;
    } while (iVar2 < 200);
    iVar9 = 0;
    base = (float10)2;
    fVar10 = (float10)0.25;
    iVar2 = 0;
    do {
      fVar10 = pow(base,(float10)-iVar9 * fVar10);
      iVar9 = iVar9 + 1;
      *(double *)((int)g_MpegRequantGainTable + iVar2) = (double)fVar10;
      iVar2 = iVar2 + 8;
      fVar10 = extraout_ST1_00;
      base = extraout_ST2;
    } while (iVar9 < 200);
    g_MpegRequantTablesInitialized = 1;
  }
  local_44 = 0;
  iVar2 = iVar8 * 0x94;
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
    do {
      if (local_20 == local_1c) {
        if ((*(int *)(granule_info->unk3 + 8) == 0) || (*(int *)(granule_info->unk3 + 0xc) != 2)) {
          iVar7 = iVar7 + 1;
          local_1c = (float *)(&INT_0067e6cc)[iVar8 * 0x25 + iVar7];
        }
        else {
          iVar7 = iVar7 + 1;
          iVar6 = iVar7 * 4 + iVar2;
          if (granule_info->part_2_3_length_maybe == 0) {
LAB_00532050:
            iVar1 = *(int *)(&DAT_0067e728 + iVar6);
            iVar3 = *(int *)(iVar6 + 0x67e724);
            local_28 = *(int *)(&DAT_0067e728 + iVar6) - iVar3;
          }
          else {
            if (local_20 != *(float **)(&DAT_0067e6e8 + iVar2)) {
              if ((int)local_20 < (int)*(float **)(&DAT_0067e6e8 + iVar2)) {
                local_1c = (float *)(&INT_0067e6cc)[iVar8 * 0x25 + iVar7];
                goto LAB_00531ee0;
              }
              goto LAB_00532050;
            }
            iVar1 = *(int *)(&DAT_0067e734 + iVar2);
            iVar3 = *(int *)(&DAT_0067e730 + iVar2);
            local_28 = *(int *)(&DAT_0067e734 + iVar2) - iVar3;
            iVar7 = 3;
          }
          local_1c = (float *)(iVar1 * 3);
          local_2c = iVar3 * 3;
        }
      }
LAB_00531ee0:
      if (*(int *)((int)quantized_samples->samples[0] + iVar9 + local_68) == 0) {
        *(uint *)((int)output_samples->samples[0] + iVar9 + local_68) = 0;
      }
      else {
        iVar6 = *(int *)granule_info->unk3 + -0xd2;
        if ((*(int *)(granule_info->unk3 + 8) == 0) ||
           (((*(int *)(granule_info->unk3 + 0xc) != 2 || (granule_info->part_2_3_length_maybe != 0))
            && ((*(int *)(granule_info->unk3 + 0xc) != 2 ||
                ((granule_info->part_2_3_length_maybe == 0 || (local_44 < 2)))))))) {
          iVar3 = (granule_info->subblock_gain[0] + 1) * -2 *
                  (scalefactor_data[channel_index * 0x3e + iVar7] +
                  granule_info->table_select[2] * *(int *)(iVar7 * 4 + 0x67e174));
        }
        else {
          iVar3 = ((int)local_38 - local_2c) / local_28;
          iVar6 = iVar6 + granule_info->table_select[iVar3 + -3] * -8;
          iVar3 = (granule_info->subblock_gain[0] + 1) * -2 *
                  scalefactor_data[channel_index * 0x3e + iVar3 * 0xd + iVar7 + 0x17];
        }
        iVar6 = iVar6 + iVar3;
        if ((iVar6 < 1) && (-200 < iVar6)) {
          fVar10 = (float10)g_MpegRequantGainTable[-iVar6];
          pfVar4 = local_3c;
        }
        else {
          fVar10 = pow
                             ((float10)2,(float10)iVar6 * (float10)0.25);
          pfVar4 = local_38;
        }
        *pfVar4 = (float)fVar10;
        uVar5 = *local_30 >> 0x1f;
        iVar6 = (*local_30 ^ uVar5) - uVar5;
        if (iVar6 < 200) {
          *local_18 = *local_18 * (float)g_MpegRequantPowerTable[iVar6];
        }
        else {
          fVar10 = pow((float10)iVar6,(float10)1.3333333333333299);
          *local_1c = (float)(fVar10 * (float10)*local_1c);
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
