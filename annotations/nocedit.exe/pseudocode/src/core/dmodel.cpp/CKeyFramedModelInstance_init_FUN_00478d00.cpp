// Name: core_dmodel.cpp_CKeyFramedModelInstance_init_FUN_00478d00
// Address: 00478d00
// Address Range: [[00478d00, 00478d16]]
// Convention: __cdecl
// Signature: CKeyFramedModelInstance * __cdecl core_dmodel_cpp_CKeyFramedModelInstance_init_FUN_00478d00(CKeyFramedModelInstance *this_ptr)

#include "nocturne.h"

CKeyFramedModelInstance * __cdecl core_dmodel_cpp_CKeyFramedModelInstance_init_FUN_00478d00(CKeyFramedModelInstance *this_ptr)

{
  char *pcVar1;
  
  pcVar1 = this_ptr->model_name;
  do {
    this_ptr->part_visibility_flags[0] = 1;
    this_ptr = (CKeyFramedModelInstance *)(this_ptr->part_visibility_flags + 1);
  } while (this_ptr != (CKeyFramedModelInstance *)pcVar1);
  return this_ptr;
}
