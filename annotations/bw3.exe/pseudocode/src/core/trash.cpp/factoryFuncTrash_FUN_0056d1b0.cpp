// Name: core_trash.cpp_factoryFuncTrash_FUN_0056d1b0
// Address: 0056d1b0
// Address Range: [[0056d1b0, 0056d1cb]]
// Convention: unknown
// Signature: void core_trash_cpp_factoryFuncTrash_FUN_0056d1b0(void)

#include "nocturne.h"

void core_trash_cpp_factoryFuncTrash_FUN_0056d1b0(void)

{
  CTrash *this_ptr;
  
  this_ptr = (CTrash *)operator_new(0x328);
  if (this_ptr == (CTrash *)0x0) {
    return;
  }
  core_trash_cpp_CTrash_ctor_FUN_0056d1e0(this_ptr);
  return;
}
