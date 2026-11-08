// Name: FUN_0051ae70
// Address: 0051ae70
// Address Range: [[0051ae70, 0051af7d]]
// Convention: unknown
// Signature: void FUN_0051ae70(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051ae70(int param_1,int param_2)

{
  int iVar1;
  uint *unaff_ESI;
  uint *puVar2;
  byte bVar3;
  uint auStack_114 [66];
  
  bVar3 = 0;
  if ((param_2 < 0) || (*(int *)(param_1 + 0x424) <= param_2)) {
    _DAT_01d046a0 = "..\\engine\\pod.cpp";
    _DAT_01d046a4 = 0x37c;
    FUN_004e4500("CPodFile::getDependencyRecord - invalid index.  Pod not mounted?");
  }
  iVar1 = FUN_005b910c(param_1 + 4,0x5e268f);
  if (iVar1 == 0) {
    _DAT_01d046a0 = "..\\engine\\pod.cpp";
    _DAT_01d046a4 = 0x381;
    FUN_004e4500("CPodFile::getDependencyRecord - can't open %s",param_1 + 4);
  }
  FUN_005b929c(iVar1,param_2 * 0x108 + *(int *)(param_1 + 0x428),0);
  FUN_005b87c0(auStack_114,0x108,1,iVar1);
  if ((*(byte *)(iVar1 + 0xc) & 0x20) != 0) {
    _DAT_01d046a0 = "..\\engine\\pod.cpp";
    _DAT_01d046a4 = 0x392;
    FUN_004e4500("CPodFile::getDependencyRecord - error reading %s",param_1 + 4);
  }
  FUN_005b89c0(iVar1);
  puVar2 = auStack_114;
  for (iVar1 = 0x42; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *puVar2;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar3 * -2 + 1;
  }
  return;
}
