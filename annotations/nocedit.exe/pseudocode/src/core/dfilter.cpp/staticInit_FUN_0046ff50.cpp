// Name: core_dfilter.cpp_staticInit_FUN_0046ff50
// Address: 0046ff50
// Address Range: [[0046ff50, 0046ffc6]]
// Convention: __cdecl
// Signature: void core_dfilter.cpp_staticInit_FUN_0046ff50(void)

#include "nocturne.h"

void __cdecl core_dfilter_cpp_staticInit_FUN_0046ff50(void)

{
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (CDemonFilter_ARRAY_020a4878,8,&g_CDemonFilterTypeInfo);
  crt_stdlib_c_atexit_FUN_005ff060(&DAT_0066ef5c);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (CDemonFilter_ARRAY_020a4ad8,4,&g_CDemonFilterTypeInfo);
  crt_stdlib_c_atexit_FUN_005ff060(&DAT_0066ef6c);
  core_dfilter_cpp_CFilterCache_ctor_FUN_0046ffd0(&g_CFilterCacheInstance);
  crt_stdlib_c_atexit_FUN_005ff060(&g_CFilterCacheDestructorNode);
  core_dfilter_cpp_CFilterFX_ctor_FUN_004706c0(&g_CFilterFXInstance);
  crt_stdlib_c_atexit_FUN_005ff060(&g_CFilterFXDestructorNode);
  return;
}
