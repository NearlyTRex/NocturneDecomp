// Name: core_fire.cpp_freeRainDrops_FUN_004c97d0
// Address: 004c97d0
// Address Range: [[004c97d0, 004c97e7]]
// Convention: __cdecl
// Signature: void core_fire.cpp_freeRainDrops_FUN_004c97d0(CRainDrop * * array)

#include "nocturne.h"

void __cdecl core_fire_cpp_freeRainDrops_FUN_004c97d0(CRainDrop **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,0x100,&g_CRainDropTypeInfo);
  return;
}
