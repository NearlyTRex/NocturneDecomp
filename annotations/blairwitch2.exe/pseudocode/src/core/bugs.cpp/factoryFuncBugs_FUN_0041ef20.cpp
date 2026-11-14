// Name: core_bugs.cpp_factoryFuncBugs_FUN_0041ef20
// Address: 0041ef20
// Address Range: [[0041ef20, 0041ef3b]]
// Convention: __cdecl
// Signature: CBugs * __cdecl core_bugs_cpp_factoryFuncBugs_FUN_0041ef20(void)

#include "nocturne.h"

CBugs * __cdecl core_bugs_cpp_factoryFuncBugs_FUN_0041ef20(void)

{
  CBugs *pCVar1;
  
  pCVar1 = (CBugs *)operator_new(0x1e634);
  if (pCVar1 == (CBugs *)0x0) {
    return (CBugs *)0x0;
  }
  pCVar1 = core_bugs_cpp_CBugs_ctor_FUN_0041ef50(pCVar1);
  return pCVar1;
}
