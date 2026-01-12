// Name: core_setdir.cpp_CDemonSet_FUN_005762a0
// Address: 005762a0
// Address Range: [[005762a0, 00576336]]
// Convention: __cdecl
// Signature: int core_setdir.cpp_CDemonSet_FUN_005762a0(CDemonSet * this_ptr)

#include "nocturne.h"

int __cdecl core_setdir_cpp_CDemonSet_FUN_005762a0(CDemonSet *this_ptr)

{
  SVDBox *pSVar1;
  BADSPACEBASE *in_ESP;
  int in_stack_00000008;
  float *in_stack_0000000c;
  CVector3f local_20;
  CVector3f local_14;
  
  pSVar1 = this_ptr->vdir_boxes + in_stack_00000008;
  local_14.x = *in_stack_0000000c - (pSVar1->position).x;
  local_14.y = in_stack_0000000c[1] - (pSVar1->position).y;
  local_14.z = in_stack_0000000c[2] - (pSVar1->position).z;
  core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
            (&pSVar1->rotation_matrix,&local_20,&local_14);
  if (((ABS(local_20.x) <= (pSVar1->extents).x) && (ABS(local_20.y) <= (pSVar1->extents).y)) &&
     (ABS(local_20.z) <= (pSVar1->extents).z)) {
    return 1;
  }
  return 0;
}
