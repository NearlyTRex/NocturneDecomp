// Name: core_gabriela.cpp_factoryFunc_FUN_004d2ae0
// Address: 004d2ae0
// Address Range: [[004d2ae0, 004d2b05]]
// Convention: __cdecl
// Signature: CGabriella * __cdecl core_gabriela_cpp_factoryFunc_FUN_004d2ae0(void)

#include "nocturne.h"

CGabriella * __cdecl core_gabriela_cpp_factoryFunc_FUN_004d2ae0(void)

{
  CGabriella *pCVar1;
  
  pCVar1 = (CGabriella *)shape_memdbg_cpp_debugAllocTracked_FUN_0050f1b0
                     (0x5fa88,"..\\core\\gabriela.cpp",0xf0);
  if (pCVar1 == (CGabriella *)0x0) {
    return (CGabriella *)0x0;
  }
  pCVar1 = core_gabriela_cpp_CGabriella_ctor_FUN_004d2b20(pCVar1);
  return pCVar1;
}
