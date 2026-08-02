// Name: engine_pod.cpp_CPod_mount_FUN_004f88a0
// Address: 004f88a0
// Address Range: [[004f88a0, 004f896c]]
// Convention: unknown
// Signature: void engine_pod_cpp_CPod_mount_FUN_004f88a0(int *param_1,undefined4 param_2)

#include "nocturne.h"

void engine_pod_cpp_CPod_mount_FUN_004f88a0(int *param_1,uint param_2)

{
  CPodFile *this_ptr;
  CPodFile *pCVar1;
  int iVar2;
  
  if (99 < *param_1) {
    PTR_01cc4800 = "..\\engine\\pod.cpp";
    INT_01cc4804 = 0x267;
    core_main_c_FUN_004c8440("Too many .POD files at once!");
  }
  this_ptr = (CPodFile *)FUN_0056497c(0x21c);
  pCVar1 = (CPodFile *)0x0;
  if (this_ptr != (CPodFile *)0x0) {
    pCVar1 = engine_pod_cpp_CPodFile_ctor_FUN_004f7a80(this_ptr);
  }
  param_1[*param_1 + 1] = (int)pCVar1;
  if (param_1[*param_1 + 1] == 0) {
    PTR_01cc4800 = "..\\engine\\pod.cpp";
    INT_01cc4804 = 0x26d;
    core_main_c_FUN_004c8440("Out of memory!");
  }
  iVar2 = engine_pod_cpp_FUN_004f7ae0(param_1[*param_1 + 1],param_2);
  if (iVar2 != 0) {
    *param_1 = *param_1 + 1;
    return;
  }
  PTR_01cc4800 = "..\\engine\\pod.cpp";
  INT_01cc4804 = 0x26e;
  core_main_c_FUN_004c8440("Can't mount %s",param_2);
  *param_1 = *param_1 + 1;
  return;
}
