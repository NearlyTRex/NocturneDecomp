// Name: engine_pod.cpp_FUN_0051b110
// Address: 0051b110
// Address Range: [[0051b110, 0051b1dc]]
// Convention: unknown
// Signature: void engine_pod_cpp_FUN_0051b110(int *param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_pod_cpp_FUN_0051b110(int *param_1,char *param_2)

{
  CPodFile *this_ptr;
  CPodFile *pCVar1;
  int iVar2;
  
  if (99 < *param_1) {
    _DAT_01d046a0 = "..\\engine\\pod.cpp";
    _DAT_01d046a4 = 0x3eb;
    core_main_c_FUN_004e4500("Too many .POD files at once!");
  }
  this_ptr = (CPodFile *)debugAllocTracked1(0x42c);
  pCVar1 = (CPodFile *)0x0;
  if (this_ptr != (CPodFile *)0x0) {
    pCVar1 = engine_pod_cpp_CPodFile_ctor_FUN_00519e50(this_ptr);
  }
  param_1[*param_1 + 1] = (int)pCVar1;
  if (param_1[*param_1 + 1] == 0) {
    _DAT_01d046a0 = "..\\engine\\pod.cpp";
    _DAT_01d046a4 = 0x3f1;
    core_main_c_FUN_004e4500("Out of memory!");
  }
  iVar2 = engine_pod_cpp_CPodFile_mountFromFile_FUN_00519f00
                    ((CPodFile *)param_1[*param_1 + 1],param_2);
  if (iVar2 != 0) {
    *param_1 = *param_1 + 1;
    return;
  }
  _DAT_01d046a0 = "..\\engine\\pod.cpp";
  _DAT_01d046a4 = 0x3f2;
  core_main_c_FUN_004e4500("Can't mount %s",param_2);
  *param_1 = *param_1 + 1;
  return;
}
