// Name: core_mirror.cpp_staticInit_FUN_00520fb0
// Address: 00520fb0
// Address Range: [[00520fb0, 00520fd8]]
// Convention: __cdecl
// Signature: void core_mirror.cpp_staticInit_FUN_00520fb0(void)

#include "nocturne.h"

void __cdecl core_mirror_cpp_staticInit_FUN_00520fb0(void)

{
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (g_MirrorInputVertices,0x20,&g_CVectorTypeInfo);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (g_MirrorOutputVertices,0x20,&g_CVectorTypeInfo);
  return;
}
