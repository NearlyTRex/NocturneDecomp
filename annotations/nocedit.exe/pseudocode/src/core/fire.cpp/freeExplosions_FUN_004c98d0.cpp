// Name: core_fire.cpp_freeExplosions_FUN_004c98d0
// Address: 004c98d0
// Address Range: [[004c98d0, 004c98e4]]
// Convention: __cdecl
// Signature: CExplosion * __cdecl core_fire_cpp_freeExplosions_FUN_004c98d0(CExplosion *objs)

#include "nocturne.h"

CExplosion * __cdecl core_fire_cpp_freeExplosions_FUN_004c98d0(CExplosion *objs)

{
  CExplosion *pCVar1;
  
  pCVar1 = (CExplosion *)__arrfini(objs,10,&g_CExplosionTypeInfo);
  return pCVar1;
}
