// Name: engine_pod.cpp_CPod_dtor_FUN_005509b0
// Address: 005509b0
// Address Range: [[005509b0, 005509df] [005509e1, 00550a08]]
// Convention: __cdecl
// Signature: CPod * __cdecl engine_pod_cpp_CPod_dtor_FUN_005509b0(CPod *this_ptr,uint flags)

#include "nocturne.h"

CPod * __cdecl engine_pod_cpp_CPod_dtor_FUN_005509b0(CPod *this_ptr,uint flags)

{
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CPodTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr);
    return this_ptr;
  }
  this_ptr->vtable = &g_CPodVTable;
  engine_pod_cpp_CPod_cleanup_FUN_00550c80(this_ptr);
  if ((flags & 2) == 0) {
    return this_ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(this_ptr);
  return this_ptr;
}
