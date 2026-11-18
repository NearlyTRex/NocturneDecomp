// Name: core_bugs.cpp_getDeformableModelName_FUN_00428120
// Address: 00428120
// Address Range: [[00428120, 00428129]]
// Convention: __cdecl
// Signature: char * __cdecl core_bugs_cpp_getDeformableModelName_FUN_00428120(CDeformableModelInstance *model_ptr)

#include "nocturne.h"

char * __cdecl core_bugs_cpp_getDeformableModelName_FUN_00428120(CDeformableModelInstance *model_ptr)

{
  return model_ptr->model_name;
}
