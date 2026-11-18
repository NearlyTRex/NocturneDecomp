// Name: core_mirror.cpp_CMirrorReflection_applyMirrorTransform_FUN_004f50f0
// Address: 004f50f0
// Address Range: [[004f50f0, 004f5120]]
// Convention: __stack2_esi
// Signature: CVector3f * __stack2_esi core_mirror_cpp_CMirrorReflection_applyMirrorTransform_FUN_004f50f0(CMirrorReflection *this_ptr,CVector3f *input_vector,CVector3f *output_buffer)

#include "nocturne.h"

CVector3f * __stack2_esi core_mirror_cpp_CMirrorReflection_applyMirrorTransform_FUN_004f50f0(CMirrorReflection *this_ptr,CVector3f *input_vector,CVector3f *output_buffer)

{
  uint *puVar1;
  byte bVar2;
  float afStackY_ffc [1016];
  CVector3f local_14;
  
  bVar2 = 0;
  core_xform_cpp_transformVector3x4_FUN_00583260
            (input_vector,&this_ptr->mirror_transform_matrix,&local_14);
  puVar1 = (uint *)((int)output_buffer + (uint)bVar2 * -8 + 4);
  output_buffer->x = local_14.x;
  *puVar1 = *(uint *)((int)&local_14 + (uint)bVar2 * -8 + 4);
  puVar1[(uint)bVar2 * -2 + 1] =
       *(uint *)((int)&local_14 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  return output_buffer;
}
