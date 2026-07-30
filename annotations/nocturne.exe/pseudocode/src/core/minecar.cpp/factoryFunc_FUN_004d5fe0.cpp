// Name: core_minecar.cpp_factoryFunc_FUN_004d5fe0
// Address: 004d5fe0
// Address Range: [[004d5fe0, 004d6005]]
// Convention: __cdecl
// Signature: CMineCar * __cdecl core_minecar_cpp_factoryFunc_FUN_004d5fe0(void)

#include "nocturne.h"

CMineCar * __cdecl core_minecar_cpp_factoryFunc_FUN_004d5fe0(void)

{
  int iVar1;
  CMineCar *pCVar2;
  
  iVar1 = FUN_0056497c(0x724);
  if (iVar1 == 0) {
    return (CMineCar *)0x0;
  }
  pCVar2 = (CMineCar *)core_platfrm_cpp_FUN_004f5d90(iVar1);
  (pCVar2->base).base.vtable._ub = &g_CMineCarVTable;
  return pCVar2;
}
