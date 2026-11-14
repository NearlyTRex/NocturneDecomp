// Name: core_boneguy.cpp_FUN_004198b0
// Address: 004198b0
// Address Range: [[004198b0, 004198cb]]
// Convention: unknown
// Signature: void core_boneguy_cpp_FUN_004198b0(void)

#include "nocturne.h"

void core_boneguy_cpp_FUN_004198b0(void)

{
  CSkeletonForest *this_ptr;
  
  this_ptr = (CSkeletonForest *)operator_new(0xd698);
  if (this_ptr == (CSkeletonForest *)0x0) {
    return;
  }
  core_boneguy_cpp_CSkeletonForest_ctor_FUN_004198e0(this_ptr);
  return;
}
