// Name: cockpit_ckptutil.c_blendPixelWithHardwarePalette_FUN_0042ebf0
// Address: 0042ebf0
// Address Range: [[0042ebf0, 0042ef81]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_blendPixelWithHardwarePalette_FUN_0042ebf0(int x,int y,float alpha,int color)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_blendPixelWithHardwarePalette_FUN_0042ebf0(int x,int y,float alpha,int color)

{
  ushort uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte uVar5;
  byte uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_2c;
  
  uVar6 = g_BIT_INTEGER32_01c3581c.bytes[0];
  uVar5 = g_BIT_INTEGER32_01c35814.bytes[0];
  if ((((g_INT_01c35e48 <= x) && (x <= g_INT_01c35e50)) && (g_INT_01c35e4c <= y)) &&
     ((y <= g_INT_01c35e54 && (g_INT_006141c0 != 8)))) {
    if (g_INT_006141c0 == 0x10) {
      uVar1 = *(ushort *)(g_ARRAY_PTR_01c2a38c[y] + x * 2);
      uVar7 = (uint)(uVar1 >> (g_BIT_INTEGER32_01c35814.bytes[0] & 0x1f)) <<
              (g_BIT_INTEGER32_01c3581c.bytes[0] & 0x1f);
      uVar8 = (uint)(uVar1 >> (g_BIT_INTEGER32_01c35820.bytes[0] & 0x1f)) <<
              (g_BIT_INTEGER32_01c35828.bytes[0] & 0x1f);
      uVar9 = (uint)(uVar1 >> (g_BIT_INTEGER32_01c3582c.bytes[0] & 0x1f)) <<
              (g_BIT_INTEGER32_01c35834.bytes[0] & 0x1f);
    }
    else {
      puVar11 = (uint *)(g_ARRAY_PTR_01c2a38c[y] + x * 4);
      uVar7 = *puVar11 >> (g_BIT_INTEGER32_01c35814.bytes[0] & 0x1f);
      uVar8 = *puVar11 >> (g_BIT_INTEGER32_01c35820.bytes[0] & 0x1f);
      uVar9 = *puVar11 >> (g_BIT_INTEGER32_01c3582c.bytes[0] & 0x1f);
    }
    if (g_INT_006141c0 == 0x10) {
      uVar1 = g_USHORT_ARRAY_01c35614[color];
      uStack_38 = (uint)(uVar1 >> (g_BIT_INTEGER32_01c35814.bytes[0] & 0x1f)) <<
                  (g_BIT_INTEGER32_01c3581c.bytes[0] & 0x1f);
      uVar12 = (uint)(uVar1 >> (g_BIT_INTEGER32_01c35820.bytes[0] & 0x1f)) <<
               (g_BIT_INTEGER32_01c35828.bytes[0] & 0x1f);
      uVar10 = (uint)(uVar1 >> (g_BIT_INTEGER32_01c3582c.bytes[0] & 0x1f)) <<
               (g_BIT_INTEGER32_01c35834.bytes[0] & 0x1f);
    }
    else {
      uStack_38 = g_UINT_ARRAY_01c35214[color] >> (g_BIT_INTEGER32_01c35814.bytes[0] & 0x1f);
      uVar12 = g_UINT_ARRAY_01c35214[color] >> (g_BIT_INTEGER32_01c35820.bytes[0] & 0x1f);
      uVar10 = g_UINT_ARRAY_01c35214[color] >> (g_BIT_INTEGER32_01c3582c.bytes[0] & 0x1f);
    }
    uStack_38 = uStack_38 & 0xff;
    fVar2 = 1.0 - alpha;
    fVar4 = (float)uStack_38 * fVar2 + (float)(uVar7 & 0xff) * alpha;
    fVar3 = (float)(uVar12 & 0xff) * fVar2 + (float)(uVar8 & 0xff) * alpha;
    fVar2 = (float)(uVar10 & 0xff) * fVar2 + (float)(uVar9 & 0xff) * alpha;
    if (g_INT_006141c0 != 0x10) {
      dVar13 = round((double)fVar4);
      dVar14 = round((double)fVar3);
      dVar15 = round((double)fVar2);
      uStack_34 = (uint)(longlong)ROUND(dVar13);
      uStack_2c = (uint)(longlong)ROUND(dVar15);
      uStack_3c = (uint)(longlong)ROUND(dVar14);
      *(uint *)(g_ARRAY_PTR_01c2a38c[y] + x * 4) =
           uStack_3c << (g_BIT_INTEGER32_01c35820.bytes[0] & 0x1f) | uStack_34 << (uVar5 & 0x1f) |
           uStack_2c << (g_BIT_INTEGER32_01c3582c.bytes[0] & 0x1f);
      return;
    }
    dVar13 = round((double)fVar4);
    dVar14 = round((double)fVar3);
    dVar15 = round((double)fVar2);
    uStack_2c = (uint)(longlong)ROUND(dVar14);
    uStack_34 = (uint)(longlong)ROUND(dVar15);
    uStack_3c = (uint)(longlong)ROUND(dVar13);
    *(ushort *)(g_ARRAY_PTR_01c2a38c[y] + x * 2) =
         (ushort)((uStack_2c >> (g_BIT_INTEGER32_01c35828.bytes[0] & 0x1f)) <<
                 (g_BIT_INTEGER32_01c35820.bytes[0] & 0x1f)) |
         (ushort)((uStack_3c >> (uVar6 & 0x1f)) << (g_BIT_INTEGER32_01c35814.bytes[0] & 0x1f)) |
         (ushort)((uStack_34 >> (g_BIT_INTEGER32_01c35834.bytes[0] & 0x1f)) <<
                 (g_BIT_INTEGER32_01c3582c.bytes[0] & 0x1f));
  }
  return;
}
