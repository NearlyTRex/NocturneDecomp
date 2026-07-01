// Name: core_manpuz.cpp_factoryFuncMirrorHack_FUN_0050b0d0
// Address: 0050b0d0
// Address Range: [[0050b0d0, 0050b0f5]]
// Convention: __cdecl
// Signature: CMirrorHack * __cdecl core_manpuz_cpp_factoryFuncMirrorHack_FUN_0050b0d0(void)

#include "nocturne.h"

CMirrorHack * __cdecl core_manpuz_cpp_factoryFuncMirrorHack_FUN_0050b0d0(void)

{
  CMirrorHack *pCVar1;
  
  pCVar1 = (CMirrorHack *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0(0x2d8,"..\\core\\manpuz.cpp",1558);
  if (pCVar1 == (CMirrorHack *)0x0) {
    return (CMirrorHack *)0x0;
  }
  pCVar1 = core_manpuz_cpp_CMirrorHack_ctor_FUN_0050b110(pCVar1);
  return pCVar1;
}
