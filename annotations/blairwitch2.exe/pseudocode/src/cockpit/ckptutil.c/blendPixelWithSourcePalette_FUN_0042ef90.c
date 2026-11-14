// Name: cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_0042ef90
// Address: 0042ef90
// Address Range: [[0042ef90, 0042f255]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_blendPixelWithSourcePalette_FUN_0042ef90(int x,int y,float blend_factor,int palette_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_ckptutil_c_blendPixelWithSourcePalette_FUN_0042ef90(int x,int y,float blend_factor,int palette_index)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte extraout_CL;
  int iVar5;
  uint *puVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  
  if ((((_DAT_01c35e48 <= x) && (x <= _DAT_01c35e50)) && (_DAT_01c35e4c <= y)) &&
     ((y <= _DAT_01c35e54 && (DAT_006141c0 != 8)))) {
    if (DAT_006141c0 == 0x10) {
      uVar1 = *(ushort *)(*(int *)(&DAT_01c2a38c + y * 4) + x * 2);
      uVar2 = (uint)(uVar1 >> (DAT_01c35814 & 0x1f)) << (DAT_01c3581c & 0x1f);
      uVar3 = (uint)(uVar1 >> (DAT_01c35820 & 0x1f)) << (DAT_01c35828 & 0x1f);
      uVar4 = (uint)(uVar1 >> (DAT_01c3582c & 0x1f)) << (DAT_01c35834 & 0x1f);
    }
    else {
      puVar6 = (uint *)(x * 4 + *(int *)(&DAT_01c2a38c + y * 4));
      uVar2 = (*puVar6 >> (DAT_01c35814 & 0x1f)) << (DAT_01c3581c & 0x1f);
      uVar3 = (*puVar6 >> (DAT_01c35820 & 0x1f)) << (DAT_01c35828 & 0x1f);
      uVar4 = (*puVar6 >> (DAT_01c3582c & 0x1f)) << (DAT_01c35834 & 0x1f);
    }
    iVar5 = palette_index * 3;
    fVar9 = (float10)1 - (float10)blend_factor;
    fVar10 = (float10)(byte)(&DAT_01c3583a)[iVar5] * fVar9;
    fVar7 = (float10)(byte)(&DAT_01c35839)[iVar5] * fVar9 +
            (float10)((float)(uVar3 & 0xff) * blend_factor);
    fVar8 = (float10)((float)(uVar4 & 0xff) * blend_factor);
    fVar12 = (float)((float10)(byte)(&DAT_01c35838)[iVar5] * fVar9 +
                    (float10)((float)(uVar2 & 0xff) * blend_factor));
    fVar13 = (float)fVar7;
    fVar9 = (float10)fVar12;
    round(fVar12,fVar13);
    round();
    fVar10 = fVar10 + fVar8;
    uVar4 = (uint)(longlong)ROUND(fVar9) >> (extraout_CL & 0x1f);
    uVar11 = round
                       (fVar12,fVar13,(float)fVar10,(longlong)ROUND(fVar9),(longlong)ROUND(fVar7));
    iVar5 = (int)((ulonglong)uVar11 >> 0x20);
    uVar3 = (uint)uVar11 >> (DAT_01c35828 & 0x1f);
    uVar2 = (uint)(longlong)ROUND(fVar10) >> (DAT_01c35834 & 0x1f);
    if (DAT_006141c0 != 0x10) {
      *(uint *)(iVar5 * 4 + *(int *)(&DAT_01c2a38c + y * 4)) =
           uVar4 << (DAT_01c35814 & 0x1f) | uVar3 << (DAT_01c35820 & 0x1f) |
           uVar2 << (DAT_01c3582c & 0x1f);
      return;
    }
    *(ushort *)(*(int *)(&DAT_01c2a38c + y * 4) + iVar5 * 2) =
         (ushort)(uVar3 << (DAT_01c35820 & 0x1f)) | (ushort)(uVar4 << (DAT_01c35814 & 0x1f)) |
         (ushort)(uVar2 << (DAT_01c3582c & 0x1f));
  }
  return;
}
