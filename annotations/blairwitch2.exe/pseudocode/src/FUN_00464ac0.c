// Name: FUN_00464ac0
// Address: 00464ac0
// Address Range: [[00464ac0, 00464cb3]]
// Convention: unknown
// Signature: int FUN_00464ac0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00464ac0(int param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint uVar6;
  float fStack_48;
  uint auStack_44 [6];
  uint auStack_2c [7];
  
  bVar5 = 0;
  iVar1 = FUN_0046bc80(DAT_0060b280);
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x2828) = 0;
  }
  if (*(int *)(param_1 + 0x10b84) != 2) {
    iVar2 = FUN_0046b960(DAT_0060b280);
    if ((((iVar2 == 0) || (*(int *)(param_1 + 0x10b84) == 0)) && (iVar1 == 0)) &&
       (*(int *)(param_1 + 0x2568) == 0)) {
      FUN_004089d0(param_1);
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1,0);
      puVar3 = auStack_2c;
      puVar4 = auStack_44;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
      }
      iVar1 = FUN_0041a840(auStack_44);
      if (iVar1 != 0) {
        *(uint *)(param_1 + 0x2828) = 1;
        if (*(int *)(param_1 + 0x10b84) == 0) {
          if (*(int *)(param_1 + 0x10c20) == 0) {
            FUN_00424bd0(param_1);
          }
        }
        else {
          if (*(int *)(param_1 + 0x10b84) == 1) {
            fStack_48 = (1.0 - *(float *)(param_1 + 0x10b88)) / 0x3F800000;
          }
          else {
            fStack_48 = ((float)_DAT_005d10c4 - *(float *)(param_1 + 0x10b88)) / 0x3F800000;
            if (fStack_48 < 0.0) {
              fStack_48 = 0.0;
            }
          }
          if (0.0 < (double)fStack_48) {
            FUN_0046b8d0(DAT_0060b280,0);
            FUN_0046b8f0(DAT_0060b280,fStack_48);
            FUN_0046c540(DAT_0060b280,1);
            if ((double)fStack_48 <= _DAT_005d10c4) {
              uVar6 = 0x267;
            }
            else {
              uVar6 = 0x2e7;
            }
            FUN_00547170(param_1 + 0x2b4,0xffffffff,uVar6,1,0);
            FUN_0046c900(DAT_0060b280);
          }
        }
        if (_DAT_01d1cdc8 != 0) {
          iVar2 = FUN_0046b960(DAT_0060b280);
          if (iVar2 == 0) {
            FUN_005042e0(param_1 + 0x2b4,param_1);
            (**(code **)(*(int *)(param_1 + 0x2b0) + 0x60))(param_1);
          }
        }
      }
      FUN_00408a10(param_1);
      return iVar1;
    }
  }
  return 0;
}
