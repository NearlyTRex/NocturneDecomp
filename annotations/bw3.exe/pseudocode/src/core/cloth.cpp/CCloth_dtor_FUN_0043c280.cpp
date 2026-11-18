// Name: core_cloth.cpp_CCloth_dtor_FUN_0043c280
// Address: 0043c280
// Address Range: [[0043c280, 0043c29c]]
// Convention: __cdecl
// Signature: CCloth * __cdecl core_cloth_cpp_CCloth_dtor_FUN_0043c280(CCloth *this_ptr,uint flags)

#include "nocturne.h"

CCloth * __cdecl core_cloth_cpp_CCloth_dtor_FUN_0043c280(CCloth *this_ptr,uint flags)

{
  CCloth *pCVar1;
  
  core_cloth_cpp_CCloth_free_FUN_0043c300(this_ptr);
  pCVar1 = (CCloth *)core_dmodel_cpp_CKeyFramedModel_dtor_FUN_00460530(&this_ptr->model,1);
  return pCVar1;
}
