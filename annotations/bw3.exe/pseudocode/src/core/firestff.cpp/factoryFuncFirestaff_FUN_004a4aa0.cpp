// Name: core_firestff.cpp_factoryFuncFirestaff_FUN_004a4aa0
// Address: 004a4aa0
// Address Range: [[004a4aa0, 004a4abb]]
// Convention: __cdecl
// Signature: CFirestaff * __cdecl core_firestff_cpp_factoryFuncFirestaff_FUN_004a4aa0(void)

#include "nocturne.h"

CFirestaff * __cdecl core_firestff_cpp_factoryFuncFirestaff_FUN_004a4aa0(void)

{
  CFirestaff *pCVar1;
  
  pCVar1 = (CFirestaff *)operator_new(0x25c8);
  if (pCVar1 == (CFirestaff *)0x0) {
    return (CFirestaff *)0x0;
  }
  pCVar1 = core_firestff_cpp_CFirestaff_ctor_FUN_004a4ad0(pCVar1);
  return pCVar1;
}
