// Name: core_fldnotes.cpp_FUN_004be0b0
// Address: 004be0b0
// Address Range: [[004be0b0, 004be0e2]]
// Convention: unknown
// Signature: void core_fldnotes_cpp_FUN_004be0b0(undefined4 param_1,char *param_2)

#include "nocturne.h"

void core_fldnotes_cpp_FUN_004be0b0(uint param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = &DAT_01cc4208;
  do {
    cVar1 = *param_2;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') {
      DAT_0061d2e0 = 1;
      return;
    }
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  DAT_0061d2e0 = 1;
  return;
}
