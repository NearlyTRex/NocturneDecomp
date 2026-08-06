// Name: core_podmain.cpp_CDemonPod_dtor_FUN_004f93e0
// Address: 004f93e0
// Address Range: [[004f93e0, 004f942d]]
// Convention: __cdecl
// Signature: CDemonPod * __cdecl core_podmain_cpp_CDemonPod_dtor_FUN_004f93e0(CDemonPod *this_ptr,uint flags)

#include "nocturne.h"

CDemonPod * __cdecl core_podmain_cpp_CDemonPod_dtor_FUN_004f93e0(CDemonPod *this_ptr,uint flags)

{
  CPod *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CDemonPodTypeInfo_005a1510);
    shape_memdbg_cpp_free_FUN_00564486(ptr_00);
    return this_ptr;
  }
  ptr = engine_pod_cpp_CPod_dtor_FUN_004f8840((CPod *)this_ptr,1);
  if ((flags & 2) == 0) {
    return (CDemonPod *)ptr;
  }
  operator_delete(ptr);
  return (CDemonPod *)ptr;
}
