// Name: engine_pod.cpp_CPod_dismountPod_FUN_0051bf10
// Address: 0051bf10
// Address Range: [[0051bf10, 0051bf9d]]
// Convention: __cdecl
// Signature: void __cdecl engine_pod_cpp_CPod_dismountPod_FUN_0051bf10(CPod *this_ptr,int index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_pod_cpp_CPod_dismountPod_FUN_0051bf10(CPod *this_ptr,int index)

{
  CPodFile *pCVar1;
  CPodFile **ppCVar2;
  int iVar3;
  
  if ((index < 0) || (this_ptr->pod_file_count <= index)) {
    _DAT_01d046a0 = "..\\engine\\pod.cpp";
    _DAT_01d046a4 = 0x64e;
    core_main_c_FUN_004e4500("CPod::dismountPod - invalid index");
  }
  if (this_ptr->pod_files[index] != (CPodFile *)0x0) {
    pCVar1 = engine_pod_cpp_CPodFile_dtor_FUN_00519ec0(this_ptr->pod_files[index],0);
    FUN_005b7fdc(pCVar1);
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
