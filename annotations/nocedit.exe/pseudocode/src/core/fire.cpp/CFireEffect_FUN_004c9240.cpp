// Name: core_fire.cpp_CFireEffect_FUN_004c9240
// Address: 004c9240
// Address Range: [[004c9240, 004c928e]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_FUN_004c9240(CFireEffect *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_FUN_004c9240(CFireEffect *this_ptr)

{
  CVector3f *in_stack_00000008;
  CVector3f *in_stack_0000000c;
  
  (*(g_PopcornPool[(int)g_CFireEffectShellsEnd].base.vtable)->setup)
            (&g_PopcornPool[(int)g_CFireEffectShellsEnd].base,in_stack_00000008,in_stack_0000000c);
  g_CFireEffectShellsEnd = (CShell *)((int)&(g_CFireEffectShellsEnd->base).position.x + 1);
  if ((int)g_CFireEffectShellsEnd < 0x100) {
    return;
  }
  g_CFireEffectShellsEnd = (CShell *)0x0;
  return;
}
