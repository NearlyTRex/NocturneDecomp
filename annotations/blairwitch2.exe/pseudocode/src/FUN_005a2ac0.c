// Name: FUN_005a2ac0
// Address: 005a2ac0
// Address Range: [[005a2ac0, 005a2db8]]
// Convention: unknown
// Signature: void FUN_005a2ac0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a2ac0(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  float afStackY_106c [999];
  byte auStack_c0 [4];
  float fStack_bc;
  int iStack_8c;
  int iStack_88;
  float fStack_84;
  float afStack_80 [4];
  float fStack_70;
  float fStack_6c;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar5 = 0;
  iVar3 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x17c))(param_1);
  if (iVar3 != 0) {
    FUN_00423850(param_1,*(int *)(param_1 + 0x10a78) + 0x20);
    iVar3 = param_1 + 0x2b4;
    fStack_18 = (float)FUN_00503e60(iVar3);
    fStack_14 = fStack_18;
    iVar4 = FUN_005035c0(iVar3);
    if (*(int *)(iVar4 + 0x24) != 2) {
      FUN_00503620(iVar3,2,1);
      return;
    }
    if ((_DAT_005ff174 <= fStack_18) && (fStack_18 <= _DAT_005ff178)) {
      *(uint *)(param_1 + 0x10a60) = 0x3f800000;
      FUN_004222d0(auStack_c0);
      fStack_bc = *(float *)(param_1 + 0x2824) * _DAT_005f001b;
      iStack_8c = param_1;
      iStack_88 = param_1;
      FUN_004089d0(param_1);
      fStack_14 = (float)(param_1 + 0x1134);
      FUN_00591530(&DAT_0265370c,*(int *)(param_1 + 0x11850) * 0x30 + (int)fStack_14);
      fStack_3c = fStack_30;
      afStack_80[(uint)bVar5 * -2 + 0x12] = afStack_80[(uint)bVar5 * -2 + 0x15];
      afStack_80[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x13] =
           afStack_80[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x16];
      FUN_00591530(&DAT_0265370c,*(int *)(param_1 + 0x11854) * 0x30 + (int)fStack_14);
      fStack_48 = fStack_54;
      afStack_80[(uint)bVar5 * -2 + 0xf] = afStack_80[(uint)bVar5 * -2 + 0xc];
      afStack_80[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10] =
           afStack_80[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd];
      afStack_80[2] = fStack_48 - fStack_3c;
      afStack_80[3] = fStack_44 - fStack_38;
      fStack_70 = fStack_40 - fStack_34;
      fStack_84 = fStack_48 - fStack_3c;
      afStack_80[(uint)bVar5 * -2] = afStack_80[(uint)bVar5 * -2 + 3];
      afStack_80[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           afStack_80[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
      afStack_80[0] = afStack_80[0] * _DAT_005f001f + fStack_38;
      fStack_84 = fStack_84 * _DAT_005f001f + fStack_3c;
      afStack_80[1] = afStack_80[1] * _DAT_005f001f + fStack_34;
      fStack_1c = SQRT(afStack_80[1] * afStack_80[1] +
                       fStack_84 * fStack_84 + afStack_80[0] * afStack_80[0]);
      FUN_00408d70(param_1,&fStack_84);
      fStack_60 = fStack_6c;
      afStack_80[(uint)bVar5 * -2 + 9] = afStack_80[(uint)bVar5 * -2 + 6];
      afStack_80[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10] =
           afStack_80[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
      if (&fStack_84 != afStack_80 + 8) {
        fStack_84 = fStack_60;
        afStack_80[0] = fStack_5c;
        afStack_80[1] = fStack_58;
      }
      FUN_00488110(param_1,&fStack_84,fStack_1c,auStack_c0);
      FUN_00408a10(param_1);
      return;
    }
    if ((_DAT_005ff178 < fStack_18) &&
       (fVar1 = *(float *)(*(int *)(param_1 + 0x10a78) + 0x20) - *(float *)(param_1 + 0x20),
       fVar2 = *(float *)(*(int *)(param_1 + 0x10a78) + 0x28) - *(float *)(param_1 + 0x28),
       _DAT_005ff170 < SQRT(fVar2 * fVar2 + fVar1 * fVar1))) {
      FUN_0059dcb0(param_1 + 0x10af8,0x3f800000);
      FUN_0059d8e0(param_1 + 0x10af8,"Chasing");
      return;
    }
  }
  return;
}
