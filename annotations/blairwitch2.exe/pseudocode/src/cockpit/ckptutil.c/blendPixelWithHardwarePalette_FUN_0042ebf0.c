// Name: cockpit_ckptutil.c_blendPixelWithHardwarePalette_FUN_0042ebf0
// Address: 0042ebf0
// Address Range: [[0042ebf0, 0042ef81]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_blendPixelWithHardwarePalette_FUN_0042ebf0(int x,int y,float alpha,int color)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_ckptutil_c_blendPixelWithHardwarePalette_FUN_0042ebf0(int x,int y,float alpha,int color)

{
  int iVar1;
  ushort uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_2c;
  
  bVar7 = DAT_01c3581c;
  bVar6 = DAT_01c35814;
  if ((((_DAT_01c35e48 <= x) && (x <= _DAT_01c35e50)) && (_DAT_01c35e4c <= y)) &&
     ((y <= _DAT_01c35e54 && (DAT_006141c0 != 8)))) {
    if (DAT_006141c0 == 0x10) {
      uVar2 = *(ushort *)(*(int *)(&DAT_01c2a38c + y * 4) + x * 2);
      uVar8 = (uint)(uVar2 >> (DAT_01c35814 & 0x1f)) << (DAT_01c3581c & 0x1f);
      uVar9 = (uint)(uVar2 >> (DAT_01c35820 & 0x1f)) << (DAT_01c35828 & 0x1f);
      uVar10 = (uint)(uVar2 >> (DAT_01c3582c & 0x1f)) << (DAT_01c35834 & 0x1f);
    }
    else {
      puVar12 = (uint *)(x * 4 + *(int *)(&DAT_01c2a38c + y * 4));
      uVar8 = *puVar12 >> (DAT_01c35814 & 0x1f);
      uVar9 = *puVar12 >> (DAT_01c35820 & 0x1f);
      uVar10 = *puVar12 >> (DAT_01c3582c & 0x1f);
    }
    if (DAT_006141c0 == 0x10) {
      uVar2 = *(ushort *)(color * 2 + 0x1c35614);
      uStack_38 = (uint)(uVar2 >> (DAT_01c35814 & 0x1f)) << (DAT_01c3581c & 0x1f);
      uVar13 = (uint)(uVar2 >> (DAT_01c35820 & 0x1f)) << (DAT_01c35828 & 0x1f);
      uVar11 = (uint)(uVar2 >> (DAT_01c3582c & 0x1f)) << (DAT_01c35834 & 0x1f);
    }
    else {
      iVar1 = color * 4;
      uStack_38 = *(uint *)(&DAT_01c35214 + iVar1) >> (DAT_01c35814 & 0x1f);
      uVar13 = *(uint *)(&DAT_01c35214 + iVar1) >> (DAT_01c35820 & 0x1f);
      uVar11 = *(uint *)(&DAT_01c35214 + iVar1) >> (DAT_01c3582c & 0x1f);
    }
    uStack_38 = uStack_38 & 0xff;
    fVar3 = 1.0 - alpha;
    fVar5 = (float)uStack_38 * fVar3 + (float)(uVar8 & 0xff) * alpha;
    fVar4 = (float)(uVar13 & 0xff) * fVar3 + (float)(uVar9 & 0xff) * alpha;
    fVar3 = (float)(uVar11 & 0xff) * fVar3 + (float)(uVar10 & 0xff) * alpha;
    if (DAT_006141c0 != 0x10) {
      dVar14 = round((double)fVar5);
      dVar15 = round((double)fVar4);
      dVar16 = round((double)fVar3);
      uStack_34 = (uint)(longlong)ROUND(dVar14);
      uStack_2c = (uint)(longlong)ROUND(dVar16);
      uStack_3c = (uint)(longlong)ROUND(dVar15);
      *(uint *)(*(int *)(&DAT_01c2a38c + y * 4) + x * 4) =
           uStack_3c << (DAT_01c35820 & 0x1f) | uStack_34 << (bVar6 & 0x1f) |
           uStack_2c << (DAT_01c3582c & 0x1f);
      return;
    }
    dVar14 = round((double)fVar5);
    dVar15 = round((double)fVar4);
    dVar16 = round((double)fVar3);
    uStack_2c = (uint)(longlong)ROUND(dVar15);
    uStack_34 = (uint)(longlong)ROUND(dVar16);
    uStack_3c = (uint)(longlong)ROUND(dVar14);
    *(ushort *)(*(int *)(&DAT_01c2a38c + y * 4) + x * 2) =
         (ushort)((uStack_2c >> (DAT_01c35828 & 0x1f)) << (DAT_01c35820 & 0x1f)) |
         (ushort)((uStack_3c >> (bVar7 & 0x1f)) << (DAT_01c35814 & 0x1f)) |
         (ushort)((uStack_34 >> (DAT_01c35834 & 0x1f)) << (DAT_01c3582c & 0x1f));
  }
  return;
}
