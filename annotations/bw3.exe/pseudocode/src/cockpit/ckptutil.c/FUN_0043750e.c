// Name: cockpit_ckptutil.c_FUN_0043750e
// Address: 0043750e
// Address Range: [[0043750e, 0043750f]]
// Convention: unknown
// Signature: void cockpit_ckptutil_c_FUN_0043750e(int param_1,int param_2,float param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cockpit_ckptutil_c_FUN_0043750e(int param_1,int param_2,float param_3,int param_4)

{
  ushort uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  byte extraout_CL;
  byte extraout_CL_00;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  uint uStack_38;
  ulonglong uStack_30;
  ulonglong uStack_28;
  ulonglong uStack_20;
  
  if ((((_DAT_01c6b5a8 <= param_1) && (param_1 <= _DAT_01c6b5b0)) && (_DAT_01c6b5ac <= param_2)) &&
     ((param_2 <= _DAT_01c6b5b4 && (DAT_005fba20 != 8)))) {
    if (DAT_005fba20 == 0x10) {
      uVar1 = *(ushort *)(*(int *)(&DAT_01c5faec + param_2 * 4) + param_1 * 2);
      uVar6 = (uint)(uVar1 >> (DAT_01c6af74 & 0x1f)) << (DAT_01c6af7c & 0x1f);
      uVar7 = (uint)(uVar1 >> (DAT_01c6af80 & 0x1f)) << (DAT_01c6af88 & 0x1f);
      uVar8 = (uint)(uVar1 >> (DAT_01c6af8c & 0x1f)) << (DAT_01c6af94 & 0x1f);
    }
    else {
      puVar10 = (uint *)(param_1 * 4 + *(int *)(&DAT_01c5faec + param_2 * 4));
      uVar6 = *puVar10 >> (DAT_01c6af74 & 0x1f);
      uVar7 = *puVar10 >> (DAT_01c6af80 & 0x1f);
      uVar8 = *puVar10 >> (DAT_01c6af8c & 0x1f);
    }
    if (DAT_005fba20 == 0x10) {
      uVar1 = *(ushort *)(param_4 * 2 + 0x1c6ad74);
      uStack_38 = (uint)(uVar1 >> (DAT_01c6af74 & 0x1f)) << (DAT_01c6af7c & 0x1f);
      uVar11 = (uint)(uVar1 >> (DAT_01c6af80 & 0x1f)) << (DAT_01c6af88 & 0x1f);
      uVar9 = (uint)(uVar1 >> (DAT_01c6af8c & 0x1f)) << (DAT_01c6af94 & 0x1f);
    }
    else {
      param_4 = param_4 * 4;
      uStack_38 = *(uint *)(&DAT_01c6a974 + param_4) >> (DAT_01c6af74 & 0x1f);
      uVar11 = *(uint *)(&DAT_01c6a974 + param_4) >> (DAT_01c6af80 & 0x1f);
      uVar9 = *(uint *)(&DAT_01c6a974 + param_4) >> (DAT_01c6af8c & 0x1f);
    }
    uStack_38 = uStack_38 & 0xff;
    uStack_20 = (ulonglong)uStack_38;
    fVar2 = 1.0 - param_3;
    uStack_28 = (ulonglong)(uVar11 & 0xff);
    uStack_30 = (ulonglong)(uVar9 & 0xff);
    fVar4 = (float)uStack_20 * fVar2 + (float)(uVar6 & 0xff) * param_3;
    fVar3 = (float)uStack_28 * fVar2 + (float)(uVar7 & 0xff) * param_3;
    fVar2 = (float)uStack_30 * fVar2 + (float)(uVar8 & 0xff) * param_3;
    if (DAT_005fba20 != 0x10) {
      fVar12 = (float10)fVar4;
      fVar13 = (float10)fVar3;
      fVar14 = (float10)fVar2;
      round();
      round();
      iVar5 = round();
      uStack_30._0_4_ = (uint)(longlong)ROUND(fVar13);
      uStack_28._0_4_ = (uint)(longlong)ROUND(fVar12);
      uStack_20._0_4_ = (uint)(longlong)ROUND(fVar14);
      *(uint *)(*(int *)(&DAT_01c5faec + param_2 * 4) + iVar5 * 4) =
           (uint)uStack_30 << (DAT_01c6af80 & 0x1f) | (uint)uStack_28 << (extraout_CL_00 & 0x1f) |
           (uint)uStack_20 << (DAT_01c6af8c & 0x1f);
      return;
    }
    fVar12 = (float10)fVar4;
    fVar13 = (float10)fVar3;
    fVar14 = (float10)fVar2;
    round();
    round();
    iVar5 = round();
    uStack_30._0_4_ = (uint)(longlong)ROUND(fVar12);
    uStack_20._0_4_ = (uint)(longlong)ROUND(fVar13);
    uStack_28._0_4_ = (uint)(longlong)ROUND(fVar14);
    *(ushort *)(*(int *)(&DAT_01c5faec + param_2 * 4) + iVar5 * 2) =
         (ushort)(((uint)uStack_20 >> (DAT_01c6af88 & 0x1f)) << (DAT_01c6af80 & 0x1f)) |
         (ushort)(((uint)uStack_30 >> (extraout_CL & 0x1f)) << (DAT_01c6af74 & 0x1f)) |
         (ushort)(((uint)uStack_28 >> (DAT_01c6af94 & 0x1f)) << (DAT_01c6af8c & 0x1f));
  }
  return;
}
