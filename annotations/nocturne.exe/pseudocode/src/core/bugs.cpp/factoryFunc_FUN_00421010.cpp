// Name: core_bugs.cpp_factoryFunc_FUN_00421010
// Address: 00421010
// Address Range: [[00421010, 0042102b]]
// Convention: __cdecl
// Signature: CBugs * __cdecl core_bugs_cpp_factoryFunc_FUN_00421010(void)

#include "nocturne.h"

CBugs * __cdecl core_bugs_cpp_factoryFunc_FUN_00421010(void)

{
  CBugs *pCVar1;
  
  pCVar1 = operator_new(0x19860);
  if (pCVar1 == (CBugs *)0x0) {
    return (CBugs *)0x0;
  }
  pCVar1 = core_bugs_cpp_CBugs_ctor_FUN_00421040(pCVar1);
  return pCVar1;
}
