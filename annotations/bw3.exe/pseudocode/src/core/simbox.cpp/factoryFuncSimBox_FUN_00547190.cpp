// Name: core_simbox.cpp_factoryFuncSimBox_FUN_00547190
// Address: 00547190
// Address Range: [[00547190, 005471ab]]
// Convention: __cdecl
// Signature: CSimBox * __cdecl core_simbox_cpp_factoryFuncSimBox_FUN_00547190(void)

#include "nocturne.h"

CSimBox * __cdecl core_simbox_cpp_factoryFuncSimBox_FUN_00547190(void)

{
  CSimBox *pCVar1;
  
  pCVar1 = (CSimBox *)operator_new(0x5cc);
  if (pCVar1 == (CSimBox *)0x0) {
    return (CSimBox *)0x0;
  }
  pCVar1 = core_simbox_cpp_CSimBox_ctor_FUN_005471c0(pCVar1);
  return pCVar1;
}
