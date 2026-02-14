// Name: shape_quantize.cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090
// Address: 00555090
// Address Range: [[00555090, 005554f9]]
// Convention: __cdecl
// Signature: void __cdecl shape_quantize_cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090(CColorQuantizer *this_ptr,int box_index)

#include "nocturne.h"

void __cdecl shape_quantize_cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090(CColorQuantizer *this_ptr,int box_index)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  byte *pbVar15;
  double dVar16;
  float local_58;
  float local_50;
  float local_44;
  float local_3c;
  float local_34;
  
  local_44 = 0.0;
  local_3c = 0.0;
  iVar14 = this_ptr->boxes[box_index].start_index;
  iVar11 = this_ptr->boxes[box_index].start_index + this_ptr->boxes[box_index].pixel_count;
  if (iVar14 < iVar11) {
    local_3c = 0.0;
    local_44 = 0.0;
    pbVar15 = (byte *)(iVar14 * 4 + (int)this_ptr->pixel_data);
    do {
      iVar14 = iVar14 + 1;
      local_44 = (float)*pbVar15 + local_44;
      local_3c = (float)pbVar15[2] + local_3c;
      pbVar15 = pbVar15 + 4;
    } while (iVar14 < iVar11);
  }
  dVar16 = round
                     ((double)(local_44 / (float)(uint)this_ptr->boxes[box_index].pixel_count));
  this_ptr->boxes[box_index].avg_red = (short)(int)ROUND(dVar16);
  local_58 = 0.0;
  dVar16 = round
                     ((double)(local_34 / (float)(uint)this_ptr->boxes[box_index].pixel_count));
  this_ptr->boxes[box_index].avg_green = (short)(int)ROUND(dVar16);
  dVar16 = round
                     ((double)(local_44 / (float)(uint)this_ptr->boxes[box_index].pixel_count));
  this_ptr->boxes[box_index].avg_blue = (short)(int)ROUND(dVar16);
  uVar12 = this_ptr->boxes[box_index].pixel_count;
  this_ptr->boxes[box_index].red_variance = 0.0;
  this_ptr->boxes[box_index].green_variance = 0.0;
  this_ptr->boxes[box_index].blue_variance = 0.0;
  this_ptr->boxes[box_index].intensity_variance = 0.0;
  this_ptr->boxes[box_index].weighted_variance = 0.0;
  dVar16 = round((double)(local_44 / (float)uVar12));
  this_ptr->boxes[box_index].avg_intensity = (short)(int)ROUND(dVar16);
  for (iVar14 = this_ptr->boxes[box_index].start_index * 4; iVar14 < iVar11 * 4; iVar14 = iVar14 + 4
      ) {
    uVar12 = (*(int *)((int)&this_ptr->boxes[box_index + -1].pixel_count + 2) >> 0x10) -
             (uint)*(byte *)(iVar14 + (int)this_ptr->pixel_data);
    uVar13 = (int)uVar12 >> 0x1f;
    fVar6 = (float)(int)((uVar12 ^ uVar13) - uVar13);
    iVar3._0_2_ = this_ptr->boxes[box_index].avg_red;
    iVar3._2_2_ = this_ptr->boxes[box_index].avg_green;
    uVar12 = (iVar3 >> 0x10) - (uint)*(byte *)(iVar14 + 1 + (int)this_ptr->pixel_data);
    uVar13 = (int)uVar12 >> 0x1f;
    iVar4._0_2_ = this_ptr->boxes[box_index].avg_green;
    iVar4._2_2_ = this_ptr->boxes[box_index].avg_blue;
    fVar7 = (float)(int)((uVar12 ^ uVar13) - uVar13);
    uVar12 = (iVar4 >> 0x10) - (uint)*(byte *)(iVar14 + 2 + (int)this_ptr->pixel_data);
    uVar13 = (int)uVar12 >> 0x1f;
    fVar8 = (float)(int)((uVar12 ^ uVar13) - uVar13);
    iVar5._0_2_ = this_ptr->boxes[box_index].avg_blue;
    iVar5._2_2_ = this_ptr->boxes[box_index].avg_intensity;
    uVar12 = (iVar5 >> 0x10) - (uint)*(byte *)(iVar14 + 3 + (int)this_ptr->pixel_data);
    uVar13 = (int)uVar12 >> 0x1f;
    fVar10 = this_ptr->boxes[box_index].green_variance;
    fVar1 = this_ptr->boxes[box_index].blue_variance;
    fVar2 = this_ptr->boxes[box_index].intensity_variance;
    fVar9 = (float)(int)((uVar12 ^ uVar13) - uVar13);
    this_ptr->boxes[box_index].red_variance = this_ptr->boxes[box_index].red_variance + fVar6;
    this_ptr->boxes[box_index].green_variance = fVar10 + fVar7;
    this_ptr->boxes[box_index].blue_variance = fVar1 + fVar8;
    this_ptr->boxes[box_index].intensity_variance = fVar2 + fVar9;
    local_58 = core_bugs_cpp_FUN_00427ba0();
    local_44 = core_bugs_cpp_FUN_00427ba0();
    local_50 = core_bugs_cpp_FUN_00427ba0();
    local_3c = core_bugs_cpp_FUN_00427ba0();
    this_ptr->boxes[box_index].weighted_variance =
         fVar9 * fVar9 * (float)0.69999999999999996 +
         fVar8 * fVar8 * (float)0.11 +
         fVar7 * fVar7 * (float)0.58999999999999997 + fVar6 * fVar6 * (float)0.29999999999999999 +
         this_ptr->boxes[box_index].weighted_variance;
  }
  fVar10 = this_ptr->boxes[box_index].green_variance;
  fVar6 = (float)0.58999999999999997;
  fVar1 = this_ptr->boxes[box_index].blue_variance;
  fVar7 = (float)0.11;
  fVar2 = this_ptr->boxes[box_index].intensity_variance;
  fVar8 = (float)0.69999999999999996;
  this_ptr->boxes[box_index].red_variance =
       this_ptr->boxes[box_index].red_variance * (float)0.33000000000000002 * local_58;
  this_ptr->boxes[box_index].green_variance = fVar10 * fVar6 * local_44;
  this_ptr->boxes[box_index].blue_variance = fVar1 * fVar7 * local_50;
  this_ptr->boxes[box_index].intensity_variance = fVar2 * fVar8 * local_3c;
  fVar10 = core_bugs_cpp_FUN_00427ba0();
  this_ptr->boxes[box_index].final_metric = fVar10;
  fVar10 = core_bugs_cpp_FUN_00427ba0();
  this_ptr->boxes[box_index].final_metric = fVar10;
  fVar10 = core_bugs_cpp_FUN_00427ba0();
  this_ptr->boxes[box_index].final_metric = fVar10;
  return;
}
