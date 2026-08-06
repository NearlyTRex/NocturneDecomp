// Name: core_gabriela.cpp_factoryFunc_FUN_00495670
// Address: 00495670
// Address Range: [[00495670, 0049568b]]
// Convention: __cdecl
// Signature: CGabriella * __cdecl core_gabriela_cpp_factoryFunc_FUN_00495670(void)

#include "nocturne.h"

CGabriella * __cdecl core_gabriela_cpp_factoryFunc_FUN_00495670(void)

{
  CGabriella *pCVar1;
  
  pCVar1 = operator_new(0x5a5b0);
  if (pCVar1 == (CGabriella *)0x0) {
    return (CGabriella *)0x0;
  }
  pCVar1 = core_gabriela_cpp_CGabriella_ctor_FUN_004956a0(pCVar1);
  return pCVar1;
}
