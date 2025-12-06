// Name: core_set.cpp_CDemonSet_FUN_0056fac0
// Address: 0056fac0
// Address Range: [[0056fac0, 0056fb7f]]
// Convention: __cdecl
// Signature: float core_set.cpp_CDemonSet_FUN_0056fac0(CDemonSet * this_ptr)

#include "nocturne.h"

float __cdecl core_set_cpp_CDemonSet_FUN_0056fac0(CDemonSet *this_ptr)

{
  SRoom *pSVar1;
  BADSPACEBASE *in_ESP;
  int iVar2;
  CMatrix3x3f *matrix;
  float *in_stack_00000008;
  CVector3f local_30;
  CVector3f local_24;
  SRoom *local_18;
  
  iVar2 = 0;
  if (0 < this_ptr->room_count) {
    local_18 = this_ptr->rooms;
    matrix = &this_ptr->rooms[0].rotation_matrix;
    do {
      pSVar1 = local_18 + iVar2;
      local_24.x = *in_stack_00000008 - (pSVar1->position).x;
      local_24.y = in_stack_00000008[1] - (pSVar1->position).y;
      local_24.z = in_stack_00000008[2] - (pSVar1->position).z;
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030(matrix,&local_30,&local_24);
      if (((ABS(local_30.x) <= (pSVar1->extents).x) && (ABS(local_30.z) <= (pSVar1->extents).y)) &&
         (ABS(local_24.x) <= (pSVar1->extents).z)) {
        return (float)pSVar1->field4_0x40;
      }
      iVar2 = iVar2 + 1;
      matrix = (CMatrix3x3f *)((int)(matrix + 1) + 0x20);
    } while (iVar2 < this_ptr->room_count);
  }
  return (float)this_ptr->room_reverb_type;
}
