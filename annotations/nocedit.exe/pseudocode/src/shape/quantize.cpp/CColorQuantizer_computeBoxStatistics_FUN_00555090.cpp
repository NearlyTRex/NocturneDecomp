// Name: shape_quantize.cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090
// Address: 00555090
// Address Range: [[00555090, 005554f9]]
// Convention: __cdecl
// Signature: void __cdecl shape_quantize_cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090(CColorQuantizer *this_ptr,int box_index)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl shape_quantize_cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090(CColorQuantizer *this_ptr,int box_index)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float b;
  float fVar8;
  float fVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  byte *pbVar14;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  
  local_44 = 0.0;
  local_30 = 0.0;
  local_3c = 0.0;
  iVar13 = this_ptr->boxes[box_index].start_index;
  iVar10 = this_ptr->boxes[box_index].start_index + this_ptr->boxes[box_index].pixel_count;
  local_38 = 0.0;
  if (iVar13 < iVar10) {
    local_38 = 0.0;
    local_3c = 0.0;
    local_44 = 0.0;
    pbVar14 = (byte *)(iVar13 * 4 + (int)this_ptr->pixel_data);
    do {
      iVar13 = iVar13 + 1;
      local_44 = (float)*pbVar14 + local_44;
      local_30 = (float)pbVar14[1] + local_30;
      local_3c = (float)pbVar14[2] + local_3c;
      local_38 = (float)pbVar14[3] + local_38;
      pbVar14 = pbVar14 + 4;
    } while (iVar13 < iVar10);
  }
  this_ptr->boxes[box_index].avg_red =
       (short)(int)ROUND(ROUND(local_44 / (float)(uint)this_ptr->boxes[box_index].pixel_count));
  this_ptr->boxes[box_index].avg_green =
       (short)(int)ROUND(ROUND(local_30 / (float)(uint)this_ptr->boxes[box_index].pixel_count));
  this_ptr->boxes[box_index].avg_blue =
       (short)(int)ROUND(ROUND(local_3c / (float)(uint)this_ptr->boxes[box_index].pixel_count));
  uVar11 = this_ptr->boxes[box_index].pixel_count;
  this_ptr->boxes[box_index].red_variance = 0.0;
  local_48 = 0.0;
  this_ptr->boxes[box_index].green_variance = 0.0;
  local_34 = 0.0;
  this_ptr->boxes[box_index].blue_variance = 0.0;
  local_40 = 0.0;
  this_ptr->boxes[box_index].intensity_variance = 0.0;
  local_2c = 0.0;
  this_ptr->boxes[box_index].weighted_variance = 0.0;
  this_ptr->boxes[box_index].avg_intensity = (short)(int)ROUND(ROUND(local_38 / (float)uVar11));
  for (iVar13 = this_ptr->boxes[box_index].start_index * 4; iVar13 < iVar10 * 4; iVar13 = iVar13 + 4
      ) {
    uVar11 = (*(int *)((int)&this_ptr->boxes[box_index + -1].pixel_count + 2) >> 0x10) -
             (uint)*(byte *)(iVar13 + (int)this_ptr->pixel_data);
    uVar12 = (int)uVar11 >> 0x1f;
    fVar5 = (float)(int)((uVar11 ^ uVar12) - uVar12);
    iVar2._0_2_ = this_ptr->boxes[box_index].avg_red;
    iVar2._2_2_ = this_ptr->boxes[box_index].avg_green;
    uVar11 = (iVar2 >> 0x10) - (uint)*(byte *)(iVar13 + 1 + (int)this_ptr->pixel_data);
    uVar12 = (int)uVar11 >> 0x1f;
    iVar3._0_2_ = this_ptr->boxes[box_index].avg_green;
    iVar3._2_2_ = this_ptr->boxes[box_index].avg_blue;
    fVar6 = (float)(int)((uVar11 ^ uVar12) - uVar12);
    uVar11 = (iVar3 >> 0x10) - (uint)*(byte *)(iVar13 + 2 + (int)this_ptr->pixel_data);
    uVar12 = (int)uVar11 >> 0x1f;
    fVar7 = (float)(int)((uVar11 ^ uVar12) - uVar12);
    iVar4._0_2_ = this_ptr->boxes[box_index].avg_blue;
    iVar4._2_2_ = this_ptr->boxes[box_index].avg_intensity;
    uVar11 = (iVar4 >> 0x10) - (uint)*(byte *)(iVar13 + 3 + (int)this_ptr->pixel_data);
    uVar12 = (int)uVar11 >> 0x1f;
    fVar9 = this_ptr->boxes[box_index].green_variance;
    fVar8 = this_ptr->boxes[box_index].blue_variance;
    fVar1 = this_ptr->boxes[box_index].intensity_variance;
    b = (float)(int)((uVar11 ^ uVar12) - uVar12);
    this_ptr->boxes[box_index].red_variance = this_ptr->boxes[box_index].red_variance + fVar5;
    this_ptr->boxes[box_index].green_variance = fVar9 + fVar6;
    this_ptr->boxes[box_index].blue_variance = fVar8 + fVar7;
    this_ptr->boxes[box_index].intensity_variance = fVar1 + b;
    local_48 = core_bugs_cpp_maxFloat_FUN_00427ba0(local_48,fVar5);
    local_34 = core_bugs_cpp_maxFloat_FUN_00427ba0(local_34,fVar6);
    local_40 = core_bugs_cpp_maxFloat_FUN_00427ba0(local_40,fVar7);
    local_2c = core_bugs_cpp_maxFloat_FUN_00427ba0(local_2c,b);
    this_ptr->boxes[box_index].weighted_variance =
         b * b * (float)0.69999999999999996 +
         fVar7 * fVar7 * (float)0.11 +
         fVar6 * fVar6 * (float)0.58999999999999997 + fVar5 * fVar5 * (float)0.29999999999999999 +
         this_ptr->boxes[box_index].weighted_variance;
  }
  fVar9 = this_ptr->boxes[box_index].green_variance;
  fVar5 = (float)0.58999999999999997;
  fVar8 = this_ptr->boxes[box_index].blue_variance;
  fVar6 = (float)0.11;
  fVar1 = this_ptr->boxes[box_index].intensity_variance;
  fVar7 = (float)0.69999999999999996;
  this_ptr->boxes[box_index].red_variance =
       this_ptr->boxes[box_index].red_variance * (float)0.33000000000000002 * local_48;
  this_ptr->boxes[box_index].green_variance = fVar9 * fVar5 * local_34;
  fVar9 = this_ptr->boxes[box_index].green_variance;
  this_ptr->boxes[box_index].blue_variance = fVar8 * fVar6 * local_40;
  fVar8 = this_ptr->boxes[box_index].red_variance;
  this_ptr->boxes[box_index].intensity_variance = fVar1 * fVar7 * local_2c;
  fVar8 = core_bugs_cpp_maxFloat_FUN_00427ba0(fVar8,fVar9);
  fVar9 = this_ptr->boxes[box_index].blue_variance;
  this_ptr->boxes[box_index].final_metric = fVar8;
  fVar8 = core_bugs_cpp_maxFloat_FUN_00427ba0(this_ptr->boxes[box_index].final_metric,fVar9);
  fVar9 = this_ptr->boxes[box_index].intensity_variance;
  this_ptr->boxes[box_index].final_metric = fVar8;
  fVar9 = core_bugs_cpp_maxFloat_FUN_00427ba0(this_ptr->boxes[box_index].final_metric,fVar9);
  this_ptr->boxes[box_index].final_metric = fVar9;
  return;
}
