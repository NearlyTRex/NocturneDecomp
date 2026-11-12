// Name: core_setdir.cpp_staticInit_FUN_005382f0
// Address: 005382f0
// Address Range: [[005382f0, 0053832b]]
// Convention: __cdecl
// Signature: void __cdecl core_setdir_cpp_staticInit_FUN_005382f0(void)

#include "nocturne.h"

void __cdecl core_setdir_cpp_staticInit_FUN_005382f0(void)

{
  __arrinit(g_CZThumbPool,0x5dc,&g_CZThumbTypeInfo);
  _atexit(&g_CZThumbPoolDestructorNode);
  __arrinit((void *)0x20a46d8,2000,&g_CBoundingBox3DTypeInfo);
  return;
}
