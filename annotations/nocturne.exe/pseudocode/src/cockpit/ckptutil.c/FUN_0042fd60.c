// Name: cockpit_ckptutil.c_FUN_0042fd60
// Address: 0042fd60
// Address Range: [[0042fd60, 00430130]]
// Convention: unknown
// Signature: void cockpit_ckptutil_c_FUN_0042fd60(int param_1,int param_2,float param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cockpit_ckptutil_c_FUN_0042fd60(int param_1,int param_2,float param_3,int param_4)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  byte bVar7;
  byte bVar8;
  float fVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  double dVar16;
  double dVar17;
  uint uStack_4c;
  uint uStack_44;
  uint uStack_40;
  short sStack_2c;
  
  bVar4 = DAT_01c0062c;
  if ((((_DAT_01c00c58 <= param_1) && (param_1 <= _DAT_01c00c60)) && (_DAT_01c00c5c <= param_2)) &&
     (param_2 <= _DAT_01c00c64)) {
    iVar1 = param_2 * 4;
    if (DAT_005b7624 == 8) {
      iVar6 = *(int *)(&DAT_01bd2fa0 + iVar1);
      iVar1 = (uint)*(byte *)(iVar6 + param_1) * 3;
      bVar4 = *(byte *)(iVar1 + 0x1c0064a);
      bVar2 = *(byte *)(param_4 * 3 + 0x1c00649);
      fVar9 = 1.0 - param_3;
      dVar16 = round
                         ((double)((float)(byte)(&DAT_01c00648)[param_4 * 3] * fVar9 +
                                  (float)(byte)(&DAT_01c00648)[iVar1] * param_3));
      iVar1 = (int)ROUND(dVar16);
      dVar16 = round
                         ((double)((float)bVar4 * fVar9 + (float)bVar2 * param_3));
      iVar13 = (int)ROUND(dVar16) >> 0x1f;
      sStack_2c = (short)iVar1;
      dVar17 = round
                         ((double)((float)bVar2 * fVar9 + (float)sStack_2c * param_3));
      iVar14 = (int)ROUND(dVar17) >> 0x1f;
      *(byte *)(iVar6 + param_1) =
           (&DAT_01bf7720)
           [((int)(((int)ROUND(dVar17) + iVar14 * -8) - (uint)(iVar14 << 2 < 0)) >> 3) +
            ((int)((iVar1 + (iVar1 >> 0x1f) * -8) - (uint)((iVar1 >> 0x1f) << 2 < 0)) >> 3) * 0x400
            + ((int)(((int)ROUND(dVar16) + iVar13 * -8) - (uint)(iVar13 << 2 < 0)) >> 3) * 0x20];
      return;
    }
    if (DAT_005b7624 == 0x10) {
      uVar5 = *(ushort *)(*(int *)(&DAT_01bd2fa0 + iVar1) + param_1 * 2);
      uVar12 = (uint)uVar5;
      uVar10 = (uint)(uVar5 >> (DAT_01c00624 & 0x1f)) << (DAT_01c0062c & 0x1f);
      uVar11 = (uint)(uVar5 >> (DAT_01c00630 & 0x1f)) << (DAT_01c00638 & 0x1f);
    }
    else {
      puVar15 = (uint *)(param_1 * 4 + *(int *)(&DAT_01bd2fa0 + iVar1));
      uVar10 = (*puVar15 >> (DAT_01c00624 & 0x1f)) << (DAT_01c0062c & 0x1f);
      uVar11 = (*puVar15 >> (DAT_01c00630 & 0x1f)) << (DAT_01c00638 & 0x1f);
      uVar12 = *puVar15;
    }
    bVar8 = DAT_01c0063c & 0x1f;
    bVar7 = DAT_01c00644 & 0x1f;
    param_4 = param_4 * 3;
    bVar2 = *(byte *)(param_4 + 0x1c00649);
    fVar9 = 1.0 - param_3;
    bVar3 = *(byte *)(param_4 + 0x1c0064a);
    dVar16 = round
                       ((double)((float)(byte)(&DAT_01c00648)[param_4] * fVar9 +
                                (float)(uVar10 & 0xff) * param_3));
    dVar17 = round
                       ((double)((float)bVar2 * fVar9 + (float)(uVar11 & 0xff) * param_3));
    uStack_44 = (uint)(longlong)ROUND(dVar16);
    uStack_4c = (uint)(longlong)ROUND(dVar17);
    uStack_44 = uStack_44 >> (bVar4 & 0x1f);
    dVar16 = round
                       ((double)((float)bVar3 * fVar9 +
                                (float)((uVar12 >> bVar8) << bVar7 & 0xff) * param_3));
    uStack_40 = (uint)(longlong)ROUND(dVar16);
    uStack_4c = uStack_4c >> (DAT_01c00638 & 0x1f);
    uStack_40 = uStack_40 >> (DAT_01c00644 & 0x1f);
    if (DAT_005b7624 != 0x10) {
      *(uint *)(*(int *)(&DAT_01bd2fa0 + param_2 * 4) + param_1 * 4) =
           uStack_44 << (DAT_01c00624 & 0x1f) | uStack_4c << (DAT_01c00630 & 0x1f) |
           uStack_40 << (DAT_01c0063c & 0x1f);
      return;
    }
    *(ushort *)(*(int *)(&DAT_01bd2fa0 + param_2 * 4) + param_1 * 2) =
         (ushort)(uStack_4c << (DAT_01c00630 & 0x1f)) | (ushort)(uStack_44 << (DAT_01c00624 & 0x1f))
         | (ushort)(uStack_40 << (DAT_01c0063c & 0x1f));
  }
  return;
}
