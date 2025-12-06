// Name: shape_quantize.cpp_CColorQuantizer_splitBox_FUN_00554e70
// Address: 00554e70
// Address Range: [[00554e70, 00554fef]]
// Convention: __cdecl
// Signature: void shape_quantize.cpp_CColorQuantizer_splitBox_FUN_00554e70(CColorQuantizer * this_ptr, int source_box_index, int dest_box_index)

#include "nocturne.h"

void __cdecl
shape_quantize_cpp_CColorQuantizer_splitBox_FUN_00554e70
          (CColorQuantizer *this_ptr,int source_box_index,int dest_box_index)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  uchar *pixel_ptr;
  int iVar4;
  int iVar5;
  int in_stack_00000010;
  uchar *in_stack_ffffffdc;
  SColorBox *local_20;
  
  iVar4 = this_ptr->boxes[source_box_index].start_index;
  iVar5 = this_ptr->boxes[source_box_index].pixel_count + iVar4 + -1;
  local_20 = (SColorBox *)((int)this_ptr->pixel_data + iVar4 * 4);
  pixel_ptr = (uchar *)((int)this_ptr->pixel_data + iVar5 * 4);
  if (iVar4 < iVar5) {
    do {
      shape_quantize_cpp_CColorQuantizer_getPixelSortKey_FUN_00554ff0
                (this_ptr,this_ptr->boxes + source_box_index,(uchar *)local_20);
      fVar3 = shape_quantize_cpp_CColorQuantizer_getPixelSortKey_FUN_00554ff0
                        (this_ptr,local_20,in_stack_ffffffdc);
      if (fVar3 < (float)in_stack_ffffffdc) {
        for (; iVar4 < iVar5; iVar5 = iVar5 + -1) {
          shape_quantize_cpp_CColorQuantizer_getPixelSortKey_FUN_00554ff0
                    (this_ptr,this_ptr->boxes + source_box_index,pixel_ptr);
          fVar3 = shape_quantize_cpp_CColorQuantizer_getPixelSortKey_FUN_00554ff0
                            (this_ptr,local_20,pixel_ptr);
          if ((float)in_stack_ffffffdc <= fVar3) break;
          pixel_ptr = pixel_ptr + -4;
        }
        uVar1 = *(uint *)pixel_ptr;
        uVar2 = *(uint *)local_20;
        local_20->avg_red = (short)uVar1;
        local_20->avg_green = (short)((uint)uVar1 >> 0x10);
        *(uint *)pixel_ptr = uVar2;
      }
      local_20 = (SColorBox *)&local_20->avg_blue;
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar5);
  }
  this_ptr->boxes[dest_box_index].start_index = iVar5;
  this_ptr->boxes[dest_box_index].pixel_count =
       this_ptr->boxes[source_box_index].pixel_count -
       (iVar5 - this_ptr->boxes[source_box_index].start_index);
  this_ptr->boxes[source_box_index].pixel_count =
       iVar5 - this_ptr->boxes[source_box_index].start_index;
  shape_quantize_cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090(this_ptr,source_box_index);
  shape_quantize_cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090(this_ptr,in_stack_00000010);
  return;
}
