// Name: core_doc.cpp_CDoc_getTargetPoints_FUN_0045de80
// Address: 0045de80
// Address Range: [[0045de80, 0045dee2]]
// Convention: __cdecl
// Signature: int __cdecl core_doc_cpp_CDoc_getTargetPoints_FUN_0045de80(CDoc *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_doc_cpp_CDoc_getTargetPoints_FUN_0045de80(CDoc *this_ptr,CVector3f *out_points_array)

{
  byte bVar1;
  float afStackY_100c [1016];
  CVector3f CStack_24;
  float fStack_18;
  uint auStack_14 [2];
  
  bVar1 = 0;
  core_skeleton_cpp_FUN_00546a90(&this_ptr->field_0x2b4,_DAT_01b4d298);
  CStack_24.x = fStack_18;
  *(uint *)((int)&CStack_24 + (uint)bVar1 * -8 + 4) = auStack_14[(uint)bVar1 * -2];
  *(uint *)((int)&CStack_24 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       auStack_14[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
  if (out_points_array == &CStack_24) {
    return 1;
  }
  out_points_array->x = CStack_24.x;
  out_points_array->y = CStack_24.y;
  out_points_array->z = CStack_24.z;
  return 1;
}
