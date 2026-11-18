// Name: core_podmain.cpp_CDemonPod_dtor_FUN_0053d730
// Address: 0053d730
// Address Range: [[0053d730, 0053d77d]]
// Convention: __cdecl
// Signature: CDemonPod * __cdecl core_podmain_cpp_CDemonPod_dtor_FUN_0053d730(CDemonPod *this_ptr,uint flags)

#include "nocturne.h"

CDemonPod * __cdecl core_podmain_cpp_CDemonPod_dtor_FUN_0053d730(CDemonPod *this_ptr,uint flags)

{
  CPod *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CDemonPodTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = engine_pod_cpp_CPod_dtor_FUN_0053c5f0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return (CDemonPod *)ptr;
  }
  debugFreeChecked(ptr);
  return (CDemonPod *)ptr;
}
