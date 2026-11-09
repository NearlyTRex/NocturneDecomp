// Name: core_dog.cpp_FUN_00463650
// Address: 00463650
// Address Range: [[00463650, 0046366b]]
// Convention: unknown
// Signature: void core_dog_cpp_FUN_00463650(void)

#include "nocturne.h"

void core_dog_cpp_FUN_00463650(void)

{
  CDogForest *this_ptr;
  
  this_ptr = (CDogForest *)FUN_005a3cb2(0xd064);
  if (this_ptr == (CDogForest *)0x0) {
    return;
  }
  core_dog_cpp_CDogForest_ctor_FUN_00463680(this_ptr);
  return;
}
