// Name: engine_pod.cpp_CPodFile_cleanup_FUN_00513b90
// Address: 00513b90
// Address Range: [[00513b90, 00513c27]]
// Convention: __cdecl
// Signature: void __cdecl engine_pod_cpp_CPodFile_cleanup_FUN_00513b90(CPodFile *this_ptr)

#include "nocturne.h"

void __cdecl engine_pod_cpp_CPodFile_cleanup_FUN_00513b90(CPodFile *this_ptr)

{
  this_ptr->file_count = 0;
  if (this_ptr->directory_entries != (CPodDirectoryEntry *)0x0) {
    FUN_005a3770(this_ptr->directory_entries);
    this_ptr->directory_entries = (CPodDirectoryEntry *)0x0;
  }
  this_ptr->dependency_count = 0;
  this_ptr->audit_count = 0;
  if (this_ptr->file_data_buffer != (char *)0x0) {
    FUN_005a3770(this_ptr->file_data_buffer);
    this_ptr->file_data_buffer = (char *)0x0;
  }
  this_ptr->pod_format_version = 0;
  this_ptr->description[0] = '\0';
  this_ptr->author_info[0] = '\0';
  this_ptr->copyright_info[0] = '\0';
  this_ptr->mount_priority = 1000;
  this_ptr->format_flags = 1000;
  this_ptr->filename[0] = '\0';
  return;
}
