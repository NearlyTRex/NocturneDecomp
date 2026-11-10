// Name: core_gabriela.cpp_factoryFuncGabriella_FUN_004c6240
// Address: 004c6240
// Address Range: [[004c6240, 004c625b]]
// Convention: unknown
// Signature: void core_gabriela_cpp_factoryFuncGabriella_FUN_004c6240(void)

#include "nocturne.h"

void core_gabriela_cpp_factoryFuncGabriella_FUN_004c6240(void)

{
  CGabriella *this_ptr;
  
  this_ptr = (CGabriella *)debugAllocTracked1(0x5ab20);
  if (this_ptr == (CGabriella *)0x0) {
    return;
  }
  core_gabriela_cpp_CGabriella_ctor_FUN_004c6270(this_ptr);
  return;
}
