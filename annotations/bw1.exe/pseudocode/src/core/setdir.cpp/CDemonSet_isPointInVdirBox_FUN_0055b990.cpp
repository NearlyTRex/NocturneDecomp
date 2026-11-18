// Name: core_setdir.cpp_CDemonSet_isPointInVdirBox_FUN_0055b990
// Address: 0055b990
// Address Range: [[0055b990, 0055ba48]]
// Convention: __cdecl
// Signature: int __cdecl core_setdir_cpp_CDemonSet_isPointInVdirBox_FUN_0055b990(CDemonSet *this_ptr,int box_index,CVector3f *point)

#include "nocturne.h"

int __cdecl core_setdir_cpp_CDemonSet_isPointInVdirBox_FUN_0055b990(CDemonSet *this_ptr,int box_index,CVector3f *point)

{
  SVDBox *pSVar1;
  byte bVar2;
  float afStackY_1028 [1016];
  CVector3f local_40;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24 [2];
  CVector3f local_1c;
  
  bVar2 = 0;
  pSVar1 = this_ptr->vdir_boxes + box_index;
  local_34 = point->x - (pSVar1->position).x;
  local_30 = point->y - (pSVar1->position).y;
  local_2c = point->z - (pSVar1->position).z;
  local_1c.x = local_34;
  local_1c.y = local_30;
  local_1c.z = local_2c;
  core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0045f700
            (&pSVar1->rotation_matrix,&local_1c,&local_40);
  local_28 = local_40.x;
  local_24[(uint)bVar2 * -2] = *(float *)((int)&local_40 + (uint)bVar2 * -8 + 4);
  local_24[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
       *(float *)((int)&local_40 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  if (((ABS(local_28) <= (pSVar1->extents).x) && (ABS(local_24[0]) <= (pSVar1->extents).y)) &&
     (ABS(local_24[1]) <= (pSVar1->extents).z)) {
    return 1;
  }
  return 0;
}
