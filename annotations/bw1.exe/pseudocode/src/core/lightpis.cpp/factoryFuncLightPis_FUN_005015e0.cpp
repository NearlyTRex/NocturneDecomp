// Name: core_lightpis.cpp_factoryFuncLightPis_FUN_005015e0
// Address: 005015e0
// Address Range: [[005015e0, 005015fb]]
// Convention: unknown
// Signature: void core_lightpis_cpp_factoryFuncLightPis_FUN_005015e0(void)

#include "nocturne.h"

void core_lightpis_cpp_factoryFuncLightPis_FUN_005015e0(void)

{
  CLightPis *this_ptr;
  
  this_ptr = (CLightPis *)debugAllocTracked1(0x598);
  if (this_ptr == (CLightPis *)0x0) {
    return;
  }
  core_lightpis_cpp_CLightPis_ctor_FUN_00501610(this_ptr);
  return;
}
