// Name: core_setdir.cpp_CDemonSet_isPointInVdirBox_FUN_005762a0
// Address: 005762a0
// Address Range: [[005762a0, 00576336]]
// Convention: __cdecl
// Signature: int __cdecl core_setdir_cpp_CDemonSet_isPointInVdirBox_FUN_005762a0(CDemonSet *this_ptr,int box_index,CVector3f *point)

#include "nocturne.h"

int __cdecl core_setdir_cpp_CDemonSet_isPointInVdirBox_FUN_005762a0(CDemonSet *this_ptr,int box_index,CVector3f *point)

{
  SVDBox *pSVar1;
  CVector3f local_20;
  CVector3f local_14;
  
  pSVar1 = this_ptr->vdir_boxes + box_index;
  local_14.x = point->x - (pSVar1->position).x;
  local_14.y = point->y - (pSVar1->position).y;
  local_14.z = point->z - (pSVar1->position).z;
  core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
            (&pSVar1->rotation_matrix,&local_20,&local_14);
  if (((ABS(local_20.x) <= (pSVar1->extents).x) && (ABS(local_20.y) <= (pSVar1->extents).y)) &&
     (ABS(local_20.z) <= (pSVar1->extents).z)) {
    return 1;
  }
  return 0;
}
