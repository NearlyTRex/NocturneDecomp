// Name: FUN_0053c290
// Address: 0053c290
// Address Range: [[0053c290, 0053c3a4]]
// Convention: unknown
// Signature: void FUN_0053c290(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0053c290(int param_1,int param_2)

{
  int iVar1;
  uint *unaff_ESI;
  uint *puVar2;
  byte bVar3;
  uint auStack_144 [78];
  
  bVar3 = 0;
  if ((param_2 < 0) || (*(int *)(param_1 + 0x41c) <= param_2)) {
    _DAT_01d1d400 = "..\\engine\\pod.cpp";
    _DAT_01d1d404 = 0x3ab;
    FUN_005030e0("CPodFile::getAuditRecord - invalid index.  Pod not mounted?");
  }
  iVar1 = FUN_005c157c(param_1 + 4,0x5ed807);
  if (iVar1 == 0) {
    _DAT_01d1d400 = "..\\engine\\pod.cpp";
    _DAT_01d1d404 = 0x3b0;
    FUN_005030e0("CPodFile::getAuditRecord - can't open %s",param_1 + 4);
  }
  FUN_005c170c(iVar1,param_2 * 0x138 + *(int *)(param_1 + 0x420),0);
  FUN_005c0b10(auStack_144,0x138,1,iVar1);
  if ((*(byte *)(iVar1 + 0xc) & 0x20) != 0) {
    _DAT_01d1d400 = "..\\engine\\pod.cpp";
    _DAT_01d1d404 = 0x3c5;
    FUN_005030e0("CPodFile::getAuditRecord - error reading %s",param_1 + 4);
  }
  FUN_005c0d10(iVar1);
  puVar2 = auStack_144;
  for (iVar1 = 0x4e; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *puVar2;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar3 * -2 + 1;
  }
  return;
}
