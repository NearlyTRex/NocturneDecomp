// Name: core_fire.cpp_freeMuzzleFlashes_FUN_004c9990
// Address: 004c9990
// Address Range: [[004c9990, 004c99a4]]
// Convention: __cdecl
// Signature: void core_fire.cpp_freeMuzzleFlashes_FUN_004c9990(CMuzzleFlash * * array)

#include "nocturne.h"

void __cdecl core_fire_cpp_freeMuzzleFlashes_FUN_004c9990(CMuzzleFlash **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,0x14,&g_CMuzzleFlashTypeInfo);
  return;
}
