// Name: shape_quantize.cpp_CColorQuantizer_splitBox_FUN_00554e70
// Address: 00554e70
// Address Range: [[00554e70, 00554fef]]
// Convention: __cdecl
// Signature: void __cdecl shape_quantize_cpp_CColorQuantizer_splitBox_FUN_00554e70(CColorQuantizer *this_ptr,int source_box_index,int dest_box_index)

#include "nocturne.h"

void __cdecl shape_quantize_cpp_CColorQuantizer_splitBox_FUN_00554e70(CColorQuantizer *this_ptr,int source_box_index,int dest_box_index)

{
  float fVar2;
  float fVar3;
  float fVar1;
  float fVar4;
  uchar *pixel_ptr;
  int iVar4;
  int iVar5;
  uchar *local_20;
  uint uVar1;
  
  iVar4 = this_ptr->boxes[source_box_index].start_index;
  iVar5 = this_ptr->boxes[source_box_index].pixel_count + iVar4 + -1;
  local_20 = (uchar *)((int)this_ptr->pixel_data + iVar4 * 4);
  pixel_ptr = (uchar *)((int)this_ptr->pixel_data + iVar5 * 4);
  if (iVar4 < iVar5) {
    do {
      fVar2 = shape_quantize_cpp_CColorQuantizer_getPixelSortKey_FUN_00554ff0
                        (this_ptr,this_ptr->boxes + source_box_index,local_20);
      fVar3 = shape_quantize_cpp_CColorQuantizer_getPixelSortKey_FUN_00554ff0
                        (this_ptr,this_ptr->boxes + dest_box_index,local_20);
      if (fVar3 < fVar2) {
        for (; iVar4 < iVar5; iVar5 = iVar5 + -1) {
          fVar1 = shape_quantize_cpp_CColorQuantizer_getPixelSortKey_FUN_00554ff0
                            (this_ptr,this_ptr->boxes + source_box_index,pixel_ptr);
          fVar4 = shape_quantize_cpp_CColorQuantizer_getPixelSortKey_FUN_00554ff0
                            (this_ptr,this_ptr->boxes + dest_box_index,pixel_ptr);
          if (fVar1 <= fVar4) break;
          pixel_ptr = pixel_ptr + -4;
        }
        uVar1 = *(uint *)local_20;
        *(uint *)local_20 = *(uint *)pixel_ptr;
        *(uint *)pixel_ptr = uVar1;
      }
      local_20 = local_20 + 4;
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
  shape_quantize_cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090(this_ptr,dest_box_index);
  return;
}
