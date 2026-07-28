// Name: core_mirror.cpp_CMirrorReflection_applyMirrorTransform_FUN_004d7480
// Address: 004d7480
// Address Range: [[004d7480, 004d749e]]
// Convention: unknown
// Signature: CVector3f * core_mirror_cpp_CMirrorReflection_applyMirrorTransform_FUN_004d7480(int param_1,CVector3f *param_2,CVector3f *param_3)

#include "nocturne.h"

CVector3f * core_mirror_cpp_CMirrorReflection_applyMirrorTransform_FUN_004d7480(int param_1,CVector3f *param_2,CVector3f *param_3)

{
  core_xform_cpp_transformVector3x4_FUN_0055a8b0(param_2,param_3,(CMatrix3x4f *)(param_1 + 0x30));
  return param_2;
}
