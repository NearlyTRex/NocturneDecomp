// Name: core_podmain.cpp_CDemonPod_dtor_FUN_0051c130
// Address: 0051c130
// Address Range: [[0051c130, 0051c17d]]
// Convention: __cdecl
// Signature: CDemonPod * __cdecl core_podmain_cpp_CDemonPod_dtor_FUN_0051c130(CDemonPod *this_ptr,uint flags)

#include "nocturne.h"

CDemonPod * __cdecl core_podmain_cpp_CDemonPod_dtor_FUN_0051c130(CDemonPod *this_ptr,uint flags)

{
  CPod *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CDemonPodTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = engine_pod_cpp_CPod_dtor_FUN_0051b0b0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return (CDemonPod *)pCVar1;
  }
  FUN_005b7fdc(pCVar1);
  return (CDemonPod *)pCVar1;
}
