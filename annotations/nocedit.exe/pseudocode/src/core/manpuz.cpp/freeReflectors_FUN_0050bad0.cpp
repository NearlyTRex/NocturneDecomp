// Name: core_manpuz.cpp_freeReflectors_FUN_0050bad0
// Address: 0050bad0
// Address Range: [[0050bad0, 0050bae4]]
// Convention: __cdecl
// Signature: void core_manpuz.cpp_freeReflectors_FUN_0050bad0(SReflector * * objs)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_freeReflectors_FUN_0050bad0(SReflector **objs)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(objs,2,&g_SReflectorTypeInfo);
  return;
}
