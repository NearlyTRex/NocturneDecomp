// Name: core_fldnotes.cpp_FUN_004a9d90
// Address: 004a9d90
// Address Range: [[004a9d90, 004a9e01]]
// Convention: unknown
// Signature: bool core_fldnotes_cpp_FUN_004a9d90(int param_1,int param_2)

#include "nocturne.h"

bool core_fldnotes_cpp_FUN_004a9d90(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  *(uint *)(param_1 + 0x140) = *(uint *)(param_2 + 0x10);
  iVar2 = param_1;
  if (0 < *(int *)(param_1 + 0x150)) {
    do {
      iVar1 = core_fldnotes_cpp_FUN_004a9950(*(uint *)(iVar2 + 0x154),param_2);
      if (iVar1 == 0) {
        return false;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < *(int *)(param_1 + 0x150));
  }
  iVar2 = core_fldnotes_cpp_FUN_004a8ed0(param_2,&DAT_005c1126);
  if (iVar2 != 0) {
    *(int *)(param_1 + 0x144) = *(int *)(param_2 + 0x10) - *(int *)(param_1 + 0x140);
  }
  return iVar2 != 0;
}
