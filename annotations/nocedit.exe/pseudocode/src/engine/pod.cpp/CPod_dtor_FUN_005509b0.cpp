// Name: engine_pod.cpp_CPod_dtor_FUN_005509b0
// Address: 005509b0
// Address Range: [[005509b0, 005509df] [005509e1, 00550a08]]
// Convention: __cdecl
// Signature: CPod * engine_pod.cpp_CPod_dtor_FUN_005509b0(CPod * this_ptr, uint d1, uint d2)

#include "nocturne.h"

CPod * __cdecl engine_pod_cpp_CPod_dtor_FUN_005509b0(CPod *this_ptr,uint d1,uint d2)

{
  void *ptr;
  
  if ((d1 & 4) != 0) {
    ptr = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CPodTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr);
    return this_ptr;
  }
  this_ptr->vtable = &g_CPodVTable;
  engine_pod_cpp_CPod_cleanup_FUN_00550c80(this_ptr);
  if ((d1 & 2) == 0) {
    return this_ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(this_ptr);
  return this_ptr;
}
