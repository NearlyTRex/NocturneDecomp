// Name: core_door.cpp_factoryFuncDoor_FUN_0045ed30
// Address: 0045ed30
// Address Range: [[0045ed30, 0045ed4b]]
// Convention: unknown
// Signature: void core_door_cpp_factoryFuncDoor_FUN_0045ed30(void)

#include "nocturne.h"

void core_door_cpp_factoryFuncDoor_FUN_0045ed30(void)

{
  CDoor *this_ptr;
  
  this_ptr = (CDoor *)operator_new(0xba8);
  if (this_ptr == (CDoor *)0x0) {
    return;
  }
  core_door_cpp_CDoor_ctor_FUN_0045ed60(this_ptr);
  return;
}
