// Name: core_fire.cpp_freeSparks_FUN_004c99b0
// Address: 004c99b0
// Address Range: [[004c99b0, 004c99c7]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_freeSparks_FUN_004c99b0(CSpark **array)

#include "nocturne.h"

void __cdecl core_fire_cpp_freeSparks_FUN_004c99b0(CSpark **array)

{
  __arrfini(array,0x100,&g_CSparkTypeInfo);
  return;
}
