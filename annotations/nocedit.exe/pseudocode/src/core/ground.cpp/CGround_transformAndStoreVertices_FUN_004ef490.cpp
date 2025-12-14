// Name: core_ground.cpp_CGround_transformAndStoreVertices_FUN_004ef490
// Address: 004ef490
// Address Range: [[004ef490, 004ef87d]]
// Convention: __cdecl
// Signature: void core_ground.cpp_CGround_transformAndStoreVertices_FUN_004ef490(CGround * this_ptr)

#include "nocturne.h"

void __cdecl core_ground_cpp_CGround_transformAndStoreVertices_FUN_004ef490(CGround *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  int iVar5;
  int local_6c [6];
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_30 = this_ptr->grid_height * this_ptr->vertical_scale;
  local_28 = local_30 * 0x100;
  local_6c[0] = ((uint)((longlong)g_InverseMatrix.m[0].x * (longlong)local_28) >> 0x10 |
                (int)((ulonglong)((longlong)g_InverseMatrix.m[0].x * (longlong)local_28) >> 0x20) <<
                0x10) + ((uint)((longlong)g_InverseMatrix.m[1].x * (longlong)local_28) >> 0x10 |
                        (int)((ulonglong)((longlong)g_InverseMatrix.m[1].x * (longlong)local_28) >>
                             0x20) << 0x10) +
                ((uint)((longlong)g_InverseMatrix.m[2].x * (longlong)local_28) >> 0x10 |
                (int)((ulonglong)((longlong)g_InverseMatrix.m[2].x * (longlong)local_28) >> 0x20) <<
                0x10);
  local_6c[1] = ((uint)((longlong)g_InverseMatrix.m[0].y * (longlong)local_28) >> 0x10 |
                (int)((ulonglong)((longlong)g_InverseMatrix.m[0].y * (longlong)local_28) >> 0x20) <<
                0x10) + ((uint)((longlong)g_InverseMatrix.m[1].y * (longlong)local_28) >> 0x10 |
                        (int)((ulonglong)((longlong)g_InverseMatrix.m[1].y * (longlong)local_28) >>
                             0x20) << 0x10) +
                ((uint)((longlong)g_InverseMatrix.m[2].y * (longlong)local_28) >> 0x10 |
                (int)((ulonglong)((longlong)g_InverseMatrix.m[2].y * (longlong)local_28) >> 0x20) <<
                0x10);
  local_6c[2] = ((uint)((longlong)g_InverseMatrix.m[0].z * (longlong)local_28) >> 0x10 |
                (int)((ulonglong)((longlong)g_InverseMatrix.m[0].z * (longlong)local_28) >> 0x20) <<
                0x10) + ((uint)((longlong)g_InverseMatrix.m[1].z * (longlong)local_28) >> 0x10 |
                        (int)((ulonglong)((longlong)g_InverseMatrix.m[1].z * (longlong)local_28) >>
                             0x20) << 0x10) +
                ((uint)((longlong)g_InverseMatrix.m[2].z * (longlong)local_28) >> 0x10 |
                (int)((ulonglong)((longlong)g_InverseMatrix.m[2].z * (longlong)local_28) >> 0x20) <<
                0x10);
  iVar3 = local_30 * -0x100;
  local_6c[3] = ((uint)((longlong)g_InverseMatrix.m[0].x * (longlong)iVar3) >> 0x10 |
                (int)((ulonglong)((longlong)g_InverseMatrix.m[0].x * (longlong)iVar3) >> 0x20) <<
                0x10) + ((uint)((longlong)g_InverseMatrix.m[1].x * (longlong)local_28) >> 0x10 |
                        (int)((ulonglong)((longlong)g_InverseMatrix.m[1].x * (longlong)local_28) >>
                             0x20) << 0x10) +
                ((uint)((longlong)g_InverseMatrix.m[2].x * (longlong)local_28) >> 0x10 |
                (int)((ulonglong)((longlong)g_InverseMatrix.m[2].x * (longlong)local_28) >> 0x20) <<
                0x10);
  local_6c[4] = ((uint)((longlong)g_InverseMatrix.m[0].y * (longlong)iVar3) >> 0x10 |
                (int)((ulonglong)((longlong)g_InverseMatrix.m[0].y * (longlong)iVar3) >> 0x20) <<
                0x10) + ((uint)((longlong)g_InverseMatrix.m[1].y * (longlong)local_28) >> 0x10 |
                        (int)((ulonglong)((longlong)g_InverseMatrix.m[1].y * (longlong)local_28) >>
                             0x20) << 0x10) +
                ((uint)((longlong)g_InverseMatrix.m[2].y * (longlong)local_28) >> 0x10 |
                (int)((ulonglong)((longlong)g_InverseMatrix.m[2].y * (longlong)local_28) >> 0x20) <<
                0x10);
  local_2c = local_30 * -0x100;
  local_6c[5] = ((uint)((longlong)g_InverseMatrix.m[0].z * (longlong)iVar3) >> 0x10 |
                (int)((ulonglong)((longlong)g_InverseMatrix.m[0].z * (longlong)iVar3) >> 0x20) <<
                0x10) + ((uint)((longlong)g_InverseMatrix.m[1].z * (longlong)local_28) >> 0x10 |
                        (int)((ulonglong)((longlong)g_InverseMatrix.m[1].z * (longlong)local_28) >>
                             0x20) << 0x10) +
                ((uint)((longlong)g_InverseMatrix.m[2].z * (longlong)local_28) >> 0x10 |
                (int)((ulonglong)((longlong)g_InverseMatrix.m[2].z * (longlong)local_28) >> 0x20) <<
                0x10);
  local_54 = ((uint)((longlong)g_InverseMatrix.m[0].x * (longlong)iVar3) >> 0x10 |
             (int)((ulonglong)((longlong)g_InverseMatrix.m[0].x * (longlong)iVar3) >> 0x20) << 0x10)
             + ((uint)((longlong)g_InverseMatrix.m[1].x * (longlong)local_2c) >> 0x10 |
               (int)((ulonglong)((longlong)g_InverseMatrix.m[1].x * (longlong)local_2c) >> 0x20) <<
               0x10) + ((uint)((longlong)g_InverseMatrix.m[2].x * (longlong)local_28) >> 0x10 |
                       (int)((ulonglong)((longlong)g_InverseMatrix.m[2].x * (longlong)local_28) >>
                            0x20) << 0x10);
  local_50 = ((uint)((longlong)g_InverseMatrix.m[0].y * (longlong)iVar3) >> 0x10 |
             (int)((ulonglong)((longlong)g_InverseMatrix.m[0].y * (longlong)iVar3) >> 0x20) << 0x10)
             + ((uint)((longlong)g_InverseMatrix.m[1].y * (longlong)local_2c) >> 0x10 |
               (int)((ulonglong)((longlong)g_InverseMatrix.m[1].y * (longlong)local_2c) >> 0x20) <<
               0x10) + ((uint)((longlong)g_InverseMatrix.m[2].y * (longlong)local_28) >> 0x10 |
                       (int)((ulonglong)((longlong)g_InverseMatrix.m[2].y * (longlong)local_28) >>
                            0x20) << 0x10);
  local_30 = local_30 * 0x100;
  local_4c = ((uint)((longlong)g_InverseMatrix.m[0].z * (longlong)iVar3) >> 0x10 |
             (int)((ulonglong)((longlong)g_InverseMatrix.m[0].z * (longlong)iVar3) >> 0x20) << 0x10)
             + ((uint)((longlong)g_InverseMatrix.m[1].z * (longlong)local_2c) >> 0x10 |
               (int)((ulonglong)((longlong)g_InverseMatrix.m[1].z * (longlong)local_2c) >> 0x20) <<
               0x10) + ((uint)((longlong)g_InverseMatrix.m[2].z * (longlong)local_28) >> 0x10 |
                       (int)((ulonglong)((longlong)g_InverseMatrix.m[2].z * (longlong)local_28) >>
                            0x20) << 0x10);
  local_48 = ((uint)((longlong)g_InverseMatrix.m[0].x * (longlong)local_30) >> 0x10 |
             (int)((ulonglong)((longlong)g_InverseMatrix.m[0].x * (longlong)local_30) >> 0x20) <<
             0x10) + ((uint)((longlong)g_InverseMatrix.m[1].x * (longlong)local_2c) >> 0x10 |
                     (int)((ulonglong)((longlong)g_InverseMatrix.m[1].x * (longlong)local_2c) >>
                          0x20) << 0x10) +
             ((uint)((longlong)g_InverseMatrix.m[2].x * (longlong)local_28) >> 0x10 |
             (int)((ulonglong)((longlong)g_InverseMatrix.m[2].x * (longlong)local_28) >> 0x20) <<
             0x10);
  local_44 = ((uint)((longlong)g_InverseMatrix.m[0].y * (longlong)local_30) >> 0x10 |
             (int)((ulonglong)((longlong)g_InverseMatrix.m[0].y * (longlong)local_30) >> 0x20) <<
             0x10) + ((uint)((longlong)g_InverseMatrix.m[1].y * (longlong)local_2c) >> 0x10 |
                     (int)((ulonglong)((longlong)g_InverseMatrix.m[1].y * (longlong)local_2c) >>
                          0x20) << 0x10) +
             ((uint)((longlong)g_InverseMatrix.m[2].y * (longlong)local_28) >> 0x10 |
             (int)((ulonglong)((longlong)g_InverseMatrix.m[2].y * (longlong)local_28) >> 0x20) <<
             0x10);
  local_40 = ((uint)((longlong)g_InverseMatrix.m[0].z * (longlong)local_30) >> 0x10 |
             (int)((ulonglong)((longlong)g_InverseMatrix.m[0].z * (longlong)local_30) >> 0x20) <<
             0x10) + ((uint)((longlong)g_InverseMatrix.m[1].z * (longlong)local_2c) >> 0x10 |
                     (int)((ulonglong)((longlong)g_InverseMatrix.m[1].z * (longlong)local_2c) >>
                          0x20) << 0x10) +
             ((uint)((longlong)g_InverseMatrix.m[2].z * (longlong)local_28) >> 0x10 |
             (int)((ulonglong)((longlong)g_InverseMatrix.m[2].z * (longlong)local_28) >> 0x20) <<
             0x10);
  local_38 = 0;
  local_34 = 0;
  local_14 = 999;
  local_3c = 0;
  local_18 = 999;
  iVar3 = -999;
  iVar4 = 0;
  local_20 = this_ptr->vertical_scale << 8;
  iVar5 = -999;
  do {
    iVar1 = *(int *)((int)local_6c + iVar4) / local_20;
    iVar2 = *(int *)((int)local_6c + iVar4 + 8) / local_20;
    if (iVar1 < local_14) {
      local_14 = iVar1;
    }
    if (iVar2 < local_18) {
      local_18 = iVar2;
    }
    if (iVar3 < iVar1) {
      iVar3 = iVar1;
    }
    if (iVar5 < iVar2) {
      iVar5 = iVar2;
    }
    iVar4 = iVar4 + 0xc;
  } while (iVar4 != 0x3c);
  local_18 = local_18 + -2;
  local_14 = local_14 + -2;
  this_ptr->visible_max_x = iVar3 + 2;
  this_ptr->visible_max_y = iVar5 + 2;
  this_ptr->visible_min_x = local_14;
  this_ptr->visible_min_y = local_18;
  local_1c = -this_ptr->grid_width;
  if (-this_ptr->grid_width < this_ptr->visible_min_x) {
    local_1c = this_ptr->visible_min_x;
  }
  iVar3 = this_ptr->grid_width;
  if (this_ptr->visible_max_x < this_ptr->grid_width) {
    iVar3 = this_ptr->visible_max_x;
  }
  iVar5 = -this_ptr->grid_height;
  if (-this_ptr->grid_height < this_ptr->visible_min_y) {
    iVar5 = this_ptr->visible_min_y;
  }
  local_24 = this_ptr->grid_height;
  if (this_ptr->visible_max_y < this_ptr->grid_height) {
    local_24 = this_ptr->visible_max_y;
  }
  iVar4 = local_1c;
  if (iVar5 <= local_24) {
    do {
      for (; iVar4 <= iVar3; iVar4 = iVar4 + 1) {
        core_ground_cpp_CGround_transformAndStoreVertex_FUN_004ef3a0
                  (this_ptr,this_ptr->camera_x + iVar4,this_ptr->camera_y + iVar5);
      }
      iVar5 = iVar5 + 1;
      iVar4 = local_1c;
    } while (iVar5 <= local_24);
  }
  return;
}
