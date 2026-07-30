// Name: core_baron.cpp_factoryFunc_FUN_004101a0
// Address: 004101a0
// Address Range: [[004101a0, 004101bb]]
// Convention: __cdecl
// Signature: CBaron * __cdecl core_baron_cpp_factoryFunc_FUN_004101a0(void)

#include "nocturne.h"

CBaron * __cdecl core_baron_cpp_factoryFunc_FUN_004101a0(void)

{
  CBaron *pCVar1;
  
  pCVar1 = (CBaron *)FUN_0056497c(0x1fb3c);
  if (pCVar1 == (CBaron *)0x0) {
    return (CBaron *)0x0;
  }
  pCVar1 = core_baron_cpp_CBaron_ctor_FUN_004101d0(pCVar1);
  return pCVar1;
}
