// Name: core_minecar.cpp_factoryFunc_FUN_004d5fe0
// Address: 004d5fe0
// Address Range: [[004d5fe0, 004d6005]]
// Convention: __cdecl
// Signature: CMineCar * __cdecl core_minecar_cpp_factoryFunc_FUN_004d5fe0(void)

#include "nocturne.h"

CMineCar * __cdecl core_minecar_cpp_factoryFunc_FUN_004d5fe0(void)

{
  CPlatform *this_ptr;
  CMineCar *pCVar1;
  
  this_ptr = (CPlatform *)FUN_0056497c(0x724);
  if (this_ptr == (CPlatform *)0x0) {
    return (CMineCar *)0x0;
  }
  pCVar1 = (CMineCar *)core_platfrm_cpp_CPlatform_ctor_FUN_004f5d90(this_ptr);
  (pCVar1->base).base.vtable._ub = &g_CMineCarVTable;
  return pCVar1;
}
