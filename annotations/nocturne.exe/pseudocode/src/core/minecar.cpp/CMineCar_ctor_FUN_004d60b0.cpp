// Name: core_minecar.cpp_CMineCar_ctor_FUN_004d60b0
// Address: 004d60b0
// Address Range: [[004d60b0, 004d60c7]]
// Convention: __cdecl
// Signature: CMineCar * __cdecl core_minecar_cpp_CMineCar_ctor_FUN_004d60b0(CMineCar *this_ptr)

#include "nocturne.h"

CMineCar * __cdecl core_minecar_cpp_CMineCar_ctor_FUN_004d60b0(CMineCar *this_ptr)

{
  CMineCar *pCVar1;
  
  pCVar1 = (CMineCar *)core_platfrm_cpp_CPlatform_ctor_FUN_004f5d90(&this_ptr->base);
  (pCVar1->base).base.vtable._ub = &g_CMineCarVTable;
  return pCVar1;
}
