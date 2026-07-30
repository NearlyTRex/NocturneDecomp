// Name: core_curtain.cpp_factoryFunc_FUN_0043d930
// Address: 0043d930
// Address Range: [[0043d930, 0043d94b]]
// Convention: __cdecl
// Signature: CCurtain * __cdecl core_curtain_cpp_factoryFunc_FUN_0043d930(void)

#include "nocturne.h"

CCurtain * __cdecl core_curtain_cpp_factoryFunc_FUN_0043d930(void)

{
  CCurtain *pCVar1;
  
  pCVar1 = (CCurtain *)FUN_0056497c(0x65b30);
  if (pCVar1 == (CCurtain *)0x0) {
    return (CCurtain *)0x0;
  }
  pCVar1 = core_curtain_cpp_CCurtain_ctor_FUN_0043d960(pCVar1);
  return pCVar1;
}
