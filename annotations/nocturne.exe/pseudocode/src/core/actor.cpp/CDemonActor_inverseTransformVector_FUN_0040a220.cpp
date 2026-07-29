// Name: core_actor.cpp_CDemonActor_inverseTransformVector_FUN_0040a220
// Address: 0040a220
// Address Range: [[0040a220, 0040a23e]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_actor_cpp_CDemonActor_inverseTransformVector_FUN_0040a220(CDemonActor *this_ptr,CVector3f *output_vector,CVector3f *input_vector)

#include "nocturne.h"

CVector3f * __cdecl core_actor_cpp_CDemonActor_inverseTransformVector_FUN_0040a220(CDemonActor *this_ptr,CVector3f *output_vector,CVector3f *input_vector)

{
  core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
            (&this_ptr->orient_matrix,output_vector,input_vector);
  return output_vector;
}
