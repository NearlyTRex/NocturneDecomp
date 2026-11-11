// Name: core_shotgun.cpp_factoryFuncShotgun_FUN_0053efa0
// Address: 0053efa0
// Address Range: [[0053efa0, 0053efbb]]
// Convention: unknown
// Signature: void core_shotgun_cpp_factoryFuncShotgun_FUN_0053efa0(void)

#include "nocturne.h"

void core_shotgun_cpp_factoryFuncShotgun_FUN_0053efa0(void)

{
  CShotgun *this_ptr;
  
  this_ptr = (CShotgun *)operator_new(0x6e0);
  if (this_ptr == (CShotgun *)0x0) {
    return;
  }
  core_shotgun_cpp_CShotgun_ctor_FUN_0053efd0(this_ptr);
  return;
}
