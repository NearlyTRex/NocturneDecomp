// Name: cockpit_ckptutil.c_blendPixelWithHardwarePalette_FUN_00437510
// Address: 00437510
// Address Range: [[00437510, 004378a1]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_blendPixelWithHardwarePalette_FUN_00437510(int x,int y,float alpha,int color)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_ckptutil_c_blendPixelWithHardwarePalette_FUN_00437510(int x,int y,float alpha,int color)

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
  
  if ((((_DAT_01c6b5a8 <= x) && (x <= _DAT_01c6b5b0)) && (_DAT_01c6b5ac <= y)) &&
     ((y <= _DAT_01c6b5b4 && (DAT_005fba20 != 8)))) {
    if (DAT_005fba20 == 0x10) {
      uVar1 = *(ushort *)(*(int *)(&DAT_01c5faec + y * 4) + x * 2);
      uVar6 = (uint)(uVar1 >> (DAT_01c6af74 & 0x1f)) << (DAT_01c6af7c & 0x1f);
      uVar7 = (uint)(uVar1 >> (DAT_01c6af80 & 0x1f)) << (DAT_01c6af88 & 0x1f);
      uVar8 = (uint)(uVar1 >> (DAT_01c6af8c & 0x1f)) << (DAT_01c6af94 & 0x1f);
    }
    else {
      puVar10 = (uint *)(x * 4 + *(int *)(&DAT_01c5faec + y * 4));
      uVar6 = *puVar10 >> (DAT_01c6af74 & 0x1f);
      uVar7 = *puVar10 >> (DAT_01c6af80 & 0x1f);
      uVar8 = *puVar10 >> (DAT_01c6af8c & 0x1f);
    }
    if (DAT_005fba20 == 0x10) {
      uVar1 = *(ushort *)(color * 2 + 0x1c6ad74);
      uStack_38 = (uint)(uVar1 >> (DAT_01c6af74 & 0x1f)) << (DAT_01c6af7c & 0x1f);
      uVar11 = (uint)(uVar1 >> (DAT_01c6af80 & 0x1f)) << (DAT_01c6af88 & 0x1f);
      uVar9 = (uint)(uVar1 >> (DAT_01c6af8c & 0x1f)) << (DAT_01c6af94 & 0x1f);
    }
    else {
      iVar5 = color * 4;
      uStack_38 = *(uint *)(&DAT_01c6a974 + iVar5) >> (DAT_01c6af74 & 0x1f);
      uVar11 = *(uint *)(&DAT_01c6a974 + iVar5) >> (DAT_01c6af80 & 0x1f);
      uVar9 = *(uint *)(&DAT_01c6a974 + iVar5) >> (DAT_01c6af8c & 0x1f);
    }
    uStack_38 = uStack_38 & 0xff;
    uStack_20 = (ulonglong)uStack_38;
    fVar2 = 1.0 - alpha;
    uStack_28 = (ulonglong)(uVar11 & 0xff);
    uStack_30 = (ulonglong)(uVar9 & 0xff);
    fVar4 = (float)uStack_20 * fVar2 + (float)(uVar6 & 0xff) * alpha;
    fVar3 = (float)uStack_28 * fVar2 + (float)(uVar7 & 0xff) * alpha;
    fVar2 = (float)uStack_30 * fVar2 + (float)(uVar8 & 0xff) * alpha;
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
      *(uint *)(*(int *)(&DAT_01c5faec + y * 4) + iVar5 * 4) =
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
    *(ushort *)(*(int *)(&DAT_01c5faec + y * 4) + iVar5 * 2) =
         (ushort)(((uint)uStack_20 >> (DAT_01c6af88 & 0x1f)) << (DAT_01c6af80 & 0x1f)) |
         (ushort)(((uint)uStack_30 >> (extraout_CL & 0x1f)) << (DAT_01c6af74 & 0x1f)) |
         (ushort)(((uint)uStack_28 >> (DAT_01c6af94 & 0x1f)) << (DAT_01c6af8c & 0x1f));
  }
  return;
}
