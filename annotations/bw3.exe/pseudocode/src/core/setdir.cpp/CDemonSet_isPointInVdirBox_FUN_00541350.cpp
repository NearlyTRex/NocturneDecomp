// Name: core_setdir.cpp_CDemonSet_isPointInVdirBox_FUN_00541350
// Address: 00541350
// Address Range: [[00541350, 00541408]]
// Convention: __cdecl
// Signature: int __cdecl core_setdir_cpp_CDemonSet_isPointInVdirBox_FUN_00541350(CDemonSet *this_ptr,int box_index,CVector3f *point)

#include "nocturne.h"

int __cdecl core_setdir_cpp_CDemonSet_isPointInVdirBox_FUN_00541350(CDemonSet *this_ptr,int box_index,CVector3f *point)

{
  SVDBox *pSVar1;
  byte bVar2;
  float afStackY_1028 [1016];
  float local_40;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float fStack_18;
  float fStack_14;
  
  bVar2 = 0;
  pSVar1 = this_ptr->vdir_boxes + box_index;
  local_34 = point->x - (pSVar1->position).x;
  local_30 = point->y - (pSVar1->position).y;
  local_2c = point->z - (pSVar1->position).z;
  local_1c = local_34;
  fStack_18 = local_30;
  fStack_14 = local_2c;
  core_dirmat_cpp_FUN_0045b870(&pSVar1->rotation_matrix,&stack0xffffffe4);
  local_28 = local_40;
  *(uint *)((int)&stack0xffffffdc + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffc4 + (uint)bVar2 * -8);
  *(uint *)((int)&stack0xffffffe0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffc8 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  if (((ABS(local_28) <= (pSVar1->extents).x) && (ABS(local_24) <= (pSVar1->extents).y)) &&
     (ABS(local_20) <= (pSVar1->extents).z)) {
    return 1;
  }
  return 0;
}
