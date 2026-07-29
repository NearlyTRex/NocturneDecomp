// Name: core_armour.cpp_FUN_0040f930
// Address: 0040f930
// Address Range: [[0040f930, 0040f94b]]
// Convention: unknown
// Signature: void core_armour_cpp_FUN_0040f930(void)

#include "nocturne.h"

void core_armour_cpp_FUN_0040f930(void)

{
  CArmour *this_ptr;
  
  this_ptr = (CArmour *)FUN_0056497c(0xbd88);
  if (this_ptr == (CArmour *)0x0) {
    return;
  }
  core_armour_cpp_FUN_0040f960(this_ptr);
  return;
}
