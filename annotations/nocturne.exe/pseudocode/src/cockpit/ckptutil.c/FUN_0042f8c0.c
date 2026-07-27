// Name: cockpit_ckptutil.c_FUN_0042f8c0
// Address: 0042f8c0
// Address Range: [[0042f8c0, 0042fd5d]]
// Convention: unknown
// Signature: void cockpit_ckptutil_c_FUN_0042f8c0(int param_1,int param_2,float param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cockpit_ckptutil_c_FUN_0042f8c0(int param_1,int param_2,float param_3,int param_4)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  uint local_54;
  uint uStack_50;
  uint local_4c;
  int iStack_44;
  short local_2c;
  
  bVar2 = DAT_01c0062c;
  if ((((_DAT_01c00c58 <= param_1) && (param_1 <= _DAT_01c00c60)) && (_DAT_01c00c5c <= param_2)) &&
     (param_2 <= _DAT_01c00c64)) {
    iVar1 = param_2 * 4;
    if (DAT_005b7624 == 8) {
      iVar5 = *(int *)(&DAT_01bd2fa0 + iVar1);
      iVar1 = (uint)*(byte *)(iVar5 + param_1) * 3;
      fVar17 = (float10)param_3;
      bVar2 = *(byte *)(iVar1 + 0x1c00649);
      bVar3 = *(byte *)(iVar1 + 0x1c0064a);
      fVar18 = (float10)round();
      iVar1 = (int)ROUND(fVar18);
      fVar18 = (float10)round
                                  ((float10)bVar2 * ((float10)1 - fVar17) + (float10)bVar3 * fVar17)
      ;
      iVar13 = (int)ROUND(fVar18) >> 0x1f;
      local_2c = (short)iVar1;
      fVar17 = (float10)round
                                  ((float10)bVar2 * ((float10)1 - fVar17) +
                                   (float10)local_2c * fVar17);
      iVar14 = (int)ROUND(fVar17) >> 0x1f;
      *(byte *)(iVar5 + param_1) =
           (&DAT_01bf7720)
           [((int)(((int)ROUND(fVar17) + iVar14 * -8) - (uint)(iVar14 << 2 < 0)) >> 3) +
            ((int)((iVar1 + (iVar1 >> 0x1f) * -8) - (uint)((iVar1 >> 0x1f) << 2 < 0)) >> 3) * 0x400
            + ((int)(((int)ROUND(fVar18) + iVar13 * -8) - (uint)(iVar13 << 2 < 0)) >> 3) * 0x20];
      return;
    }
    if (DAT_005b7624 == 0x10) {
      uVar4 = *(ushort *)(*(int *)(&DAT_01bd2fa0 + iVar1) + param_1 * 2);
      uVar9 = (uint)(uVar4 >> (DAT_01c00624 & 0x1f)) << (DAT_01c0062c & 0x1f);
      uVar10 = (uint)(uVar4 >> (DAT_01c00630 & 0x1f)) << (DAT_01c00638 & 0x1f);
      uVar11 = (uint)(uVar4 >> (DAT_01c0063c & 0x1f)) << (DAT_01c00644 & 0x1f);
    }
    else {
      puVar15 = (uint *)(*(int *)(&DAT_01bd2fa0 + iVar1) + param_1 * 4);
      uVar9 = *puVar15 >> (DAT_01c00624 & 0x1f);
      uVar10 = *puVar15 >> (DAT_01c00630 & 0x1f);
      uVar11 = *puVar15 >> (DAT_01c0063c & 0x1f);
    }
    if (DAT_005b7624 == 0x10) {
      uVar4 = *(ushort *)(param_4 * 2 + 0x1c00424);
      uStack_50 = (uint)(uVar4 >> (DAT_01c00624 & 0x1f)) << (DAT_01c0062c & 0x1f);
      uVar16 = (uint)(uVar4 >> (DAT_01c00630 & 0x1f)) << (DAT_01c00638 & 0x1f);
      uVar12 = (uint)(uVar4 >> (DAT_01c0063c & 0x1f)) << (DAT_01c00644 & 0x1f);
    }
    else {
      uStack_50 = *(uint *)(&DAT_01c00024 + param_4 * 4) >> (DAT_01c00624 & 0x1f);
      uVar16 = *(uint *)(&DAT_01c00024 + param_4 * 4) >> (DAT_01c00630 & 0x1f);
      uVar12 = *(uint *)(&DAT_01c00024 + param_4 * 4) >> (DAT_01c0063c & 0x1f);
    }
    uStack_50 = uStack_50 & 0xff;
    fVar6 = 1.0 - param_3;
    fVar8 = (float)uStack_50 * fVar6 + (float)(uVar9 & 0xff) * param_3;
    fVar7 = (float)(uVar16 & 0xff) * fVar6 + (float)(uVar10 & 0xff) * param_3;
    fVar6 = (float)(uVar12 & 0xff) * fVar6 + (float)(uVar11 & 0xff) * param_3;
    if (DAT_005b7624 != 0x10) {
      fVar17 = (float10)round((float10)fVar8);
      fVar18 = (float10)round((float10)fVar7);
      fVar19 = (float10)round((float10)fVar6);
      iStack_44 = (int)(longlong)ROUND(fVar18);
      local_4c = (uint)(longlong)ROUND(fVar19);
      local_54 = (uint)(longlong)ROUND(fVar17);
      *(uint *)(*(int *)(&DAT_01bd2fa0 + param_2 * 4) + param_1 * 4) =
           iStack_44 << (DAT_01c00630 & 0x1f) | local_54 << (DAT_01c00624 & 0x1f) |
           local_4c << (DAT_01c0063c & 0x1f);
      return;
    }
    fVar17 = (float10)round((float10)fVar8);
    fVar18 = (float10)round((float10)fVar7);
    fVar19 = (float10)round((float10)fVar6);
    local_4c = (uint)(longlong)ROUND(fVar17);
    local_54 = (uint)(longlong)ROUND(fVar18);
    uVar10 = local_54 >> (DAT_01c00638 & 0x1f);
    local_54 = (uint)(longlong)ROUND(fVar19);
    *(ushort *)(*(int *)(&DAT_01bd2fa0 + param_2 * 4) + param_1 * 2) =
         (ushort)(uVar10 << (DAT_01c00630 & 0x1f)) |
         (ushort)((local_4c >> (bVar2 & 0x1f)) << (DAT_01c00624 & 0x1f)) |
         (ushort)((local_54 >> (DAT_01c00644 & 0x1f)) << (DAT_01c0063c & 0x1f));
  }
  return;
}
