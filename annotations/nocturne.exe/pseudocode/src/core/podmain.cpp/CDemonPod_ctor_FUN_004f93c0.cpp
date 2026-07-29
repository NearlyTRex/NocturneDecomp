// Name: core_podmain.cpp_CDemonPod_ctor_FUN_004f93c0
// Address: 004f93c0
// Address Range: [[004f93c0, 004f93d7]]
// Convention: __cdecl
// Signature: CDemonPod * __cdecl core_podmain_cpp_CDemonPod_ctor_FUN_004f93c0(CDemonPod *this_ptr)

#include "nocturne.h"

CDemonPod * __cdecl core_podmain_cpp_CDemonPod_ctor_FUN_004f93c0(CDemonPod *this_ptr)

{
  CPod *pCVar1;
  
  pCVar1 = engine_pod_cpp_CPod_ctor_FUN_004f8810((CPod *)this_ptr);
  pCVar1->vtable = (CPod_vtable *)&g_CDemonPodVTable;
  return (CDemonPod *)pCVar1;
}
