// Name: core_minecar.cpp_factoryFuncMineCar_FUN_004f2030
// Address: 004f2030
// Address Range: [[004f2030, 004f2055]]
// Convention: __cdecl
// Signature: CMineCar * __cdecl core_minecar_cpp_factoryFuncMineCar_FUN_004f2030(void)

#include "nocturne.h"

CMineCar * __cdecl core_minecar_cpp_factoryFuncMineCar_FUN_004f2030(void)

{
  CPlatform *this_ptr;
  CMineCar *pCVar1;
  
  this_ptr = (CPlatform *)operator_new(0x888);
  if (this_ptr == (CPlatform *)0x0) {
    return (CMineCar *)0x0;
  }
  pCVar1 = (CMineCar *)core_platfrm_cpp_CPlatform_ctor_FUN_005180b0(this_ptr);
  (pCVar1->base).base.vtable._ub = &g_CMineCarVTable;
  return pCVar1;
}
