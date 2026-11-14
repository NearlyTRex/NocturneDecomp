// Name: core_gabriela.cpp_factoryFuncGabriella_FUN_004c6240
// Address: 004c6240
// Address Range: [[004c6240, 004c625b]]
// Convention: __cdecl
// Signature: CGabriella * __cdecl core_gabriela_cpp_factoryFuncGabriella_FUN_004c6240(void)

#include "nocturne.h"

CGabriella * __cdecl core_gabriela_cpp_factoryFuncGabriella_FUN_004c6240(void)

{
  CGabriella *pCVar1;
  
  pCVar1 = (CGabriella *)operator_new(0x5ab20);
  if (pCVar1 == (CGabriella *)0x0) {
    return (CGabriella *)0x0;
  }
  pCVar1 = core_gabriela_cpp_CGabriella_ctor_FUN_004c6270(pCVar1);
  return pCVar1;
}
