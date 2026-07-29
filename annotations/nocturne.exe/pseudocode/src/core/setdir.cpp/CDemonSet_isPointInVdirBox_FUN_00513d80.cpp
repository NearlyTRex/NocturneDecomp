// Name: core_setdir.cpp_CDemonSet_isPointInVdirBox_FUN_00513d80
// Address: 00513d80
// Address Range: [[00513d80, 00513e16]]
// Convention: __cdecl
// Signature: int __cdecl core_setdir_cpp_CDemonSet_isPointInVdirBox_FUN_00513d80(CDemonSet *this_ptr,int box_index,CVector3f *point)

#include "nocturne.h"

int __cdecl core_setdir_cpp_CDemonSet_isPointInVdirBox_FUN_00513d80(CDemonSet *this_ptr,int box_index,CVector3f *point)

{
  CMatrix3x3f *pCVar1;
  CVector3f local_20;
  CVector3f local_14;
  
  pCVar1 = &this_ptr->rooms[box_index + 5].rotation_matrix;
  local_14.x = point->x - pCVar1->m[0].x;
  local_14.y = point->y - pCVar1->m[0].y;
  local_14.z = point->z - pCVar1->m[0].z;
  core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
            ((CMatrix3x3f *)(pCVar1->m + 2),&local_20,&local_14);
  if (((ABS(local_20.x) <= pCVar1->m[1].x) && (ABS(local_20.y) <= pCVar1->m[1].y)) &&
     (ABS(local_20.z) <= pCVar1->m[1].z)) {
    return 1;
  }
  return 0;
}
