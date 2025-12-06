// Name: core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
// Address: 00408ea0
// Address Range: [[00408ea0, 00408ebe]]
// Convention: __cdecl
// Signature: CVector3f * core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0(CDemonActor * this_ptr, CVector3f * output_vector, CVector3f * input_vector)

#include "nocturne.h"

CVector3f * __cdecl
core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
          (CDemonActor *this_ptr,CVector3f *output_vector,CVector3f *input_vector)

{
  core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
            (&this_ptr->orient_matrix,output_vector,input_vector);
  return output_vector;
}
