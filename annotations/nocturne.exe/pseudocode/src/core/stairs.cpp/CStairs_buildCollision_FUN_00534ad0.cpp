// Name: core_stairs.cpp_CStairs_buildCollision_FUN_00534ad0
// Address: 00534ad0
// Address Range: [[00534ad0, 00534c01]]
// Convention: __cdecl
// Signature: void __cdecl core_stairs_cpp_CStairs_buildCollision_FUN_00534ad0(CStairs *this_ptr)

#include "nocturne.h"

void __cdecl core_stairs_cpp_CStairs_buildCollision_FUN_00534ad0(CStairs *this_ptr)

{
  CDemonTriangle *this_ptr_00;
  int iVar1;
  CDemonTriangle *this_ptr_01;
  CVector3f local_58;
  CVector3f local_4c;
  CVector3f local_40;
  CVector3f local_34;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  int local_10;
  
  local_18 = this_ptr->width * (float)0.5;
  local_14 = -this_ptr->width * (float)0.5;
  iVar1 = 0;
  if (0 < this_ptr->stair_count) {
    this_ptr_01 = this_ptr->collision_triangles;
    this_ptr_00 = this_ptr->collision_triangles + 1;
    do {
      iVar1 = iVar1 + 1;
      local_58.y = this_ptr->rise * (float)iVar1;
      local_58.z = this_ptr->run * (float)iVar1;
      local_40.z = local_58.z - this_ptr->bevel_z;
      local_40.y = local_58.y - this_ptr->bevel_y;
      local_58.x = local_14;
      local_4c.x = local_18;
      local_34.x = local_18;
      local_40.x = local_14;
      local_4c.y = local_58.y;
      local_4c.z = local_58.z;
      local_34.y = local_40.y;
      local_34.z = local_40.z;
      local_28 = local_40.z;
      local_24 = local_58.y;
      local_20 = local_40.y;
      local_1c = local_58.z;
      local_10 = iVar1;
      core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0046c5b0
                (this_ptr_01,&local_58,&local_4c,&local_34);
      this_ptr_01 = this_ptr_01 + 2;
      core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0046c5b0
                (this_ptr_00,&local_58,&local_34,&local_40);
      this_ptr_00 = this_ptr_00 + 2;
    } while (iVar1 < this_ptr->stair_count);
  }
  return;
}
