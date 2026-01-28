// Name: engine_pod.cpp_CPod_dismountPod_FUN_005518c0
// Address: 005518c0
// Address Range: [[005518c0, 0055195d]]
// Convention: __cdecl
// Signature: void __cdecl engine_pod_cpp_CPod_dismountPod_FUN_005518c0(CPod *this_ptr,int index)

#include "nocturne.h"

void __cdecl engine_pod_cpp_CPod_dismountPod_FUN_005518c0(CPod *this_ptr,int index)

{
  CPodFile *ptr;
  CPodFile **ppCVar1;
  int iVar2;
  
  if ((index < 0) || (this_ptr->pod_file_count <= index)) {
    g_CurrentFilename = "..\\engine\\pod.cpp";
    g_CurrentLineNumber = 0x5fd;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CPod::dismountPod - invalid index");
  }
  g_CurrentDebugLine = 0x602;
  g_CurrentDebugFilename = "..\\engine\\pod.cpp";
  if (this_ptr->pod_files[index] != (CPodFile *)0x0) {
    ptr = engine_pod_cpp_CPodFile_dtor_FUN_0054f610(this_ptr->pod_files[index]);
    shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
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
