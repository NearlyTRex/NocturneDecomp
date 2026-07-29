// Name: core_podmain.cpp_staticInit_FUN_004f9280
// Address: 004f9280
// Address Range: [[004f9280, 004f92a5]]
// Convention: __cdecl
// Signature: void __cdecl core_podmain_cpp_staticInit_FUN_004f9280(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_podmain_cpp_staticInit_FUN_004f9280(void)

{
  engine_pod_cpp_CPod_ctor_FUN_004f8810((CPod *)0x1e528d0);
  _DAT_01e52a64 = &g_CDemonPodVTable;
  _atexit((WatcomStaticDestructorNode *)0x5be1bc);
  return;
}
