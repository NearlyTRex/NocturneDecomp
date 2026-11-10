// Name: core_stairs.cpp_CStairs_customGetFloorHeight_FUN_005686d0
// Address: 005686d0
// Address Range: [[005686d0, 0056871a]]
// Convention: __cdecl
// Signature: int __cdecl core_stairs_cpp_CStairs_customGetFloorHeight_FUN_005686d0(CStairs *this_ptr,CVector3f *position,float search_radius,float *out_floor_height)

#include "nocturne.h"

int __cdecl core_stairs_cpp_CStairs_customGetFloorHeight_FUN_005686d0(CStairs *this_ptr,CVector3f *position,float search_radius,float *out_floor_height)

{
  int iVar1;
  int iVar2;
  CDemonTriangle *triangle;
  int iVar3;
  
  triangle = this_ptr->collision_triangles;
  iVar3 = 0;
  for (iVar2 = 0; iVar2 < this_ptr->stair_count * 2; iVar2 = iVar2 + 1) {
    iVar1 = core_dtri_cpp_FUN_004795c0(triangle,position,search_radius,out_floor_height);
    if (iVar1 != 0) {
      iVar3 = 1;
    }
    triangle = triangle + 1;
  }
  return iVar3;
}
