// Name: core_course.cpp_CCourse_FUN_00442710
// Address: 00442710
// Address Range: [[00442710, 00442794]]
// Convention: __cdecl
// Signature: void __cdecl core_course_cpp_CCourse_FUN_00442710(CCourse *this_ptr)

#include "nocturne.h"

void __cdecl core_course_cpp_CCourse_FUN_00442710(CCourse *this_ptr)

{
  CVector3f *pCVar1;
  int iVar2;
  CMatrix3x4f *pCVar3;
  CMatrix3x3f *pCVar4;
  byte bVar5;
  CVector3f *in_stack_00000010;
  CMatrix3x3f local_88;
  CMatrix3x4f local_58;
  CQuaternion4f local_28;
  CVector3f local_18;
  
  bVar5 = 0;
  core_course_cpp_CCourse_FUN_004427a0();
  pCVar1 = &local_18;
  core_xform_cpp_quaternionToMatrix3x4_FUN_005f73e0(&local_28,&local_58);
  pCVar3 = &local_58;
  pCVar4 = &local_88;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar4->m[0].x = pCVar3->m[0].w;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar5 * -2 + 1) * 4);
    pCVar4 = (CMatrix3x3f *)((int)pCVar4 + ((uint)bVar5 * -2 + 1) * 4);
  }
  pCVar1 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690(&local_88,pCVar1);
  if (in_stack_00000010 == pCVar1) {
    return;
  }
  in_stack_00000010->x = pCVar1->x;
  in_stack_00000010->y = pCVar1->y;
  in_stack_00000010->z = pCVar1->z;
  return;
}
