// Name: core_stairs.cpp_CStairs_buildCollision_FUN_005ba700
// Address: 005ba700
// Address Range: [[005ba700, 005ba831]]
// Convention: __cdecl
// Signature: void __cdecl core_stairs_cpp_CStairs_buildCollision_FUN_005ba700(CStairs *this_ptr)

#include "nocturne.h"

void __cdecl core_stairs_cpp_CStairs_buildCollision_FUN_005ba700(CStairs *this_ptr)

{
  float fVar1;
  float fVar2;
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
  
  fVar1 = this_ptr->width * (float)0.5;
  fVar2 = -this_ptr->width * (float)0.5;
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
      local_58.x = fVar2;
      local_4c.x = fVar1;
      local_4c.y = local_58.y;
      local_4c.z = local_58.z;
      local_40.x = fVar2;
      local_34.x = fVar1;
      local_34.y = local_40.y;
      local_34.z = local_40.z;
      core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
                (this_ptr_01,&local_58,&local_4c,&local_34);
      this_ptr_01 = this_ptr_01 + 2;
      core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
                (this_ptr_00,&local_58,&local_34,&local_40);
      this_ptr_00 = this_ptr_00 + 2;
    } while (iVar1 < this_ptr->stair_count);
  }
  return;
}
