// Name: core_course.cpp_CCourse_evaluate_FUN_00442710
// Address: 00442710
// MANUAL RECONSTRUCTION
// Address Range: [[00442710, 00442794] [03fc45a3, 03fc4606]]
// Convention: __cdecl
// Signature: void __cdecl core_course_cpp_CCourse_evaluate_FUN_00442710(CCourse *this_ptr,float time,CVector3f *out_pos,CVector3f *out_euler)

#include "nocturne.h"

void __cdecl core_course_cpp_CCourse_evaluate_FUN_00442710(CCourse *this_ptr,float time,CVector3f *out_pos,CVector3f *out_euler)

{
  CVector3f *pCVar1;
  CVector3f *euler_out;
  CMatrix3x4f local_58;
  CQuaternion4f local_28;
  CVector3f local_18;
  
  core_course_cpp_CCourse_interpolate_FUN_004427a0(this_ptr,time,out_pos,&local_28);
  euler_out = &local_18;
  core_xform_cpp_quaternionToMatrix3x4_FUN_005f73e0(&local_28,&local_58);
  pCVar1 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690(&local_58,euler_out);
  if (out_euler == pCVar1) {
    return;
  }
  *out_euler = *pCVar1;
  return;
}
