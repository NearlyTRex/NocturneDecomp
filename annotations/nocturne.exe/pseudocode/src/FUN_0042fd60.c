// Name: FUN_0042fd60
// Address: 0042fd60
// Address Range: [[0042fd60, 00430130]]
// Convention: unknown
// Signature: void FUN_0042fd60(int param_1,int param_2,float param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042fd60(int param_1,int param_2,float param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int extraout_ECX;
  int iVar9;
  int iVar10;
  uint *puVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  ulonglong uVar16;
  float fVar17;
  uint uStack_44;
  uint uStack_34;
  
  if ((((_DAT_01c00c58 <= param_1) && (param_1 <= _DAT_01c00c60)) && (_DAT_01c00c5c <= param_2)) &&
     (param_2 <= _DAT_01c00c64)) {
    iVar9 = param_2 * 4;
    if (DAT_005b7624 == 8) {
      iVar9 = *(int *)(&DAT_01bd2fa0 + iVar9);
      fVar13 = (float10)param_3;
      bVar1 = *(byte *)((uint)*(byte *)(iVar9 + param_1) * 3 + 0x1c0064a);
      fVar12 = (float10)1 - fVar13;
      bVar2 = *(byte *)(param_4 * 3 + 0x1c0064a);
      FUN_00563a30();
      FUN_00563a30();
      fVar13 = (float10)bVar2 * fVar12 + (float10)bVar1 * fVar13;
      iVar7 = FUN_00563a30();
      iVar10 = (int)ROUND(fVar13) >> 0x1f;
      *(byte *)(iVar9 + param_1) =
           (&DAT_01bf7720)
           [((int)(((int)ROUND(fVar13) + iVar10 * -8) - (uint)(iVar10 << 2 < 0)) >> 3) +
            extraout_ECX * 0x400 + iVar7 * 0x20];
      return;
    }
    if (DAT_005b7624 == 0x10) {
      uVar3 = *(ushort *)(*(int *)(&DAT_01bd2fa0 + iVar9) + param_1 * 2);
      uVar8 = (uint)uVar3;
      uVar5 = (uint)(uVar3 >> (DAT_01c00624 & 0x1f)) << (DAT_01c0062c & 0x1f);
      uVar6 = (uint)(uVar3 >> (DAT_01c00630 & 0x1f)) << (DAT_01c00638 & 0x1f);
    }
    else {
      puVar11 = (uint *)(param_1 * 4 + *(int *)(&DAT_01bd2fa0 + iVar9));
      uVar5 = (*puVar11 >> (DAT_01c00624 & 0x1f)) << (DAT_01c0062c & 0x1f);
      uVar6 = (*puVar11 >> (DAT_01c00630 & 0x1f)) << (DAT_01c00638 & 0x1f);
      uVar8 = *puVar11;
    }
    fVar4 = (float)((uVar8 >> (DAT_01c0063c & 0x1f)) << (DAT_01c00644 & 0x1f) & 0xff) * param_3;
    param_4 = param_4 * 3;
    fVar14 = (float10)1 - (float10)param_3;
    fVar15 = (float10)*(byte *)(param_4 + 0x1c0064a) * fVar14;
    fVar12 = (float10)*(byte *)(param_4 + 0x1c00649) * fVar14 +
             (float10)((float)(uVar6 & 0xff) * param_3);
    fVar13 = (float10)fVar4;
    fVar17 = (float)((float10)(byte)(&DAT_01c00648)[param_4] * fVar14 +
                    (float10)((float)(uVar5 & 0xff) * param_3));
    FUN_00563a30(fVar17,fVar4,(float)fVar12);
    FUN_00563a30();
    fVar15 = fVar15 + fVar13;
    uStack_44 = (uint)(longlong)ROUND(fVar12);
    uVar16 = FUN_00563a30(fVar17,(float)fVar15);
    iVar9 = (int)((ulonglong)uVar16 >> 0x20);
    uStack_44 = uStack_44 >> (DAT_01c00638 & 0x1f);
    uStack_34 = (uint)(longlong)ROUND(fVar15);
    uStack_34 = uStack_34 >> (DAT_01c00644 & 0x1f);
    if (DAT_005b7624 != 0x10) {
      *(uint *)(*(int *)(&DAT_01bd2fa0 + param_2 * 4) + iVar9 * 4) =
           (int)uVar16 << (DAT_01c00624 & 0x1f) | uStack_44 << (DAT_01c00630 & 0x1f) |
           uStack_34 << (DAT_01c0063c & 0x1f);
      return;
    }
    *(ushort *)(*(int *)(&DAT_01bd2fa0 + param_2 * 4) + iVar9 * 2) =
         (ushort)(uStack_44 << (DAT_01c00630 & 0x1f)) |
         (ushort)((int)uVar16 << (DAT_01c00624 & 0x1f)) |
         (ushort)(uStack_34 << (DAT_01c0063c & 0x1f));
  }
  return;
}
