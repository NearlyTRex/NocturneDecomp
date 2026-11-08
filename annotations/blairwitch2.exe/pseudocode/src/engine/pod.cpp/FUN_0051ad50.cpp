// Name: FUN_0051ad50
// Address: 0051ad50
// Address Range: [[0051ad50, 0051ae64]]
// Convention: unknown
// Signature: void FUN_0051ad50(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051ad50(int param_1,int param_2)

{
  int iVar1;
  uint *unaff_ESI;
  uint *puVar2;
  byte bVar3;
  uint auStack_144 [78];
  
  bVar3 = 0;
  if ((param_2 < 0) || (*(int *)(param_1 + 0x41c) <= param_2)) {
    _DAT_01d046a0 = "..\\engine\\pod.cpp";
    _DAT_01d046a4 = 0x34f;
    FUN_004e4500("CPodFile::getAuditRecord - invalid index.  Pod not mounted?");
  }
  iVar1 = FUN_005b910c(param_1 + 4,0x5e25c0);
  if (iVar1 == 0) {
    _DAT_01d046a0 = "..\\engine\\pod.cpp";
    _DAT_01d046a4 = 0x354;
    FUN_004e4500("CPodFile::getAuditRecord - can't open %s",param_1 + 4);
  }
  FUN_005b929c(iVar1,param_2 * 0x138 + *(int *)(param_1 + 0x420),0);
  FUN_005b87c0(auStack_144,0x138,1,iVar1);
  if ((*(byte *)(iVar1 + 0xc) & 0x20) != 0) {
    _DAT_01d046a0 = "..\\engine\\pod.cpp";
    _DAT_01d046a4 = 0x369;
    FUN_004e4500("CPodFile::getAuditRecord - error reading %s",param_1 + 4);
  }
  FUN_005b89c0(iVar1);
  puVar2 = auStack_144;
  for (iVar1 = 0x4e; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *puVar2;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar3 * -2 + 1;
  }
  return;
}
