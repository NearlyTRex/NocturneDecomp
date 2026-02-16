// Name: cockpit_ckptutil.c_blendPixelWithHardwarePalette_FUN_00433f50
// Address: 00433f50
// Address Range: [[00433f50, 004342e1]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_blendPixelWithHardwarePalette_FUN_00433f50(int x,int y,float alpha,int color)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_blendPixelWithHardwarePalette_FUN_00433f50(int x,int y,float alpha,int color)

{
  ushort uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint uStack_2c;
  
  bVar6 = (byte)g_RedBitCount;
  bVar5 = (byte)g_RedBitPosition;
  if ((((g_ClipLeft <= x) && (x <= g_ClipRight)) && (g_ClipTop <= y)) &&
     ((y <= g_ClipBottom && (g_BitsPerPixel != 8)))) {
    if (g_BitsPerPixel == 0x10) {
      uVar1 = *(ushort *)((int)g_ScreenBufferArray[y] + x * 2);
      uVar7 = (uint)(uVar1 >> ((byte)g_RedBitPosition & 0x1f)) << ((byte)g_RedBitCount & 0x1f);
      uVar8 = (uint)(uVar1 >> ((byte)g_GreenBitPosition & 0x1f)) << ((byte)g_GreenBitCount & 0x1f);
      uVar9 = (uint)(uVar1 >> ((byte)g_BlueBitPosition & 0x1f)) << ((byte)g_BlueBitCount & 0x1f);
    }
    else {
      puVar11 = (uint *)(x * 4 + (int)g_ScreenBufferArray[y]);
      uVar7 = *puVar11 >> ((byte)g_RedBitPosition & 0x1f);
      uVar8 = *puVar11 >> ((byte)g_GreenBitPosition & 0x1f);
      uVar9 = *puVar11 >> ((byte)g_BlueBitPosition & 0x1f);
    }
    if (g_BitsPerPixel == 0x10) {
      uVar1 = g_Hardware16BitPalette[color];
      local_38 = (uint)(uVar1 >> ((byte)g_RedBitPosition & 0x1f)) << ((byte)g_RedBitCount & 0x1f);
      uVar12 = (uint)(uVar1 >> ((byte)g_GreenBitPosition & 0x1f)) << ((byte)g_GreenBitCount & 0x1f);
      uVar10 = (uint)(uVar1 >> ((byte)g_BlueBitPosition & 0x1f)) << ((byte)g_BlueBitCount & 0x1f);
    }
    else {
      local_38 = g_Hardware32BitPalette[color] >> ((byte)g_RedBitPosition & 0x1f);
      uVar12 = g_Hardware32BitPalette[color] >> ((byte)g_GreenBitPosition & 0x1f);
      uVar10 = g_Hardware32BitPalette[color] >> ((byte)g_BlueBitPosition & 0x1f);
    }
    local_38 = local_38 & 0xff;
    fVar2 = 1.0 - alpha;
    fVar4 = (float)local_38 * fVar2 + (float)(uVar7 & 0xff) * alpha;
    fVar3 = (float)(uVar12 & 0xff) * fVar2 + (float)(uVar8 & 0xff) * alpha;
    fVar2 = (float)(uVar10 & 0xff) * fVar2 + (float)(uVar9 & 0xff) * alpha;
    if (g_BitsPerPixel != 0x10) {
      dVar13 = round((double)fVar4);
      dVar14 = round((double)fVar3);
      dVar15 = round((double)fVar2);
      local_34 = (uint)(longlong)ROUND(dVar13);
      uStack_2c = (uint)(longlong)ROUND(dVar15);
      local_3c = (uint)(longlong)ROUND(dVar14);
      *(uint *)((int)g_ScreenBufferArray[y] + x * 4) =
           local_3c << ((byte)g_GreenBitPosition & 0x1f) | local_34 << (bVar5 & 0x1f) |
           uStack_2c << ((byte)g_BlueBitPosition & 0x1f);
      return;
    }
    dVar13 = round((double)fVar4);
    dVar14 = round((double)fVar3);
    dVar15 = round((double)fVar2);
    uStack_2c = (uint)(longlong)ROUND(dVar14);
    local_34 = (uint)(longlong)ROUND(dVar15);
    local_3c = (uint)(longlong)ROUND(dVar13);
    *(ushort *)((int)g_ScreenBufferArray[y] + x * 2) =
         (ushort)((uStack_2c >> ((byte)g_GreenBitCount & 0x1f)) << ((byte)g_GreenBitPosition & 0x1f)
                 ) | (ushort)((local_3c >> (bVar6 & 0x1f)) << ((byte)g_RedBitPosition & 0x1f)) |
         (ushort)((local_34 >> ((byte)g_BlueBitCount & 0x1f)) << ((byte)g_BlueBitPosition & 0x1f));
  }
  return;
}
