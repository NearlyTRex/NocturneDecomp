// Name: core_mirror.cpp_CMirror_setupCorners_FUN_004d6590
// Address: 004d6590
// Address Range: [[004d6590, 004d6609]]
// Convention: __cdecl
// Signature: void __cdecl core_mirror_cpp_CMirror_setupCorners_FUN_004d6590(CMirror *this_ptr,CVector3f *corner1,CVector3f *corner2,CVector3f *corner3,CVector3f *corner4)

#include "nocturne.h"

void __cdecl core_mirror_cpp_CMirror_setupCorners_FUN_004d6590(CMirror *this_ptr,CVector3f *corner1,CVector3f *corner2,CVector3f *corner3,CVector3f *corner4)

{
  CVector3f *pCVar1;
  
  if (this_ptr != (CMirror *)corner1) {
    (this_ptr->reflection).corner1.x = corner1->x;
    (this_ptr->reflection).corner1.y = corner1->y;
    (this_ptr->reflection).corner1.z = corner1->z;
  }
  pCVar1 = &(this_ptr->reflection).corner2;
  if (pCVar1 != corner2) {
    pCVar1->x = corner2->x;
    (this_ptr->reflection).corner2.y = corner2->y;
    (this_ptr->reflection).corner2.z = corner2->z;
  }
  pCVar1 = &(this_ptr->reflection).corner3;
  if (pCVar1 != corner3) {
    pCVar1->x = corner3->x;
    (this_ptr->reflection).corner3.y = corner3->y;
    (this_ptr->reflection).corner3.z = corner3->z;
  }
  pCVar1 = &(this_ptr->reflection).corner4;
  if (pCVar1 == corner4) {
    return;
  }
  pCVar1->x = corner4->x;
  (this_ptr->reflection).corner4.y = corner4->y;
  (this_ptr->reflection).corner4.z = corner4->z;
  return;
}
