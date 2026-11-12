// Name: core_bugs.cpp_factoryFuncBugs_FUN_00424f50
// Address: 00424f50
// Address Range: [[00424f50, 00424f6b]]
// Convention: __cdecl
// Signature: CBugs * __cdecl core_bugs_cpp_factoryFuncBugs_FUN_00424f50(void)

#include "nocturne.h"

CBugs * __cdecl core_bugs_cpp_factoryFuncBugs_FUN_00424f50(void)

{
  CBugs *pCVar1;
  
  pCVar1 = (CBugs *)operator_new(0x19da4);
  if (pCVar1 == (CBugs *)0x0) {
    return (CBugs *)0x0;
  }
  pCVar1 = core_bugs_cpp_CBugs_ctor_FUN_00424f80(pCVar1);
  return pCVar1;
}
