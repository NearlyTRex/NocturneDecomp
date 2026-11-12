// Name: core_simbox.cpp_factoryFuncSimBox_FUN_0053ff80
// Address: 0053ff80
// Address Range: [[0053ff80, 0053ff9b]]
// Convention: __cdecl
// Signature: CSimBox * __cdecl core_simbox_cpp_factoryFuncSimBox_FUN_0053ff80(void)

#include "nocturne.h"

CSimBox * __cdecl core_simbox_cpp_factoryFuncSimBox_FUN_0053ff80(void)

{
  CSimBox *pCVar1;
  
  pCVar1 = (CSimBox *)operator_new(0x728);
  if (pCVar1 == (CSimBox *)0x0) {
    return (CSimBox *)0x0;
  }
  pCVar1 = core_simbox_cpp_CSimBox_ctor_FUN_0053ffb0(pCVar1);
  return pCVar1;
}
