// Name: engine_pod.cpp_CPod_dtor_FUN_004f8840
// Address: 004f8840
// Address Range: [[004f8840, 004f886f] [004f8871, 004f8898]]
// Convention: __cdecl
// Signature: CPod * __cdecl engine_pod_cpp_CPod_dtor_FUN_004f8840(CPod *this_ptr,uint flags)

#include "nocturne.h"

CPod * __cdecl engine_pod_cpp_CPod_dtor_FUN_004f8840(CPod *this_ptr,uint flags)

{
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CPodTypeInfo_005a14a0);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return this_ptr;
  }
  this_ptr->vtable = &g_CPodVTable;
  engine_pod_cpp_CPod_cleanup_FUN_004f8b40(this_ptr);
  if ((flags & 2) == 0) {
    return this_ptr;
  }
  operator_delete(this_ptr);
  return this_ptr;
}
