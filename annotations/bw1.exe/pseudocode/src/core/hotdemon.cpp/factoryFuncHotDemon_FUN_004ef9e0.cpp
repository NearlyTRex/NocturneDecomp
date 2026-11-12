// Name: core_hotdemon.cpp_factoryFuncHotDemon_FUN_004ef9e0
// Address: 004ef9e0
// Address Range: [[004ef9e0, 004ef9fb]]
// Convention: __cdecl
// Signature: CHotDemon * __cdecl core_hotdemon_cpp_factoryFuncHotDemon_FUN_004ef9e0(void)

#include "nocturne.h"

CHotDemon * __cdecl core_hotdemon_cpp_factoryFuncHotDemon_FUN_004ef9e0(void)

{
  CHotDemon *pCVar1;
  
  pCVar1 = (CHotDemon *)operator_new(0xc29c);
  if (pCVar1 == (CHotDemon *)0x0) {
    return (CHotDemon *)0x0;
  }
  pCVar1 = core_hotdemon_cpp_CHotDemon_ctor_FUN_004efa10(pCVar1);
  return pCVar1;
}
