// Name: core_bugs.cpp_getDeformableModelName_FUN_004220f0
// Address: 004220f0
// Address Range: [[004220f0, 004220f9]]
// Convention: __cdecl
// Signature: char * __cdecl core_bugs_cpp_getDeformableModelName_FUN_004220f0(CDeformableModelInstance *model_ptr)

#include "nocturne.h"

char * __cdecl core_bugs_cpp_getDeformableModelName_FUN_004220f0(CDeformableModelInstance *model_ptr)

{
  return model_ptr->model_name;
}
