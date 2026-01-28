// Name: core_fire.cpp_freeTosses_FUN_004c98b0
// Address: 004c98b0
// Address Range: [[004c98b0, 004c98c4]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_freeTosses_FUN_004c98b0(CToss **array)

#include "nocturne.h"

void __cdecl core_fire_cpp_freeTosses_FUN_004c98b0(CToss **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,0x14,&g_CTossTypeInfo);
  return;
}
