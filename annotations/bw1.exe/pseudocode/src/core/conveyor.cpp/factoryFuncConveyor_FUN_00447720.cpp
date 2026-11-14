// Name: core_conveyor.cpp_factoryFuncConveyor_FUN_00447720
// Address: 00447720
// Address Range: [[00447720, 0044773b]]
// Convention: __cdecl
// Signature: CConveyor * __cdecl core_conveyor_cpp_factoryFuncConveyor_FUN_00447720(void)

#include "nocturne.h"

CConveyor * __cdecl core_conveyor_cpp_factoryFuncConveyor_FUN_00447720(void)

{
  CConveyor *pCVar1;
  
  pCVar1 = (CConveyor *)operator_new(0x85c);
  if (pCVar1 == (CConveyor *)0x0) {
    return (CConveyor *)0x0;
  }
  pCVar1 = core_conveyor_cpp_CConveyor_ctor_FUN_00447750(pCVar1);
  return pCVar1;
}
