// Name: core_fldnotes.cpp_FUN_004abdc0
// Address: 004abdc0
// Address Range: [[004abdc0, 004abdf2]]
// Convention: unknown
// Signature: void core_fldnotes_cpp_FUN_004abdc0(undefined4 param_1,char *param_2)

#include "nocturne.h"

void core_fldnotes_cpp_FUN_004abdc0(uint param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = &DAT_01d0cfa8;
  do {
    cVar1 = *param_2;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') {
      DAT_005fe370 = 1;
      return;
    }
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  DAT_005fe370 = 1;
  return;
}
