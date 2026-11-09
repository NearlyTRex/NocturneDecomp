// Name: core_dog.cpp_FUN_00463780
// Address: 00463780
// Address Range: [[00463780, 0046379b]]
// Convention: unknown
// Signature: void core_dog_cpp_FUN_00463780(void)

#include "nocturne.h"

void core_dog_cpp_FUN_00463780(void)

{
  CEtherealDog *this_ptr;
  
  this_ptr = (CEtherealDog *)FUN_005a3cb2(0xd064);
  if (this_ptr == (CEtherealDog *)0x0) {
    return;
  }
  core_dog_cpp_CEtherealDog_ctor_FUN_004637b0(this_ptr);
  return;
}
