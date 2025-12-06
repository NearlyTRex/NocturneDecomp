// Name: core_fire.cpp_freeGunFlames_FUN_004c9870
// Address: 004c9870
// Address Range: [[004c9870, 004c9887]]
// Convention: __cdecl
// Signature: void core_fire.cpp_freeGunFlames_FUN_004c9870(CGunFlame * * array)

#include "nocturne.h"

void __cdecl core_fire_cpp_freeGunFlames_FUN_004c9870(CGunFlame **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,500,&g_CGunFlameTypeInfo);
  return;
}
