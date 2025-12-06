// Name: cockpit_ckptutil.c_blendPixelWithHardwarePalette_FUN_00433f50
// Address: 00433f50
// Address Range: [[00433f50, 004342e1]]
// Convention: __cdecl
// Signature: void cockpit_ckptutil.c_blendPixelWithHardwarePalette_FUN_00433f50(int x, int y, float alpha, int color)

#include "nocturne.h"

void __cdecl
cockpit_ckptutil_c_blendPixelWithHardwarePalette_FUN_00433f50(int x,int y,float alpha,int color)

{
  ushort uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte extraout_CL;
  byte extraout_CL_00;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  double dVar15;
  uint local_38;
  uint uStack_24;
  uint uStack_1c;
  uint uStack_14;
  
  if ((((g_ClipLeft <= x) && (x <= g_ClipRight)) && (g_ClipTop <= y)) &&
     ((y <= g_ClipBottom && (g_BitsPerPixel != 8)))) {
    if (g_BitsPerPixel == 0x10) {
      uVar1 = *(ushort *)((int)g_ScreenBufferArray[y] + x * 2);
      uVar5 = (uint)(uVar1 >> ((byte)g_RedBitPosition & 0x1f)) << ((byte)g_RedBitCount & 0x1f);
      uVar6 = (uint)(uVar1 >> ((byte)g_GreenBitPosition & 0x1f)) << ((byte)g_GreenBitCount & 0x1f);
      uVar7 = (uint)(uVar1 >> ((byte)g_BlueBitPosition & 0x1f)) << ((byte)g_BlueBitCount & 0x1f);
    }
    else {
      puVar9 = (uint *)(x * 4 + (int)g_ScreenBufferArray[y]);
      uVar5 = *puVar9 >> ((byte)g_RedBitPosition & 0x1f);
      uVar6 = *puVar9 >> ((byte)g_GreenBitPosition & 0x1f);
      uVar7 = *puVar9 >> ((byte)g_BlueBitPosition & 0x1f);
    }
    if (g_BitsPerPixel == 0x10) {
      uVar1 = g_Hardware16BitPalette[color];
      uVar10 = (uint)(uVar1 >> ((byte)g_RedBitPosition & 0x1f)) << ((byte)g_RedBitCount & 0x1f);
      uVar11 = (uint)(uVar1 >> ((byte)g_GreenBitPosition & 0x1f)) << ((byte)g_GreenBitCount & 0x1f);
      uVar8 = (uint)(uVar1 >> ((byte)g_BlueBitPosition & 0x1f)) << ((byte)g_BlueBitCount & 0x1f);
    }
    else {
      uVar10 = g_Hardware32BitPalette[color] >> ((byte)g_RedBitPosition & 0x1f);
      uVar11 = g_Hardware32BitPalette[color] >> ((byte)g_GreenBitPosition & 0x1f);
      uVar8 = g_Hardware32BitPalette[color] >> ((byte)g_BlueBitPosition & 0x1f);
    }
    local_38 = uVar10 & 0xff;
    fVar2 = 1.0 - alpha;
    fVar4 = (float)local_38 * fVar2 + (float)(uVar5 & 0xff) * alpha;
    fVar3 = (float)(uVar11 & 0xff) * fVar2 + (float)(uVar6 & 0xff) * alpha;
    fVar2 = (float)(uVar8 & 0xff) * fVar2 + (float)(uVar7 & 0xff) * alpha;
    if (g_BitsPerPixel != 0x10) {
      fVar12 = (float10)fVar4;
      fVar13 = (float10)fVar3;
      fVar14 = (float10)fVar2;
      dVar15 = crt_math_c_round_FUN_005fe6b0((double)(CONCAT44 /* combine 2-byte values */(uVar10,x) & 0xffffffffff));
      dVar15 = crt_math_c_round_FUN_005fe6b0(dVar15);
      dVar15 = crt_math_c_round_FUN_005fe6b0(dVar15);
      uStack_1c = (uint)(longlong)ROUND(fVar12);
      uStack_24 = (uint)(longlong)ROUND(fVar13);
      uStack_14 = (uint)(longlong)ROUND(fVar14);
      *(uint *)((int)g_ScreenBufferArray[y] + SUB84 /* extract 2-byte value */(dVar15,0) * 4) =
           uStack_24 << ((byte)g_GreenBitPosition & 0x1f) | uStack_1c << (extraout_CL_00 & 0x1f) |
           uStack_14 << ((byte)g_BlueBitPosition & 0x1f);
      return;
    }
    fVar12 = (float10)fVar4;
    fVar13 = (float10)fVar3;
    fVar14 = (float10)fVar2;
    dVar15 = crt_math_c_round_FUN_005fe6b0((double)(CONCAT44 /* combine 2-byte values */(uVar10,x) & 0xffffffffff));
    dVar15 = crt_math_c_round_FUN_005fe6b0(dVar15);
    dVar15 = crt_math_c_round_FUN_005fe6b0(dVar15);
    uStack_24 = (uint)(longlong)ROUND(fVar12);
    uStack_1c = (uint)(longlong)ROUND(fVar14);
    uStack_14 = (uint)(longlong)ROUND(fVar13);
    *(ushort *)((int)g_ScreenBufferArray[y] + SUB84 /* extract 2-byte value */(dVar15,0) * 2) =
         (ushort)((uStack_14 >> ((byte)g_GreenBitCount & 0x1f)) << ((byte)g_GreenBitPosition & 0x1f)
                 ) |
         (ushort)((uStack_24 >> (extraout_CL & 0x1f)) << ((byte)g_RedBitPosition & 0x1f)) |
         (ushort)((uStack_1c >> ((byte)g_BlueBitCount & 0x1f)) << ((byte)g_BlueBitPosition & 0x1f));
  }
  return;
}
