// Name: core_fire.cpp_freeBulletTrails_FUN_004c9950
// Address: 004c9950
// Address Range: [[004c9950, 004c9964]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_freeBulletTrails_FUN_004c9950(CBulletTrail **array)

#include "nocturne.h"

void __cdecl core_fire_cpp_freeBulletTrails_FUN_004c9950(CBulletTrail **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,10,&g_CBulletTrailTypeInfo);
  return;
}
