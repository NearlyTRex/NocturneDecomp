// Name: core_podmain.cpp_CDemonPod_dtor_FUN_00551b20
// Address: 00551b20
// Address Range: [[00551b20, 00551b6d]]
// Convention: __cdecl
// Signature: CDemonPod * __cdecl core_podmain_cpp_CDemonPod_dtor_FUN_00551b20(CDemonPod *this_ptr,uint flags)

#include "nocturne.h"

CDemonPod * __cdecl core_podmain_cpp_CDemonPod_dtor_FUN_00551b20(CDemonPod *this_ptr,uint flags)

{
  CPod *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CDemonPodTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = engine_pod_cpp_CPod_dtor_FUN_005509b0((CPod *)this_ptr,1);
  if ((flags & 2) == 0) {
    return (CDemonPod *)ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return (CDemonPod *)ptr;
}
