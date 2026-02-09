// Name: core_fire.cpp_freeTrails_FUN_004c9830
// Address: 004c9830
// Address Range: [[004c9830, 004c9844]]
// Convention: __cdecl
// Signature: CTrail * __cdecl core_fire_cpp_freeTrails_FUN_004c9830(CTrail *objs)

#include "nocturne.h"

CTrail * __cdecl core_fire_cpp_freeTrails_FUN_004c9830(CTrail *objs)

{
  CTrail *pCVar1;
  
  pCVar1 = (CTrail *)__arrfini(objs,100,&g_CTrailTypeInfo);
  return pCVar1;
}
