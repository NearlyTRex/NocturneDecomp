// Name: core_ground.cpp_CGround_transformAndStoreVertices_FUN_004ef490
// Address: 004ef490
// MANUAL RECONSTRUCTION
// Address Range: [[004ef490, 004ef87d]]
// Convention: __cdecl
// Signature: void __cdecl core_ground_cpp_CGround_transformAndStoreVertices_FUN_004ef490(CGround *this_ptr)

#include "nocturne.h"

void __cdecl core_ground_cpp_CGround_transformAndStoreVertices_FUN_004ef490(CGround *this_ptr)

{
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_6c[15];
  int local_24;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar7 = this_ptr->grid_height * this_ptr->vertical_scale;
  iVar8 = iVar7 * 0x100;
  local_6c[0] = ((uint)((longlong)g_InverseMatrix.m[0].x * (longlong)iVar8) >> 0x10 |
                (int)((ulonglong)((longlong)g_InverseMatrix.m[0].x * (longlong)iVar8) >> 0x20) <<
                0x10) + ((uint)((longlong)g_InverseMatrix.m[1].x * (longlong)iVar8) >> 0x10 |
                        (int)((ulonglong)((longlong)g_InverseMatrix.m[1].x * (longlong)iVar8) >>
                             0x20) << 0x10) +
                ((uint)((longlong)g_InverseMatrix.m[2].x * (longlong)iVar8) >> 0x10 |
                (int)((ulonglong)((longlong)g_InverseMatrix.m[2].x * (longlong)iVar8) >> 0x20) <<
                0x10);
  local_6c[1] = ((uint)((longlong)g_InverseMatrix.m[0].y * (longlong)iVar8) >> 0x10 |
                (int)((ulonglong)((longlong)g_InverseMatrix.m[0].y * (longlong)iVar8) >> 0x20) <<
                0x10) + ((uint)((longlong)g_InverseMatrix.m[1].y * (longlong)iVar8) >> 0x10 |
                        (int)((ulonglong)((longlong)g_InverseMatrix.m[1].y * (longlong)iVar8) >>
                             0x20) << 0x10) +
                ((uint)((longlong)g_InverseMatrix.m[2].y * (longlong)iVar8) >> 0x10 |
                (int)((ulonglong)((longlong)g_InverseMatrix.m[2].y * (longlong)iVar8) >> 0x20) <<
                0x10);
  local_6c[2] = ((uint)((longlong)g_InverseMatrix.m[0].z * (longlong)iVar8) >> 0x10 |
                (int)((ulonglong)((longlong)g_InverseMatrix.m[0].z * (longlong)iVar8) >> 0x20) <<
                0x10) + ((uint)((longlong)g_InverseMatrix.m[1].z * (longlong)iVar8) >> 0x10 |
                        (int)((ulonglong)((longlong)g_InverseMatrix.m[1].z * (longlong)iVar8) >>
                             0x20) << 0x10) +
                ((uint)((longlong)g_InverseMatrix.m[2].z * (longlong)iVar8) >> 0x10 |
                (int)((ulonglong)((longlong)g_InverseMatrix.m[2].z * (longlong)iVar8) >> 0x20) <<
                0x10);
  iVar3 = iVar7 * -0x100;
  local_6c[3] = ((uint)((longlong)g_InverseMatrix.m[0].x * (longlong)iVar3) >> 0x10 |
                (int)((ulonglong)((longlong)g_InverseMatrix.m[0].x * (longlong)iVar3) >> 0x20) <<
                0x10) + ((uint)((longlong)g_InverseMatrix.m[1].x * (longlong)iVar8) >> 0x10 |
                        (int)((ulonglong)((longlong)g_InverseMatrix.m[1].x * (longlong)iVar8) >>
                             0x20) << 0x10) +
                ((uint)((longlong)g_InverseMatrix.m[2].x * (longlong)iVar8) >> 0x10 |
                (int)((ulonglong)((longlong)g_InverseMatrix.m[2].x * (longlong)iVar8) >> 0x20) <<
                0x10);
  local_6c[4] = ((uint)((longlong)g_InverseMatrix.m[0].y * (longlong)iVar3) >> 0x10 |
                (int)((ulonglong)((longlong)g_InverseMatrix.m[0].y * (longlong)iVar3) >> 0x20) <<
                0x10) + ((uint)((longlong)g_InverseMatrix.m[1].y * (longlong)iVar8) >> 0x10 |
                        (int)((ulonglong)((longlong)g_InverseMatrix.m[1].y * (longlong)iVar8) >>
                             0x20) << 0x10) +
                ((uint)((longlong)g_InverseMatrix.m[2].y * (longlong)iVar8) >> 0x10 |
                (int)((ulonglong)((longlong)g_InverseMatrix.m[2].y * (longlong)iVar8) >> 0x20) <<
                0x10);
  local_6c[5] = ((uint)((longlong)g_InverseMatrix.m[0].z * (longlong)iVar3) >> 0x10 |
                (int)((ulonglong)((longlong)g_InverseMatrix.m[0].z * (longlong)iVar3) >> 0x20) <<
                0x10) + ((uint)((longlong)g_InverseMatrix.m[1].z * (longlong)iVar8) >> 0x10 |
                        (int)((ulonglong)((longlong)g_InverseMatrix.m[1].z * (longlong)iVar8) >>
                             0x20) << 0x10) +
                ((uint)((longlong)g_InverseMatrix.m[2].z * (longlong)iVar8) >> 0x10 |
                (int)((ulonglong)((longlong)g_InverseMatrix.m[2].z * (longlong)iVar8) >> 0x20) <<
                0x10);
  local_6c[6] = ((uint)((longlong)g_InverseMatrix.m[0].x * (longlong)iVar3) >> 0x10 |
                (int)((ulonglong)((longlong)g_InverseMatrix.m[0].x * (longlong)iVar3) >> 0x20) <<
                0x10) + ((uint)((longlong)g_InverseMatrix.m[1].x * (longlong)iVar3) >> 0x10 |
                        (int)((ulonglong)((longlong)g_InverseMatrix.m[1].x * (longlong)iVar3) >>
                             0x20) << 0x10) +
                ((uint)((longlong)g_InverseMatrix.m[2].x * (longlong)iVar8) >> 0x10 |
                (int)((ulonglong)((longlong)g_InverseMatrix.m[2].x * (longlong)iVar8) >> 0x20) <<
                0x10);
  local_6c[7] = ((uint)((longlong)g_InverseMatrix.m[0].y * (longlong)iVar3) >> 0x10 |
                (int)((ulonglong)((longlong)g_InverseMatrix.m[0].y * (longlong)iVar3) >> 0x20) <<
                0x10) + ((uint)((longlong)g_InverseMatrix.m[1].y * (longlong)iVar3) >> 0x10 |
                        (int)((ulonglong)((longlong)g_InverseMatrix.m[1].y * (longlong)iVar3) >>
                             0x20) << 0x10) +
                ((uint)((longlong)g_InverseMatrix.m[2].y * (longlong)iVar8) >> 0x10 |
                (int)((ulonglong)((longlong)g_InverseMatrix.m[2].y * (longlong)iVar8) >> 0x20) <<
                0x10);
  local_6c[8] = ((uint)((longlong)g_InverseMatrix.m[0].z * (longlong)iVar3) >> 0x10 |
                (int)((ulonglong)((longlong)g_InverseMatrix.m[0].z * (longlong)iVar3) >> 0x20) <<
                0x10) + ((uint)((longlong)g_InverseMatrix.m[1].z * (longlong)iVar3) >> 0x10 |
                        (int)((ulonglong)((longlong)g_InverseMatrix.m[1].z * (longlong)iVar3) >>
                             0x20) << 0x10) +
                ((uint)((longlong)g_InverseMatrix.m[2].z * (longlong)iVar8) >> 0x10 |
                (int)((ulonglong)((longlong)g_InverseMatrix.m[2].z * (longlong)iVar8) >> 0x20) <<
                0x10);
  local_6c[9] = ((uint)((longlong)g_InverseMatrix.m[0].x * (longlong)iVar8) >> 0x10 |
                (int)((ulonglong)((longlong)g_InverseMatrix.m[0].x * (longlong)iVar8) >> 0x20) <<
                0x10) + ((uint)((longlong)g_InverseMatrix.m[1].x * (longlong)iVar3) >> 0x10 |
                        (int)((ulonglong)((longlong)g_InverseMatrix.m[1].x * (longlong)iVar3) >>
                             0x20) << 0x10) +
                ((uint)((longlong)g_InverseMatrix.m[2].x * (longlong)iVar8) >> 0x10 |
                (int)((ulonglong)((longlong)g_InverseMatrix.m[2].x * (longlong)iVar8) >> 0x20) <<
                0x10);
  local_6c[10] = ((uint)((longlong)g_InverseMatrix.m[0].y * (longlong)iVar8) >> 0x10 |
                (int)((ulonglong)((longlong)g_InverseMatrix.m[0].y * (longlong)iVar8) >> 0x20) <<
                0x10) + ((uint)((longlong)g_InverseMatrix.m[1].y * (longlong)iVar3) >> 0x10 |
                        (int)((ulonglong)((longlong)g_InverseMatrix.m[1].y * (longlong)iVar3) >>
                             0x20) << 0x10) +
                ((uint)((longlong)g_InverseMatrix.m[2].y * (longlong)iVar8) >> 0x10 |
                (int)((ulonglong)((longlong)g_InverseMatrix.m[2].y * (longlong)iVar8) >> 0x20) <<
                0x10);
  local_6c[11] = ((uint)((longlong)g_InverseMatrix.m[0].z * (longlong)iVar8) >> 0x10 |
                (int)((ulonglong)((longlong)g_InverseMatrix.m[0].z * (longlong)iVar8) >> 0x20) <<
                0x10) + ((uint)((longlong)g_InverseMatrix.m[1].z * (longlong)iVar3) >> 0x10 |
                        (int)((ulonglong)((longlong)g_InverseMatrix.m[1].z * (longlong)iVar3) >>
                             0x20) << 0x10) +
                ((uint)((longlong)g_InverseMatrix.m[2].z * (longlong)iVar8) >> 0x10 |
                (int)((ulonglong)((longlong)g_InverseMatrix.m[2].z * (longlong)iVar8) >> 0x20) <<
                0x10);
  local_6c[12] = 0;
  local_6c[13] = 0;
  local_6c[14] = 0;
  local_14 = 999;
  local_18 = 999;
  iVar7 = -999;
  iVar4 = 0;
  iVar8 = this_ptr->vertical_scale << 8;
  iVar5 = -999;
  do {
    iVar1 = local_6c[iVar4 / 4] / iVar8;
    iVar2 = local_6c[iVar4 / 4 + 2] / iVar8;
    if (iVar1 < local_14) {
      local_14 = iVar1;
    }
    if (iVar2 < local_18) {
      local_18 = iVar2;
    }
    if (iVar7 < iVar1) {
      iVar7 = iVar1;
    }
    if (iVar5 < iVar2) {
      iVar5 = iVar2;
    }
    iVar4 = iVar4 + 0xc;
  } while (iVar4 != 0x3c);
  this_ptr->visible_max_x = iVar7 + 2;
  this_ptr->visible_max_y = iVar5 + 2;
  this_ptr->visible_min_x = local_14 + -2;
  this_ptr->visible_min_y = local_18 + -2;
  local_1c = -this_ptr->grid_width;
  if (-this_ptr->grid_width < this_ptr->visible_min_x) {
    local_1c = this_ptr->visible_min_x;
  }
  iVar7 = this_ptr->grid_width;
  if (this_ptr->visible_max_x < this_ptr->grid_width) {
    iVar7 = this_ptr->visible_max_x;
  }
  iVar8 = -this_ptr->grid_height;
  if (-this_ptr->grid_height < this_ptr->visible_min_y) {
    iVar8 = this_ptr->visible_min_y;
  }
  local_24 = this_ptr->grid_height;
  if (this_ptr->visible_max_y < this_ptr->grid_height) {
    local_24 = this_ptr->visible_max_y;
  }
  for (; iVar6 = local_1c, iVar8 <= local_24; iVar8 = iVar8 + 1) {
    for (; iVar6 <= iVar7; iVar6 = iVar6 + 1) {
      core_ground_cpp_CGround_transformAndStoreVertex_FUN_004ef3a0
                (this_ptr,this_ptr->camera_x + iVar6,this_ptr->camera_y + iVar8);
    }
  }
  return;
}
