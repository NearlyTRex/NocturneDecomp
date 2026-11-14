// Name: core_biggs.cpp_factoryFuncBiggs_FUN_00414ce0
// Address: 00414ce0
// Address Range: [[00414ce0, 00414cfb]]
// Convention: __cdecl
// Signature: CBiggs * __cdecl core_biggs_cpp_factoryFuncBiggs_FUN_00414ce0(void)

#include "nocturne.h"

CBiggs * __cdecl core_biggs_cpp_factoryFuncBiggs_FUN_00414ce0(void)

{
  CBiggs *pCVar1;
  
  pCVar1 = (CBiggs *)operator_new(0x1190c);
  if (pCVar1 == (CBiggs *)0x0) {
    return (CBiggs *)0x0;
  }
  pCVar1 = core_biggs_cpp_CBiggs_ctor_FUN_00414d10(pCVar1);
  return pCVar1;
}
