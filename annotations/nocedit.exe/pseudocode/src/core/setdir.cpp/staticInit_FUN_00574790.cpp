// Name: core_setdir.cpp_staticInit_FUN_00574790
// Address: 00574790
// Address Range: [[00574790, 005747cb]]
// Convention: __cdecl
// Signature: void __cdecl core_setdir_cpp_staticInit_FUN_00574790(void)

#include "nocturne.h"

void __cdecl core_setdir_cpp_staticInit_FUN_00574790(void)

{
  __arrinit(g_CZThumbPool,0x5dc,&g_CZThumbTypeInfo);
  _atexit(&g_CZThumbPoolDestructorNode);
  __arrinit(g_VDNearbyActorBoundingBoxes,2000,&g_CBoundingBox3DTypeInfo);
  return;
}
