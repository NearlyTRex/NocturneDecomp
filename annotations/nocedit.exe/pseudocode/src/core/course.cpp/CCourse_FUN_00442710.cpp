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
  float *pfVar3;
  byte bVar4;
  CVector3f *in_stack_00000010;
  CQuaternion4f *quat_ptr;
  CVector3f local_88 [4];
  float local_58 [19];
  
  bVar4 = 0;
  core_course_cpp_CCourse_FUN_004427a0();
  quat_ptr = (CQuaternion4f *)(local_58 + 0x10);
  core_xform_cpp_quaternionToMatrix3x4_FUN_005f73e0((CMatrix3x4f *)(local_58 + 0xc),quat_ptr);
  pfVar3 = local_58;
  pCVar1 = local_88;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar1->x = *pfVar3;
    pfVar3 = pfVar3 + (uint)bVar4 * -2 + 1;
    pCVar1 = (CVector3f *)((int)pCVar1 + ((uint)bVar4 * -2 + 1) * 4);
  }
  pCVar1 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690(local_88,(CMatrix3x3f *)quat_ptr);
  if (in_stack_00000010 == pCVar1) {
    return;
  }
  in_stack_00000010->x = pCVar1->x;
  in_stack_00000010->y = pCVar1->y;
  in_stack_00000010->z = pCVar1->z;
  return;
}
