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
  uint uVar8;
  float fVar9;
  uint extraout_ECX;
  float extraout_ECX_00;
  int iVar10;
  int extraout_EDX;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  byte *pbVar19;
  double dVar20;
  float local_50;
  float local_44;
  float local_3c;
  float local_34;
  
  local_44 = 0.0;
  local_3c = 0.0;
  iVar18 = this_ptr->boxes[box_index].start_index;
  iVar10 = this_ptr->boxes[box_index].start_index + this_ptr->boxes[box_index].pixel_count;
  if (iVar18 < iVar10) {
    local_3c = 0.0;
    local_44 = 0.0;
    pbVar19 = (byte *)(iVar18 * 4 + (int)this_ptr->pixel_data);
    do {
      iVar18 = iVar18 + 1;
      local_44 = (float)*pbVar19 + local_44;
      local_3c = (float)pbVar19[2] + local_3c;
      pbVar19 = pbVar19 + 4;
    } while (iVar18 < iVar10);
  }
  dVar20 = crt_math_c_round_FUN_005fe6b0
                     ((double)(local_44 / (float)(uint)this_ptr->boxes[box_index].pixel_count));
  this_ptr->boxes[box_index].avg_red = (short)(int)ROUND(dVar20);
  dVar20 = crt_math_c_round_FUN_005fe6b0
                     ((double)(local_34 / (float)(uint)this_ptr->boxes[box_index].pixel_count));
  this_ptr->boxes[box_index].avg_green = (short)(int)ROUND(dVar20);
  dVar20 = crt_math_c_round_FUN_005fe6b0
                     ((double)(local_44 /
                              (float)CONCAT44 /* combine 2-byte values */(extraout_ECX,this_ptr->boxes[box_index].pixel_count)))
  ;
  this_ptr->boxes[box_index].avg_blue = (short)(int)ROUND(dVar20);
  iVar18 = this_ptr->boxes[box_index].pixel_count;
  this_ptr->boxes[box_index].red_variance = extraout_ECX_00;
  this_ptr->boxes[box_index].green_variance = extraout_ECX_00;
  this_ptr->boxes[box_index].blue_variance = extraout_ECX_00;
  this_ptr->boxes[box_index].intensity_variance = extraout_ECX_00;
  this_ptr->boxes[box_index].weighted_variance = extraout_ECX_00;
  dVar20 = crt_math_c_round_FUN_005fe6b0
                     ((double)(local_44 / (float)CONCAT44 /* combine 2-byte values */(extraout_ECX_00,iVar18)));
  this_ptr->boxes[box_index].avg_intensity = (short)(int)ROUND(dVar20);
  for (iVar18 = this_ptr->boxes[box_index].start_index * 4; iVar18 < extraout_EDX;
      iVar18 = iVar18 + 4) {
    uVar11 = (*(int *)((int)&this_ptr->boxes[box_index + -1].pixel_count + 2) >> 0x10) -
             (uint)*(byte *)(iVar18 + (int)this_ptr->pixel_data);
    uVar12 = (int)uVar11 >> 0x1f;
    iVar10._0_2_ = this_ptr->boxes[box_index].avg_red;
    iVar10._2_2_ = this_ptr->boxes[box_index].avg_green;
    uVar13 = (iVar10 >> 0x10) - (uint)*(byte *)(iVar18 + 1 + (int)this_ptr->pixel_data);
    uVar14 = (int)uVar13 >> 0x1f;
    iVar3._0_2_ = this_ptr->boxes[box_index].avg_green;
    iVar3._2_2_ = this_ptr->boxes[box_index].avg_blue;
    uVar8 = (iVar3 >> 0x10) - (uint)*(byte *)(iVar18 + 2 + (int)this_ptr->pixel_data);
    uVar15 = (int)uVar8 >> 0x1f;
    iVar4._0_2_ = this_ptr->boxes[box_index].avg_blue;
    iVar4._2_2_ = this_ptr->boxes[box_index].avg_intensity;
    uVar16 = (iVar4 >> 0x10) - (uint)*(byte *)(iVar18 + 3 + (int)this_ptr->pixel_data);
    uVar17 = (int)uVar16 >> 0x1f;
    fVar9 = (float)((uVar16 ^ uVar17) - uVar17);
    fVar7 = this_ptr->boxes[box_index].green_variance;
    fVar1 = this_ptr->boxes[box_index].blue_variance;
    fVar2 = this_ptr->boxes[box_index].intensity_variance;
    this_ptr->boxes[box_index].red_variance =
         this_ptr->boxes[box_index].red_variance + (float)(int)((uVar11 ^ uVar12) - uVar12);
    this_ptr->boxes[box_index].green_variance = fVar7 + (float)(int)((uVar13 ^ uVar14) - uVar14);
    this_ptr->boxes[box_index].blue_variance = fVar1 + (float)(int)((uVar8 ^ uVar15) - uVar15);
    this_ptr->boxes[box_index].intensity_variance = fVar2 + (float)(int)fVar9;
    fVar7 = (float)core_bugs_cpp_FUN_00427ba0();
    local_3c = (float)core_bugs_cpp_FUN_00427ba0();
    local_44 = (float)core_bugs_cpp_FUN_00427ba0();
    core_bugs_cpp_FUN_00427ba0();
    this_ptr->boxes[box_index].weighted_variance =
         local_3c * local_3c * (float)0.69999999999999996 +
         fVar9 * fVar9 * (float)0.11 +
         local_44 * local_44 * (float)0.58999999999999997 + fVar7 * fVar7 * (float)0.29999999999999999 +
         this_ptr->boxes[box_index].weighted_variance;
  }
  fVar7 = this_ptr->boxes[box_index].green_variance;
  fVar9 = (float)0.58999999999999997;
  fVar1 = this_ptr->boxes[box_index].blue_variance;
  fVar5 = (float)0.11;
  fVar2 = this_ptr->boxes[box_index].intensity_variance;
  fVar6 = (float)0.69999999999999996;
  this_ptr->boxes[box_index].red_variance =
       this_ptr->boxes[box_index].red_variance * (float)0.33000000000000002 * 0.0;
  this_ptr->boxes[box_index].green_variance = fVar7 * fVar9 * local_44;
  this_ptr->boxes[box_index].blue_variance = fVar1 * fVar5 * local_50;
  this_ptr->boxes[box_index].intensity_variance = fVar2 * fVar6 * local_3c;
  fVar7 = (float)core_bugs_cpp_FUN_00427ba0();
  this_ptr->boxes[box_index].final_metric = fVar7;
  fVar7 = (float)core_bugs_cpp_FUN_00427ba0();
  this_ptr->boxes[box_index].final_metric = fVar7;
  fVar7 = (float)core_bugs_cpp_FUN_00427ba0();
  this_ptr->boxes[box_index].final_metric = fVar7;
  return;
}
