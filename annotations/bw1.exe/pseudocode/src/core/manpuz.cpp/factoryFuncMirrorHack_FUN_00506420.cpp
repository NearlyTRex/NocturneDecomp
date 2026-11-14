// Name: core_manpuz.cpp_factoryFuncMirrorHack_FUN_00506420
// Address: 00506420
// Address Range: [[00506420, 0050643b]]
// Convention: __cdecl
// Signature: CMirrorHack * __cdecl core_manpuz_cpp_factoryFuncMirrorHack_FUN_00506420(void)

#include "nocturne.h"

CMirrorHack * __cdecl core_manpuz_cpp_factoryFuncMirrorHack_FUN_00506420(void)

{
  CMirrorHack *pCVar1;
  
  pCVar1 = (CMirrorHack *)operator_new(0x2d8);
  if (pCVar1 == (CMirrorHack *)0x0) {
    return (CMirrorHack *)0x0;
  }
  pCVar1 = core_manpuz_cpp_CMirrorHack_ctor_FUN_00506450(pCVar1);
  return pCVar1;
}
