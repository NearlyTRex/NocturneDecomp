// Name: core_podmain.cpp_staticInit_FUN_00551990
// Address: 00551990
// Address Range: [[00551990, 005519b5]]
// Convention: __cdecl
// Signature: void core_podmain.cpp_staticInit_FUN_00551990(void)

#include "nocturne.h"

void __cdecl core_podmain_cpp_staticInit_FUN_00551990(void)

{
  engine_pod_cpp_CPod_ctor_FUN_00550980((CPod *)&g_CDemonPodInstance);
  g_CDemonPodInstance.vtable = &g_CDemonPodVTable;
  crt_stdlib_c_atexit_FUN_005ff060(&g_CDemonPodDestructorNode);
  return;
}
