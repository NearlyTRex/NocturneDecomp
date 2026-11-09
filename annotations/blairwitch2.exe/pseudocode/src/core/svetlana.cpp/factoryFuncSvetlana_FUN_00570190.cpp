// Name: core_svetlana.cpp_factoryFuncSvetlana_FUN_00570190
// Address: 00570190
// Address Range: [[00570190, 005701ab]]
// Convention: unknown
// Signature: void core_svetlana_cpp_factoryFuncSvetlana_FUN_00570190(void)

#include "nocturne.h"

void core_svetlana_cpp_factoryFuncSvetlana_FUN_00570190(void)

{
  CSvetlana *this_ptr;
  
  this_ptr = (CSvetlana *)FUN_005b8be2(0x9acc4);
  if (this_ptr == (CSvetlana *)0x0) {
    return;
  }
  core_svetlana_cpp_CSvetlana_ctor_FUN_005701c0(this_ptr);
  return;
}
