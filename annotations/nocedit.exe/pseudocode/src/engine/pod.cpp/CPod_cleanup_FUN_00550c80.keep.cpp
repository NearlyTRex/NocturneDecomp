// Name: engine_pod.cpp_CPod_cleanup_FUN_00550c80
// Address: 00550c80
// MANUAL RECONSTRUCTION
// Address Range: [[00550c80, 00550cdf]]
// Convention: __cdecl
// Signature: void __cdecl engine_pod_cpp_CPod_cleanup_FUN_00550c80(CPod *this_ptr)

#include "nocturne.h"

void __cdecl engine_pod_cpp_CPod_cleanup_FUN_00550c80(CPod *this_ptr)

{
  CPodFile *ptr;
  int iVar2;

  iVar2 = 0;
  if (0 < this_ptr->pod_file_count) {
    do {
      g_CurrentDebugLine = 0x3f8;
      g_CurrentDebugFilename = "..\\engine\\pod.cpp";
      if (this_ptr->pod_files[iVar2] != (CPodFile *)0x0) {
        ptr = engine_pod_cpp_CPodFile_dtor_FUN_0054f610(this_ptr->pod_files[iVar2],0);
        shape_memdbg_cpp_debugFreeChecked_FUN_0050f210(ptr);
      }
      this_ptr->pod_files[iVar2] = (CPodFile *)0x0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < this_ptr->pod_file_count);
  }
  this_ptr->pod_file_count = 0;
  return;
}
