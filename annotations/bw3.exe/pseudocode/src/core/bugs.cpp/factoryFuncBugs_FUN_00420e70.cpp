// Name: core_bugs.cpp_factoryFuncBugs_FUN_00420e70
// Address: 00420e70
// Address Range: [[00420e70, 00420e8b]]
// Convention: __cdecl
// Signature: CBugs * __cdecl core_bugs_cpp_factoryFuncBugs_FUN_00420e70(void)

#include "nocturne.h"

CBugs * __cdecl core_bugs_cpp_factoryFuncBugs_FUN_00420e70(void)

{
  CBugs *pCVar1;
  
  pCVar1 = (CBugs *)operator_new(0x1bea4);
  if (pCVar1 == (CBugs *)0x0) {
    return (CBugs *)0x0;
  }
  pCVar1 = core_bugs_cpp_CBugs_ctor_FUN_00420ea0(pCVar1);
  return pCVar1;
}
