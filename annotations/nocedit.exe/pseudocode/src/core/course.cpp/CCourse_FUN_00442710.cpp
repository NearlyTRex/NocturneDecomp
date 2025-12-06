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
  BADSPACEBASE *in_ESP;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  CVector3f *in_stack_00000010;
  CMatrix3x3f *in_stack_ffffff7c;
  CVector3f aCStack_80 [4];
  uint auStack_50 [17];
  
  bVar5 = 0;
  core_course_cpp_CCourse_FUN_004427a0();
  core_xform_cpp_quaternionToMatrix3x4_FUN_005f73e0
            ((CMatrix3x4f *)(auStack_50 + 0xb),(CQuaternion4f *)(auStack_50 + 0xf));
  puVar3 = auStack_50;
  puVar4 = (uint *)&stack0xffffff7c;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  pCVar1 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690(aCStack_80,in_stack_ffffff7c);
  if (in_stack_00000010 == pCVar1) {
    return;
  }
  in_stack_00000010->x = pCVar1->x;
  in_stack_00000010->y = pCVar1->y;
  in_stack_00000010->z = pCVar1->z;
  return;
}
