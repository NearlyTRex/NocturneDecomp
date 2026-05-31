// Name: core_dmodel.cpp_CKeyFramedModelInstance_init_FUN_00478d00
// Address: 00478d00
// MANUAL RECONSTRUCTION
// Address Range: [[00478d00, 00478d16]]
// Convention: __cdecl
// Signature: CKeyFramedModelInstance * __cdecl core_dmodel_cpp_CKeyFramedModelInstance_init_FUN_00478d00(CKeyFramedModelInstance *this_ptr)

#include "nocturne.h"

CKeyFramedModelInstance * __cdecl core_dmodel_cpp_CKeyFramedModelInstance_init_FUN_00478d00(CKeyFramedModelInstance *this_ptr)

{
  int i;

  for (i = 0; i < 30; i = i + 1) {
    this_ptr->part_visibility_flags[i] = 1;
  }
  return this_ptr;
}
