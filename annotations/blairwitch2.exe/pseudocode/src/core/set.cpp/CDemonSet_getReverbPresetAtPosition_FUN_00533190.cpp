// Name: core_set.cpp_CDemonSet_getReverbPresetAtPosition_FUN_00533190
// Address: 00533190
// Address Range: [[00533190, 00533298]]
// Convention: __cdecl
// Signature: int __cdecl core_set_cpp_CDemonSet_getReverbPresetAtPosition_FUN_00533190(CDemonSet *this_ptr,CVector3f *position)

#include "nocturne.h"

int __cdecl core_set_cpp_CDemonSet_getReverbPresetAtPosition_FUN_00533190(CDemonSet *this_ptr,CVector3f *position)

{
  SRoom *pSVar1;
  byte bVar2;
  float afStackY_1038 [1016];
  CVector3f local_50;
  float local_44;
  float local_40 [2];
  CVector3f local_38;
  float local_2c;
  float local_28 [2];
  CMatrix3x3f *local_20;
  int local_1c;
  SRoom *local_18;
  
  bVar2 = 0;
  local_1c = 0;
  if (0 < this_ptr->room_count) {
    local_18 = this_ptr->rooms;
    local_20 = &this_ptr->rooms[0].rotation_matrix;
    do {
      pSVar1 = local_18 + local_1c;
      local_44 = position->x - (pSVar1->position).x;
      local_40[0] = position->y - (pSVar1->position).y;
      local_40[1] = position->z - (pSVar1->position).z;
      local_38.x = local_44;
      *(float *)((int)&local_38 + (uint)bVar2 * -8 + 4) = local_40[(uint)bVar2 * -2];
      *(float *)((int)&local_38 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
           local_40[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_004495a0
                (local_20,&local_38,&local_50);
      local_2c = local_50.x;
      local_28[(uint)bVar2 * -2] = *(float *)((int)&local_50 + (uint)bVar2 * -8 + 4);
      local_28[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
           *(float *)((int)&local_50 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
      if (((ABS(local_2c) <= (pSVar1->extents).x) && (ABS(local_28[0]) <= (pSVar1->extents).y)) &&
         (ABS(local_28[1]) <= (pSVar1->extents).z)) {
        return pSVar1->reverb_size;
      }
      local_1c = local_1c + 1;
      local_20 = (CMatrix3x3f *)((int)(local_20 + 1) + 0x20);
    } while (local_1c < this_ptr->room_count);
  }
  return this_ptr->default_room_size;
}
