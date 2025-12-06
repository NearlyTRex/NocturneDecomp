// Name: core_skeleton.cpp_staticInit_FUN_00599670
// Address: 00599670
// Address Range: [[00599670, 005996b2]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_staticInit_FUN_00599670(void)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_staticInit_FUN_00599670(void)

{
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (g_DeformableModelPool,0x40,&g_CDeformableModelTypeInfo);
  crt_stdlib_c_atexit_FUN_005ff060(&g_DeformableModelPoolDestructorNode);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (g_SkeletonPool,0x28,&g_CSkeletonTypeInfo);
  crt_stdlib_c_atexit_FUN_005ff060(&g_SkeletonPoolDestructorNode);
  return;
}
