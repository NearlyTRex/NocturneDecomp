// Name: core_minecar.cpp_factoryFuncMineCar_FUN_00510dc0
// Address: 00510dc0
// Address Range: [[00510dc0, 00510de5]]
// Convention: __cdecl
// Signature: CMineCar * __cdecl core_minecar_cpp_factoryFuncMineCar_FUN_00510dc0(void)

#include "nocturne.h"

CMineCar * __cdecl core_minecar_cpp_factoryFuncMineCar_FUN_00510dc0(void)

{
  CPlatform *this_ptr;
  CMineCar *pCVar1;
  
  this_ptr = (CPlatform *)operator_new(0x72c);
  if (this_ptr == (CPlatform *)0x0) {
    return (CMineCar *)0x0;
  }
  pCVar1 = (CMineCar *)core_platfrm_cpp_CPlatform_ctor_FUN_00539400(this_ptr);
  (pCVar1->base).base.vtable._ub = &g_CMineCarVTable;
  return pCVar1;
}
