// Name: core_litecone.cpp_FUN_004c80c0
// Address: 004c80c0
// Address Range: [[004c80c0, 004c80db]]
// Convention: unknown
// Signature: void core_litecone_cpp_FUN_004c80c0(void)

#include "nocturne.h"

void core_litecone_cpp_FUN_004c80c0(void)

{
  CLightCone *this_ptr;
  
  this_ptr = (CLightCone *)FUN_0056497c(0x224);
  if (this_ptr == (CLightCone *)0x0) {
    return;
  }
  core_litecone_cpp_CLightCone_ctor_FUN_004c80f0(this_ptr);
  return;
}
