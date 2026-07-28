// Name: core_ground.cpp_CGround_transformAndStoreVertex_FUN_004b1820
// Address: 004b1820
// Address Range: [[004b1820, 004b1909]]
// Convention: __cdecl
// Signature: void __cdecl core_ground_cpp_CGround_transformAndStoreVertex_FUN_004b1820(CGround *this_ptr,int column,int row)

#include "nocturne.h"

void __cdecl core_ground_cpp_CGround_transformAndStoreVertex_FUN_004b1820(CGround *this_ptr,int column,int row)

{
  int iVar1;
  int iVar2;
  CVector3i local_1c;
  
  iVar1 = core_ground_cpp_CGround_getVertexIndex_FUN_004b1800
                    (this_ptr,(row - this_ptr->camera_y) + this_ptr->grid_height,
                     (column - this_ptr->camera_x) + this_ptr->grid_width);
  local_1c.x = this_ptr->vertical_scale * column * 0x100;
  local_1c.z = this_ptr->vertical_scale * row * 0x100;
  local_1c.y = this_ptr->height_scale *
               (int)this_ptr->terrain_data
                    [(row & this_ptr->height_minus_1) * this_ptr->width +
                     (column & this_ptr->width_minus_1)].height;
  engine_special_cpp_transformPoint_FUN_00530a25
            ((SProjectedVertex *)(&DAT_005c5014 + iVar1 * 0xc),&local_1c);
  (&DAT_005c5034)[iVar1 * 0xc] = 0x3fff;
  (&DAT_005c5038)[iVar1 * 0xc] = 0x3fff;
  (&DAT_005c503c)[iVar1 * 0xc] = 0x3fff;
  if ((int)(&DAT_005c501c)[iVar1 * 0xc] < 0) {
    (&DAT_005c5040)[iVar1 * 0xc] = 0;
  }
  else {
    iVar2 = (int)((&DAT_005c501c)[iVar1 * 0xc] << 8) /
            (this_ptr->grid_width * this_ptr->vertical_scale);
    (&DAT_005c5040)[iVar1 * 0xc] = iVar2;
    if (0xffff < iVar2) {
      (&DAT_005c5040)[iVar1 * 0xc] = 0xffff;
      return;
    }
  }
  return;
}
