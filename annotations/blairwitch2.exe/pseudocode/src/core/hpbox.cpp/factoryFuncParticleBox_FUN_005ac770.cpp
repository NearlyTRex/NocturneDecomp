// Name: core_hpbox.cpp_factoryFuncParticleBox_FUN_005ac770
// Address: 005ac770
// Address Range: [[005ac770, 005ac78b]]
// Convention: unknown
// Signature: void core_hpbox_cpp_factoryFuncParticleBox_FUN_005ac770(void)

#include "nocturne.h"

void core_hpbox_cpp_factoryFuncParticleBox_FUN_005ac770(void)

{
  CParticleBox *this_ptr;
  
  this_ptr = (CParticleBox *)operator_new(0x7d8);
  if (this_ptr == (CParticleBox *)0x0) {
    return;
  }
  core_hpbox_cpp_CParticleBox_ctor_FUN_005ac7a0(this_ptr);
  return;
}
