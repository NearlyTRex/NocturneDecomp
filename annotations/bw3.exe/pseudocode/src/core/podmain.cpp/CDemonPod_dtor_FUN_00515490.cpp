// Name: core_podmain.cpp_CDemonPod_dtor_FUN_00515490
// Address: 00515490
// Address Range: [[00515490, 005154dd]]
// Convention: __cdecl
// Signature: CDemonPod * __cdecl core_podmain_cpp_CDemonPod_dtor_FUN_00515490(CDemonPod *this_ptr,uint flags)

#include "nocturne.h"

CDemonPod * __cdecl core_podmain_cpp_CDemonPod_dtor_FUN_00515490(CDemonPod *this_ptr,uint flags)

{
  CPod *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CDemonPodTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  pCVar1 = engine_pod_cpp_CPod_dtor_FUN_00514350(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return (CDemonPod *)pCVar1;
  }
  FUN_005a30c4(pCVar1);
  return (CDemonPod *)pCVar1;
}
