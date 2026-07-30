// Name: core_ghoul.cpp_factoryFunc_FUN_004a8c70
// Address: 004a8c70
// Address Range: [[004a8c70, 004a8c8b]]
// Convention: __cdecl
// Signature: CGhoul * __cdecl core_ghoul_cpp_factoryFunc_FUN_004a8c70(void)

#include "nocturne.h"

CGhoul * __cdecl core_ghoul_cpp_factoryFunc_FUN_004a8c70(void)

{
  CGhoul *pCVar1;
  
  pCVar1 = (CGhoul *)FUN_0056497c(0xbda0);
  if (pCVar1 == (CGhoul *)0x0) {
    return (CGhoul *)0x0;
  }
  pCVar1 = core_ghoul_cpp_CGhoul_ctor_FUN_004a8ca0(pCVar1);
  return pCVar1;
}
