// Name: core_minecar.cpp_FUN_00520f20
// Address: 00520f20
// Address Range: [[00520f20, 00520f37]]
// Convention: __cdecl
// Signature: CMineCar * core_minecar.cpp_FUN_00520f20(CMineCar * this_ptr)

#include "nocturne.h"

CMineCar * __cdecl core_minecar_cpp_FUN_00520f20(CMineCar *this_ptr)

{
  CMineCar *pCVar1;
  
  pCVar1 = (CMineCar *)core_platfrm_cpp_CPlatform_ctor_FUN_0054c850(&this_ptr->base);
  (pCVar1->base).base.vtable._ub = &g_CMinecarVTable;
  return pCVar1;
}
