// Name: core_gabriela.cpp_factoryFuncGabriella_FUN_004ad290
// Address: 004ad290
// Address Range: [[004ad290, 004ad2ab]]
// Convention: __cdecl
// Signature: CGabriella * __cdecl core_gabriela_cpp_factoryFuncGabriella_FUN_004ad290(void)

#include "nocturne.h"

CGabriella * __cdecl core_gabriela_cpp_factoryFuncGabriella_FUN_004ad290(void)

{
  CGabriella *pCVar1;
  
  pCVar1 = (CGabriella *)operator_new(0x601b4);
  if (pCVar1 == (CGabriella *)0x0) {
    return (CGabriella *)0x0;
  }
  pCVar1 = core_gabriela_cpp_CGabriella_ctor_FUN_004ad2c0(pCVar1);
  return pCVar1;
}
