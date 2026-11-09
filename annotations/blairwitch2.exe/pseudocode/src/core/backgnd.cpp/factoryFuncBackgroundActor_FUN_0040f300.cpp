// Name: core_backgnd.cpp_factoryFuncBackgroundActor_FUN_0040f300
// Address: 0040f300
// Address Range: [[0040f300, 0040f31b]]
// Convention: unknown
// Signature: void core_backgnd_cpp_factoryFuncBackgroundActor_FUN_0040f300(void)

#include "nocturne.h"

void core_backgnd_cpp_factoryFuncBackgroundActor_FUN_0040f300(void)

{
  CBackgroundActor *this_ptr;
  
  this_ptr = (CBackgroundActor *)FUN_005b8be2(0x43c);
  if (this_ptr == (CBackgroundActor *)0x0) {
    return;
  }
  core_backgnd_cpp_CBackgroundActor_ctor_FUN_0040f330(this_ptr);
  return;
}
