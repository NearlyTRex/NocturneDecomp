// Name: engine_pod.cpp_CPodFile_cleanup_FUN_004f80e0
// Address: 004f80e0
// Address Range: [[004f80e0, 004f814f]]
// Convention: __cdecl
// Signature: void __cdecl engine_pod_cpp_CPodFile_cleanup_FUN_004f80e0(CPodFile *this_ptr)

#include "nocturne.h"

void __cdecl engine_pod_cpp_CPodFile_cleanup_FUN_004f80e0(CPodFile *this_ptr)

{
  this_ptr->file_count = 0;
  if (this_ptr->directory_entries != (CPodDirectoryEntry *)0x0) {
    FUN_005638d0(this_ptr->directory_entries);
    this_ptr->directory_entries = (CPodDirectoryEntry *)0x0;
  }
  this_ptr->audit_count = 0;
  if (this_ptr->file_data_buffer == (char *)0x0) {
    this_ptr->pod_format_version = 0;
    this_ptr->filename[0] = '\0';
    return;
  }
  FUN_005638d0(this_ptr->file_data_buffer);
  this_ptr->file_data_buffer = (char *)0x0;
  this_ptr->pod_format_version = 0;
  this_ptr->filename[0] = '\0';
  return;
}
