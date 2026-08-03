// Name: engine_pod.cpp_CPod_mount_FUN_004f88a0
// Address: 004f88a0
// Address Range: [[004f88a0, 004f896c]]
// Convention: __cdecl
// Signature: void __cdecl engine_pod_cpp_CPod_mount_FUN_004f88a0(CPod *this_ptr,char *pod_filename)

#include "nocturne.h"

void __cdecl engine_pod_cpp_CPod_mount_FUN_004f88a0(CPod *this_ptr,char *pod_filename)

{
  CPodFile *this_ptr_00;
  CPodFile *pCVar1;
  int iVar2;
  
  if (99 < this_ptr->pod_file_count) {
    g_CHAR_PTR_01cc4800 = "..\\engine\\pod.cpp";
    g_INT_01cc4804 = 0x267;
    core_main_c_FUN_004c8440("Too many .POD files at once!");
  }
  this_ptr_00 = (CPodFile *)FUN_0056497c(0x21c);
  pCVar1 = (CPodFile *)0x0;
  if (this_ptr_00 != (CPodFile *)0x0) {
    pCVar1 = engine_pod_cpp_CPodFile_ctor_FUN_004f7a80(this_ptr_00);
  }
  this_ptr->pod_files[this_ptr->pod_file_count] = pCVar1;
  if (this_ptr->pod_files[this_ptr->pod_file_count] == (CPodFile *)0x0) {
    g_CHAR_PTR_01cc4800 = "..\\engine\\pod.cpp";
    g_INT_01cc4804 = 0x26d;
    core_main_c_FUN_004c8440("Out of memory!");
  }
  iVar2 = engine_pod_cpp_FUN_004f7ae0(this_ptr->pod_files[this_ptr->pod_file_count],pod_filename);
  if (iVar2 != 0) {
    this_ptr->pod_file_count = this_ptr->pod_file_count + 1;
    return;
  }
  g_CHAR_PTR_01cc4800 = "..\\engine\\pod.cpp";
  g_INT_01cc4804 = 0x26e;
  core_main_c_FUN_004c8440("Can't mount %s",pod_filename);
  this_ptr->pod_file_count = this_ptr->pod_file_count + 1;
  return;
}
