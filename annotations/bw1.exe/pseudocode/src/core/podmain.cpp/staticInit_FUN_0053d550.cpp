// Name: core_podmain.cpp_staticInit_FUN_0053d550
// Address: 0053d550
// Address Range: [[0053d550, 0053d575]]
// Convention: __cdecl
// Signature: void __cdecl core_podmain_cpp_staticInit_FUN_0053d550(void)

#include "nocturne.h"

void __cdecl core_podmain_cpp_staticInit_FUN_0053d550(void)

{
  engine_pod_cpp_CPod_ctor_FUN_0053c5c0((CPod *)&g_CDemonPodInstance);
  g_CDemonPodInstance._404_4_ = &g_CDemonPodVTable;
  _atexit();
  return;
}
