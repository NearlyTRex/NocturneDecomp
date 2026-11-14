// Name: core_hotdemon.cpp_factoryFuncHotDemon_FUN_004d37c0
// Address: 004d37c0
// Address Range: [[004d37c0, 004d37db]]
// Convention: __cdecl
// Signature: CHotDemon * __cdecl core_hotdemon_cpp_factoryFuncHotDemon_FUN_004d37c0(void)

#include "nocturne.h"

CHotDemon * __cdecl core_hotdemon_cpp_factoryFuncHotDemon_FUN_004d37c0(void)

{
  CHotDemon *pCVar1;
  
  pCVar1 = (CHotDemon *)operator_new(0x10b2c);
  if (pCVar1 == (CHotDemon *)0x0) {
    return (CHotDemon *)0x0;
  }
  pCVar1 = core_hotdemon_cpp_CHotDemon_ctor_FUN_004d37f0(pCVar1);
  return pCVar1;
}
