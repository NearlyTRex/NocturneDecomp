// Name: core_course.cpp_CCourse_FUN_00442710
// Address: 00442710
// Address Range: [[00442710, 00442794]]
// Convention: __cdecl
// Signature: void core_course.cpp_CCourse_FUN_00442710(CCourse * this_ptr)

#include "nocturne.h"

void __cdecl core_course_cpp_CCourse_FUN_00442710(CCourse *this_ptr)

{
  CVector3f *pCVar1;
  int iVar2;
  CQuaternion4f *pCVar3;
  byte bVar4;
  CVector3f *in_stack_00000010;
  CMatrix3x3f *matrix_ptr;
  CVector3f local_88 [4];
  CQuaternion4f local_58 [3];
  CQuaternion4f local_28;
  
  bVar4 = 0;
  core_course_cpp_CCourse_FUN_004427a0();
  matrix_ptr = (CMatrix3x3f *)&stack0xffffffe8;
  core_xform_cpp_quaternionToMatrix3x4_FUN_005f73e0((CMatrix3x4f *)(local_58 + 3),local_58);
  pCVar3 = local_58;
  pCVar1 = local_88;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar1->x = pCVar3->w;
    pCVar3 = (CQuaternion4f *)((int)pCVar3 + ((uint)bVar4 * -2 + 1) * 4);
    pCVar1 = (CVector3f *)((int)pCVar1 + ((uint)bVar4 * -2 + 1) * 4);
  }
  pCVar1 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690(local_88,matrix_ptr);
  if (in_stack_00000010 == pCVar1) {
    return;
  }
  in_stack_00000010->x = pCVar1->x;
  in_stack_00000010->y = pCVar1->y;
  in_stack_00000010->z = pCVar1->z;
  return;
}
