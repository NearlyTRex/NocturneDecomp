// Name: core_setdir.cpp_CDemonSet_findVdirBoxRoot_FUN_00514300
// Address: 00514300
// Address Range: [[00514300, 0051433a]]
// Convention: __cdecl
// Signature: int __cdecl core_setdir_cpp_CDemonSet_findVdirBoxRoot_FUN_00514300(CDemonSet *this_ptr,int box_index)

#include "nocturne.h"

int __cdecl core_setdir_cpp_CDemonSet_findVdirBoxRoot_FUN_00514300(CDemonSet *this_ptr,int box_index)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)box_index;
  do {
    fVar2 = fVar1;
    fVar1 = this_ptr->rooms[(int)fVar2 + 6].extents.z;
  } while (-1 < (int)fVar1);
  while ((float)box_index != fVar2) {
    fVar1 = this_ptr->rooms[box_index + 6].extents.z;
    this_ptr->rooms[box_index + 6].extents.z = fVar2;
    box_index = (int)fVar1;
  }
  return (int)fVar2;
}
