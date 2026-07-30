// Name: core_conveyor.cpp_factoryFunc_FUN_0043b020
// Address: 0043b020
// Address Range: [[0043b020, 0043b03b]]
// Convention: __cdecl
// Signature: CConveyor * __cdecl core_conveyor_cpp_factoryFunc_FUN_0043b020(void)

#include "nocturne.h"

CConveyor * __cdecl core_conveyor_cpp_factoryFunc_FUN_0043b020(void)

{
  CConveyor *pCVar1;
  
  pCVar1 = (CConveyor *)FUN_0056497c(0x854);
  if (pCVar1 == (CConveyor *)0x0) {
    return (CConveyor *)0x0;
  }
  pCVar1 = core_conveyor_cpp_CConveyor_ctor_FUN_0043b050(pCVar1);
  return pCVar1;
}
