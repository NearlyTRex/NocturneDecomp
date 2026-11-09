// Name: core_podmain.cpp_staticInit_FUN_005152b0
// Address: 005152b0
// Address Range: [[005152b0, 005152d5]]
// Convention: __cdecl
// Signature: void __cdecl core_podmain_cpp_staticInit_FUN_005152b0(void)

#include "nocturne.h"

void __cdecl core_podmain_cpp_staticInit_FUN_005152b0(void)

{
  engine_pod_cpp_CPod_ctor_FUN_00514320((CPod *)&g_CDemonPodInstance);
  g_CDemonPodInstance._404_4_ = &g_CDemonPodVTable;
  _atexit();
  return;
}
