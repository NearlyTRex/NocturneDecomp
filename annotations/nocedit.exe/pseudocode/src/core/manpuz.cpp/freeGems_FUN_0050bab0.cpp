// Name: core_manpuz.cpp_freeGems_FUN_0050bab0
// Address: 0050bab0
// Address Range: [[0050bab0, 0050bac4]]
// Convention: __cdecl
// Signature: void core_manpuz.cpp_freeGems_FUN_0050bab0(SGem * * objs)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_freeGems_FUN_0050bab0(SGem **objs)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(objs,0xc,&g_SGemTypeInfo);
  return;
}
