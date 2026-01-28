// Name: core_fire.cpp_freeTrails_FUN_004c9830
// Address: 004c9830
// Address Range: [[004c9830, 004c9844]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_freeTrails_FUN_004c9830(CTrail **array)

#include "nocturne.h"

void __cdecl core_fire_cpp_freeTrails_FUN_004c9830(CTrail **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,100,&g_CTrailTypeInfo);
  return;
}
