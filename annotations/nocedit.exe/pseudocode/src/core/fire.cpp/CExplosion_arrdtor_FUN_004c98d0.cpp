// Name: core_fire.cpp_CExplosion_arrdtor_FUN_004c98d0
// Address: 004c98d0
// Address Range: [[004c98d0, 004c98e4]]
// Convention: __cdecl
// Signature: CExplosion * __cdecl core_fire_cpp_CExplosion_arrdtor_FUN_004c98d0(CExplosion *objs,uint flags)

#include "nocturne.h"

CExplosion * __cdecl core_fire_cpp_CExplosion_arrdtor_FUN_004c98d0(CExplosion *objs,uint flags)

{
  CExplosion *pCVar1;
  
  pCVar1 = (CExplosion *)__arrfini(objs,10,&g_CExplosionTypeInfo);
  return pCVar1;
}
