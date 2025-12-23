// Name: shape_quantize.cpp_CColorQuantizer_reduceColors_FUN_00555a40
// Address: 00555a40
// Address Range: [[00555a40, 00555fe4]]
// Convention: __cdecl
// Signature: int shape_quantize.cpp_CColorQuantizer_reduceColors_FUN_00555a40(CColorQuantizer * this_ptr)

#include "nocturne.h"

int __cdecl shape_quantize_cpp_CColorQuantizer_reduceColors_FUN_00555a40(CColorQuantizer *this_ptr)

{
  uint uVar1;
  CColorQuantizer *pCVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  int local_50;
  float local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  iVar3 = local_44;
  while( true ) {
    local_44 = iVar3;
    iVar3 = this_ptr->num_colors + -1;
    if (iVar3 <= local_44) {
      return 1;
    }
    if ((this_ptr->progress_callback != (CColorQuantizer_ProgressCallback *)0x0) &&
       (iVar3 = (*this_ptr->progress_callback)("Phase 2",iVar3,local_44), iVar3 != 0))
    break;
    local_48 = 0;
    fVar8 = this_ptr->boxes[0].weighted_variance;
    iVar3 = 1;
    local_4c = this_ptr->boxes[0].final_metric;
    pCVar2 = this_ptr;
    if (0 < local_44) {
      do {
        if (fVar8 < pCVar2->boxes[1].weighted_variance) {
          fVar8 = pCVar2->boxes[1].weighted_variance;
          local_4c = pCVar2->boxes[1].final_metric;
          local_48 = iVar3;
        }
        iVar3 = iVar3 + 1;
        pCVar2 = (CColorQuantizer *)&pCVar2->current_b;
      } while (iVar3 <= local_44);
    }
    if (fVar8 <= 0.0) {
      return 1;
    }
    iVar3 = local_44 + 1;
    if (local_4c == this_ptr->boxes[local_48].red_variance) {
      local_2c = this_ptr->boxes[local_48].start_index;
      iVar4 = local_2c + this_ptr->boxes[local_48].pixel_count + -1;
      iVar7 = *(int *)((int)&this_ptr->boxes[local_48 + -1].pixel_count + 2) >> 0x10;
      if (local_2c < iVar4) {
        local_40 = local_2c * 4;
        do {
          if (iVar7 < (int)(uint)*(byte *)((int)this_ptr->pixel_data + local_40)) {
            for (iVar6 = iVar4 * 4;
                (local_2c * 4 < iVar6 &&
                (iVar7 < (int)(uint)*(byte *)((int)this_ptr->pixel_data + iVar6)));
                iVar6 = iVar6 + -4) {
              iVar4 = iVar4 + -1;
            }
            puVar5 = (uint *)(local_40 + (int)this_ptr->pixel_data);
            uVar1 = *puVar5;
            *puVar5 = *(uint *)((int)this_ptr->pixel_data + iVar4 * 4);
            *(uint *)((int)this_ptr->pixel_data + iVar4 * 4) = uVar1;
          }
          local_40 = local_40 + 4;
          local_2c = local_2c + 1;
        } while (local_2c < iVar4);
      }
      iVar7 = iVar4 - this_ptr->boxes[local_48].start_index;
      this_ptr->boxes[local_44 + 1].start_index = iVar4;
      this_ptr->boxes[local_44 + 1].pixel_count = this_ptr->boxes[local_48].pixel_count - iVar7;
      this_ptr->boxes[local_48].pixel_count = iVar7;
      shape_quantize_cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090(this_ptr,local_48);
      shape_quantize_cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090(this_ptr,iVar3);
      this_ptr->boxes[local_48].pixel_count = local_50;
      shape_quantize_cpp_CColorQuantizer_splitBox_FUN_00554e70(this_ptr,local_40,iVar3);
    }
    else if (local_4c == this_ptr->boxes[local_48].green_variance) {
      local_28 = this_ptr->boxes[local_48].start_index;
      iVar7._0_2_ = this_ptr->boxes[local_48].avg_red;
      iVar7._2_2_ = this_ptr->boxes[local_48].avg_green;
      iVar4 = local_28 + this_ptr->boxes[local_48].pixel_count + -1;
      if (local_28 < iVar4) {
        local_34 = local_28 * 4;
        do {
          if (iVar7 >> 0x10 < (int)(uint)*(byte *)((int)this_ptr->pixel_data + local_34 + 1)) {
            iVar6 = iVar4 * 4;
            while ((local_28 * 4 < iVar6 &&
                   (iVar7 >> 0x10 < (int)(uint)*(byte *)((int)this_ptr->pixel_data + iVar6 + 1)))) {
              iVar4 = iVar4 + -1;
              iVar6 = iVar6 + -4;
            }
            puVar5 = (uint *)(local_34 + (int)this_ptr->pixel_data);
            uVar1 = *puVar5;
            *puVar5 = *(uint *)((int)this_ptr->pixel_data + iVar4 * 4);
            *(uint *)((int)this_ptr->pixel_data + iVar4 * 4) = uVar1;
          }
          local_34 = local_34 + 4;
          local_28 = local_28 + 1;
        } while (local_28 < iVar4);
      }
      iVar7 = iVar4 - this_ptr->boxes[local_48].start_index;
      this_ptr->boxes[local_44 + 1].start_index = iVar4;
      this_ptr->boxes[local_44 + 1].pixel_count = this_ptr->boxes[local_48].pixel_count - iVar7;
      this_ptr->boxes[local_48].pixel_count = iVar7;
      shape_quantize_cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090(this_ptr,local_48);
      shape_quantize_cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090(this_ptr,iVar3);
      this_ptr->boxes[local_48].pixel_count = (int)local_4c;
      shape_quantize_cpp_CColorQuantizer_splitBox_FUN_00554e70(this_ptr,local_40,iVar3);
    }
    else if (local_4c == this_ptr->boxes[local_48].blue_variance) {
      local_30 = this_ptr->boxes[local_48].start_index;
      iVar4._0_2_ = this_ptr->boxes[local_48].avg_green;
      iVar4._2_2_ = this_ptr->boxes[local_48].avg_blue;
      iVar7 = local_30 + this_ptr->boxes[local_48].pixel_count + -1;
      if (local_30 < iVar7) {
        local_3c = local_30 * 4;
        do {
          if (iVar4 >> 0x10 < (int)(uint)*(byte *)((int)this_ptr->pixel_data + local_3c + 2)) {
            iVar6 = iVar7 * 4;
            while ((local_30 * 4 < iVar6 &&
                   (iVar4 >> 0x10 < (int)(uint)*(byte *)((int)this_ptr->pixel_data + iVar6 + 2)))) {
              iVar7 = iVar7 + -1;
              iVar6 = iVar6 + -4;
            }
            puVar5 = (uint *)(local_3c + (int)this_ptr->pixel_data);
            uVar1 = *puVar5;
            *puVar5 = *(uint *)((int)this_ptr->pixel_data + iVar7 * 4);
            *(uint *)((int)this_ptr->pixel_data + iVar7 * 4) = uVar1;
          }
          local_3c = local_3c + 4;
          local_30 = local_30 + 1;
        } while (local_30 < iVar7);
      }
      local_50 = this_ptr->boxes[local_48].pixel_count;
      iVar4 = iVar7 - this_ptr->boxes[local_48].start_index;
      this_ptr->boxes[local_44 + 1].start_index = iVar7;
      this_ptr->boxes[local_44 + 1].pixel_count = this_ptr->boxes[local_48].pixel_count - iVar4;
      this_ptr->boxes[local_48].pixel_count = iVar4;
      shape_quantize_cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090(this_ptr,local_48);
      shape_quantize_cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090(this_ptr,iVar3);
      this_ptr->boxes[local_48].pixel_count = local_48;
      shape_quantize_cpp_CColorQuantizer_splitBox_FUN_00554e70(this_ptr,local_40,iVar3);
    }
    else if (local_4c == this_ptr->boxes[local_48].intensity_variance) {
      local_24 = this_ptr->boxes[local_48].start_index;
      iVar6._0_2_ = this_ptr->boxes[local_48].avg_blue;
      iVar6._2_2_ = this_ptr->boxes[local_48].avg_intensity;
      iVar7 = local_24 + this_ptr->boxes[local_48].pixel_count + -1;
      if (local_24 < iVar7) {
        local_38 = local_24 * 4;
        do {
          if (iVar6 >> 0x10 < (int)(uint)*(byte *)((int)this_ptr->pixel_data + local_38 + 3)) {
            iVar4 = iVar7 * 4;
            while ((local_24 * 4 < iVar4 &&
                   (iVar6 >> 0x10 < (int)(uint)*(byte *)((int)this_ptr->pixel_data + iVar4 + 3)))) {
              iVar7 = iVar7 + -1;
              iVar4 = iVar4 + -4;
            }
            puVar5 = (uint *)(local_38 + (int)this_ptr->pixel_data);
            uVar1 = *puVar5;
            *puVar5 = *(uint *)((int)this_ptr->pixel_data + iVar7 * 4);
            *(uint *)((int)this_ptr->pixel_data + iVar7 * 4) = uVar1;
          }
          local_38 = local_38 + 4;
          local_24 = local_24 + 1;
        } while (local_24 < iVar7);
      }
      iVar6 = iVar7 - this_ptr->boxes[local_48].start_index;
      iVar4 = this_ptr->boxes[local_48].pixel_count;
      this_ptr->boxes[local_44 + 1].start_index = iVar7;
      this_ptr->boxes[local_44 + 1].pixel_count = this_ptr->boxes[local_48].pixel_count - iVar6;
      this_ptr->boxes[local_48].pixel_count = iVar6;
      shape_quantize_cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090(this_ptr,local_48);
      shape_quantize_cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090(this_ptr,local_40);
      this_ptr->boxes[local_48].pixel_count = iVar4;
      shape_quantize_cpp_CColorQuantizer_splitBox_FUN_00554e70(this_ptr,local_40,local_3c);
    }
  }
  return 0;
}
