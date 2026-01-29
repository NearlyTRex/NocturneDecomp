// Name: core_fire.cpp_freeGunFlames_FUN_004c9870
// Address: 004c9870
// Address Range: [[004c9870, 004c9887]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_freeGunFlames_FUN_004c9870(CGunFlame **array)

#include "nocturne.h"

void __cdecl core_fire_cpp_freeGunFlames_FUN_004c9870(CGunFlame **array)

{
  __arrfini(array,500,&g_CGunFlameTypeInfo);
  return;
}
