// Name: core_fldnotes.cpp_FUN_004a1ebe
// Address: 004a1ebe
// Address Range: [[004a1ebe, 004a1f53]]
// Convention: unknown
// Signature: void core_fldnotes_cpp_FUN_004a1ebe(int param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fldnotes_cpp_FUN_004a1ebe(int param_1,char *param_2)

{
  char cVar1;
  void *pvVar2;
  uint uVar3;
  char *pcVar4;
  byte bVar5;
  
  bVar5 = 0;
  if (*(int *)(param_1 + 0x10) == 0) {
    if (param_2 == (char *)0x0) {
      return;
    }
  }
  else {
    FUN_005b86a0(*(int *)(param_1 + 0x10));
    *(uint *)(param_1 + 0x10) = 0;
    if (param_2 == (char *)0x0) {
      return;
    }
  }
  uVar3 = 0xffffffff;
  pcVar4 = param_2;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + (uint)bVar5 * -2 + 1;
  } while (cVar1 != '\0');
  pvVar2 = FUN_005b8580(~uVar3);
  *(void **)(param_1 + 0x10) = pvVar2;
  if (pvVar2 == (void *)0x0) {
    _DAT_01d046a0 = "..\\core\\fldnotes.cpp";
    _DAT_01d046a4 = 0x360;
    core_main_c_FUN_004e4500("Out of memory");
  }
  pcVar4 = *(char **)(param_1 + 0x10);
  do {
    cVar1 = *param_2;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  return;
}
