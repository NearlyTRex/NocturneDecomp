// Name: core_minecar.cpp_CMineCar_ctor_FUN_00510e90
// Address: 00510e90
// Address Range: [[00510e90, 00510ea7]]
// Convention: __cdecl
// Signature: CMineCar * __cdecl core_minecar_cpp_CMineCar_ctor_FUN_00510e90(CMineCar *this_ptr)

#include "nocturne.h"

CMineCar * __cdecl core_minecar_cpp_CMineCar_ctor_FUN_00510e90(CMineCar *this_ptr)

{
  CMineCar *pCVar1;
  
  pCVar1 = (CMineCar *)core_platfrm_cpp_CPlatform_ctor_FUN_00539400(&this_ptr->base);
  (pCVar1->base).base.vtable._ub = &g_CMineCarVTable;
  return pCVar1;
}
