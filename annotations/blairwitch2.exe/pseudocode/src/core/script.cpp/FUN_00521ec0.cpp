// Name: FUN_00521ec0
// Address: 00521ec0
// Address Range: [[00521ec0, 00521fe9]]
// Convention: unknown
// Signature: void FUN_00521ec0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00521ec0(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  byte bVar8;
  
  bVar8 = 0;
  FUN_00521680(param_1);
  iVar5 = 0;
  do {
    iVar2 = FUN_004858f0(param_1 + 0x34);
    if (iVar2 <= iVar5) {
      return;
    }
    uVar3 = FUN_00481240(param_1 + 0x34,iVar5,&DAT_01e648f8);
    FUN_00521070(uVar3);
    if (DAT_01e648f8 != '\0') {
      iVar2 = FUN_005b8ce0(*(uint *)(param_1 + 0x30),(*(int *)(param_1 + 0x2c) + 1) * 8);
      *(int *)(param_1 + 0x30) = iVar2;
      if (iVar2 == 0) {
        _DAT_01d046a0 = "..\\core\\script.cpp";
        _DAT_01d046a4 = 0x3a6;
        FUN_004e4500("Out of memory loading script at line %d",iVar5 + 1);
      }
      *(int *)(*(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x2c) * 8) = iVar5 + 1;
      uVar4 = 0xffffffff;
      pcVar7 = &DAT_01e648f8;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + (uint)bVar8 * -2 + 1;
      } while (cVar1 != '\0');
      uVar3 = FUN_005b8580(~uVar4);
      *(uint *)(*(int *)(param_1 + 0x30) + 4 + *(int *)(param_1 + 0x2c) * 8) = uVar3;
      if (*(int *)(param_1 + 0x30) == 0) {
        _DAT_01d046a0 = "..\\core\\script.cpp";
        _DAT_01d046a4 = 0x3a9;
        FUN_004e4500("Out of memory loading script at line %d",iVar5 + 1);
      }
      pcVar6 = &DAT_01e648f8;
      pcVar7 = *(char **)(*(int *)(param_1 + 0x30) + 4 + *(int *)(param_1 + 0x2c) * 8);
      do {
        cVar1 = *pcVar6;
        *pcVar7 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar7[1] = cVar1;
        pcVar7 = pcVar7 + 2;
      } while (cVar1 != '\0');
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    iVar5 = iVar5 + 1;
  } while( true );
}
