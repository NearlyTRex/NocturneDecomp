// Name: core_fire.cpp_freeLightningBolts_FUN_004c9850
// Address: 004c9850
// Address Range: [[004c9850, 004c9864]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_freeLightningBolts_FUN_004c9850(CLightningBolt **array)

#include "nocturne.h"

void __cdecl core_fire_cpp_freeLightningBolts_FUN_004c9850(CLightningBolt **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,10,&g_CLightningBoltTypeInfo);
  return;
}
