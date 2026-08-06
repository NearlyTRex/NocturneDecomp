// Name: core_manpuz.cpp_factoryFunc_FUN_004cbad0
// Address: 004cbad0
// Address Range: [[004cbad0, 004cbaeb]]
// Convention: __cdecl
// Signature: CMirrorHack * __cdecl core_manpuz_cpp_factoryFunc_FUN_004cbad0(void)

#include "nocturne.h"

CMirrorHack * __cdecl core_manpuz_cpp_factoryFunc_FUN_004cbad0(void)

{
  CMirrorHack *pCVar1;
  
  pCVar1 = operator_new(0x2d0);
  if (pCVar1 == (CMirrorHack *)0x0) {
    return (CMirrorHack *)0x0;
  }
  pCVar1 = core_manpuz_cpp_CMirrorHack_ctor_FUN_004cbb00(pCVar1);
  return pCVar1;
}
