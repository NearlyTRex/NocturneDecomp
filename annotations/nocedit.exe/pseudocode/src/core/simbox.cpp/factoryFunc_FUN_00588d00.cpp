// Name: core_simbox.cpp_factoryFunc_FUN_00588d00
// Address: 00588d00
// Address Range: [[00588d00, 00588d22]]
// Convention: __cdecl
// Signature: CSimBox * __cdecl core_simbox_cpp_factoryFunc_FUN_00588d00(void)

#include "nocturne.h"

CSimBox * __cdecl core_simbox_cpp_factoryFunc_FUN_00588d00(void)

{
  CSimBox *pCVar1;
  
  pCVar1 = (CSimBox *)shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x5cc,"..\\core\\simbox.cpp",0x22);
  if (pCVar1 == (CSimBox *)0x0) {
    return (CSimBox *)0x0;
  }
  pCVar1 = core_simbox_cpp_CSimBox_ctor_FUN_00588d40(pCVar1);
  return pCVar1;
}
