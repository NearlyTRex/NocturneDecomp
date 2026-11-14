// Name: core_hpbox.cpp_factoryFuncParticleBox_FUN_005ac770
// Address: 005ac770
// Address Range: [[005ac770, 005ac78b]]
// Convention: __cdecl
// Signature: CParticleBox * __cdecl core_hpbox_cpp_factoryFuncParticleBox_FUN_005ac770(void)

#include "nocturne.h"

CParticleBox * __cdecl core_hpbox_cpp_factoryFuncParticleBox_FUN_005ac770(void)

{
  CParticleBox *pCVar1;
  
  pCVar1 = (CParticleBox *)operator_new(0x7d8);
  if (pCVar1 == (CParticleBox *)0x0) {
    return (CParticleBox *)0x0;
  }
  pCVar1 = core_hpbox_cpp_CParticleBox_ctor_FUN_005ac7a0(pCVar1);
  return pCVar1;
}
