// Name: core_drone.cpp_FUN_00462910
// Address: 00462910
// Address Range: [[00462910, 0046292b]]
// Convention: unknown
// Signature: void core_drone_cpp_FUN_00462910(void)

#include "nocturne.h"

void core_drone_cpp_FUN_00462910(void)

{
  CDrone *this_ptr;
  
  this_ptr = (CDrone *)FUN_0056497c(0xbd3c);
  if (this_ptr == (CDrone *)0x0) {
    return;
  }
  core_drone_cpp_CDrone_ctor_FUN_00462940(this_ptr);
  return;
}
