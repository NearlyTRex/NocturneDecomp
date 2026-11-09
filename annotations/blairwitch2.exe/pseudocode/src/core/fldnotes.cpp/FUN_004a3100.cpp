// Name: core_fldnotes.cpp_FUN_004a3100
// Address: 004a3100
// Address Range: [[004a3100, 004a3157]]
// Convention: unknown
// Signature: undefined4 core_fldnotes_cpp_FUN_004a3100(int param_1,char *param_2)

#include "nocturne.h"

uint core_fldnotes_cpp_FUN_004a3100(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  byte bVar6;
  
  bVar6 = 0;
  iVar2 = engine_font_cpp_FUN_004aaf00(*(uint *)(param_1 + 0x2c),param_2);
  if (iVar2 + *(int *)(param_1 + 0x14) < *(int *)(param_1 + 0x24)) {
    uVar3 = 0xffffffff;
    pcVar5 = (char *)(param_1 + 0x48);
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
    } while (cVar1 != '\0');
    uVar4 = 0xffffffff;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *param_2;
      param_2 = param_2 + (uint)bVar6 * -2 + 1;
    } while (cVar1 != '\0');
    if (~uVar3 + (~uVar4 - 2) < 0xfa) {
      return 1;
    }
  }
  return 0;
}
