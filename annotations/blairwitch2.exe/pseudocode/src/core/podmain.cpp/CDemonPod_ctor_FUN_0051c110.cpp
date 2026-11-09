// Name: core_podmain.cpp_CDemonPod_ctor_FUN_0051c110
// Address: 0051c110
// Address Range: [[0051c110, 0051c127]]
// Convention: __cdecl
// Signature: CDemonPod * __cdecl core_podmain_cpp_CDemonPod_ctor_FUN_0051c110(CDemonPod *this_ptr)

#include "nocturne.h"

CDemonPod * __cdecl core_podmain_cpp_CDemonPod_ctor_FUN_0051c110(CDemonPod *this_ptr)

{
  CPod *pCVar1;
  
  pCVar1 = engine_pod_cpp_CPod_ctor_FUN_0051b080((CPod *)this_ptr);
  *(byte ***)&pCVar1->field_0x194 = &g_CDemonPodVTable;
  return (CDemonPod *)pCVar1;
}
