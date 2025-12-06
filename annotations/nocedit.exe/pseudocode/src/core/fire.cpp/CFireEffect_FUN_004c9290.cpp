// Name: core_fire.cpp_CFireEffect_FUN_004c9290
// Address: 004c9290
// Address Range: [[004c9290, 004c92f1]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CFireEffect_FUN_004c9290(CFireEffect * this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_FUN_004c9290(CFireEffect *this_ptr)

{
  CPopcorn *pCVar1;
  CVector3f *in_stack_00000008;
  CVector3f *in_stack_0000000c;
  
  (*(g_RainDropPool[(int)g_CFireEffectPopcornsEnd].base.vtable)->setup)
            (&g_RainDropPool[(int)g_CFireEffectPopcornsEnd].base,in_stack_00000008,in_stack_0000000c
            );
  pCVar1 = (CPopcorn *)((int)&(g_CFireEffectPopcornsEnd->base).position.x + 1);
  g_RainDropPool[(int)g_CFireEffectPopcornsEnd].base.lifetime_remaining = 0.25;
  if (0xff < (int)pCVar1) {
    pCVar1 = (CPopcorn *)0x0;
  }
  g_CFireEffectPopcornsEnd = pCVar1;
  return;
}
