// Name: core_actor.cpp_CDemonActor_transformVector_FUN_0040a200
// Address: 0040a200
// Address Range: [[0040a200, 0040a21e]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_actor_cpp_CDemonActor_transformVector_FUN_0040a200(CDemonActor *this_ptr,CVector3f *output,CVector3f *input)

#include "nocturne.h"

CVector3f * __cdecl core_actor_cpp_CDemonActor_transformVector_FUN_0040a200(CDemonActor *this_ptr,CVector3f *output,CVector3f *input)

{
  core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40(&this_ptr->orient_matrix,output,input);
  return output;
}
