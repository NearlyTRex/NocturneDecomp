// Name: core_ground.cpp_CGround_transformAndStoreVertex_FUN_004d0020
// Address: 004d0020
// Address Range: [[004d0020, 004d0109]]
// Convention: __cdecl
// Signature: void __cdecl core_ground_cpp_CGround_transformAndStoreVertex_FUN_004d0020(CGround *this_ptr,int column,int row)

#include "nocturne.h"

void __cdecl core_ground_cpp_CGround_transformAndStoreVertex_FUN_004d0020(CGround *this_ptr,int column,int row)

{
  int iVar1;
  int iVar2;
  CVector3i local_1c;
  
  iVar1 = core_ground_cpp_CGround_getVertexIndex_FUN_004d0000
                    (this_ptr,(row - this_ptr->camera_y) + this_ptr->grid_height,
                     (column - this_ptr->camera_x) + this_ptr->grid_width);
  local_1c.x = this_ptr->vertical_scale * column * 0x100;
  local_1c.z = this_ptr->vertical_scale * row * 0x100;
  local_1c.y = this_ptr->height_scale *
               (int)this_ptr->terrain_data
                    [(row & this_ptr->height_minus_1) * this_ptr->width +
                     (column & this_ptr->width_minus_1)].height;
  engine_special_cpp_FUN_0056356c((SProjectedVertex *)(&DAT_0060b014 + iVar1 * 0xc),&local_1c);
  (&DAT_0060b034)[iVar1 * 0xc] = 0x3fff;
  (&DAT_0060b038)[iVar1 * 0xc] = 0x3fff;
  (&DAT_0060b03c)[iVar1 * 0xc] = 0x3fff;
  if ((int)(&DAT_0060b01c)[iVar1 * 0xc] < 0) {
    (&DAT_0060b040)[iVar1 * 0xc] = 0;
  }
  else {
    iVar2 = (int)((&DAT_0060b01c)[iVar1 * 0xc] << 8) /
            (this_ptr->grid_width * this_ptr->vertical_scale);
    (&DAT_0060b040)[iVar1 * 0xc] = iVar2;
    if (0xffff < iVar2) {
      (&DAT_0060b040)[iVar1 * 0xc] = 0xffff;
      return;
    }
  }
  return;
}
