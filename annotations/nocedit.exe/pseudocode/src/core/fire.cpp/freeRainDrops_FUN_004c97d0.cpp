// Name: core_fire.cpp_freeRainDrops_FUN_004c97d0
// Address: 004c97d0
// Address Range: [[004c97d0, 004c97e7]]
// Convention: __cdecl
// Signature: CRainDrop * __cdecl core_fire_cpp_freeRainDrops_FUN_004c97d0(CRainDrop *objs)

#include "nocturne.h"

CRainDrop * __cdecl core_fire_cpp_freeRainDrops_FUN_004c97d0(CRainDrop *objs)

{
  CRainDrop *pCVar1;
  
  pCVar1 = __arrfini(objs,0x100,&g_CRainDropTypeInfo);
  return pCVar1;
}
