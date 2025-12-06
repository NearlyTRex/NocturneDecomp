// Name: core_fire.cpp_freePopcorn_FUN_004c97f0
// Address: 004c97f0
// Address Range: [[004c97f0, 004c9807]]
// Convention: __cdecl
// Signature: void core_fire.cpp_freePopcorn_FUN_004c97f0(CPopcorn * * array)

#include "nocturne.h"

void __cdecl core_fire_cpp_freePopcorn_FUN_004c97f0(CPopcorn **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,0x100,&g_CPopcornTypeInfo);
  return;
}
