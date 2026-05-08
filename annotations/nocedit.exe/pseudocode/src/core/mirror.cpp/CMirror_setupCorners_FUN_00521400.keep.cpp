// Name: core_mirror.cpp_CMirror_setupCorners_FUN_00521400
// Address: 00521400
// MANUAL RECONSTRUCTION
// Address Range: [[00521400, 00521479]]
// Convention: __cdecl
// Signature: void __cdecl core_mirror_cpp_CMirror_setupCorners_FUN_00521400(CMirror *this_ptr,CVector3f *corner1,CVector3f *corner2,CVector3f *corner3,CVector3f *corner4)

#include "nocturne.h"

void __cdecl core_mirror_cpp_CMirror_setupCorners_FUN_00521400(CMirror *this_ptr,CVector3f *corner1,CVector3f *corner2,CVector3f *corner3,CVector3f *corner4)

{
  CVector3f *pCVar1;
  
  if (this_ptr != (CMirror *)corner1) {
    (this_ptr->reflection).corner1 = *corner1;
  }
  pCVar1 = &(this_ptr->reflection).corner2;
  if (pCVar1 != corner2) {
    *pCVar1 = *corner2;
  }
  pCVar1 = &(this_ptr->reflection).corner3;
  if (pCVar1 != corner3) {
    *pCVar1 = *corner3;
  }
  pCVar1 = &(this_ptr->reflection).corner4;
  if (pCVar1 == corner4) {
    return;
  }
  *pCVar1 = *corner4;
  return;
}
