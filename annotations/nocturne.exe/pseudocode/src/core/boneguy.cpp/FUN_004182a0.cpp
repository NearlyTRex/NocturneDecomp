// Name: core_boneguy.cpp_FUN_004182a0
// Address: 004182a0
// Address Range: [[004182a0, 004182bb]]
// Convention: unknown
// Signature: void core_boneguy_cpp_FUN_004182a0(void)

#include "nocturne.h"

void core_boneguy_cpp_FUN_004182a0(void)

{
  CBoneGuy *this_ptr;
  
  this_ptr = (CBoneGuy *)FUN_0056497c(0xc34c);
  if (this_ptr == (CBoneGuy *)0x0) {
    return;
  }
  core_boneguy_cpp_FUN_00418630(this_ptr);
  return;
}
