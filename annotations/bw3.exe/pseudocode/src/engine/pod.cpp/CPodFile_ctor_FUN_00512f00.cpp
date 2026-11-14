// Name: engine_pod.cpp_CPodFile_ctor_FUN_00512f00
// Address: 00512f00
// Address Range: [[00512f00, 00512f69]]
// Convention: __cdecl
// Signature: CPodFile * __cdecl engine_pod_cpp_CPodFile_ctor_FUN_00512f00(CPodFile *this_ptr)

#include "nocturne.h"

CPodFile * __cdecl engine_pod_cpp_CPodFile_ctor_FUN_00512f00(CPodFile *this_ptr)

{
  this_ptr->directory_entries = (CPodDirectoryEntry *)0x0;
  this_ptr->filename[0] = '\0';
  this_ptr->description[0] = '\0';
  this_ptr->author_info[0] = '\0';
  this_ptr->copyright_info[0] = '\0';
  this_ptr->pod_format_version = 0;
  this_ptr->audit_count = 0;
  this_ptr->dependency_count = 0;
  this_ptr->file_data_buffer = (char *)0x0;
  this_ptr->mount_priority = 1000;
  this_ptr->format_flags = 1000;
  this_ptr->file_count = 0;
  return this_ptr;
}
