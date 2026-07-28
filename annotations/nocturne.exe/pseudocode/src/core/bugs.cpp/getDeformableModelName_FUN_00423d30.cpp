// Name: core_bugs.cpp_getDeformableModelName_FUN_00423d30
// Address: 00423d30
// Address Range: [[00423d30, 00423d39]]
// Convention: __cdecl
// Signature: char * __cdecl core_bugs_cpp_getDeformableModelName_FUN_00423d30(CDeformableModelInstance *model_ptr)

#include "nocturne.h"

char * __cdecl core_bugs_cpp_getDeformableModelName_FUN_00423d30(CDeformableModelInstance *model_ptr)

{
  return model_ptr->model_name;
}
