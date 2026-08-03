// Name: engine_pod.cpp_CPodFile_ctor_FUN_004f7a80
// Address: 004f7a80
// Address Range: [[004f7a80, 004f7ab6]]
// Convention: __cdecl
// Signature: CPodFile * __cdecl engine_pod_cpp_CPodFile_ctor_FUN_004f7a80(CPodFile *this_ptr)

#include "nocturne.h"

CPodFile * __cdecl engine_pod_cpp_CPodFile_ctor_FUN_004f7a80(CPodFile *this_ptr)

{
  this_ptr->directory_entries = (CPodDirectoryEntry *)0x0;
  this_ptr->filename[0] = '\0';
  this_ptr->pod_format_version = 0;
  this_ptr->audit_count = 0;
  this_ptr->file_data_buffer = (char *)0x0;
  this_ptr->file_count = 0;
  return this_ptr;
}
