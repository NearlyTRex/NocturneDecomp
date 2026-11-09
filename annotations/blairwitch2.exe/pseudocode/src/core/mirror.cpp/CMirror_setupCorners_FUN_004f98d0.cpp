// Name: core_mirror.cpp_CMirror_setupCorners_FUN_004f98d0
// Address: 004f98d0
// Address Range: [[004f98d0, 004f9949]]
// Convention: __cdecl
// Signature: void __cdecl core_mirror_cpp_CMirror_setupCorners_FUN_004f98d0(CMirror *this_ptr,CVector3f *corner1,CVector3f *corner2,CVector3f *corner3,CVector3f *corner4)

#include "nocturne.h"

void __cdecl core_mirror_cpp_CMirror_setupCorners_FUN_004f98d0(CMirror *this_ptr,CVector3f *corner1,CVector3f *corner2,CVector3f *corner3,CVector3f *corner4)

{
  if ((CVector3f *)this_ptr != corner1) {
    *(uint *)this_ptr = *(uint *)corner1;
    *(uint *)(this_ptr + 4) = *(uint *)&corner1->field_0x4;
    *(uint *)(this_ptr + 8) = *(uint *)&corner1->field_0x8;
  }
  if ((CVector3f *)(this_ptr + 0xc) != corner2) {
    *(uint *)(this_ptr + 0xc) = *(uint *)corner2;
    *(uint *)(this_ptr + 0x10) = *(uint *)&corner2->field_0x4;
    *(uint *)(this_ptr + 0x14) = *(uint *)&corner2->field_0x8;
  }
  if ((CVector3f *)(this_ptr + 0x18) != corner3) {
    *(uint *)(this_ptr + 0x18) = *(uint *)corner3;
    *(uint *)(this_ptr + 0x1c) = *(uint *)&corner3->field_0x4;
    *(uint *)(this_ptr + 0x20) = *(uint *)&corner3->field_0x8;
  }
  if ((CVector3f *)(this_ptr + 0x24) == corner4) {
    return;
  }
  *(uint *)(this_ptr + 0x24) = *(uint *)corner4;
  *(uint *)(this_ptr + 0x28) = *(uint *)&corner4->field_0x4;
  *(uint *)(this_ptr + 0x2c) = *(uint *)&corner4->field_0x8;
  return;
}
