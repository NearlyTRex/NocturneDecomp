// Name: core_litecone.cpp_factoryFuncLightCone_FUN_004e3f90
// Address: 004e3f90
// Address Range: [[004e3f90, 004e3fab]]
// Convention: unknown
// Signature: void core_litecone_cpp_factoryFuncLightCone_FUN_004e3f90(void)

#include "nocturne.h"

void core_litecone_cpp_factoryFuncLightCone_FUN_004e3f90(void)

{
  CLightCone *this_ptr;
  
  this_ptr = (CLightCone *)debugAllocTracked1(0x22c);
  if (this_ptr == (CLightCone *)0x0) {
    return;
  }
  core_litecone_cpp_CLightCone_ctor_FUN_004e3fc0(this_ptr);
  return;
}
