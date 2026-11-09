// Name: core_fldnotes.cpp_FUN_004a2ad0
// Address: 004a2ad0
// Address Range: [[004a2ad0, 004a2b2f]]
// Convention: unknown
// Signature: undefined4 core_fldnotes_cpp_FUN_004a2ad0(int param_1,undefined4 *param_2)

#include "nocturne.h"

uint core_fldnotes_cpp_FUN_004a2ad0(int param_1,uint *param_2)

{
  int iVar1;
  
  core_fldnotes_cpp_FUN_004a2b30(param_1);
  iVar1 = core_fldnotes_cpp_FUN_004a30a0(param_1,param_2[2],param_2[3]);
  if (iVar1 != 0) {
    param_2[1] = *(uint *)(param_1 + 0x18);
    *param_2 = *(uint *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + param_2[2];
    core_fldnotes_cpp_FUN_004a2bb0(param_1,param_2);
    return 1;
  }
  core_fldnotes_cpp_FUN_004a2c90(param_1);
  return 0;
}
