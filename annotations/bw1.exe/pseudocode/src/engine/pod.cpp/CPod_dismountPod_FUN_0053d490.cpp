// Name: engine_pod.cpp_CPod_dismountPod_FUN_0053d490
// Address: 0053d490
// Address Range: [[0053d490, 0053d51d]]
// Convention: __cdecl
// Signature: void __cdecl engine_pod_cpp_CPod_dismountPod_FUN_0053d490(CPod *this_ptr,int index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_pod_cpp_CPod_dismountPod_FUN_0053d490(CPod *this_ptr,int index)

{
  CPodFile *pCVar1;
  CPodFile **ppCVar2;
  int iVar3;
  
  if ((index < 0) || (this_ptr->pod_file_count <= index)) {
    _DAT_01d1d400 = "..\\engine\\pod.cpp";
    _DAT_01d1d404 = 0x6be;
    core_main_c_FUN_005030e0("CPod::dismountPod - invalid index");
  }
  if (this_ptr->pod_files[index] != (CPodFile *)0x0) {
    pCVar1 = engine_pod_cpp_CPodFile_dtor_FUN_0053b210(this_ptr->pod_files[index],0);
    FUN_005c0344(pCVar1);
  }
  iVar3 = this_ptr->pod_file_count + -1;
  this_ptr->pod_file_count = iVar3;
  if (index < iVar3) {
    ppCVar2 = this_ptr->pod_files + index + -1;
    do {
      ppCVar2[1] = ppCVar2[2];
      index = index + 1;
      ppCVar2 = ppCVar2 + 1;
    } while (index < this_ptr->pod_file_count);
  }
  this_ptr->pod_files[this_ptr->pod_file_count] = (CPodFile *)0x0;
  return;
}
