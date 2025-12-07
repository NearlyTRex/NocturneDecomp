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
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  float fVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  byte *pbVar20;
  double dVar21;
  float local_50;
  float local_44;
  float local_3c;
  float local_34;
  
  local_44 = 0.0;
  local_3c = 0.0;
  iVar19 = this_ptr->boxes[box_index].start_index;
  iVar11 = this_ptr->boxes[box_index].start_index + this_ptr->boxes[box_index].pixel_count;
  if (iVar19 < iVar11) {
    local_3c = 0.0;
    local_44 = 0.0;
    pbVar20 = (byte *)(iVar19 * 4 + (int)this_ptr->pixel_data);
    do {
      iVar19 = iVar19 + 1;
      local_44 = (float)*pbVar20 + local_44;
      local_3c = (float)pbVar20[2] + local_3c;
      pbVar20 = pbVar20 + 4;
    } while (iVar19 < iVar11);
  }
  dVar21 = crt_math_c_round_FUN_005fe6b0
                     ((double)(local_44 / (float)(uint)this_ptr->boxes[box_index].pixel_count));
  this_ptr->boxes[box_index].avg_red = (short)(int)ROUND(dVar21);
  dVar21 = crt_math_c_round_FUN_005fe6b0
                     ((double)(local_34 / (float)(uint)this_ptr->boxes[box_index].pixel_count));
  this_ptr->boxes[box_index].avg_green = (short)(int)ROUND(dVar21);
  dVar21 = crt_math_c_round_FUN_005fe6b0
                     ((double)(local_44 / (float)(uint)this_ptr->boxes[box_index].pixel_count));
  this_ptr->boxes[box_index].avg_blue = (short)(int)ROUND(dVar21);
  uVar9 = this_ptr->boxes[box_index].pixel_count;
  this_ptr->boxes[box_index].red_variance = 0.0;
  this_ptr->boxes[box_index].green_variance = 0.0;
  this_ptr->boxes[box_index].blue_variance = 0.0;
  this_ptr->boxes[box_index].intensity_variance = 0.0;
  this_ptr->boxes[box_index].weighted_variance = 0.0;
  dVar21 = crt_math_c_round_FUN_005fe6b0((double)(local_44 / (float)uVar9));
  this_ptr->boxes[box_index].avg_intensity = (short)(int)ROUND(dVar21);
  for (iVar19 = this_ptr->boxes[box_index].start_index * 4; iVar19 < iVar11 * 4; iVar19 = iVar19 + 4
      ) {
    uVar12 = (*(int *)((int)&this_ptr->boxes[box_index + -1].pixel_count + 2) >> 0x10) -
             (uint)*(byte *)(iVar19 + (int)this_ptr->pixel_data);
    uVar13 = (int)uVar12 >> 0x1f;
    iVar3._0_2_ = this_ptr->boxes[box_index].avg_red;
    iVar3._2_2_ = this_ptr->boxes[box_index].avg_green;
    uVar14 = (iVar3 >> 0x10) - (uint)*(byte *)(iVar19 + 1 + (int)this_ptr->pixel_data);
    uVar15 = (int)uVar14 >> 0x1f;
    iVar4._0_2_ = this_ptr->boxes[box_index].avg_green;
    iVar4._2_2_ = this_ptr->boxes[box_index].avg_blue;
    uVar9 = (iVar4 >> 0x10) - (uint)*(byte *)(iVar19 + 2 + (int)this_ptr->pixel_data);
    uVar16 = (int)uVar9 >> 0x1f;
    iVar5._0_2_ = this_ptr->boxes[box_index].avg_blue;
    iVar5._2_2_ = this_ptr->boxes[box_index].avg_intensity;
    uVar17 = (iVar5 >> 0x10) - (uint)*(byte *)(iVar19 + 3 + (int)this_ptr->pixel_data);
    uVar18 = (int)uVar17 >> 0x1f;
    fVar10 = (float)((uVar17 ^ uVar18) - uVar18);
    fVar8 = this_ptr->boxes[box_index].green_variance;
    fVar1 = this_ptr->boxes[box_index].blue_variance;
    fVar2 = this_ptr->boxes[box_index].intensity_variance;
    this_ptr->boxes[box_index].red_variance =
         this_ptr->boxes[box_index].red_variance + (float)(int)((uVar12 ^ uVar13) - uVar13);
    this_ptr->boxes[box_index].green_variance = fVar8 + (float)(int)((uVar14 ^ uVar15) - uVar15);
    this_ptr->boxes[box_index].blue_variance = fVar1 + (float)(int)((uVar9 ^ uVar16) - uVar16);
    this_ptr->boxes[box_index].intensity_variance = fVar2 + (float)(int)fVar10;
    fVar8 = (float)core_bugs_cpp_FUN_00427ba0();
    local_3c = (float)core_bugs_cpp_FUN_00427ba0();
    local_44 = (float)core_bugs_cpp_FUN_00427ba0();
    core_bugs_cpp_FUN_00427ba0();
    this_ptr->boxes[box_index].weighted_variance =
         local_3c * local_3c * (float)0.69999999999999996 +
         fVar10 * fVar10 * (float)0.11 +
         local_44 * local_44 * (float)0.58999999999999997 + fVar8 * fVar8 * (float)0.29999999999999999 +
         this_ptr->boxes[box_index].weighted_variance;
  }
  fVar8 = this_ptr->boxes[box_index].green_variance;
  fVar10 = (float)0.58999999999999997;
  fVar1 = this_ptr->boxes[box_index].blue_variance;
  fVar6 = (float)0.11;
  fVar2 = this_ptr->boxes[box_index].intensity_variance;
  fVar7 = (float)0.69999999999999996;
  this_ptr->boxes[box_index].red_variance =
       this_ptr->boxes[box_index].red_variance * (float)0.33000000000000002 * 0.0;
  this_ptr->boxes[box_index].green_variance = fVar8 * fVar10 * local_44;
  this_ptr->boxes[box_index].blue_variance = fVar1 * fVar6 * local_50;
  this_ptr->boxes[box_index].intensity_variance = fVar2 * fVar7 * local_3c;
  fVar8 = (float)core_bugs_cpp_FUN_00427ba0();
  this_ptr->boxes[box_index].final_metric = fVar8;
  fVar8 = (float)core_bugs_cpp_FUN_00427ba0();
  this_ptr->boxes[box_index].final_metric = fVar8;
  fVar8 = (float)core_bugs_cpp_FUN_00427ba0();
  this_ptr->boxes[box_index].final_metric = fVar8;
  return;
}
