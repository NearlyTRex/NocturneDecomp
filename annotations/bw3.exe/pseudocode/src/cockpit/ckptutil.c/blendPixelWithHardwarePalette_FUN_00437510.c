// Name: cockpit_ckptutil.c_blendPixelWithHardwarePalette_FUN_00437510
// Address: 00437510
// Address Range: [[00437510, 004378a1]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_blendPixelWithHardwarePalette_FUN_00437510(int x,int y,float alpha,int color)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_blendPixelWithHardwarePalette_FUN_00437510(int x,int y,float alpha,int color)

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
  
  uVar6 = g_BIT_INTEGER32_01c6af7c.bytes[0];
  uVar5 = g_BIT_INTEGER32_01c6af74.bytes[0];
  if ((((g_INT_01c6b5a8 <= x) && (x <= g_INT_01c6b5b0)) && (g_INT_01c6b5ac <= y)) &&
     ((y <= g_INT_01c6b5b4 && (g_INT_005fba20 != 8)))) {
    if (g_INT_005fba20 == 0x10) {
      uVar1 = *(ushort *)(g_ScreenBufferArray[y] + x * 2);
      uVar7 = (uint)(uVar1 >> (g_BIT_INTEGER32_01c6af74.bytes[0] & 0x1f)) <<
              (g_BIT_INTEGER32_01c6af7c.bytes[0] & 0x1f);
      uVar8 = (uint)(uVar1 >> (g_BIT_INTEGER32_01c6af80.bytes[0] & 0x1f)) <<
              (g_BIT_INTEGER32_01c6af88.bytes[0] & 0x1f);
      uVar9 = (uint)(uVar1 >> (g_BIT_INTEGER32_01c6af8c.bytes[0] & 0x1f)) <<
              (g_BIT_INTEGER32_01c6af94.bytes[0] & 0x1f);
    }
    else {
      puVar11 = (uint *)(g_ScreenBufferArray[y] + x * 4);
      uVar7 = *puVar11 >> (g_BIT_INTEGER32_01c6af74.bytes[0] & 0x1f);
      uVar8 = *puVar11 >> (g_BIT_INTEGER32_01c6af80.bytes[0] & 0x1f);
      uVar9 = *puVar11 >> (g_BIT_INTEGER32_01c6af8c.bytes[0] & 0x1f);
    }
    if (g_INT_005fba20 == 0x10) {
      uVar1 = g_Hardware16BitPalette[color];
      uStack_38 = (uint)(uVar1 >> (g_BIT_INTEGER32_01c6af74.bytes[0] & 0x1f)) <<
                  (g_BIT_INTEGER32_01c6af7c.bytes[0] & 0x1f);
      uVar12 = (uint)(uVar1 >> (g_BIT_INTEGER32_01c6af80.bytes[0] & 0x1f)) <<
               (g_BIT_INTEGER32_01c6af88.bytes[0] & 0x1f);
      uVar10 = (uint)(uVar1 >> (g_BIT_INTEGER32_01c6af8c.bytes[0] & 0x1f)) <<
               (g_BIT_INTEGER32_01c6af94.bytes[0] & 0x1f);
    }
    else {
      uStack_38 = g_Hardware32BitPalette[color] >> (g_BIT_INTEGER32_01c6af74.bytes[0] & 0x1f);
      uVar12 = g_Hardware32BitPalette[color] >> (g_BIT_INTEGER32_01c6af80.bytes[0] & 0x1f);
      uVar10 = g_Hardware32BitPalette[color] >> (g_BIT_INTEGER32_01c6af8c.bytes[0] & 0x1f);
    }
    uStack_38 = uStack_38 & 0xff;
    fVar2 = 1.0 - alpha;
    fVar4 = (float)uStack_38 * fVar2 + (float)(uVar7 & 0xff) * alpha;
    fVar3 = (float)(uVar12 & 0xff) * fVar2 + (float)(uVar8 & 0xff) * alpha;
    fVar2 = (float)(uVar10 & 0xff) * fVar2 + (float)(uVar9 & 0xff) * alpha;
    if (g_INT_005fba20 != 0x10) {
      dVar13 = round((double)fVar4);
      dVar14 = round((double)fVar3);
      dVar15 = round((double)fVar2);
      uStack_34 = (uint)(longlong)ROUND(dVar13);
      uStack_2c = (uint)(longlong)ROUND(dVar15);
      uStack_3c = (uint)(longlong)ROUND(dVar14);
      *(uint *)(g_ScreenBufferArray[y] + x * 4) =
           uStack_3c << (g_BIT_INTEGER32_01c6af80.bytes[0] & 0x1f) | uStack_34 << (uVar5 & 0x1f) |
           uStack_2c << (g_BIT_INTEGER32_01c6af8c.bytes[0] & 0x1f);
      return;
    }
    dVar13 = round((double)fVar4);
    dVar14 = round((double)fVar3);
    dVar15 = round((double)fVar2);
    uStack_2c = (uint)(longlong)ROUND(dVar14);
    uStack_34 = (uint)(longlong)ROUND(dVar15);
    uStack_3c = (uint)(longlong)ROUND(dVar13);
    *(ushort *)(g_ScreenBufferArray[y] + x * 2) =
         (ushort)((uStack_2c >> (g_BIT_INTEGER32_01c6af88.bytes[0] & 0x1f)) <<
                 (g_BIT_INTEGER32_01c6af80.bytes[0] & 0x1f)) |
         (ushort)((uStack_3c >> (uVar6 & 0x1f)) << (g_BIT_INTEGER32_01c6af74.bytes[0] & 0x1f)) |
         (ushort)((uStack_34 >> (g_BIT_INTEGER32_01c6af94.bytes[0] & 0x1f)) <<
                 (g_BIT_INTEGER32_01c6af8c.bytes[0] & 0x1f));
  }
  return;
}
