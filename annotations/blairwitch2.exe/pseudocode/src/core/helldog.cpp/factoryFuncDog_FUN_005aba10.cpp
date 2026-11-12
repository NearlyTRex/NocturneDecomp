// Name: core_helldog.cpp_factoryFuncDog_FUN_005aba10
// Address: 005aba10
// Address Range: [[005aba10, 005aba2b]]
// Convention: unknown
// Signature: void core_helldog_cpp_factoryFuncDog_FUN_005aba10(void)

#include "nocturne.h"

void core_helldog_cpp_factoryFuncDog_FUN_005aba10(void)

{
  CDog *this_ptr;
  
  this_ptr = (CDog *)operator_new(0x11870);
  if (this_ptr == (CDog *)0x0) {
    return;
  }
  core_helldog_cpp_CDog_ctor_FUN_005aba40(this_ptr);
  return;
}
