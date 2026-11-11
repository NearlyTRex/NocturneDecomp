// Name: core_batcreat.cpp_factoryFuncBatCreature_FUN_00411660
// Address: 00411660
// Address Range: [[00411660, 0041167b]]
// Convention: unknown
// Signature: void core_batcreat_cpp_factoryFuncBatCreature_FUN_00411660(void)

#include "nocturne.h"

void core_batcreat_cpp_factoryFuncBatCreature_FUN_00411660(void)

{
  CBatCreature *this_ptr;
  
  this_ptr = (CBatCreature *)operator_new(0x10b40);
  if (this_ptr == (CBatCreature *)0x0) {
    return;
  }
  core_batcreat_cpp_CBatCreature_ctor_FUN_00411690(this_ptr);
  return;
}
