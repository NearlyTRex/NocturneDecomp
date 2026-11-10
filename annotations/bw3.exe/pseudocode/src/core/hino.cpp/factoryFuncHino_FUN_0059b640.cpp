// Name: core_hino.cpp_factoryFuncHino_FUN_0059b640
// Address: 0059b640
// Address Range: [[0059b640, 0059b65b]]
// Convention: unknown
// Signature: void core_hino_cpp_factoryFuncHino_FUN_0059b640(void)

#include "nocturne.h"

void core_hino_cpp_factoryFuncHino_FUN_0059b640(void)

{
  CHino *this_ptr;
  
  this_ptr = (CHino *)debugAllocTracked1(0xd0b0);
  if (this_ptr == (CHino *)0x0) {
    return;
  }
  core_hino_cpp_CHino_ctor_FUN_0059b670(this_ptr);
  return;
}
