// Name: core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
// Address: 00478ce0
// Address Range: [[00478ce0, 00478cff]]
// Convention: __cdecl
// Signature: CKeyFramedModelInstance * __cdecl core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(CKeyFramedModelInstance *this_ptr)

#include "nocturne.h"

CKeyFramedModelInstance * __cdecl
core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(CKeyFramedModelInstance *this_ptr)

{
  this_ptr->model_name[0] = '\0';
  this_ptr->model_ptr = (CKeyFramedModel *)0x0;
  core_dmodel_cpp_CKeyFramedModelInstance_init_FUN_00478d00(this_ptr);
  return this_ptr;
}
