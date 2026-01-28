// Name: core_conveyor.cpp_factoryFunc_FUN_00441c60
// Address: 00441c60
// Address Range: [[00441c60, 00441c82]]
// Convention: __cdecl
// Signature: CConveyor * __cdecl core_conveyor_cpp_factoryFunc_FUN_00441c60(void)

#include "nocturne.h"

CConveyor * __cdecl core_conveyor_cpp_factoryFunc_FUN_00441c60(void)

{
  CConveyor *pCVar1;
  
  pCVar1 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x860,"..\\core\\conveyor.cpp",0x23);
  if (pCVar1 == (CConveyor *)0x0) {
    return (CConveyor *)0x0;
  }
  pCVar1 = core_conveyor_cpp_CConveyor_ctor_FUN_00441ca0(pCVar1);
  return pCVar1;
}
