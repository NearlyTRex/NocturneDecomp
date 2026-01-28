// Name: core_fire.cpp_freeFireballs_FUN_004c9930
// Address: 004c9930
// Address Range: [[004c9930, 004c9944]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_freeFireballs_FUN_004c9930(CFireball **array)

#include "nocturne.h"

void __cdecl core_fire_cpp_freeFireballs_FUN_004c9930(CFireball **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,0x40,&g_CFireballTypeInfo);
  return;
}
