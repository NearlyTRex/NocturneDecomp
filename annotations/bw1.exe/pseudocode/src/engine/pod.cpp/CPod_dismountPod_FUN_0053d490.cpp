// Name: engine_pod.cpp_CPod_dismountPod_FUN_0053d490
// Address: 0053d490
// Address Range: [[0053d490, 0053d51d]]
// Convention: __cdecl
// Signature: void __cdecl engine_pod_cpp_CPod_dismountPod_FUN_0053d490(CPod *this_ptr,int index)

#include "nocturne.h"

void __cdecl engine_pod_cpp_CPod_dismountPod_FUN_0053d490(CPod *this_ptr,int index)

{
  CPodFile *ptr;
  CPodFile **ppCVar1;
  int iVar2;
  
  if ((index < 0) || (this_ptr->pod_file_count <= index)) {
    g_CHAR_PTR_01d1d400 = "..\\engine\\pod.cpp";
    g_INT_01d1d404 = 0x6be;
    core_main_c_displayErrorAndQuit_FUN_005030e0("CPod::dismountPod - invalid index");
  }
  if (this_ptr->pod_files[index] != (CPodFile *)0x0) {
    ptr = engine_pod_cpp_CPodFile_dtor_FUN_0053b210(this_ptr->pod_files[index],0);
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
