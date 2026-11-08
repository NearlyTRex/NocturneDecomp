// Name: FUN_00534820
// Address: 00534820
// Address Range: [[00534820, 0053498f]]
// Convention: unknown
// Signature: void FUN_00534820(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00534820(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  *(uint *)(param_1 + 0x150fec) = 0;
  *(uint *)(param_1 + 0x152f30) = 0;
  *(uint *)(param_1 + 0x154e74) = 0;
  *(uint *)(param_1 + 0x158cfc) = 0;
  *(uint *)(param_1 + 0x14f0a8) = 0;
  iVar4 = 0;
  iVar5 = param_1;
  if (0 < *(int *)(param_1 + 0x14d164)) {
    do {
      iVar1 = *(int *)(iVar5 + 0x14d168);
      if ((*(int *)(iVar1 + 0xfc) != 0) || (*(int *)(iVar1 + 0xf8) != 0)) {
        *(int *)(param_1 + 0x158d00 + *(int *)(param_1 + 0x158cfc) * 4) = iVar1;
        *(int *)(param_1 + 0x158cfc) = *(int *)(param_1 + 0x158cfc) + 1;
      }
      uVar2 = FUN_0040c8f0(iVar1,DAT_007bdc94);
      *(uint *)(param_1 + 0x14f0ac + *(int *)(param_1 + 0x14f0a8) * 4) = uVar2;
      uVar2 = _DAT_01c264e0;
      if (*(int *)(param_1 + 0x14f0ac + *(int *)(param_1 + 0x14f0a8) * 4) == 0) {
        uVar2 = FUN_0040c8f0(iVar1,_DAT_02661adc);
        *(uint *)(param_1 + 0x154e78 + *(int *)(param_1 + 0x154e74) * 4) = uVar2;
        if (*(int *)(param_1 + 0x154e78 + *(int *)(param_1 + 0x154e74) * 4) != 0) {
          *(int *)(param_1 + 0x154e74) = *(int *)(param_1 + 0x154e74) + 1;
        }
        iVar3 = FUN_0040c8f0(iVar1,_DAT_02653628);
        if (((iVar3 != 0) && (*(int *)(iVar3 + 0x2d0) == 4)) && (*(int *)(iVar3 + 0x460) != 0))
        goto LAB_00534905;
      }
      else {
        *(int *)(param_1 + 0x14f0a8) = *(int *)(param_1 + 0x14f0a8) + 1;
        uVar2 = FUN_0040c8f0(iVar1,uVar2);
        *(uint *)(param_1 + 0x150ff0 + *(int *)(param_1 + 0x150fec) * 4) = uVar2;
        if (*(int *)(param_1 + 0x150ff0 + *(int *)(param_1 + 0x150fec) * 4) != 0) {
          *(int *)(param_1 + 0x150fec) = *(int *)(param_1 + 0x150fec) + 1;
LAB_00534905:
          *(int *)(param_1 + 0x152f34 + *(int *)(param_1 + 0x152f30) * 4) = iVar1;
          *(int *)(param_1 + 0x152f30) = *(int *)(param_1 + 0x152f30) + 1;
        }
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar4 < *(int *)(param_1 + 0x14d164));
  }
  return;
}
