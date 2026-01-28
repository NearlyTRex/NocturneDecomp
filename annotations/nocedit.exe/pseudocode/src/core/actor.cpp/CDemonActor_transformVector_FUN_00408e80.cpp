// Name: core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
// Address: 00408e80
// Address Range: [[00408e80, 00408e9e]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_actor_cpp_CDemonActor_transformVector_FUN_00408e80 (CDemonActor *this_ptr,CVector3f *output,CVector3f *input)

#include "nocturne.h"

CVector3f * __cdecl
core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
          (CDemonActor *this_ptr,CVector3f *output,CVector3f *input)

{
  core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0(&this_ptr->orient_matrix,output,input);
  return output;
}
