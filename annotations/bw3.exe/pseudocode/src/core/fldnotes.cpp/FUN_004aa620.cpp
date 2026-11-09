// Name: core_fldnotes.cpp_FUN_004aa620
// Address: 004aa620
// Address Range: [[004aa620, 004aa6c4]]
// Convention: unknown
// Signature: void core_fldnotes_cpp_FUN_004aa620(int param_1)

#include "nocturne.h"

void core_fldnotes_cpp_FUN_004aa620(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x80)) {
    do {
      iVar1 = 0;
      if (0 < *(int *)(param_1 + 0x7c)) {
        do {
          *(char *)(iVar3 + *(int *)(param_1 + 0x74)) =
               (char)(((uint)*(byte *)(*(int *)(param_1 + 0x8c) +
                                      *(int *)(param_1 + 0x94) *
                                      ((*(int *)(param_1 + 0x98) * iVar2) / *(int *)(param_1 + 0x80)
                                      ) + (*(int *)(param_1 + 0x94) * iVar1) /
                                          *(int *)(param_1 + 0x7c)) *
                      (uint)*(byte *)(iVar3 + *(int *)(param_1 + 0x84))) / 0xff);
          iVar1 = iVar1 + 1;
          iVar3 = iVar3 + 1;
        } while (iVar1 < *(int *)(param_1 + 0x7c));
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x80));
  }
  *(uint *)(param_1 + 0x1268) = 0;
  return;
}
