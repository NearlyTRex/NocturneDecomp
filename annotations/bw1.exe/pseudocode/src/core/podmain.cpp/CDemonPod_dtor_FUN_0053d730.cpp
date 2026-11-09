// Name: core_podmain.cpp_CDemonPod_dtor_FUN_0053d730
// Address: 0053d730
// Address Range: [[0053d730, 0053d77d]]
// Convention: __cdecl
// Signature: CDemonPod * __cdecl core_podmain_cpp_CDemonPod_dtor_FUN_0053d730(CDemonPod *this_ptr,uint flags)

#include "nocturne.h"

CDemonPod * __cdecl core_podmain_cpp_CDemonPod_dtor_FUN_0053d730(CDemonPod *this_ptr,uint flags)

{
  CPod *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CDemonPodTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  pCVar1 = engine_pod_cpp_CPod_dtor_FUN_0053c5f0((CPod *)this_ptr,1);
  if ((flags & 2) == 0) {
    return (CDemonPod *)pCVar1;
  }
  FUN_005c0344(pCVar1);
  return (CDemonPod *)pCVar1;
}
