// Name: core_mirror.cpp_applyMirrorTransform_FUN_005222f0
// Address: 005222f0
// Address Range: [[005222f0, 0052230e]]
// Convention: __cdecl
// Signature: CVector3f * core_mirror.cpp_applyMirrorTransform_FUN_005222f0(SMirrorReflection * reflection, CVector3f * output_buffer, CVector3f * input_vector)

#include "nocturne.h"

CVector3f * __cdecl
core_mirror_cpp_applyMirrorTransform_FUN_005222f0
          (SMirrorReflection *reflection,CVector3f *output_buffer,CVector3f *input_vector)

{
  core_xform_cpp_transformVector3x4_FUN_005f4dc0
            (output_buffer,input_vector,&reflection->mirror_transform_matrix);
  return output_buffer;
}
