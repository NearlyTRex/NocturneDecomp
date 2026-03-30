// Name: core_bride.cpp_factoryFunc_FUN_00423760
// Address: 00423760
// Address Range: [[00423760, 00423782]]
// Convention: __cdecl
// Signature: CBride * __cdecl core_bride_cpp_factoryFunc_FUN_00423760(void)

#include "nocturne.h"

CBride * __cdecl core_bride_cpp_factoryFunc_FUN_00423760(void)

{
  CBride *pCVar1;
  
  pCVar1 = (CBride *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0(0xbeec,"..\\core\\bride.cpp",0x53);
  if (pCVar1 == (CBride *)0x0) {
    return (CBride *)0x0;
  }
  pCVar1 = core_bride_cpp_CBride_ctor_FUN_004237a0(pCVar1);
  return pCVar1;
}
