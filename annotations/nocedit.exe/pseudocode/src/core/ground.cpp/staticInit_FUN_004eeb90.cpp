// Name: core_ground.cpp_staticInit_FUN_004eeb90
// Address: 004eeb90
// Address Range: [[004eeb90, 004eebb4]]
// Convention: __cdecl
// Signature: void __cdecl core_ground_cpp_staticInit_FUN_004eeb90(void)

#include "nocturne.h"

void __cdecl core_ground_cpp_staticInit_FUN_004eeb90(void)

{
  core_ground_cpp_CGround_ctor_FUN_004eee80(&g_CGroundInstance,0x100,0x100);
  _atexit(&g_CGroundDestructorNode);
  return;
}
