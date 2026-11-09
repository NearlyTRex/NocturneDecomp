// Name: core_demnfolk.cpp_factoryFuncDemnfolk_FUN_004589e0
// Address: 004589e0
// Address Range: [[004589e0, 004589fb]]
// Convention: unknown
// Signature: void core_demnfolk_cpp_factoryFuncDemnfolk_FUN_004589e0(void)

#include "nocturne.h"

void core_demnfolk_cpp_factoryFuncDemnfolk_FUN_004589e0(void)

{
  CDemnfolk *this_ptr;
  
  this_ptr = (CDemnfolk *)FUN_005c0f32(0xc370);
  if (this_ptr == (CDemnfolk *)0x0) {
    return;
  }
  core_demnfolk_cpp_CDemnfolk_ctor_FUN_00458a10(this_ptr);
  return;
}
