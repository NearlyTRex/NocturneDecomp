// Name: core_cloth.cpp_CCloth_dtor_FUN_005ade00
// Address: 005ade00
// Address Range: [[005ade00, 005ade1c]]
// Convention: __cdecl
// Signature: CCloth * __cdecl core_cloth_cpp_CCloth_dtor_FUN_005ade00(CCloth *this_ptr,uint flags)

#include "nocturne.h"

CCloth * __cdecl core_cloth_cpp_CCloth_dtor_FUN_005ade00(CCloth *this_ptr,uint flags)

{
  CCloth *pCVar1;
  
  core_cloth_cpp_CCloth_free_FUN_005ade80(this_ptr);
  pCVar1 = (CCloth *)core_dmodel_cpp_CKeyFramedModel_dtor_FUN_0044dcb0(&this_ptr->model,1);
  return pCVar1;
}
