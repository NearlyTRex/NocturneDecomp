// Name: core_course.cpp_CCourse_evaluate_FUN_0043b800
// Address: 0043b800
// Address Range: [[0043b800, 0043b884]]
// Convention: __cdecl
// Signature: void __cdecl core_course_cpp_CCourse_evaluate_FUN_0043b800(CCourse *this_ptr,float time,CVector3f *out_pos,CVector3f *out_euler)

#include "nocturne.h"

void __cdecl core_course_cpp_CCourse_evaluate_FUN_0043b800(CCourse *this_ptr,float time,CVector3f *out_pos,CVector3f *out_euler)

{
  CVector3f *pCVar1;
  int iVar2;
  float *pfVar3;
  CMatrix3x4f *pCVar4;
  byte bVar5;
  CMatrix3x4f local_88;
  float local_58 [12];
  CQuaternion4f local_28;
  CVector3f local_18;
  
  bVar5 = 0;
  core_course_cpp_CCourse_interpolate_FUN_0043b890(this_ptr,time,out_pos,&local_28);
  pCVar1 = &local_18;
  core_xform_cpp_quaternionToMatrix3x4_FUN_0055ced0(&local_28);
  pfVar3 = local_58;
  pCVar4 = &local_88;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar4->m[0].w = *pfVar3;
    pfVar3 = pfVar3 + (uint)bVar5 * -2 + 1;
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar5 * -2 + 1) * 4);
  }
  pCVar1 = core_xform_cpp_matrixToEulerAngles_FUN_0055b180(&local_88,pCVar1);
  if (out_euler == pCVar1) {
    return;
  }
  out_euler->x = pCVar1->x;
  out_euler->y = pCVar1->y;
  out_euler->z = pCVar1->z;
  return;
}
