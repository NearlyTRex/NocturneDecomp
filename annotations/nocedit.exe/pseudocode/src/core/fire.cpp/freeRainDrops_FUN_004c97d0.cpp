// Name: core_fire.cpp_freeRainDrops_FUN_004c97d0
// Address: 004c97d0
// Address Range: [[004c97d0, 004c97e7]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_freeRainDrops_FUN_004c97d0(CRainDrop **array)

#include "nocturne.h"

void __cdecl core_fire_cpp_freeRainDrops_FUN_004c97d0(CRainDrop **array)

{
  __arrfini(array,0x100,&g_CRainDropTypeInfo);
  return;
}
