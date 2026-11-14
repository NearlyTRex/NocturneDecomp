// Name: core_set.cpp_CDemonSet_getReverbPresetAtPosition_FUN_00539dd0
// Address: 00539dd0
// Address Range: [[00539dd0, 00539ed8]]
// Convention: __cdecl
// Signature: int __cdecl core_set_cpp_CDemonSet_getReverbPresetAtPosition_FUN_00539dd0(CDemonSet *this_ptr,CVector3f *position)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_set_cpp_CDemonSet_getReverbPresetAtPosition_FUN_00539dd0(CDemonSet *this_ptr,CVector3f *position)

{
  SRoom *pSVar1;
  byte bVar2;
  float afStackY_1038 [1016];
  float local_50;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_2c;
  float local_28;
  float local_24;
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
      local_40 = position->y - (pSVar1->position).y;
      local_3c = position->z - (pSVar1->position).z;
      local_38 = local_44;
      *(uint *)((int)&stack0xffffffcc + (uint)bVar2 * 0xfffffffe * 4) =
           *(uint *)((int)&stack0xffffffc0 + (uint)bVar2 * -8);
      *(uint *)(&stack0xffffffd0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
           *(uint *)((int)&stack0xffffffc4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
      core_dirmat_cpp_FUN_0045b870(local_20,&stack0xffffffc8);
      local_2c = local_50;
      *(uint *)((int)&stack0xffffffd8 + (uint)bVar2 * -8) =
           *(uint *)(&stack0xffffffb4 + (uint)bVar2 * -8);
      *(uint *)((int)&stack0xffffffdc + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
           *(uint *)(&stack0xffffffb8 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
      if (((ABS(local_2c) <= (pSVar1->extents).x) && (ABS(local_28) <= (pSVar1->extents).y)) &&
         (ABS(local_24) <= (pSVar1->extents).z)) {
        return pSVar1->reverb_size;
      }
      local_1c = local_1c + 1;
      local_20 = (CMatrix3x3f *)((int)(local_20 + 1) + 0x20);
    } while (local_1c < this_ptr->room_count);
  }
  return this_ptr->default_room_size;
}
