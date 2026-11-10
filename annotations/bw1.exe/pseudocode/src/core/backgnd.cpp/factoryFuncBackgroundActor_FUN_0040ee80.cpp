// Name: core_backgnd.cpp_factoryFuncBackgroundActor_FUN_0040ee80
// Address: 0040ee80
// Address Range: [[0040ee80, 0040ee9b]]
// Convention: unknown
// Signature: void core_backgnd_cpp_factoryFuncBackgroundActor_FUN_0040ee80(void)

#include "nocturne.h"

void core_backgnd_cpp_factoryFuncBackgroundActor_FUN_0040ee80(void)

{
  CBackgroundActor *this_ptr;
  
  this_ptr = (CBackgroundActor *)debugAllocTracked1(0x2e0);
  if (this_ptr == (CBackgroundActor *)0x0) {
    return;
  }
  core_backgnd_cpp_CBackgroundActor_ctor_FUN_0040eeb0(this_ptr);
  return;
}
