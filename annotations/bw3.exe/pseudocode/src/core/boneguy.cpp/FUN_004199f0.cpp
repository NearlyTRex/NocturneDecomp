// Name: core_boneguy.cpp_FUN_004199f0
// Address: 004199f0
// Address Range: [[004199f0, 00419a0b]]
// Convention: unknown
// Signature: void core_boneguy_cpp_FUN_004199f0(void)

#include "nocturne.h"

void core_boneguy_cpp_FUN_004199f0(void)

{
  CSkeletonDemon *this_ptr;
  
  this_ptr = (CSkeletonDemon *)debugAllocTracked1(0xd698);
  if (this_ptr == (CSkeletonDemon *)0x0) {
    return;
  }
  core_boneguy_cpp_CSkeletonDemon_ctor_FUN_00419a20(this_ptr);
  return;
}
