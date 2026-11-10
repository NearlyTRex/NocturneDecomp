// Name: core_gabriela.cpp_factoryFuncGabriella_FUN_004ad290
// Address: 004ad290
// Address Range: [[004ad290, 004ad2ab]]
// Convention: unknown
// Signature: void core_gabriela_cpp_factoryFuncGabriella_FUN_004ad290(void)

#include "nocturne.h"

void core_gabriela_cpp_factoryFuncGabriella_FUN_004ad290(void)

{
  CGabriella *this_ptr;
  
  this_ptr = (CGabriella *)debugAllocTracked1(0x601b4);
  if (this_ptr == (CGabriella *)0x0) {
    return;
  }
  core_gabriela_cpp_CGabriella_ctor_FUN_004ad2c0(this_ptr);
  return;
}
