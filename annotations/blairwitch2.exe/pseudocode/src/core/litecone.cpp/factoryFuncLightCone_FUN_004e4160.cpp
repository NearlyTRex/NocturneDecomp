// Name: core_litecone.cpp_factoryFuncLightCone_FUN_004e4160
// Address: 004e4160
// Address Range: [[004e4160, 004e417b]]
// Convention: unknown
// Signature: void core_litecone_cpp_factoryFuncLightCone_FUN_004e4160(void)

#include "nocturne.h"

void core_litecone_cpp_factoryFuncLightCone_FUN_004e4160(void)

{
  CLightCone *this_ptr;
  
  this_ptr = (CLightCone *)operator_new(0x388);
  if (this_ptr == (CLightCone *)0x0) {
    return;
  }
  core_litecone_cpp_CLightCone_ctor_FUN_004e4190(this_ptr);
  return;
}
