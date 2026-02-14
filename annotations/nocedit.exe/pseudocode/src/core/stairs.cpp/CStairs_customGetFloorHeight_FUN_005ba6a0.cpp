// Name: core_stairs.cpp_CStairs_customGetFloorHeight_FUN_005ba6a0
// Address: 005ba6a0
// Address Range: [[005ba6a0, 005ba6ea]]
// Convention: __cdecl
// Signature: int __cdecl core_stairs_cpp_CStairs_customGetFloorHeight_FUN_005ba6a0(CStairs *this_ptr,float x_pos,float z_pos,float *out_floor_height)

#include "nocturne.h"

int __cdecl core_stairs_cpp_CStairs_customGetFloorHeight_FUN_005ba6a0(CStairs *this_ptr,float x_pos,float z_pos,float *out_floor_height)

{
  int iVar1;
  int iVar2;
  CDemonTriangle *triangle;
  int iVar3;
  
  triangle = (CDemonTriangle *)this_ptr->unk2;
  iVar3 = 0;
  for (iVar2 = 0; iVar2 < this_ptr->stair_count * 2; iVar2 = iVar2 + 1) {
    iVar1 = core_dtri_cpp_rayTriangleFloorTest_FUN_0049b2f0(triangle,x_pos,z_pos,out_floor_height);
    if (iVar1 != 0) {
      iVar3 = 1;
    }
    triangle = triangle + 1;
  }
  return iVar3;
}
