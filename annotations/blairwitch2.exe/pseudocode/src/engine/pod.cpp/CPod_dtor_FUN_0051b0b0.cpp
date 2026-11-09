// Name: engine_pod.cpp_CPod_dtor_FUN_0051b0b0
// Address: 0051b0b0
// Address Range: [[0051b0b0, 0051b108]]
// Convention: __cdecl
// Signature: CPod * __cdecl engine_pod_cpp_CPod_dtor_FUN_0051b0b0(CPod *this_ptr,uint flags)

#include "nocturne.h"

CPod * __cdecl engine_pod_cpp_CPod_dtor_FUN_0051b0b0(CPod *this_ptr,uint flags)

{
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CPodTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  *(byte ***)&this_ptr->field_0x194 = &PTR_engine_pod_cpp_CPod_dtor_FUN_0051b0b0_005fad64;
  engine_pod_cpp_CPod_cleanup_FUN_0051b370(this_ptr);
  if ((flags & 2) == 0) {
    return this_ptr;
  }
  FUN_005b7fdc(this_ptr);
  return this_ptr;
}
