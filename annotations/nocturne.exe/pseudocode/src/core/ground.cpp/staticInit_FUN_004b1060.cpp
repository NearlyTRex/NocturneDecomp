// Name: core_ground.cpp_staticInit_FUN_004b1060
// Address: 004b1060
// Address Range: [[004b1060, 004b1084]]
// Convention: __cdecl
// Signature: void __cdecl core_ground_cpp_staticInit_FUN_004b1060(void)

#include "nocturne.h"

void __cdecl core_ground_cpp_staticInit_FUN_004b1060(void)

{
  uint uStack00000004;
  
  core_ground_cpp_CGround_ctor_FUN_004b1350((CGround *)&DAT_01cadf80,0x100,0x100);
  uStack00000004 = 0x4b1081;
  _atexit(&g_WatcomStaticDestructorNode_005ba8dc);
  return;
}
