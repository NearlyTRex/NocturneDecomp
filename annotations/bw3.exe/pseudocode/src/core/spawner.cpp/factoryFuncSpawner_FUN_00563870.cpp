// Name: core_spawner.cpp_factoryFuncSpawner_FUN_00563870
// Address: 00563870
// Address Range: [[00563870, 0056388b]]
// Convention: unknown
// Signature: void core_spawner_cpp_factoryFuncSpawner_FUN_00563870(void)

#include "nocturne.h"

void core_spawner_cpp_factoryFuncSpawner_FUN_00563870(void)

{
  CSpawner *this_ptr;
  
  this_ptr = (CSpawner *)FUN_005a3cb2(0x2574);
  if (this_ptr == (CSpawner *)0x0) {
    return;
  }
  engine_special_cpp_CSpawner_ctor_FUN_005638a0(this_ptr);
  return;
}
