// Name: core_manpuz.cpp_factoryFuncMirrorHack_FUN_004e7780
// Address: 004e7780
// Address Range: [[004e7780, 004e779b]]
// Convention: __cdecl
// Signature: CMirrorHack * __cdecl core_manpuz_cpp_factoryFuncMirrorHack_FUN_004e7780(void)

#include "nocturne.h"

CMirrorHack * __cdecl core_manpuz_cpp_factoryFuncMirrorHack_FUN_004e7780(void)

{
  CMirrorHack *pCVar1;
  
  pCVar1 = (CMirrorHack *)operator_new(0x434);
  if (pCVar1 == (CMirrorHack *)0x0) {
    return (CMirrorHack *)0x0;
  }
  pCVar1 = core_manpuz_cpp_CMirrorHack_ctor_FUN_004e77b0(pCVar1);
  return pCVar1;
}
