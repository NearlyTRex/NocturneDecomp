// Name: core_hotdemon.cpp_factoryFuncHotDemon_FUN_004b8c70
// Address: 004b8c70
// Address Range: [[004b8c70, 004b8c8b]]
// Convention: __cdecl
// Signature: CHotDemon * __cdecl core_hotdemon_cpp_factoryFuncHotDemon_FUN_004b8c70(void)

#include "nocturne.h"

CHotDemon * __cdecl core_hotdemon_cpp_factoryFuncHotDemon_FUN_004b8c70(void)

{
  CHotDemon *pCVar1;
  
  pCVar1 = operator_new(0xbd58);
  if (pCVar1 == (CHotDemon *)0x0) {
    return (CHotDemon *)0x0;
  }
  pCVar1 = core_hotdemon_cpp_CHotDemon_ctor_FUN_004b8ca0(pCVar1);
  return pCVar1;
}
