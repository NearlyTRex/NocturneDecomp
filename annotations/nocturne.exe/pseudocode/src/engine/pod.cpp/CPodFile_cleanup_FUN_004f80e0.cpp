// Name: engine_pod.cpp_CPodFile_cleanup_FUN_004f80e0
// Address: 004f80e0
// Address Range: [[004f80e0, 004f814f]]
// Convention: __cdecl
// Signature: void __cdecl engine_pod_cpp_CPodFile_cleanup_FUN_004f80e0(CPodFile *this_ptr)

#include "nocturne.h"

void __cdecl engine_pod_cpp_CPodFile_cleanup_FUN_004f80e0(CPodFile *this_ptr)

{
  int iVar1;
  
  iVar1 = *(int *)(this_ptr->author_info + 4);
  this_ptr->author_info[0] = '\0';
  this_ptr->author_info[1] = '\0';
  this_ptr->author_info[2] = '\0';
  this_ptr->author_info[3] = '\0';
  if (iVar1 != 0) {
    FUN_005638d0(iVar1);
    this_ptr->author_info[4] = '\0';
    this_ptr->author_info[5] = '\0';
    this_ptr->author_info[6] = '\0';
    this_ptr->author_info[7] = '\0';
  }
  iVar1 = *(int *)(this_ptr->author_info + 8);
  this_ptr->author_info[0xc] = '\0';
  this_ptr->author_info[0xd] = '\0';
  this_ptr->author_info[0xe] = '\0';
  this_ptr->author_info[0xf] = '\0';
  if (iVar1 == 0) {
    this_ptr->pod_format_version = 0;
    this_ptr->filename[0] = '\0';
    return;
  }
  FUN_005638d0(iVar1);
  this_ptr->author_info[8] = '\0';
  this_ptr->author_info[9] = '\0';
  this_ptr->author_info[10] = '\0';
  this_ptr->author_info[0xb] = '\0';
  this_ptr->pod_format_version = 0;
  this_ptr->filename[0] = '\0';
  return;
}
