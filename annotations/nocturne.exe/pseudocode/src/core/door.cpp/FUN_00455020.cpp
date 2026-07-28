// Name: core_door.cpp_FUN_00455020
// Address: 00455020
// Address Range: [[00455020, 0045503b]]
// Convention: unknown
// Signature: void core_door_cpp_FUN_00455020(void)

#include "nocturne.h"

void core_door_cpp_FUN_00455020(void)

{
  CDoor *this_ptr;
  
  this_ptr = (CDoor *)FUN_0056497c(0x9d8);
  if (this_ptr == (CDoor *)0x0) {
    return;
  }
  core_door_cpp_CDoor_ctor_FUN_00455050(this_ptr);
  return;
}
