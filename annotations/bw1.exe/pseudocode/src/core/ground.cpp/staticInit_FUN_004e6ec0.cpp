// Name: core_ground.cpp_staticInit_FUN_004e6ec0
// Address: 004e6ec0
// Address Range: [[004e6ec0, 004e6ee4]]
// Convention: __cdecl
// Signature: void __cdecl core_ground_cpp_staticInit_FUN_004e6ec0(void)

#include "nocturne.h"

void __cdecl core_ground_cpp_staticInit_FUN_004e6ec0(void)

{
  uint uStack00000004;
  
  core_ground_cpp_CGround_ctor_FUN_004e71c0(&g_CGroundInstance,0x100,0x100);
  uStack00000004 = 0x4e6ee1;
  _atexit(&g_CGroundDestructorNode);
  return;
}
