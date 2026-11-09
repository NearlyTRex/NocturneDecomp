// Name: engine_pod.cpp_CPod_dtor_FUN_0053c5f0
// Address: 0053c5f0
// Address Range: [[0053c5f0, 0053c648]]
// Convention: __cdecl
// Signature: CPod * __cdecl engine_pod_cpp_CPod_dtor_FUN_0053c5f0(CPod *this_ptr,uint flags)

#include "nocturne.h"

CPod * __cdecl engine_pod_cpp_CPod_dtor_FUN_0053c5f0(CPod *this_ptr,uint flags)

{
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CPodTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  *(byte ***)&this_ptr->field_0x194 = &PTR_engine_pod_cpp_CPod_dtor_FUN_0053c5f0_00604a34;
  engine_pod_cpp_CPod_cleanup_FUN_0053c8f0(this_ptr);
  if ((flags & 2) == 0) {
    return this_ptr;
  }
  FUN_005c0344(this_ptr);
  return this_ptr;
}
