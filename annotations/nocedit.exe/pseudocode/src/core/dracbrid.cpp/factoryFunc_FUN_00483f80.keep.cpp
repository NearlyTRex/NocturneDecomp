// Name: core_dracbrid.cpp_factoryFunc_FUN_00483f80
// Address: 00483f80
// MANUAL RECONSTRUCTION
// Address Range: [[00483f80, 00483fa2]]
// Convention: __cdecl
// Signature: CDraculaBride * __cdecl core_dracbrid_cpp_factoryFunc_FUN_00483f80(void)

#include "nocturne.h"

CDraculaBride * __cdecl core_dracbrid_cpp_factoryFunc_FUN_00483f80(void)

{
  CDraculaBride *pCVar1;
  
  pCVar1 = (CDraculaBride *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0
                     (sizeof(CDraculaBride),"..\\core\\dracbrid.cpp",0x78);
  if (pCVar1 == (CDraculaBride *)0x0) {
    return (CDraculaBride *)0x0;
  }
  pCVar1 = core_dracbrid_cpp_CDraculaBride_ctor_FUN_00483fc0(pCVar1);
  return pCVar1;
}
