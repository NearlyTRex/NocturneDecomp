// Name: cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_0042ef90
// Address: 0042ef90
// Address Range: [[0042ef90, 0042f255]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_blendPixelWithSourcePalette_FUN_0042ef90(int x,int y,float blend_factor,int palette_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_ckptutil_c_blendPixelWithSourcePalette_FUN_0042ef90(int x,int y,float blend_factor,int palette_index)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  float fVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  double dVar11;
  double dVar12;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  
  bVar6 = DAT_01c3581c;
  if ((((_DAT_01c35e48 <= x) && (x <= _DAT_01c35e50)) && (_DAT_01c35e4c <= y)) &&
     ((y <= _DAT_01c35e54 && (DAT_006141c0 != 8)))) {
    if (DAT_006141c0 == 0x10) {
      uVar3 = *(ushort *)(*(int *)(&DAT_01c2a38c + y * 4) + x * 2);
      uVar7 = (uint)(uVar3 >> (DAT_01c35814 & 0x1f)) << (DAT_01c3581c & 0x1f);
      uVar8 = (uint)(uVar3 >> (DAT_01c35820 & 0x1f)) << (DAT_01c35828 & 0x1f);
      uVar9 = (uint)(uVar3 >> (DAT_01c3582c & 0x1f)) << (DAT_01c35834 & 0x1f);
    }
    else {
      puVar10 = (uint *)(x * 4 + *(int *)(&DAT_01c2a38c + y * 4));
      uVar7 = (*puVar10 >> (DAT_01c35814 & 0x1f)) << (DAT_01c3581c & 0x1f);
      uVar8 = (*puVar10 >> (DAT_01c35820 & 0x1f)) << (DAT_01c35828 & 0x1f);
      uVar9 = (*puVar10 >> (DAT_01c3582c & 0x1f)) << (DAT_01c35834 & 0x1f);
    }
    iVar5 = palette_index * 3;
    bVar1 = (&DAT_01c35839)[iVar5];
    fVar4 = 1.0 - blend_factor;
    bVar2 = (&DAT_01c3583a)[iVar5];
    dVar11 = round
                       ((double)((float)(byte)(&DAT_01c35838)[iVar5] * fVar4 +
                                (float)(uVar7 & 0xff) * blend_factor));
    dVar12 = round
                       ((double)((float)bVar1 * fVar4 + (float)(uVar8 & 0xff) * blend_factor));
    uStack_3c = (uint)(longlong)ROUND(dVar11);
    uStack_34 = (uint)(longlong)ROUND(dVar12);
    uStack_3c = uStack_3c >> (bVar6 & 0x1f);
    dVar11 = round
                       ((double)((float)bVar2 * fVar4 + (float)(uVar9 & 0xff) * blend_factor));
    uStack_38 = (uint)(longlong)ROUND(dVar11);
    uStack_34 = uStack_34 >> (DAT_01c35828 & 0x1f);
    uStack_38 = uStack_38 >> (DAT_01c35834 & 0x1f);
    if (DAT_006141c0 != 0x10) {
      *(uint *)(x * 4 + *(int *)(&DAT_01c2a38c + y * 4)) =
           uStack_3c << (DAT_01c35814 & 0x1f) | uStack_34 << (DAT_01c35820 & 0x1f) |
           uStack_38 << (DAT_01c3582c & 0x1f);
      return;
    }
    *(ushort *)(*(int *)(&DAT_01c2a38c + y * 4) + x * 2) =
         (ushort)(uStack_34 << (DAT_01c35820 & 0x1f)) | (ushort)(uStack_3c << (DAT_01c35814 & 0x1f))
         | (ushort)(uStack_38 << (DAT_01c3582c & 0x1f));
  }
  return;
}
