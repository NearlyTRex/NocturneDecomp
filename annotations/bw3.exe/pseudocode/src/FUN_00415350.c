// Name: FUN_00415350
// Address: 00415350
// Address Range: [[00415350, 00415563]]
// Convention: unknown
// Signature: void FUN_00415350(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00415350(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  uint *puVar3;
  byte bVar4;
  uint auStackY_100c [993];
  byte auStack_78 [4];
  uint uStack_74;
  uint uStack_48;
  int iStack_44;
  int iStack_40;
  uint uStack_24;
  uint auStack_20 [4];
  
  bVar4 = 0;
  if ((*(int *)(param_1 + 0x174) < 3) || (*(int *)(param_1 + 0x180) < 1)) {
    *(uint *)(param_1 + 0x70) = 2;
    FUN_00414910(param_1,0,0);
    puVar3 = (uint *)(param_1 + 0x168);
    if (puVar3 != (uint *)&DAT_02cfd900) {
      *puVar3 = _DAT_02cfd900;
      *(uint *)(param_1 + 0x16c) = _DAT_02cfd904;
      *(uint *)(param_1 + 0x170) = _DAT_02cfd908;
    }
    if ((uint *)(param_1 + 0x15c) != puVar3) {
      *(uint *)(param_1 + 0x15c) = *puVar3;
      *(uint *)(param_1 + 0x160) = *(uint *)(param_1 + 0x16c);
      *(uint *)(param_1 + 0x164) = *(uint *)(param_1 + 0x170);
      return;
    }
  }
  else {
    if ((*(int *)(param_1 + 0x158) == 0) || (*(int *)(param_1 + 0xf24) != 0)) {
      if ((*(int *)(param_1 + 0xf2c) != 0) || (*(int *)(param_1 + 0xf24) != 0)) {
        FUN_00416b20(param_1);
      }
      if (*(int *)(param_1 + 0xf2c) == 0) {
        fVar1 = *(float *)(param_1 + 0xcbc) - param_2;
        *(float *)(param_1 + 0xcbc) = fVar1;
        if (0.0 <= fVar1) {
          puVar3 = (uint *)(param_1 + 0x24 + (uint)bVar4 * -8);
          uStack_24 = *(uint *)(param_1 + 0x20);
          auStack_20[(uint)bVar4 * -2] = *puVar3;
          auStack_20[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] = puVar3[(uint)bVar4 * -2 + 1];
          FUN_0041b410((uint *)(param_1 + 0xcd0),param_2);
          *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0xcd0);
          *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0xcd4);
          *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0xcd8);
          if ((uint *)(param_1 + 0x30) != (uint *)(param_1 + 0xcdc)) {
            *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0xcdc);
            *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0xce0);
            *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0xce4);
          }
          FUN_004088f0(param_1);
          if (((float)_DAT_005b6c52 <
               SQRT(*(float *)(param_1 + 0xd18) * *(float *)(param_1 + 0xd18) +
                    *(float *)(param_1 + 0xd10) * *(float *)(param_1 + 0xd10) +
                    *(float *)(param_1 + 0xd14) * *(float *)(param_1 + 0xd14))) &&
             (iVar2 = FUN_00491aa0(0x01C6E360,"disableBodyPartDamage"), iVar2 == 0)) {
            (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1);
            FUN_0042abb0(auStack_78);
            uStack_74 = FUN_0040ce40(0x41200000,0x41700000);
            iStack_44 = param_1;
            iStack_40 = param_1;
            uStack_48 = 0x70;
            auStack_20[2] = uStack_74;
            FUN_0053ed10(0x01ED78C8,&uStack_24,param_1 + 0x20,auStack_78);
            FUN_00415570(param_1,param_2);
            return;
          }
        }
        else {
          *(uint *)(param_1 + 0xf24) = 0;
          *(uint *)(param_1 + 0xcbc) = 0;
        }
      }
    }
    FUN_00415570(param_1,param_2);
  }
  return;
}
