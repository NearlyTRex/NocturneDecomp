// Name: FUN_0048f490
// Address: 0048f490
// Address Range: [[0048f490, 0048f884]]
// Convention: unknown
// Signature: int FUN_0048f490(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0048f490(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  byte bVar10;
  float10 fVar11;
  byte auStack_a0 [4];
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  byte local_58 [24];
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  float *pfStack_20;
  int iStack_1c;
  int iStack_18;
  
  bVar10 = 0;
  iVar2 = FUN_00461090(DAT_005ae704);
  if (iVar2 != 0) {
    return 0;
  }
  *(uint *)(param_1 + 0x2a14) = 0;
  FUN_00409f20(param_1);
  uVar3 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_58,0);
  iStack_28 = FUN_0041ceb0(uVar3);
  iVar2 = _DAT_01c70714;
  if (iStack_28 != 0) {
    *(uint *)(param_1 + 0x2a14) = 1;
    if (iVar2 == 0) {
      iVar6 = 0x1c7075c;
      iVar2 = 0;
      do {
        iVar5 = iVar2 + 1;
        iStack_18 = iVar2;
        FUN_00533ce0(iVar6,((float)iVar2 + (float)_DAT_00581727) * (float)_DAT_00581717,0);
        iVar6 = iVar6 + 0x20;
        iVar2 = iVar5;
      } while (iVar5 < 0x40);
      _DAT_01c70714 = 1;
    }
    piVar1 = DAT_005ae704;
    if (_DAT_01c02594 == 0) {
      FUN_00460f20(DAT_005ae704,0,0,0);
      uVar4 = _DAT_01c038f4 >> 8;
      _DAT_01c70754 = uVar4 | uVar4 << 8 | uVar4 << 0x10;
      _DAT_01c70758 = _DAT_01c70754 ^ 0xffffff;
    }
    else {
      uStack_9c = 3;
      uStack_8c = 0;
      uStack_90 = 0;
      uStack_94 = 0;
      uStack_98 = 0;
      uStack_88 = 0;
      uStack_84 = 0x800000;
      uStack_80 = 0x800000;
      uStack_78 = 0x800000;
      uStack_74 = 0x800000;
      uStack_6c = 0x800000;
      uStack_68 = 0x800000;
      uStack_7c = 1;
      uStack_70 = 2;
      *(uint *)(*DAT_005ae704 + 0x20) = 0;
      *(uint *)(*piVar1 + 0x24) = 0;
      *(uint *)(*piVar1 + 0x28) = 0;
      *(uint *)(*piVar1 + 0x50) = 0;
      *(uint *)(*piVar1 + 0x54) = 0;
      *(uint *)(*piVar1 + 0x58) = 0;
      *(uint *)(*piVar1 + 0x80) = 0;
      *(uint *)(*piVar1 + 0x84) = 0;
      iVar2 = _DAT_01c038f4;
      *(uint *)(*piVar1 + 0x88) = 0;
      iVar2 = 0xffff - iVar2;
      *(int *)(*piVar1 + 0x2c) = iVar2;
      *(int *)(*piVar1 + 0x5c) = iVar2;
      *(int *)(*piVar1 + 0x8c) = iVar2;
      FUN_00545920(&DAT_005b9214);
    }
    iStack_24 = 0;
    if (0 < *(int *)(param_1 + 0x15c)) {
      pfStack_20 = (float *)(param_1 + 0x160);
      do {
        fVar11 = (float10)*pfStack_20 * (float10)_DAT_0058171f;
        iVar2 = FUN_00563a30();
        iStack_1c = (int)ROUND(fVar11);
        if (iStack_1c < 0) {
          iStack_1c = 0;
        }
        else if (0x3f < iStack_1c) {
          iStack_1c = 0x3f;
        }
        FUN_00533f10(iStack_1c * 0x20 + 0x1c7075c,&fStack_40,iVar2 + 4,iVar2 + 0x10,iVar2 + 0x1c,
                     iVar2 + 0x28);
        iStack_34 = (int)ROUND(fStack_40 * _DAT_0059da10);
        iStack_30 = (int)ROUND(fStack_3c * _DAT_0059da10);
        iStack_2c = (int)ROUND(fStack_38 * _DAT_0059da10);
        FUN_0053075c(*DAT_005ae704,&iStack_34);
        piVar1 = DAT_005ae704;
        puVar8 = (uint *)*DAT_005ae704;
        if ((*(byte *)((int)puVar8 + 0x13) & 0x80) == 0) {
          iVar6 = (int)puVar8[5] >> 0x10;
          iVar2 = (int)puVar8[4] >> 0x10;
          if (_DAT_01c02594 == 0) {
            FUN_004f99d0(puVar8,1);
            if ((((-1 < iVar2) && (iVar2 < DAT_005b761c)) && (-1 < iVar6)) && (iVar6 < DAT_005b7620)
               ) {
              FUN_0048f3c0(iVar2,iVar6,puVar8[2]);
            }
          }
          else if ((iVar2 < DAT_005b761c + -1) && (iVar6 < DAT_005b7620 + -1)) {
            *(ushort *)(puVar8 + 4) = 0;
            *(ushort *)(puVar8 + 5) = 0;
            puVar7 = puVar8;
            puVar9 = (uint *)(*piVar1 + 0x30);
            for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar9 = *puVar7;
              puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
              puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
            }
            puVar7 = (uint *)(*piVar1 + 0x60);
            for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar7 = *puVar8;
              puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
              puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
            }
            *(short *)(*piVar1 + 0x42) = *(short *)(*piVar1 + 0x42) + 1;
            *(short *)(*piVar1 + 0x76) = *(short *)(*piVar1 + 0x76) + 1;
            FUN_0045f460(piVar1,auStack_a0,999);
          }
        }
        pfStack_20 = pfStack_20 + 0xd;
        iStack_24 = iStack_24 + 1;
      } while (iStack_24 < *(int *)(param_1 + 0x15c));
    }
  }
  FUN_00409f60(param_1);
  return iStack_28;
}
