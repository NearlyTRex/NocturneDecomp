// Name: cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_0042ef90
// Address: 0042ef90
// Address Range: [[0042ef90, 0042f255]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_blendPixelWithSourcePalette_FUN_0042ef90(int x,int y,float blend_factor,int palette_index)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_blendPixelWithSourcePalette_FUN_0042ef90(int x,int y,float blend_factor,int palette_index)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  float fVar4;
  int iVar5;
  byte uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  double dVar11;
  double dVar12;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  
  uVar6 = g_BIT_INTEGER32_01c3581c.bytes[0];
  if ((((g_INT_01c35e48 <= x) && (x <= g_INT_01c35e50)) && (g_INT_01c35e4c <= y)) &&
     ((y <= g_INT_01c35e54 && (g_INT_006141c0 != 8)))) {
    if (g_INT_006141c0 == 0x10) {
      uVar3 = *(ushort *)(g_ARRAY_PTR_01c2a38c[y] + x * 2);
      uVar7 = (uint)(uVar3 >> (g_BIT_INTEGER32_01c35814.bytes[0] & 0x1f)) <<
              (g_BIT_INTEGER32_01c3581c.bytes[0] & 0x1f);
      uVar8 = (uint)(uVar3 >> (g_BIT_INTEGER32_01c35820.bytes[0] & 0x1f)) <<
              (g_BIT_INTEGER32_01c35828.bytes[0] & 0x1f);
      uVar9 = (uint)(uVar3 >> (g_BIT_INTEGER32_01c3582c.bytes[0] & 0x1f)) <<
              (g_BIT_INTEGER32_01c35834.bytes[0] & 0x1f);
    }
    else {
      puVar10 = (uint *)(g_ARRAY_PTR_01c2a38c[y] + x * 4);
      uVar7 = (*puVar10 >> (g_BIT_INTEGER32_01c35814.bytes[0] & 0x1f)) <<
              (g_BIT_INTEGER32_01c3581c.bytes[0] & 0x1f);
      uVar8 = (*puVar10 >> (g_BIT_INTEGER32_01c35820.bytes[0] & 0x1f)) <<
              (g_BIT_INTEGER32_01c35828.bytes[0] & 0x1f);
      uVar9 = (*puVar10 >> (g_BIT_INTEGER32_01c3582c.bytes[0] & 0x1f)) <<
              (g_BIT_INTEGER32_01c35834.bytes[0] & 0x1f);
    }
    iVar5 = palette_index * 3;
    bVar1 = g_UCHAR_ARRAY_01c35838[iVar5 + 1];
    fVar4 = 1.0 - blend_factor;
    bVar2 = g_UCHAR_ARRAY_01c35838[iVar5 + 2];
    dVar11 = round
                       ((double)((float)g_UCHAR_ARRAY_01c35838[iVar5] * fVar4 +
                                (float)(uVar7 & 0xff) * blend_factor));
    dVar12 = round
                       ((double)((float)bVar1 * fVar4 + (float)(uVar8 & 0xff) * blend_factor));
    uStack_3c = (uint)(longlong)ROUND(dVar11);
    uStack_34 = (uint)(longlong)ROUND(dVar12);
    uStack_3c = uStack_3c >> (uVar6 & 0x1f);
    dVar11 = round
                       ((double)((float)bVar2 * fVar4 + (float)(uVar9 & 0xff) * blend_factor));
    uStack_38 = (uint)(longlong)ROUND(dVar11);
    uStack_34 = uStack_34 >> (g_BIT_INTEGER32_01c35828.bytes[0] & 0x1f);
    uStack_38 = uStack_38 >> (g_BIT_INTEGER32_01c35834.bytes[0] & 0x1f);
    if (g_INT_006141c0 != 0x10) {
      *(uint *)(g_ARRAY_PTR_01c2a38c[y] + x * 4) =
           uStack_3c << (g_BIT_INTEGER32_01c35814.bytes[0] & 0x1f) |
           uStack_34 << (g_BIT_INTEGER32_01c35820.bytes[0] & 0x1f) |
           uStack_38 << (g_BIT_INTEGER32_01c3582c.bytes[0] & 0x1f);
      return;
    }
    *(ushort *)(g_ARRAY_PTR_01c2a38c[y] + x * 2) =
         (ushort)(uStack_34 << (g_BIT_INTEGER32_01c35820.bytes[0] & 0x1f)) |
         (ushort)(uStack_3c << (g_BIT_INTEGER32_01c35814.bytes[0] & 0x1f)) |
         (ushort)(uStack_38 << (g_BIT_INTEGER32_01c3582c.bytes[0] & 0x1f));
  }
  return;
}
