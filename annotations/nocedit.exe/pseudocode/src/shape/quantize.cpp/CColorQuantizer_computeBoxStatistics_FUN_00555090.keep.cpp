// Name: shape_quantize.cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090
// Address: 00555090
// MANUAL RECONSTRUCTION
// Address Range: [[00555090, 005554f9]]
// Convention: __cdecl
// Signature: void __cdecl shape_quantize_cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090(CColorQuantizer *this_ptr,int box_index)

#include "nocturne.h"

void __cdecl shape_quantize_cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090(CColorQuantizer *this_ptr,int box_index)

{
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar10;
  float fVar8;
  float fVar11;
  float fVar9;
  int iVar10;
  uint uVar11;
  uint uVar13;
  int iVar13;
  byte *pbVar14;
  int iVar15;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float fVar7;
  float b;
  float fVar5;
  float fVar6;
  float fVar1;
  
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
    pbVar14 = (byte *)this_ptr->pixel_data + iVar13 * 4;
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
  uVar13 = this_ptr->boxes[box_index].pixel_count;
  this_ptr->boxes[box_index].red_variance = 0.0;
  local_48 = 0.0;
  this_ptr->boxes[box_index].green_variance = 0.0;
  local_34 = 0.0;
  this_ptr->boxes[box_index].blue_variance = 0.0;
  local_40 = 0.0;
  this_ptr->boxes[box_index].intensity_variance = 0.0;
  local_2c = 0.0;
  this_ptr->boxes[box_index].weighted_variance = 0.0;
  this_ptr->boxes[box_index].avg_intensity = (short)(int)ROUND(ROUND(local_38 / (float)uVar13));
  pbVar14 = (byte *)this_ptr->pixel_data;
  for (iVar15 = this_ptr->boxes[box_index].start_index * 4; iVar15 < iVar10 * 4; iVar15 = iVar15 + 4
      ) {
    uVar11 = (int)this_ptr->boxes[box_index].avg_red - (uint)pbVar14[iVar15];
    fVar5 = (float)ABS((int)uVar11);
    uVar13 = (int)this_ptr->boxes[box_index].avg_green - (uint)pbVar14[iVar15 + 1];
    fVar6 = (float)ABS((int)uVar13);
    uVar13 = (int)this_ptr->boxes[box_index].avg_blue - (uint)pbVar14[iVar15 + 2];
    fVar7 = (float)ABS((int)uVar13);
    uVar13 = (int)this_ptr->boxes[box_index].avg_intensity - (uint)pbVar14[iVar15 + 3];
    fVar2 = this_ptr->boxes[box_index].green_variance;
    fVar11 = this_ptr->boxes[box_index].blue_variance;
    fVar3 = this_ptr->boxes[box_index].intensity_variance;
    b = (float)ABS((int)uVar13);
    this_ptr->boxes[box_index].red_variance = this_ptr->boxes[box_index].red_variance + fVar5;
    this_ptr->boxes[box_index].green_variance = fVar2 + fVar6;
    this_ptr->boxes[box_index].blue_variance = fVar11 + fVar7;
    this_ptr->boxes[box_index].intensity_variance = fVar3 + b;
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
  fVar2 = this_ptr->boxes[box_index].green_variance;
  fVar3 = (float)0.58999999999999997;
  fVar11 = this_ptr->boxes[box_index].blue_variance;
  fVar4 = (float)0.11;
  fVar1 = this_ptr->boxes[box_index].intensity_variance;
  fVar10 = (float)0.69999999999999996;
  this_ptr->boxes[box_index].red_variance =
       this_ptr->boxes[box_index].red_variance * (float)0.33000000000000002 * local_48;
  this_ptr->boxes[box_index].green_variance = fVar2 * fVar3 * local_34;
  fVar2 = this_ptr->boxes[box_index].green_variance;
  this_ptr->boxes[box_index].blue_variance = fVar11 * fVar4 * local_40;
  fVar11 = this_ptr->boxes[box_index].red_variance;
  this_ptr->boxes[box_index].intensity_variance = fVar1 * fVar10 * local_2c;
  fVar8 = core_bugs_cpp_maxFloat_FUN_00427ba0(fVar11,fVar2);
  fVar2 = this_ptr->boxes[box_index].blue_variance;
  this_ptr->boxes[box_index].final_metric = fVar8;
  fVar11 = core_bugs_cpp_maxFloat_FUN_00427ba0(this_ptr->boxes[box_index].final_metric,fVar2);
  fVar2 = this_ptr->boxes[box_index].intensity_variance;
  this_ptr->boxes[box_index].final_metric = fVar11;
  fVar9 = core_bugs_cpp_maxFloat_FUN_00427ba0(this_ptr->boxes[box_index].final_metric,fVar2);
  this_ptr->boxes[box_index].final_metric = fVar9;
  return;
}
