// Name: core_dog.cpp_FUN_004636e0
// Address: 004636e0
// Address Range: [[004636e0, 004636fb]]
// Convention: unknown
// Signature: void core_dog_cpp_FUN_004636e0(void)

#include "nocturne.h"

void core_dog_cpp_FUN_004636e0(void)

{
  CDemonDog *this_ptr;
  
  this_ptr = (CDemonDog *)FUN_005a3cb2(0xd064);
  if (this_ptr == (CDemonDog *)0x0) {
    return;
  }
  core_dog_cpp_CDemonDog_ctor_FUN_00463710(this_ptr);
  return;
}
