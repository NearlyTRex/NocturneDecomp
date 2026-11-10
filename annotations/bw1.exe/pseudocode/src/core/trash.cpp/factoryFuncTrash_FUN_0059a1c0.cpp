// Name: core_trash.cpp_factoryFuncTrash_FUN_0059a1c0
// Address: 0059a1c0
// Address Range: [[0059a1c0, 0059a1db]]
// Convention: unknown
// Signature: void core_trash_cpp_factoryFuncTrash_FUN_0059a1c0(void)

#include "nocturne.h"

void core_trash_cpp_factoryFuncTrash_FUN_0059a1c0(void)

{
  CTrash *this_ptr;
  
  this_ptr = (CTrash *)debugAllocTracked1(0x328);
  if (this_ptr == (CTrash *)0x0) {
    return;
  }
  core_trash_cpp_CTrash_ctor_FUN_0059a1f0(this_ptr);
  return;
}
