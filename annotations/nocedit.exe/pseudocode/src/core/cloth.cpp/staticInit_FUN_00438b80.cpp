// Name: core_cloth.cpp_staticInit_FUN_00438b80
// Address: 00438b80
// Address Range: [[00438b80, 00438b9a]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_staticInit_FUN_00438b80(void)

#include "nocturne.h"

void __cdecl core_cloth_cpp_staticInit_FUN_00438b80(void)

{
  core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0059ddc0(&g_CDeformableModelInstanceInstance);
  crt_stdlib_c_atexit_FUN_005ff060(&g_CDeformableModelInstanceDestructorNode);
  return;
}
