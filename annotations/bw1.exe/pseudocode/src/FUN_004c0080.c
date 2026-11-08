// Name: FUN_004c0080
// Address: 004c0080
// Address Range: [[004c0080, 004c04ad]]
// Convention: unknown
// Signature: int FUN_004c0080(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004c0080(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  byte bVar9;
  float10 fVar10;
  float afStackY_1024 [980];
  byte auStack_c0 [4];
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint auStack_78 [6];
  uint auStack_60 [6];
  int iStack_48;
  int iStack_44;
  int iStack_40;
  float fStack_3c;
  float afStack_38 [5];
  int iStack_24;
  int iStack_20;
  float *pfStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar9 = 0;
  iVar2 = FUN_00483e60(DAT_00612560);
  if (iVar2 != 0) {
    return 0;
  }
  *(uint *)(param_1 + 0x2a1c) = 0;
  FUN_004087b0(param_1);
  (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
  puVar7 = auStack_78;
  puVar6 = auStack_60;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar7;
    puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
  }
  iStack_24 = FUN_004207b0(auStack_60);
  iVar2 = _DAT_01cc8084;
  if (iStack_24 != 0) {
    *(uint *)(param_1 + 0x2a1c) = 1;
    if (iVar2 == 0) {
      iVar5 = 0x1cc80cc;
      iVar2 = 0;
      do {
        iVar4 = iVar2 + 1;
        iStack_14 = iVar2;
        FUN_00583d60(iVar5,((float)iVar2 + (float)_DAT_005e0772) * (float)_DAT_005e0762,0);
        iVar5 = iVar5 + 0x20;
        iVar2 = iVar4;
      } while (iVar4 < 0x40);
      _DAT_01cc8084 = 1;
    }
    piVar1 = DAT_00612560;
    if (_DAT_01c50948 == 0) {
      FUN_00483cf0(DAT_00612560,0,0,0);
      uVar3 = _DAT_01c51cac >> 8;
      _DAT_01cc80c4 = uVar3 | uVar3 << 8 | uVar3 << 0x10;
      _DAT_01cc80c8 = _DAT_01cc80c4 ^ 0xffffff;
    }
    else {
      uStack_bc = 3;
      uStack_ac = 0;
      uStack_b0 = 0;
      uStack_b4 = 0;
      uStack_b8 = 0;
      uStack_a8 = 0;
      uStack_a4 = 0x800000;
      uStack_a0 = 0x800000;
      uStack_98 = 0x800000;
      uStack_94 = 0x800000;
      uStack_8c = 0x800000;
      uStack_88 = 0x800000;
      uStack_9c = 1;
      uStack_90 = 2;
      *(uint *)(*DAT_00612560 + 0x20) = 0;
      *(uint *)(*piVar1 + 0x24) = 0;
      *(uint *)(*piVar1 + 0x28) = 0;
      *(uint *)(*piVar1 + 0x50) = 0;
      *(uint *)(*piVar1 + 0x54) = 0;
      *(uint *)(*piVar1 + 0x58) = 0;
      *(uint *)(*piVar1 + 0x80) = 0;
      *(uint *)(*piVar1 + 0x84) = 0;
      iVar2 = _DAT_01c51cac;
      *(uint *)(*piVar1 + 0x88) = 0;
      iVar2 = 0xffff - iVar2;
      *(int *)(*piVar1 + 0x2c) = iVar2;
      *(int *)(*piVar1 + 0x5c) = iVar2;
      *(int *)(*piVar1 + 0x8c) = iVar2;
      FUN_00597a20(0x61d828);
    }
    iStack_20 = 0;
    if (0 < *(int *)(param_1 + 0x164)) {
      pfStack_1c = (float *)(param_1 + 0x168);
      do {
        fVar10 = (float10)*pfStack_1c * (float10)_DAT_005e076a;
        iVar2 = FUN_005c03a0();
        iStack_18 = (int)ROUND(fVar10);
        if (iStack_18 < 0) {
          iStack_18 = 0;
        }
        else if (0x3f < iStack_18) {
          iStack_18 = 0x3f;
        }
        FUN_00583f90(iStack_18 * 0x20 + 0x1cc80cc,iVar2 + 4,iVar2 + 0x10,iVar2 + 0x1c,iVar2 + 0x28);
        fStack_3c = afStack_38[2];
        afStack_38[(uint)bVar9 * -2] = afStack_38[(uint)bVar9 * -2 + 3];
        afStack_38[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
             afStack_38[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
        iStack_48 = (int)ROUND(fStack_3c * _DAT_00600aa0);
        iStack_44 = (int)ROUND(afStack_38[0] * _DAT_00600aa0);
        iStack_40 = (int)ROUND(afStack_38[1] * _DAT_00600aa0);
        FUN_00580173(*DAT_00612560,&iStack_48);
        piVar1 = DAT_00612560;
        puVar7 = (uint *)*DAT_00612560;
        if ((*(byte *)((int)puVar7 + 0x13) & 0x80) == 0) {
          iVar5 = (int)puVar7[5] >> 0x10;
          iVar2 = (int)puVar7[4] >> 0x10;
          if (_DAT_01c50948 == 0) {
            FUN_0053dd20(puVar7,1);
            if ((((-1 < iVar2) && (iVar2 < DAT_0061b498)) && (-1 < iVar5)) && (iVar5 < DAT_0061b49c)
               ) {
              FUN_004bffb0(iVar2,iVar5,puVar7[2]);
            }
          }
          else if ((iVar2 < DAT_0061b498 + -1) && (iVar5 < DAT_0061b49c + -1)) {
            *(ushort *)(puVar7 + 4) = 0;
            *(ushort *)(puVar7 + 5) = 0;
            puVar6 = puVar7;
            puVar8 = (uint *)(*piVar1 + 0x30);
            for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar8 = *puVar6;
              puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
              puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
            }
            puVar6 = (uint *)(*piVar1 + 0x60);
            for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar6 = *puVar7;
              puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
              puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
            }
            *(short *)(*piVar1 + 0x42) = *(short *)(*piVar1 + 0x42) + 1;
            *(short *)(*piVar1 + 0x76) = *(short *)(*piVar1 + 0x76) + 1;
            FUN_00482210(piVar1,auStack_c0,999);
          }
        }
        pfStack_1c = pfStack_1c + 0xd;
        iStack_20 = iStack_20 + 1;
      } while (iStack_20 < *(int *)(param_1 + 0x164));
    }
  }
  FUN_004087f0(param_1);
  return iStack_24;
}
