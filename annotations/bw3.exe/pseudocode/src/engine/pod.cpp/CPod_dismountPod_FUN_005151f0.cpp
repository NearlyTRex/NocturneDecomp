// Name: engine_pod.cpp_CPod_dismountPod_FUN_005151f0
// Address: 005151f0
// Address Range: [[005151f0, 0051527d]]
// Convention: __cdecl
// Signature: void __cdecl engine_pod_cpp_CPod_dismountPod_FUN_005151f0(CPod *this_ptr,int index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_pod_cpp_CPod_dismountPod_FUN_005151f0(CPod *this_ptr,int index)

{
  CPodFile *ptr;
  CPodFile **ppCVar1;
  int iVar2;
  
  if ((index < 0) || (this_ptr->pod_file_count <= index)) {
    _DAT_01d71de0 = "..\\engine\\pod.cpp";
    _DAT_01d71de4 = 0x6be;
    core_main_c_displayErrorAndQuit_FUN_004e4330("CPod::dismountPod - invalid index");
  }
  if (this_ptr->pod_files[index] != (CPodFile *)0x0) {
    ptr = engine_pod_cpp_CPodFile_dtor_FUN_00512f70(this_ptr->pod_files[index],0);
    debugFreeChecked(ptr);
  }
  iVar2 = this_ptr->pod_file_count + -1;
  this_ptr->pod_file_count = iVar2;
  if (index < iVar2) {
    ppCVar1 = this_ptr->pod_files + index + -1;
    do {
      ppCVar1[1] = ppCVar1[2];
      index = index + 1;
      ppCVar1 = ppCVar1 + 1;
    } while (index < this_ptr->pod_file_count);
  }
  this_ptr->pod_files[this_ptr->pod_file_count] = (CPodFile *)0x0;
  return;
}
