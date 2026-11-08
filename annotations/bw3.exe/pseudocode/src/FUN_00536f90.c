// Name: FUN_00536f90
// Address: 00536f90
// Address Range: [[00536f90, 0053726f]]
// Convention: unknown
// Signature: void FUN_00536f90(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00536f90(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  uint local_74 [6];
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint local_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  int local_2c;
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar6 = 0;
  _DAT_0207babc = 0;
  _DAT_0207bab8 = 0;
  if ((*(int *)(0x01D2130C + 0x24c) == 0) &&
     (iVar1 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04), iVar1 != 0)) {
    if (*(int *)(iVar1 + 0x20b68) != 0) {
      _DAT_0207bab8 = *(int *)(iVar1 + 0x20b70);
    }
    iVar1 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
    _DAT_0207babc = *(int *)(iVar1 + 0x20b8c);
    fVar7 = (float10)fcos((float10)*(float *)(iVar1 + 0x20b90));
    _DAT_0207bac0 = (float)(fVar7 + (float10)_DAT_005d05ef);
  }
  local_28 = *(int *)(param_1 + 0x15f6fc) + -1;
  if (-1 < local_28) {
    local_2c = local_28 * 4 + param_1;
    do {
      iVar1 = *(int *)(local_2c + 0x15f700);
      if (*(int *)(iVar1 + 0xfc) == 0) {
        *(byte *)(iVar1 + 0x144) = *(byte *)(iVar1 + 0x144) & 0xf7;
      }
      else {
        (**(code **)(*(int *)(iVar1 + 0x154) + 0x1c))(iVar1);
        puVar4 = local_74;
        puVar5 = &local_44;
        for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
          puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
        }
        if (&uStack_5c != &local_44) {
          uStack_5c = local_44;
          uStack_58 = uStack_40;
          uStack_54 = uStack_3c;
        }
        if (&uStack_50 != &uStack_38) {
          uStack_50 = uStack_38;
          uStack_4c = uStack_34;
          uStack_48 = uStack_30;
        }
        FUN_005375c0(param_1,iVar1 + 0x20,iVar1 + 0x30,&uStack_5c,&uStack_50,iVar1 + 0x3c);
        iStack_20 = *(int *)(iVar1 + 0x108);
        iStack_1c = *(int *)(iVar1 + 0x10c);
        iStack_24 = *(int *)(iVar1 + 0x110);
        if (iVar1 == _DAT_0207bab8) {
          iStack_20 = (iStack_20 * 3) / 2;
          iStack_1c = (iStack_1c * 3) / 2;
          iStack_24 = (iStack_24 * 3) / 2;
        }
        if (iVar1 == _DAT_0207babc) {
          iStack_18 = iStack_20;
          fVar8 = (float10)1 / (float10)_DAT_0207bac0;
          fVar7 = (float10)iStack_20 * (float10)_DAT_0207bac0;
          iStack_14 = iStack_24;
          fVar9 = (float10)iStack_1c * fVar8;
          fVar8 = (float10)iStack_24 * fVar8;
          FUN_005a3120();
          iStack_20 = (int)ROUND(fVar7);
          FUN_005a3120();
          FUN_005a3120();
          iStack_1c = (int)ROUND(fVar9);
          iStack_24 = (int)ROUND(fVar8);
        }
        FUN_0053b100(0x01ED78C8,iStack_20,iStack_1c,iStack_24);
        iVar3 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x14))(iVar1);
        if (iVar3 == 0) {
          *(byte *)(iVar1 + 0x144) = *(byte *)(iVar1 + 0x144) & 0xf7;
        }
        else {
          *(byte *)(iVar1 + 0x144) = *(byte *)(iVar1 + 0x144) | 8;
        }
        iVar3 = 0;
        FUN_0046d500(DAT_005f2afc,1);
        if (0 < *(int *)(param_1 + 0x15acc8)) {
          do {
            FUN_0053adf0(param_1,iVar3,0);
            iVar2 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x14))(iVar1);
            if (iVar2 != 0) {
              *(byte *)(iVar1 + 0x144) = *(byte *)(iVar1 + 0x144) | 8;
            }
            FUN_0046d500(DAT_005f2afc,1);
            iVar3 = iVar3 + 1;
            FUN_0053af20(param_1);
          } while (iVar3 < *(int *)(param_1 + 0x15acc8));
        }
        FUN_0053b100(param_1,0x10000,0x10000,0x10000);
      }
      local_2c = local_2c + -4;
      local_28 = local_28 + -1;
    } while (-1 < local_28);
  }
  return;
}
