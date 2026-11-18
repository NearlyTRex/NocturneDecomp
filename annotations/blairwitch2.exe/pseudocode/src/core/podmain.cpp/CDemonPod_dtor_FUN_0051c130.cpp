// Name: core_podmain.cpp_CDemonPod_dtor_FUN_0051c130
// Address: 0051c130
// Address Range: [[0051c130, 0051c17d]]
// Convention: __cdecl
// Signature: CDemonPod * __cdecl core_podmain_cpp_CDemonPod_dtor_FUN_0051c130(CDemonPod *this_ptr,uint flags)

#include "nocturne.h"

CDemonPod * __cdecl core_podmain_cpp_CDemonPod_dtor_FUN_0051c130(CDemonPod *this_ptr,uint flags)

{
  CPod *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CDemonPodTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = engine_pod_cpp_CPod_dtor_FUN_0051b0b0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return (CDemonPod *)ptr;
  }
  debugFreeChecked(ptr);
  return (CDemonPod *)ptr;
}
