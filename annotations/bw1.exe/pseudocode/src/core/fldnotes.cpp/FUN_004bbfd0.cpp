// Name: core_fldnotes.cpp_FUN_004bbfd0
// Address: 004bbfd0
// Address Range: [[004bbfd0, 004bc01d]]
// Convention: unknown
// Signature: undefined4 core_fldnotes_cpp_FUN_004bbfd0(int param_1,char *param_2)

#include "nocturne.h"

uint core_fldnotes_cpp_FUN_004bbfd0(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = param_1;
  if (0 < *(int *)(param_1 + 0x150)) {
    do {
      iVar1 = _stricmp(*(char **)(iVar2 + 0x154),param_2);
      if (iVar1 == 0) {
        return *(uint *)(iVar2 + 0x154);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < *(int *)(param_1 + 0x150));
  }
  return 0;
}
