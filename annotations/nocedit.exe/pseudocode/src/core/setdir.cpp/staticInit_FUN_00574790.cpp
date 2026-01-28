// Name: core_setdir.cpp_staticInit_FUN_00574790
// Address: 00574790
// Address Range: [[00574790, 005747cb]]
// Convention: __cdecl
// Signature: void __cdecl core_setdir_cpp_staticInit_FUN_00574790(void)

#include "nocturne.h"

void __cdecl core_setdir_cpp_staticInit_FUN_00574790(void)

{
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(g_CZThumbPool,0x5dc,&g_CZThumbTypeInfo)
  ;
  crt_stdlib_c_atexit_FUN_005ff060(&g_CZThumbPoolDestructorNode);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (g_VDNearbyActorBoundingBoxes,2000,&g_CBoundingBox3DTypeInfo);
  return;
}
