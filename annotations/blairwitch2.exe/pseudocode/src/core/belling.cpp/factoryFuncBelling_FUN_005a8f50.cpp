// Name: core_belling.cpp_factoryFuncBelling_FUN_005a8f50
// Address: 005a8f50
// Address Range: [[005a8f50, 005a8f6b]]
// Convention: __cdecl
// Signature: CBelling * __cdecl core_belling_cpp_factoryFuncBelling_FUN_005a8f50(void)

#include "nocturne.h"

CBelling * __cdecl core_belling_cpp_factoryFuncBelling_FUN_005a8f50(void)

{
  CBelling *pCVar1;
  
  pCVar1 = (CBelling *)operator_new(0x11850);
  if (pCVar1 == (CBelling *)0x0) {
    return (CBelling *)0x0;
  }
  pCVar1 = core_belling_cpp_CBelling_ctor_FUN_005a8f80(pCVar1);
  return pCVar1;
}
