// Name: core_fire.cpp_freeFireballs_FUN_004c9930
// Address: 004c9930
// Address Range: [[004c9930, 004c9944]]
// Convention: __cdecl
// Signature: CFireball * __cdecl core_fire_cpp_freeFireballs_FUN_004c9930(CFireball *objs)

#include "nocturne.h"

CFireball * __cdecl core_fire_cpp_freeFireballs_FUN_004c9930(CFireball *objs)

{
  CFireball *pCVar1;
  
  pCVar1 = __arrfini(objs,0x40,&g_CFireballTypeInfo);
  return pCVar1;
}
