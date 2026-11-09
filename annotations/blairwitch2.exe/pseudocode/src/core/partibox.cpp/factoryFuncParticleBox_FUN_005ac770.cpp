// Name: core_partibox.cpp_factoryFuncParticleBox_FUN_005ac770
// Address: 005ac770
// Address Range: [[005ac770, 005ac78b]]
// Convention: unknown
// Signature: void core_partibox_cpp_factoryFuncParticleBox_FUN_005ac770(void)

#include "nocturne.h"

void core_partibox_cpp_factoryFuncParticleBox_FUN_005ac770(void)

{
  CParticleBox *this_ptr;
  
  this_ptr = (CParticleBox *)FUN_005b8be2(0x7d8);
  if (this_ptr == (CParticleBox *)0x0) {
    return;
  }
  core_partibox_cpp_CParticleBox_ctor_FUN_005ac7a0(this_ptr);
  return;
}
