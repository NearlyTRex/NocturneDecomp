// Name: core_set.cpp_CDemonSet_getReverbPresetAtPosition_FUN_0056fac0
// Address: 0056fac0
// Address Range: [[0056fac0, 0056fb7f]]
// Convention: __cdecl
// Signature: float __cdecl core_set_cpp_CDemonSet_getReverbPresetAtPosition_FUN_0056fac0(CDemonSet *this_ptr,CVector3f *position)

#include "nocturne.h"

float __cdecl core_set_cpp_CDemonSet_getReverbPresetAtPosition_FUN_0056fac0(CDemonSet *this_ptr,CVector3f *position)

{
  SRoom *pSVar1;
  int iVar2;
  CMatrix3x3f *this_ptr_00;
  CVector3f local_30;
  CVector3f local_24;
  SRoom *local_18;
  
  iVar2 = 0;
  if (0 < this_ptr->room_count) {
    local_18 = this_ptr->rooms;
    this_ptr_00 = &this_ptr->rooms[0].rotation_matrix;
    do {
      pSVar1 = local_18 + iVar2;
      local_24.x = position->x - (pSVar1->position).x;
      local_24.y = position->y - (pSVar1->position).y;
      local_24.z = position->z - (pSVar1->position).z;
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                (this_ptr_00,&local_30,&local_24);
      if (((ABS(local_30.x) <= (pSVar1->extents).x) && (ABS(local_30.y) <= (pSVar1->extents).y)) &&
         (ABS(local_30.z) <= (pSVar1->extents).z)) {
        return (float)pSVar1->reverb_size;
      }
      iVar2 = iVar2 + 1;
      this_ptr_00 = (CMatrix3x3f *)((int)(this_ptr_00 + 1) + 0x20);
    } while (iVar2 < this_ptr->room_count);
  }
  return (float)this_ptr->default_room_size;
}
