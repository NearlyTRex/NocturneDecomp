// Name: core_setcolid.cpp_CDemonSet_ignore_FUN_00511780
// Address: 00511780
// Address Range: [[00511780, 005117dc]]
// Convention: __cdecl
// Signature: void __cdecl core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(CDemonSet *this_ptr,CDemonActor *actor)

#include "nocturne.h"

void __cdecl core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(CDemonSet *this_ptr,CDemonActor *actor)

{
  float *pfVar1;
  float fVar2;
  
  if ((actor != (CDemonActor *)0x0) &&
     (fVar2 = this_ptr->vdir_boxes[0xeb].rotation_matrix.m[1].z, -1 < (int)fVar2)) {
    if (9 < (int)fVar2) {
      PTR_01cc4800 = "..\\core\\setcolid.cpp";
      INT_01cc4804 = 0x473;
      core_main_c_FUN_004c8440("CDemonSet::ignore - ignore list is full");
    }
    (&this_ptr->vdir_boxes[0xeb].rotation_matrix.m[2].y)
    [(int)this_ptr->vdir_boxes[0xeb].rotation_matrix.m[1].z] = (float)actor;
    pfVar1 = &this_ptr->vdir_boxes[0xeb].rotation_matrix.m[1].z;
    *pfVar1 = (float)((int)*pfVar1 + 1);
  }
  return;
}
