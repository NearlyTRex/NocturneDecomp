// Name: core_fire.cpp_freeExplosions_FUN_004c98d0
// Address: 004c98d0
// Address Range: [[004c98d0, 004c98e4]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_freeExplosions_FUN_004c98d0(CExplosion **array)

#include "nocturne.h"

void __cdecl core_fire_cpp_freeExplosions_FUN_004c98d0(CExplosion **array)

{
  __arrfini(array,10,&g_CExplosionTypeInfo);
  return;
}
