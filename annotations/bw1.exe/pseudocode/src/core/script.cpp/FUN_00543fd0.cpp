// Name: FUN_00543fd0
// Address: 00543fd0
// Address Range: [[00543fd0, 005440f9]]
// Convention: unknown
// Signature: void FUN_00543fd0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00543fd0(int param_1)

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
  FUN_00543790(param_1);
  iVar5 = 0;
  do {
    iVar2 = FUN_0049df50(param_1 + 0x34);
    if (iVar2 <= iVar5) {
      return;
    }
    uVar3 = FUN_004998a0(param_1 + 0x34,iVar5,&DAT_01e808a8);
    FUN_005431a0(uVar3);
    if (DAT_01e808a8 != '\0') {
      iVar2 = FUN_005c10d0(*(uint *)(param_1 + 0x30),(*(int *)(param_1 + 0x2c) + 1) * 8);
      *(int *)(param_1 + 0x30) = iVar2;
      if (iVar2 == 0) {
        _DAT_01d1d400 = "..\\core\\script.cpp";
        _DAT_01d1d404 = 0x3a3;
        FUN_005030e0("Out of memory loading script at line %d",iVar5 + 1);
      }
      *(int *)(*(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x2c) * 8) = iVar5 + 1;
      uVar4 = 0xffffffff;
      pcVar7 = &DAT_01e808a8;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + (uint)bVar8 * -2 + 1;
      } while (cVar1 != '\0');
      uVar3 = FUN_005c08d0(~uVar4);
      *(uint *)(*(int *)(param_1 + 0x30) + 4 + *(int *)(param_1 + 0x2c) * 8) = uVar3;
      if (*(int *)(param_1 + 0x30) == 0) {
        _DAT_01d1d400 = "..\\core\\script.cpp";
        _DAT_01d1d404 = 0x3a6;
        FUN_005030e0("Out of memory loading script at line %d",iVar5 + 1);
      }
      pcVar6 = &DAT_01e808a8;
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
