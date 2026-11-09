// Name: core_skeleton.cpp_staticInit_FUN_00547790
// Address: 00547790
// Address Range: [[00547790, 005477d2]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_staticInit_FUN_00547790(void)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_staticInit_FUN_00547790(void)

{
  __arrinit(g_DeformableModelPool,0x40,&g_CDeformableModelTypeInfo);
  _atexit(&g_DeformableModelPoolDestructorNode);
  __arrinit(g_SkeletonPool,0x28,&g_CSkeletonTypeInfo);
  _atexit(&g_SkeletonPoolDestructorNode);
  return;
}
