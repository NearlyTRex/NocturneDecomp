// Name: core_setdir.cpp_CDemonSet_isPointInVdirBox_FUN_00513d80
// Address: 00513d80
// Address Range: [[00513d80, 00513e16]]
// Convention: __cdecl
// Signature: int __cdecl core_setdir_cpp_CDemonSet_isPointInVdirBox_FUN_00513d80(CDemonSet *this_ptr,int box_index,CVector3f *point)

#include "nocturne.h"

int __cdecl core_setdir_cpp_CDemonSet_isPointInVdirBox_FUN_00513d80(CDemonSet *this_ptr,int box_index,CVector3f *point)

{
  CMatrix3x3f *pCVar1;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  pCVar1 = &this_ptr->rooms[box_index + 5].rotation_matrix;
  local_14 = point->x - pCVar1->m[0].x;
  local_10 = point->y - pCVar1->m[0].y;
  local_c = point->z - pCVar1->m[0].z;
  core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
            (pCVar1->m + 2,&local_20,&local_14);
  if (((ABS(local_20) <= pCVar1->m[1].x) && (ABS(local_1c) <= pCVar1->m[1].y)) &&
     (ABS(local_18) <= pCVar1->m[1].z)) {
    return 1;
  }
  return 0;
}
