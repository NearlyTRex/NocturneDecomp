// Name: core_podmain.cpp_CDemonPod_dtor_FUN_00551b20
// Address: 00551b20
// Address Range: [[00551b20, 00551b6d]]
// Convention: __cdecl
// Signature: CDemonPod * __cdecl core_podmain_cpp_CDemonPod_dtor_FUN_00551b20(CDemonPod *this_ptr,uint d1,uint d2)

#include "nocturne.h"

CDemonPod * __cdecl
core_podmain_cpp_CDemonPod_dtor_FUN_00551b20(CDemonPod *this_ptr,uint d1,uint d2)

{
  CPod *ptr;
  void *ptr_00;
  uint unaff_EBX;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CDemonPodTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = engine_pod_cpp_CPod_dtor_FUN_005509b0((CPod *)this_ptr,1,unaff_EBX);
  if ((d1 & 2) == 0) {
    return (CDemonPod *)ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return (CDemonPod *)ptr;
}
