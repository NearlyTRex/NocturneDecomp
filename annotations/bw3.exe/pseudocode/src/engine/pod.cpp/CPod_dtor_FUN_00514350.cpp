// Name: engine_pod.cpp_CPod_dtor_FUN_00514350
// Address: 00514350
// Address Range: [[00514350, 005143a8]]
// Convention: __cdecl
// Signature: CPod * __cdecl engine_pod_cpp_CPod_dtor_FUN_00514350(CPod *this_ptr,uint flags)

#include "nocturne.h"

CPod * __cdecl engine_pod_cpp_CPod_dtor_FUN_00514350(CPod *this_ptr,uint flags)

{
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CPodTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  this_ptr->vtable = (CPod_vtable *)&PTR_engine_pod_cpp_CPod_dtor_FUN_00514350_005e3424;
  engine_pod_cpp_CPod_cleanup_FUN_00514650(this_ptr);
  if ((flags & 2) == 0) {
    return this_ptr;
  }
  FUN_005a30c4(this_ptr);
  return this_ptr;
}
