// Name: core_door.cpp_factoryFuncDoor_FUN_00463a80
// Address: 00463a80
// Address Range: [[00463a80, 00463a9b]]
// Convention: unknown
// Signature: void core_door_cpp_factoryFuncDoor_FUN_00463a80(void)

#include "nocturne.h"

void core_door_cpp_factoryFuncDoor_FUN_00463a80(void)

{
  CDoor *this_ptr;
  
  this_ptr = (CDoor *)FUN_005a3cb2(0xa4c);
  if (this_ptr == (CDoor *)0x0) {
    return;
  }
  core_door_cpp_CDoor_ctor_FUN_00463ab0(this_ptr);
  return;
}
