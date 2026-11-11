// Name: core_litecone.cpp_factoryFuncLightCone_FUN_00502d40
// Address: 00502d40
// Address Range: [[00502d40, 00502d5b]]
// Convention: unknown
// Signature: void core_litecone_cpp_factoryFuncLightCone_FUN_00502d40(void)

#include "nocturne.h"

void core_litecone_cpp_factoryFuncLightCone_FUN_00502d40(void)

{
  CLightCone *this_ptr;
  
  this_ptr = (CLightCone *)operator_new(0x22c);
  if (this_ptr == (CLightCone *)0x0) {
    return;
  }
  core_litecone_cpp_CLightCone_ctor_FUN_00502d70(this_ptr);
  return;
}
