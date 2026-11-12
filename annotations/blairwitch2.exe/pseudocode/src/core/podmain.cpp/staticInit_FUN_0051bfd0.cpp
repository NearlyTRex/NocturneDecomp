// Name: core_podmain.cpp_staticInit_FUN_0051bfd0
// Address: 0051bfd0
// Address Range: [[0051bfd0, 0051bff5]]
// Convention: __cdecl
// Signature: void __cdecl core_podmain_cpp_staticInit_FUN_0051bfd0(void)

#include "nocturne.h"

void __cdecl core_podmain_cpp_staticInit_FUN_0051bfd0(void)

{
  engine_pod_cpp_CPod_ctor_FUN_0051b080(&g_CDemonPodInstance.base);
  g_CDemonPodInstance.base.vtable = (CPod_vtable *)&g_CDemonPodVTable;
  _atexit(&g_CDemonPodMainDestructorNode);
  return;
}
