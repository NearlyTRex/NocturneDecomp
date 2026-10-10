// Name: core_podmain.cpp_staticInit_FUN_004f9280
// Address: 004f9280
// Address Range: [[004f9280, 004f92a5]]
// Convention: __cdecl
// Signature: void __cdecl core_podmain_cpp_staticInit_FUN_004f9280(void)

#include "nocturne.h"

void __cdecl core_podmain_cpp_staticInit_FUN_004f9280(void)

{
  engine_pod_cpp_CPod_ctor_FUN_004f8810(&g_CDemonPod_01e528d0.base);
  g_CDemonPod_01e528d0.base.vtable = (CPod_vtable *)&g_CDemonPodVTable;
  _atexit(&g_WatcomStaticDestructorNode_005be1bc);
  return;
}
