// Name: core_mirror.cpp_CMirrorReflection_applyMirrorTransform_FUN_004d7480
// Address: 004d7480
// Address Range: [[004d7480, 004d749e]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_mirror_cpp_CMirrorReflection_applyMirrorTransform_FUN_004d7480(CMirrorReflection *this_ptr,CVector3f *output_buffer,CVector3f *input_vector)

#include "nocturne.h"

CVector3f * __cdecl core_mirror_cpp_CMirrorReflection_applyMirrorTransform_FUN_004d7480(CMirrorReflection *this_ptr,CVector3f *output_buffer,CVector3f *input_vector)

{
  core_xform_cpp_transformVector3x4_FUN_0055a8b0
            (output_buffer,input_vector,&this_ptr->mirror_transform_matrix);
  return output_buffer;
}
