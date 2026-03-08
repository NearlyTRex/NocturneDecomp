// Name: core_bugs.cpp_getDeformableModelName_FUN_00427b70
// Address: 00427b70
// Address Range: [[00427b70, 00427b79]]
// Convention: __cdecl
// Signature: char * __cdecl core_bugs_cpp_getDeformableModelName_FUN_00427b70(CDeformableModelInstance *model_ptr)

#include "nocturne.h"

char * __cdecl core_bugs_cpp_getDeformableModelName_FUN_00427b70(CDeformableModelInstance *model_ptr)

{
  return model_ptr->model_name;
}
