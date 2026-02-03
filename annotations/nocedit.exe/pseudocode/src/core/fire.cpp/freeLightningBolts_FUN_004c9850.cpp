// Name: core_fire.cpp_freeLightningBolts_FUN_004c9850
// Address: 004c9850
// Address Range: [[004c9850, 004c9864]]
// Convention: __cdecl
// Signature: CLightningBolt * __cdecl core_fire_cpp_freeLightningBolts_FUN_004c9850(CLightningBolt *objs)

#include "nocturne.h"

CLightningBolt * __cdecl core_fire_cpp_freeLightningBolts_FUN_004c9850(CLightningBolt *objs)

{
  CLightningBolt *pCVar1;
  
  pCVar1 = __arrfini(objs,10,&g_CLightningBoltTypeInfo);
  return pCVar1;
}
