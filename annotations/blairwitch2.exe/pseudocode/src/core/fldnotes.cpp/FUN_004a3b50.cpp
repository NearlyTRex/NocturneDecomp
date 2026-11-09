// Name: core_fldnotes.cpp_FUN_004a3b50
// Address: 004a3b50
// Address Range: [[004a3b50, 004a3bae]]
// Convention: unknown
// Signature: undefined4 core_fldnotes_cpp_FUN_004a3b50(int param_1,char *param_2)

#include "nocturne.h"

uint core_fldnotes_cpp_FUN_004a3b50(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  char *str1;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x2c0)) {
    str1 = (char *)(param_1 + 0x2c4);
    do {
      iVar1 = _stricmp(str1,param_2);
      if (iVar1 == 0) {
        *(uint *)(param_1 + 0x394 + iVar2 * 0xd4) = 1;
        return 1;
      }
      iVar2 = iVar2 + 1;
      str1 = str1 + 0xd4;
    } while (iVar2 < *(int *)(param_1 + 0x2c0));
  }
  return 0;
}
