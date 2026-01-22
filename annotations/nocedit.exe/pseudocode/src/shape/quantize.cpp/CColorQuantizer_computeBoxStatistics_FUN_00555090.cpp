// Name: shape_quantize.cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090
// Address: 00555090
// Address Range: [[00555090, 005554f9]]
// Convention: __cdecl
// Signature: void shape_quantize.cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090(CColorQuantizer * this_ptr, int box_index)

#include "nocturne.h"

void __cdecl
shape_quantize_cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090
          (CColorQuantizer *this_ptr,int box_index)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint extraout_ECX;
  float extraout_ECX_00;
  int iVar10;
  int extraout_EDX;
  uint uVar11;
  uint uVar12;
  int iVar13;
  byte *pbVar14;
  double dVar15;
  float local_58;
  float local_50;
  float local_44;
  float local_3c;
  float local_34;
  
  local_44 = 0.0;
  local_3c = 0.0;
  iVar13 = this_ptr->boxes[box_index].start_index;
  iVar10 = this_ptr->boxes[box_index].start_index + this_ptr->boxes[box_index].pixel_count;
  if (iVar13 < iVar10) {
    local_3c = 0.0;
    local_44 = 0.0;
    pbVar14 = (byte *)(iVar13 * 4 + (int)this_ptr->pixel_data);
    do {
      iVar13 = iVar13 + 1;
      local_44 = (float)*pbVar14 + local_44;
      local_3c = (float)pbVar14[2] + local_3c;
      pbVar14 = pbVar14 + 4;
    } while (iVar13 < iVar10);
  }
  dVar15 = crt_math_c_round_FUN_005fe6b0
                     ((double)(local_44 / (float)(uint)this_ptr->boxes[box_index].pixel_count));
  this_ptr->boxes[box_index].avg_red = (short)(int)ROUND(dVar15);
  local_58 = 0.0;
  dVar15 = crt_math_c_round_FUN_005fe6b0
                     ((double)(local_34 / (float)(uint)this_ptr->boxes[box_index].pixel_count));
  this_ptr->boxes[box_index].avg_green = (short)(int)ROUND(dVar15);
  dVar15 = crt_math_c_round_FUN_005fe6b0
                     ((double)(local_44 /
                              (float)CONCAT44(extraout_ECX,this_ptr->boxes[box_index].pixel_count)))
  ;
  this_ptr->boxes[box_index].avg_blue = (short)(int)ROUND(dVar15);
  iVar13 = this_ptr->boxes[box_index].pixel_count;
  this_ptr->boxes[box_index].red_variance = extraout_ECX_00;
  this_ptr->boxes[box_index].green_variance = extraout_ECX_00;
  this_ptr->boxes[box_index].blue_variance = extraout_ECX_00;
  this_ptr->boxes[box_index].intensity_variance = extraout_ECX_00;
  this_ptr->boxes[box_index].weighted_variance = extraout_ECX_00;
  dVar15 = crt_math_c_round_FUN_005fe6b0
                     ((double)(local_44 / (float)CONCAT44(extraout_ECX_00,iVar13)));
  this_ptr->boxes[box_index].avg_intensity = (short)(int)ROUND(dVar15);
  for (iVar13 = this_ptr->boxes[box_index].start_index * 4; iVar13 < extraout_EDX;
      iVar13 = iVar13 + 4) {
    uVar11 = (*(int *)((int)&this_ptr->boxes[box_index + -1].pixel_count + 2) >> 0x10) -
             (uint)*(byte *)(iVar13 + (int)this_ptr->pixel_data);
    uVar12 = (int)uVar11 >> 0x1f;
    fVar5 = (float)(int)((uVar11 ^ uVar12) - uVar12);
    iVar10._0_2_ = this_ptr->boxes[box_index].avg_red;
    iVar10._2_2_ = this_ptr->boxes[box_index].avg_green;
    uVar11 = (iVar10 >> 0x10) - (uint)*(byte *)(iVar13 + 1 + (int)this_ptr->pixel_data);
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
    fVar1 = this_ptr->boxes[box_index].blue_variance;
    fVar2 = this_ptr->boxes[box_index].intensity_variance;
    fVar8 = (float)(int)((uVar11 ^ uVar12) - uVar12);
    this_ptr->boxes[box_index].red_variance = this_ptr->boxes[box_index].red_variance + fVar5;
    this_ptr->boxes[box_index].green_variance = fVar9 + fVar6;
    this_ptr->boxes[box_index].blue_variance = fVar1 + fVar7;
    this_ptr->boxes[box_index].intensity_variance = fVar2 + fVar8;
    local_58 = (float)core_bugs_cpp_FUN_00427ba0();
    local_44 = (float)core_bugs_cpp_FUN_00427ba0();
    local_50 = (float)core_bugs_cpp_FUN_00427ba0();
    local_3c = (float)core_bugs_cpp_FUN_00427ba0();
    this_ptr->boxes[box_index].weighted_variance =
         fVar8 * fVar8 * (float)0.69999999999999996 +
         fVar7 * fVar7 * (float)0.11 +
         fVar6 * fVar6 * (float)0.58999999999999997 + fVar5 * fVar5 * (float)0.29999999999999999 +
         this_ptr->boxes[box_index].weighted_variance;
  }
  fVar9 = this_ptr->boxes[box_index].green_variance;
  fVar5 = (float)0.58999999999999997;
  fVar1 = this_ptr->boxes[box_index].blue_variance;
  fVar6 = (float)0.11;
  fVar2 = this_ptr->boxes[box_index].intensity_variance;
  fVar7 = (float)0.69999999999999996;
  this_ptr->boxes[box_index].red_variance =
       this_ptr->boxes[box_index].red_variance * (float)0.33000000000000002 * local_58;
  this_ptr->boxes[box_index].green_variance = fVar9 * fVar5 * local_44;
  this_ptr->boxes[box_index].blue_variance = fVar1 * fVar6 * local_50;
  this_ptr->boxes[box_index].intensity_variance = fVar2 * fVar7 * local_3c;
  fVar9 = (float)core_bugs_cpp_FUN_00427ba0();
  this_ptr->boxes[box_index].final_metric = fVar9;
  fVar9 = (float)core_bugs_cpp_FUN_00427ba0();
  this_ptr->boxes[box_index].final_metric = fVar9;
  fVar9 = (float)core_bugs_cpp_FUN_00427ba0();
  this_ptr->boxes[box_index].final_metric = fVar9;
  return;
}
