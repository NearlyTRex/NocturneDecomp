// Name: engine_pod.cpp_CPod_mount_FUN_0051b110
// Address: 0051b110
// Address Range: [[0051b110, 0051b1dc]]
// Convention: __cdecl
// Signature: void __cdecl engine_pod_cpp_CPod_mount_FUN_0051b110(CPod *this_ptr,char *pod_filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_pod_cpp_CPod_mount_FUN_0051b110(CPod *this_ptr,char *pod_filename)

{
  CPodFile *this_ptr_00;
  CPodFile *pCVar1;
  int iVar2;
  
  if (99 < this_ptr->pod_file_count) {
    _DAT_01d046a0 = "..\\engine\\pod.cpp";
    _DAT_01d046a4 = 0x3eb;
    core_main_c_displayErrorAndQuit_FUN_004e4500("Too many .POD files at once!");
  }
  this_ptr_00 = (CPodFile *)operator_new(0x42c);
  pCVar1 = (CPodFile *)0x0;
  if (this_ptr_00 != (CPodFile *)0x0) {
    pCVar1 = engine_pod_cpp_CPodFile_ctor_FUN_00519e50(this_ptr_00);
  }
  this_ptr->pod_files[this_ptr->pod_file_count] = pCVar1;
  if (this_ptr->pod_files[this_ptr->pod_file_count] == (CPodFile *)0x0) {
    _DAT_01d046a0 = "..\\engine\\pod.cpp";
    _DAT_01d046a4 = 0x3f1;
    core_main_c_displayErrorAndQuit_FUN_004e4500("Out of memory!");
  }
  iVar2 = engine_pod_cpp_CPodFile_mountFromFile_FUN_00519f00
                    (this_ptr->pod_files[this_ptr->pod_file_count],pod_filename);
  if (iVar2 != 0) {
    this_ptr->pod_file_count = this_ptr->pod_file_count + 1;
    return;
  }
  _DAT_01d046a0 = "..\\engine\\pod.cpp";
  _DAT_01d046a4 = 0x3f2;
  core_main_c_displayErrorAndQuit_FUN_004e4500("Can't mount %s");
  this_ptr->pod_file_count = this_ptr->pod_file_count + 1;
  return;
}
