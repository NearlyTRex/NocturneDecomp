// Name: core_trash.cpp_factoryFuncTrash_FUN_00576900
// Address: 00576900
// Address Range: [[00576900, 0057691b]]
// Convention: unknown
// Signature: void core_trash_cpp_factoryFuncTrash_FUN_00576900(void)

#include "nocturne.h"

void core_trash_cpp_factoryFuncTrash_FUN_00576900(void)

{
  CTrash *this_ptr;
  
  this_ptr = (CTrash *)debugAllocTracked1(0x484);
  if (this_ptr == (CTrash *)0x0) {
    return;
  }
  core_trash_cpp_CTrash_ctor_FUN_00576930(this_ptr);
  return;
}
