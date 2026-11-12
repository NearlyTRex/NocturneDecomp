// Name: core_ground.cpp_staticInit_FUN_004ca6b0
// Address: 004ca6b0
// Address Range: [[004ca6b0, 004ca6d4]]
// Convention: __cdecl
// Signature: void __cdecl core_ground_cpp_staticInit_FUN_004ca6b0(void)

#include "nocturne.h"

void __cdecl core_ground_cpp_staticInit_FUN_004ca6b0(void)

{
  uint uStack00000004;
  
  core_ground_cpp_CGround_ctor_FUN_004ca940(&g_CGroundInstance,0x100,0x100);
  uStack00000004 = 0x4ca6d1;
  _atexit(&g_CGroundDestructorNode);
  return;
}
