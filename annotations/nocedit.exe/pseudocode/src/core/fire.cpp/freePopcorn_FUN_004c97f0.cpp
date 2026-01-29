// Name: core_fire.cpp_freePopcorn_FUN_004c97f0
// Address: 004c97f0
// Address Range: [[004c97f0, 004c9807]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_freePopcorn_FUN_004c97f0(CPopcorn **array)

#include "nocturne.h"

void __cdecl core_fire_cpp_freePopcorn_FUN_004c97f0(CPopcorn **array)

{
  __arrfini(array,0x100,&g_CPopcornTypeInfo);
  return;
}
