// Name: core_goggles.cpp_staticInit_FUN_0059c270
// Address: 0059c270
// Address Range: [[0059c270, 0059c28a]]
// Convention: __cdecl
// Signature: void __cdecl core_goggles_cpp_staticInit_FUN_0059c270(void)

#include "nocturne.h"

void __cdecl core_goggles_cpp_staticInit_FUN_0059c270(void)

{
  core_gmehook_cpp_CGameHook_ctor_FUN_0059c290(&g_CGameHookInstance);
  _atexit(&WatcomStaticDestructorNode_0061ea4c);
  return;
}
