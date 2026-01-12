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
  int extraout_EAX;
  int extraout_EAX_00;
  byte extraout_CL;
  byte extraout_CL_00;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  double dVar14;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_28;
  
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
      local_34 = (uint)(uVar1 >> ((byte)g_RedBitPosition & 0x1f)) << ((byte)g_RedBitCount & 0x1f);
      uVar10 = (uint)(uVar1 >> ((byte)g_GreenBitPosition & 0x1f)) << ((byte)g_GreenBitCount & 0x1f);
      uVar8 = (uint)(uVar1 >> ((byte)g_BlueBitPosition & 0x1f)) << ((byte)g_BlueBitCount & 0x1f);
    }
    else {
      local_34 = g_Hardware32BitPalette[color] >> ((byte)g_RedBitPosition & 0x1f);
      uVar10 = g_Hardware32BitPalette[color] >> ((byte)g_GreenBitPosition & 0x1f);
      uVar8 = g_Hardware32BitPalette[color] >> ((byte)g_BlueBitPosition & 0x1f);
    }
    local_34 = local_34 & 0xff;
    fVar2 = 1.0 - alpha;
    fVar4 = (float)local_34 * fVar2 + (float)(uVar5 & 0xff) * alpha;
    fVar3 = (float)(uVar10 & 0xff) * fVar2 + (float)(uVar6 & 0xff) * alpha;
    fVar2 = (float)(uVar8 & 0xff) * fVar2 + (float)(uVar7 & 0xff) * alpha;
    if (g_BitsPerPixel != 0x10) {
      fVar11 = (float10)fVar3;
      fVar12 = (float10)fVar2;
      dVar14 = crt_math_c_round_FUN_005fe6b0((double)fVar4);
      fVar13 = (float10)dVar14;
      dVar14 = crt_math_c_round_FUN_005fe6b0((double)fVar11);
      fVar11 = (float10)dVar14;
      dVar14 = crt_math_c_round_FUN_005fe6b0((double)fVar12);
      local_30 = (uint)(longlong)ROUND(fVar13);
      local_28 = (uint)(longlong)ROUND(dVar14);
      local_38 = (uint)(longlong)ROUND(fVar11);
      *(uint *)((int)g_ScreenBufferArray[y] + extraout_EAX_00 * 4) =
           local_38 << ((byte)g_GreenBitPosition & 0x1f) | local_30 << (extraout_CL_00 & 0x1f) |
           local_28 << ((byte)g_BlueBitPosition & 0x1f);
      return;
    }
    fVar11 = (float10)fVar3;
    fVar12 = (float10)fVar2;
    dVar14 = crt_math_c_round_FUN_005fe6b0((double)fVar4);
    fVar13 = (float10)dVar14;
    dVar14 = crt_math_c_round_FUN_005fe6b0((double)fVar11);
    fVar11 = (float10)dVar14;
    dVar14 = crt_math_c_round_FUN_005fe6b0((double)fVar12);
    local_28 = (uint)(longlong)ROUND(fVar11);
    local_30 = (uint)(longlong)ROUND(dVar14);
    local_38 = (uint)(longlong)ROUND(fVar13);
    *(ushort *)((int)g_ScreenBufferArray[y] + extraout_EAX * 2) =
         (ushort)((local_28 >> ((byte)g_GreenBitCount & 0x1f)) << ((byte)g_GreenBitPosition & 0x1f))
         | (ushort)((local_38 >> (extraout_CL & 0x1f)) << ((byte)g_RedBitPosition & 0x1f)) |
         (ushort)((local_30 >> ((byte)g_BlueBitCount & 0x1f)) << ((byte)g_BlueBitPosition & 0x1f));
  }
  return;
}
