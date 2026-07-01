// Name: engine_pod.cpp_CPod_mount_FUN_00550a10
// Address: 00550a10
// MANUAL RECONSTRUCTION
// Address Range: [[00550a10, 00550aea]]
// Convention: __cdecl
// Signature: void __cdecl engine_pod_cpp_CPod_mount_FUN_00550a10(CPod *this_ptr,char *pod_filename)

#include "nocturne.h"

void __cdecl engine_pod_cpp_CPod_mount_FUN_00550a10(CPod *this_ptr,char *pod_filename)

{
  CPodFile *this_ptr_00;
  CPodFile *pCVar1;
  int iVar2;
  
  if (99 < this_ptr->pod_file_count) {
    g_CurrentFilename = "..\\engine\\pod.cpp";
    g_CurrentLineNumber = 922;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Too many .POD files at once!");
  }
  this_ptr_00 = (CPodFile *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0
                          (sizeof(CPodFile),"..\\engine\\pod.cpp",927);
  pCVar1 = (CPodFile *)0x0;
  if (this_ptr_00 != (CPodFile *)0x0) {
    pCVar1 = engine_pod_cpp_CPodFile_ctor_FUN_0054f5a0(this_ptr_00);
  }
  this_ptr->pod_files[this_ptr->pod_file_count] = pCVar1;
  if (this_ptr->pod_files[this_ptr->pod_file_count] == (CPodFile *)0x0) {
    g_CurrentFilename = "..\\engine\\pod.cpp";
    g_CurrentLineNumber = 928;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
  }
  iVar2 = engine_pod_cpp_CPodFile_mountFromFile_FUN_0054f650
                    (this_ptr->pod_files[this_ptr->pod_file_count],pod_filename);
  if (iVar2 != 0) {
    this_ptr->pod_file_count = this_ptr->pod_file_count + 1;
    return;
  }
  g_CurrentFilename = "..\\engine\\pod.cpp";
  g_CurrentLineNumber = 929;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Can't mount %s",pod_filename);
  this_ptr->pod_file_count = this_ptr->pod_file_count + 1;
  return;
}
