// Name: core_demnfolk.cpp_FUN_00454b30
// Address: 00454b30
// Address Range: [[00454b30, 00454b4b]]
// Convention: unknown
// Signature: void core_demnfolk_cpp_FUN_00454b30(void)

#include "nocturne.h"

void core_demnfolk_cpp_FUN_00454b30(void)

{
  CDemnfolk *this_ptr;
  
  this_ptr = (CDemnfolk *)operator_new(0xd14c);
  if (this_ptr == (CDemnfolk *)0x0) {
    return;
  }
  core_demnfolk_cpp_CDemnfolk_ctor_FUN_00454b60(this_ptr);
  return;
}
