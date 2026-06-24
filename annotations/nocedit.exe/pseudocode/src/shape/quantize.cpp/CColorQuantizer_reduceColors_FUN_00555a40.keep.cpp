// Name: shape_quantize.cpp_CColorQuantizer_reduceColors_FUN_00555a40
// Address: 00555a40
// MANUAL RECONSTRUCTION
// Address Range: [[00555a40, 00555fe4]]
// Convention: __cdecl
// Signature: int __cdecl shape_quantize_cpp_CColorQuantizer_reduceColors_FUN_00555a40(CColorQuantizer *this_ptr)

#include "nocturne.h"

int __cdecl shape_quantize_cpp_CColorQuantizer_reduceColors_FUN_00555a40(CColorQuantizer *this_ptr)

{
  int iVar3;
  int iVar1;
  uint *puVar2;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int iVar5;
  int iVar8;
  int iVar9;
  int iVar7;
  float local_60;
  float local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  byte *pb;
  uint uVar1;

  pb = (byte *)this_ptr->pixel_data;
  local_48 = 0;
  iVar5 = local_48;
  while( true ) {
    local_48 = iVar5;
    iVar3 = this_ptr->num_colors + -1;
    if (iVar3 <= local_48) {
      return 1;
    }
    if ((this_ptr->progress_callback != (CColorQuantizer_ProgressCallback *)0x0) &&
       (iVar5 = (*this_ptr->progress_callback)("Phase 2",iVar3,local_48), iVar5 != 0))
    break;
    local_4c = 0;
    local_60 = this_ptr->boxes[0].weighted_variance;
    iVar5 = 1;
    local_50 = this_ptr->boxes[0].final_metric;
    if (0 < local_48) {
      do {
        if (local_60 < this_ptr->boxes[iVar5].weighted_variance) {
          local_60 = this_ptr->boxes[iVar5].weighted_variance;
          local_50 = this_ptr->boxes[iVar5].final_metric;
          local_4c = iVar5;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 <= local_48);
    }
    if (local_60 <= 0.0) {
      return 1;
    }
    iVar5 = local_48 + 1;
    if (local_50 == this_ptr->boxes[local_4c].red_variance) {
      local_30 = this_ptr->boxes[local_4c].start_index;
      iVar8 = local_30 + this_ptr->boxes[local_4c].pixel_count + -1;
      iVar9 = (int)this_ptr->boxes[local_4c].avg_red;
      if (local_30 < iVar8) {
        local_44 = local_30 * 4;
        do {
          if (iVar9 < (int)(uint)pb[local_44]) {
            for (iVar1 = iVar8 * 4;
                (local_30 * 4 < iVar1 &&
                (iVar9 < (int)(uint)pb[iVar1]));
                iVar1 = iVar1 + -4) {
              iVar8 = iVar8 + -1;
            }
            puVar2 = (uint *)(local_44 + pb);
            uVar1 = *puVar2;
            *puVar2 = *(uint *)(pb + iVar8 * 4);
            *(uint *)(pb + iVar8 * 4) = uVar1;
          }
          local_44 = local_44 + 4;
          local_30 = local_30 + 1;
        } while (local_30 < iVar8);
      }
      iVar9 = this_ptr->boxes[local_4c].pixel_count;
      iVar1 = iVar8 - this_ptr->boxes[local_4c].start_index;
      this_ptr->boxes[local_48 + 1].start_index = iVar8;
      this_ptr->boxes[local_48 + 1].pixel_count = this_ptr->boxes[local_4c].pixel_count - iVar1;
      this_ptr->boxes[local_4c].pixel_count = iVar1;
      shape_quantize_cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090(this_ptr,local_4c);
      shape_quantize_cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090(this_ptr,iVar5);
      this_ptr->boxes[local_4c].pixel_count = iVar9;
      shape_quantize_cpp_CColorQuantizer_splitBox_FUN_00554e70(this_ptr,local_4c,iVar5);
    }
    else if (local_50 == this_ptr->boxes[local_4c].green_variance) {
      local_2c = this_ptr->boxes[local_4c].start_index;
      iVar9 = (int)this_ptr->boxes[local_4c].avg_green;
      iVar8 = local_2c + this_ptr->boxes[local_4c].pixel_count + -1;
      if (local_2c < iVar8) {
        local_38 = local_2c * 4;
        do {
          if (iVar9 < (int)(uint)pb[local_38 + 1]) {
            iVar1 = iVar8 * 4;
            while ((local_2c * 4 < iVar1 &&
                   (iVar9 < (int)(uint)pb[iVar1 + 1]))) {
              iVar8 = iVar8 + -1;
              iVar1 = iVar1 + -4;
            }
            puVar2 = (uint *)(local_38 + pb);
            uVar1 = *puVar2;
            *puVar2 = *(uint *)(pb + iVar8 * 4);
            *(uint *)(pb + iVar8 * 4) = uVar1;
          }
          local_38 = local_38 + 4;
          local_2c = local_2c + 1;
        } while (local_2c < iVar8);
      }
      iVar9 = this_ptr->boxes[local_4c].pixel_count;
      iVar1 = iVar8 - this_ptr->boxes[local_4c].start_index;
      this_ptr->boxes[local_48 + 1].start_index = iVar8;
      this_ptr->boxes[local_48 + 1].pixel_count = this_ptr->boxes[local_4c].pixel_count - iVar1;
      this_ptr->boxes[local_4c].pixel_count = iVar1;
      shape_quantize_cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090(this_ptr,local_4c);
      shape_quantize_cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090(this_ptr,iVar5);
      this_ptr->boxes[local_4c].pixel_count = iVar9;
      shape_quantize_cpp_CColorQuantizer_splitBox_FUN_00554e70(this_ptr,local_4c,iVar5);
    }
    else if (local_50 == this_ptr->boxes[local_4c].blue_variance) {
      local_34 = this_ptr->boxes[local_4c].start_index;
      iVar8 = (int)this_ptr->boxes[local_4c].avg_blue;
      iVar9 = local_34 + this_ptr->boxes[local_4c].pixel_count + -1;
      if (local_34 < iVar9) {
        local_40 = local_34 * 4;
        do {
          if (iVar8 < (int)(uint)pb[local_40 + 2]) {
            iVar1 = iVar9 * 4;
            while ((local_34 * 4 < iVar1 &&
                   (iVar8 < (int)(uint)pb[iVar1 + 2]))) {
              iVar9 = iVar9 + -1;
              iVar1 = iVar1 + -4;
            }
            puVar2 = (uint *)(local_40 + pb);
            uVar1 = *puVar2;
            *puVar2 = *(uint *)(pb + iVar9 * 4);
            *(uint *)(pb + iVar9 * 4) = uVar1;
          }
          local_40 = local_40 + 4;
          local_34 = local_34 + 1;
        } while (local_34 < iVar9);
      }
      iVar8 = this_ptr->boxes[local_4c].pixel_count;
      iVar1 = iVar9 - this_ptr->boxes[local_4c].start_index;
      this_ptr->boxes[local_48 + 1].start_index = iVar9;
      this_ptr->boxes[local_48 + 1].pixel_count = this_ptr->boxes[local_4c].pixel_count - iVar1;
      this_ptr->boxes[local_4c].pixel_count = iVar1;
      shape_quantize_cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090(this_ptr,local_4c);
      shape_quantize_cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090(this_ptr,iVar5);
      this_ptr->boxes[local_4c].pixel_count = iVar8;
      shape_quantize_cpp_CColorQuantizer_splitBox_FUN_00554e70(this_ptr,local_4c,iVar5);
    }
    else if (local_50 == this_ptr->boxes[local_4c].intensity_variance) {
      local_28 = this_ptr->boxes[local_4c].start_index;
      iVar1 = (int)this_ptr->boxes[local_4c].avg_intensity;
      iVar7 = local_28 + this_ptr->boxes[local_4c].pixel_count + -1;
      if (local_28 < iVar7) {
        local_3c = local_28 * 4;
        do {
          if (iVar1 < (int)(uint)pb[local_3c + 3]) {
            iVar4 = iVar7 * 4;
            while ((local_28 * 4 < iVar4 &&
                   (iVar1 < (int)(uint)pb[iVar4 + 3]))) {
              iVar7 = iVar7 + -1;
              iVar4 = iVar4 + -4;
            }
            puVar5 = (uint *)(local_3c + pb);
            uVar1 = *puVar5;
            *puVar5 = *(uint *)(pb + iVar7 * 4);
            *(uint *)(pb + iVar7 * 4) = uVar1;
          }
          local_3c = local_3c + 4;
          local_28 = local_28 + 1;
        } while (local_28 < iVar7);
      }
      iVar6 = iVar7 - this_ptr->boxes[local_4c].start_index;
      iVar9 = this_ptr->boxes[local_4c].pixel_count;
      this_ptr->boxes[local_48 + 1].start_index = iVar7;
      this_ptr->boxes[local_48 + 1].pixel_count = this_ptr->boxes[local_4c].pixel_count - iVar6;
      this_ptr->boxes[local_4c].pixel_count = iVar6;
      shape_quantize_cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090(this_ptr,local_4c);
      shape_quantize_cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090(this_ptr,iVar5);
      this_ptr->boxes[local_4c].pixel_count = iVar9;
      shape_quantize_cpp_CColorQuantizer_splitBox_FUN_00554e70(this_ptr,local_4c,iVar5);
    }
  }
  return 0;
}
