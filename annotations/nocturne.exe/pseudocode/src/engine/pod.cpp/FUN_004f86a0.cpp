// Name: FUN_004f86a0
// Address: 004f86a0
// Address Range: [[004f86a0, 004f8805]]
// Convention: unknown
// Signature: undefined4 FUN_004f86a0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004f86a0(int param_1,int param_2)

{
  byte uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte *puVar5;
  uint uVar6;
  
  if ((param_2 < 0) || (*(int *)(param_1 + 0x208) <= param_2)) {
    _DAT_01cc4800 = "..\\engine\\pod.cpp";
    _DAT_01cc4804 = 0x221;
    FUN_004c8440("CPodFile::computeOneFileCRC - invalid index");
  }
  iVar2 = _fopen(param_1 + 4,"rb");
  if (iVar2 == 0) {
    _DAT_01cc4800 = "..\\engine\\pod.cpp";
    _DAT_01cc4804 = 0x226;
    FUN_004c8440("CPodFile::computeOneFileCRC - can't open %s",param_1 + 4);
  }
  _fseek(iVar2,*(uint *)(param_2 * 0x14 + 8 + *(int *)(param_1 + 0x20c)),0);
  uVar4 = 0xffffffff;
  for (uVar6 = *(uint *)(param_2 * 0x14 + *(int *)(param_1 + 0x20c) + 4); 0xffff < (int)uVar6;
      uVar6 = uVar6 - 0x10000) {
    puVar5 = &DAT_01e428d0;
    uVar3 = 0;
    _fread(&DAT_01e428d0,0x10000,1,iVar2);
    do {
      uVar1 = *puVar5;
      puVar5 = puVar5 + 1;
      uVar3 = uVar3 + 1;
      uVar4 = FUN_004f77d0(uVar4,uVar1);
    } while (uVar3 < 0x10000);
  }
  puVar5 = &DAT_01e428d0;
  _fread(&DAT_01e428d0,uVar6,1,iVar2);
  uVar3 = 0;
  if (uVar6 != 0) {
    do {
      uVar1 = *puVar5;
      puVar5 = puVar5 + 1;
      uVar3 = uVar3 + 1;
      uVar4 = FUN_004f77d0(uVar4,uVar1);
    } while (uVar3 < uVar6);
  }
  _fclose(iVar2);
  return uVar4;
}
