// Name: core_stairs.cpp_CStairs_buildCollision_FUN_00568730
// Address: 00568730
// Address Range: [[00568730, 00568861]]
// Convention: __cdecl
// Signature: void __cdecl core_stairs_cpp_CStairs_buildCollision_FUN_00568730(CStairs *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_stairs_cpp_CStairs_buildCollision_FUN_00568730(CStairs *this_ptr)

{
  CDemonTriangle *this_ptr_00;
  int iVar1;
  CDemonTriangle *this_ptr_01;
  CVector3f CStack_58;
  CVector3f CStack_4c;
  CVector3f CStack_40;
  CVector3f CStack_34;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  int iStack_10;
  
  fStack_18 = this_ptr->width * (float)_DAT_005d5ca0;
  fStack_14 = -this_ptr->width * (float)_DAT_005d5ca0;
  iVar1 = 0;
  if (0 < this_ptr->stair_count) {
    this_ptr_01 = this_ptr->collision_triangles;
    this_ptr_00 = this_ptr->collision_triangles + 1;
    do {
      iVar1 = iVar1 + 1;
      CStack_58.y = this_ptr->rise * (float)iVar1;
      CStack_58.z = this_ptr->run * (float)iVar1;
      CStack_40.z = CStack_58.z - this_ptr->bevel_z;
      CStack_40.y = CStack_58.y - this_ptr->bevel_y;
      CStack_58.x = fStack_14;
      CStack_4c.x = fStack_18;
      CStack_34.x = fStack_18;
      CStack_40.x = fStack_14;
      CStack_4c.y = CStack_58.y;
      CStack_4c.z = CStack_58.z;
      CStack_34.y = CStack_40.y;
      CStack_34.z = CStack_40.z;
      fStack_28 = CStack_40.z;
      fStack_24 = CStack_58.y;
      fStack_20 = CStack_40.y;
      fStack_1c = CStack_58.z;
      iStack_10 = iVar1;
      core_dtri_cpp_CDemonTriangle_buildCollision_FUN_00478a50
                (this_ptr_01,&CStack_58,&CStack_4c,&CStack_34);
      this_ptr_01 = this_ptr_01 + 2;
      core_dtri_cpp_CDemonTriangle_buildCollision_FUN_00478a50
                (this_ptr_00,&CStack_58,&CStack_34,&CStack_40);
      this_ptr_00 = this_ptr_00 + 2;
    } while (iVar1 < this_ptr->stair_count);
  }
  return;
}
