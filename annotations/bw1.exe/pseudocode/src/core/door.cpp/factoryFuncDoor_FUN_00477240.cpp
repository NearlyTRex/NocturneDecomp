// Name: core_door.cpp_factoryFuncDoor_FUN_00477240
// Address: 00477240
// Address Range: [[00477240, 0047725b]]
// Convention: unknown
// Signature: void core_door_cpp_factoryFuncDoor_FUN_00477240(void)

#include "nocturne.h"

void core_door_cpp_factoryFuncDoor_FUN_00477240(void)

{
  CDoor *this_ptr;
  
  this_ptr = (CDoor *)FUN_005c0f32(0xa4c);
  if (this_ptr == (CDoor *)0x0) {
    return;
  }
  core_door_cpp_CDoor_ctor_FUN_00477270(this_ptr);
  return;
}
