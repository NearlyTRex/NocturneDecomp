// Name: FUN_00563970
// Address: 00563970
// Address Range: [[00563970, 00563e37]]
// Convention: unknown
// Signature: void FUN_00563970(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00563970(int param_1,float param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  char *pcVar7;
  uint *puVar8;
  char *pcVar9;
  byte bVar10;
  uint auStack_b0 [6];
  uint auStack_98 [6];
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  float fStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  float fStack_40;
  uint uStack_3c;
  float fStack_38;
  uint uStack_34;
  uint uStack_30;
  float fStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar10 = 0;
  if ((*(uint *)(param_1 + 0x1b4) & 0x7fffffff) == 0) {
    *(float *)(param_1 + 0x1b8) = *(float *)(param_1 + 0x1b8) - param_2;
    if (0.0 < *(float *)(param_1 + 0x1b8)) {
      return;
    }
    *(uint *)(param_1 + 0x1b8) = 0x3f000000;
    if ((0 < *(int *)(param_1 + 0x1c4)) && (*(int *)(param_1 + 0x1c4) <= *(int *)(param_1 + 0x1c0)))
    {
      return;
    }
    iVar4 = FUN_004f6e90(0x01D81080,param_1 + 0x158);
    pcVar2 = (char *)FUN_0040c840(iVar4,_DAT_01c5bc48);
    if ((pcVar2 == (char *)0x0) ||
       (iVar5 = (**(code **)(*(int *)(pcVar2 + 0x154) + 0x10c))(pcVar2), iVar5 == 0)) {
      if (iVar4 != 0) {
        return;
      }
      *(uint *)(param_1 + 0x1b4) = *(uint *)(param_1 + 0x1bc);
    }
    else {
      pcVar7 = (char *)0x5d54af;
      iVar4 = -1;
      do {
        pcVar9 = pcVar2;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar9 = pcVar2 + (uint)bVar10 * -2 + 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar9;
      } while (cVar1 != '\0');
      pcVar9 = pcVar9 + -1;
      do {
        cVar1 = *pcVar7;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      *(uint *)(param_1 + 0x1b4) = *(uint *)(param_1 + 0x1bc);
    }
  }
  *(float *)(param_1 + 0x1b4) = *(float *)(param_1 + 0x1b4) - param_2;
  if (*(float *)(param_1 + 0x1b4) <= 0.0) {
    *(uint *)(param_1 + 0x1b8) = 0x3f000000;
    *(uint *)(param_1 + 0x1b4) = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_78 = 0x3f800000;
    FUN_00408b00(param_1,&uStack_80);
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0x3fc00000;
    FUN_00408b00(param_1,&uStack_50);
    fStack_2c = (float)FUN_0053de10(0x01ED78C8,*(uint *)(param_1 + 0x20),
                                    *(uint *)(param_1 + 0x28),0,0,0x3f800000,
                                    *(uint *)(param_1 + 0x24),
                                    *(float *)(param_1 + 0x24) + _DAT_005d54b7);
    fStack_14 = fStack_2c;
    FUN_0053ebe0(0x01ED78C8);
    if (1.0 <= fStack_2c) {
      if (*(int *)(param_1 + 0x1c8) != 0) {
        (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
        puVar6 = auStack_98;
        puVar8 = auStack_b0;
        for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar8 = *puVar6;
          puVar6 = puVar6 + (uint)bVar10 * -2 + 1;
          puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
        }
        iVar4 = FUN_0041daf0(auStack_b0);
        if (iVar4 != 0) {
          return;
        }
      }
      pcVar2 = (char *)FUN_0040c4f0(param_1 + 0x176);
      if (pcVar2 != (char *)0x0) {
        iVar4 = FUN_0040c840(pcVar2,DAT_007e2cec);
        FUN_0040c840(pcVar2,DAT_007e17b4);
        if (iVar4 != 0) {
          iVar5 = -1;
          pcVar7 = (char *)(param_1 + 0x2520);
          do {
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + (uint)bVar10 * -2 + 1;
          } while (cVar1 != '\0');
          if (iVar5 != -2) {
            FUN_0054eae0(iVar4 + 0x158,(char *)(param_1 + 0x2520));
          }
        }
        pcVar7 = (char *)(param_1 + 0x158);
        pcVar9 = pcVar2;
        do {
          cVar1 = *pcVar7;
          *pcVar9 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar7[1];
          pcVar7 = pcVar7 + 2;
          pcVar9[1] = cVar1;
          pcVar9 = pcVar9 + 2;
        } while (cVar1 != '\0');
        *(uint *)(pcVar2 + 0x20) = *(uint *)(param_1 + 0x20);
        *(uint *)(pcVar2 + 0x24) = *(uint *)(param_1 + 0x24);
        *(uint *)(pcVar2 + 0x28) = *(uint *)(param_1 + 0x28);
        *(uint *)(pcVar2 + 0x2c) = *(uint *)(param_1 + 0x2c);
        if (pcVar2 + 0x30 != (char *)(param_1 + 0x30)) {
          *(uint *)(pcVar2 + 0x30) = *(uint *)(param_1 + 0x30);
          *(uint *)(pcVar2 + 0x34) = *(uint *)(param_1 + 0x34);
          *(uint *)(pcVar2 + 0x38) = *(uint *)(param_1 + 0x38);
        }
        (*(code *)**(uint **)(pcVar2 + 0x154))(pcVar2);
        iVar4 = FUN_0040c840(pcVar2,DAT_007e2cec);
        if ((iVar4 != 0) && (*(char *)(param_1 + 0x194) != '\0')) {
          uVar3 = FUN_004fc310(iVar4 + 0x158,param_1 + 0x194,1);
          uVar3 = FUN_004fb9c0(uVar3);
          FUN_004fc420(iVar4 + 0x158,uVar3,0);
          (*(code *)**(uint **)(iVar4 + 0x154))(iVar4);
        }
        iVar4 = FUN_0040c840(pcVar2,_DAT_02d24840);
        if (iVar4 != 0) {
          *(uint *)(iVar4 + 0xd0e4) = *(uint *)(param_1 + 0x1cc);
        }
        FUN_004f6930(0x01D81080,pcVar2);
        if ((char *)&uStack_44 != pcVar2 + 0x20) {
          uStack_44 = *(uint *)(pcVar2 + 0x20);
          fStack_40 = *(float *)(pcVar2 + 0x24);
          uStack_3c = *(uint *)(pcVar2 + 0x28);
        }
        fStack_40 = fStack_40 + _DAT_005d54bb;
        iVar4 = 0;
        do {
          uStack_28 = FUN_0040ce40(0xc1a00000,0x41a00000);
          uStack_24 = FUN_0040ce40(0xc1a00000,0x41a00000);
          fStack_38 = (float)FUN_0040ce40(0xc1a00000,0x41a00000);
          uStack_20 = uStack_24;
          uStack_1c = uStack_28;
          uStack_34 = uStack_24;
          uStack_30 = uStack_28;
          if (&fStack_5c != &fStack_38) {
            uStack_58 = uStack_24;
            uStack_54 = uStack_28;
            fStack_5c = fStack_38;
          }
          iVar4 = iVar4 + 1;
          fStack_18 = fStack_38;
          fStack_14 = fStack_38;
          FUN_004a23c0(0x01C73654,&uStack_44,&fStack_5c,0x20000,0x10000,1,0xffff);
        } while (iVar4 < 0x20);
        *(int *)(param_1 + 0x1c0) = *(int *)(param_1 + 0x1c0) + 1;
        return;
      }
    }
  }
  return;
}
