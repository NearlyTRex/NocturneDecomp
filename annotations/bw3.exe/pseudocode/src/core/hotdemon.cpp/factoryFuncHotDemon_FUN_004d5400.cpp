// Name: core_hotdemon.cpp_factoryFuncHotDemon_FUN_004d5400
// Address: 004d5400
// Address Range: [[004d5400, 004d541b]]
// Convention: __cdecl
// Signature: CHotDemon * __cdecl core_hotdemon_cpp_factoryFuncHotDemon_FUN_004d5400(void)

#include "nocturne.h"

CHotDemon * __cdecl core_hotdemon_cpp_factoryFuncHotDemon_FUN_004d5400(void)

{
  CHotDemon *pCVar1;
  
  pCVar1 = (CHotDemon *)operator_new(0xd088);
  if (pCVar1 == (CHotDemon *)0x0) {
    return (CHotDemon *)0x0;
  }
  pCVar1 = core_hotdemon_cpp_CHotDemon_ctor_FUN_004d5430(pCVar1);
  return pCVar1;
}
