// Name: core_bugs.cpp_getDeformableModelName_FUN_004242d0
// Address: 004242d0
// Address Range: [[004242d0, 004242d9]]
// Convention: __cdecl
// Signature: char * __cdecl core_bugs_cpp_getDeformableModelName_FUN_004242d0(CDeformableModelInstance *model_ptr)

#include "nocturne.h"

char * __cdecl core_bugs_cpp_getDeformableModelName_FUN_004242d0(CDeformableModelInstance *model_ptr)

{
  return model_ptr->model_name;
}
