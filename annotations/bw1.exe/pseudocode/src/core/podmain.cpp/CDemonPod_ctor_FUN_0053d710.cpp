// Name: core_podmain.cpp_CDemonPod_ctor_FUN_0053d710
// Address: 0053d710
// Address Range: [[0053d710, 0053d727]]
// Convention: __cdecl
// Signature: CDemonPod * __cdecl core_podmain_cpp_CDemonPod_ctor_FUN_0053d710(CDemonPod *this_ptr)

#include "nocturne.h"

CDemonPod * __cdecl core_podmain_cpp_CDemonPod_ctor_FUN_0053d710(CDemonPod *this_ptr)

{
  CPod *pCVar1;
  
  pCVar1 = engine_pod_cpp_CPod_ctor_FUN_0053c5c0((CPod *)this_ptr);
  pCVar1->vtable = (CPod_vtable *)&g_CDemonPodVTable;
  return (CDemonPod *)pCVar1;
}
