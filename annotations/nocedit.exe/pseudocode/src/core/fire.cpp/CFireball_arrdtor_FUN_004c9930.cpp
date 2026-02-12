// Name: core_fire.cpp_CFireball_arrdtor_FUN_004c9930
// Address: 004c9930
// Address Range: [[004c9930, 004c9944]]
// Convention: __cdecl
// Signature: CFireball * __cdecl core_fire_cpp_CFireball_arrdtor_FUN_004c9930(CFireball *objs,uint flags)

#include "nocturne.h"

CFireball * __cdecl core_fire_cpp_CFireball_arrdtor_FUN_004c9930(CFireball *objs,uint flags)

{
  CFireball *pCVar1;
  
  pCVar1 = (CFireball *)__arrfini(objs,0x40,&g_CFireballTypeInfo);
  return pCVar1;
}
