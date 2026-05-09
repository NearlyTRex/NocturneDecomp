// Name: engine_pod.cpp_CPod_ctor_FUN_00550980
// Address: 00550980
// MANUAL RECONSTRUCTION
// Address Range: [[00550980, 005509ab]]
// Convention: __cdecl
// Signature: CPod * __cdecl engine_pod_cpp_CPod_ctor_FUN_00550980(CPod *this_ptr)

#include "nocturne.h"

CPod * __cdecl engine_pod_cpp_CPod_ctor_FUN_00550980(CPod *this_ptr)

{
  this_ptr->pod_file_count = 0;
  this_ptr->vtable = &g_CPodVTable;
  for (int i = 0; i < 100; i++) {
    this_ptr->pod_files[i] = (CPodFile *)0x0;
  }
  return this_ptr;
}
