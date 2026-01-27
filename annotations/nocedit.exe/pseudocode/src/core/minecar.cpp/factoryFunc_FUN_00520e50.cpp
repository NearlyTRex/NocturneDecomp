// Name: core_minecar.cpp_factoryFunc_FUN_00520e50
// Address: 00520e50
// Address Range: [[00520e50, 00520e7c]]
// Convention: __cdecl
// Signature: CMineCar * core_minecar.cpp_factoryFunc_FUN_00520e50(void)

#include "nocturne.h"

CMineCar * __cdecl core_minecar_cpp_factoryFunc_FUN_00520e50(void)

{
  CPlatform *this_ptr;
  CMineCar *pCVar1;
  
  this_ptr = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x730,"..\\core\\minecar.cpp",0x39);
  if (this_ptr == (CPlatform *)0x0) {
    return (CMineCar *)0x0;
  }
  pCVar1 = (CMineCar *)core_platfrm_cpp_CPlatform_ctor_FUN_0054c850(this_ptr);
  (pCVar1->base).base.vtable._ub = &g_CMinecarVTable;
  return pCVar1;
}
