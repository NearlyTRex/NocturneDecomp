// Name: engine_pod.cpp_CPodFile_cleanup_FUN_0053be30
// Address: 0053be30
// Address Range: [[0053be30, 0053bec7]]
// Convention: __cdecl
// Signature: void __cdecl engine_pod_cpp_CPodFile_cleanup_FUN_0053be30(CPodFile *this_ptr)

#include "nocturne.h"

void __cdecl engine_pod_cpp_CPodFile_cleanup_FUN_0053be30(CPodFile *this_ptr)

{
  this_ptr->file_count = 0;
  if (this_ptr->directory_entries != (CPodDirectoryEntry *)0x0) {
    FUN_005c09f0(this_ptr->directory_entries);
    this_ptr->directory_entries = (CPodDirectoryEntry *)0x0;
  }
  this_ptr->dependency_count = 0;
  this_ptr->audit_count = 0;
  if (this_ptr->file_data_buffer != (char *)0x0) {
    FUN_005c09f0(this_ptr->file_data_buffer);
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
