// Name: core_conveyor.cpp_factoryFuncConveyor_FUN_00438460
// Address: 00438460
// Address Range: [[00438460, 0043847b]]
// Convention: __cdecl
// Signature: CConveyor * __cdecl core_conveyor_cpp_factoryFuncConveyor_FUN_00438460(void)

#include "nocturne.h"

CConveyor * __cdecl core_conveyor_cpp_factoryFuncConveyor_FUN_00438460(void)

{
  CConveyor *pCVar1;
  
  pCVar1 = (CConveyor *)operator_new(0x9b8);
  if (pCVar1 == (CConveyor *)0x0) {
    return (CConveyor *)0x0;
  }
  pCVar1 = core_conveyor_cpp_CConveyor_ctor_FUN_00438490(pCVar1);
  return pCVar1;
}
