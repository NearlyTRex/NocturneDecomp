// Name: core_ground.cpp_staticInit_FUN_004cf850
// Address: 004cf850
// Address Range: [[004cf850, 004cf874]]
// Convention: __cdecl
// Signature: void __cdecl core_ground_cpp_staticInit_FUN_004cf850(void)

#include "nocturne.h"

void __cdecl core_ground_cpp_staticInit_FUN_004cf850(void)

{
  uint uStack00000004;
  
  core_ground_cpp_CGround_ctor_FUN_004cfb50(&g_CGroundInstance,0x100,0x100);
  uStack00000004 = 0x4cf871;
  _atexit(&g_CGroundDestructorNode);
  return;
}
