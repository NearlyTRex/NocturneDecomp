// Name: cockpit_ckptutil.c_blendPixelWithHardwarePalette_FUN_00433f50
// Address: 00433f50
// MANUAL RECONSTRUCTION
// Address Range: [[00433f50, 004342e1]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_blendPixelWithHardwarePalette_FUN_00433f50(int x,int y,float alpha,int color)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_blendPixelWithHardwarePalette_FUN_00433f50(int x,int y,float alpha,int color)

{
  ushort uVar2;
  float fVar5;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar9;
  uint uVar10;
  uint local_38;
  _MMX_INTEGER local_30;
  _MMX_INTEGER local_28;
  _MMX_INTEGER local_20;
  float fVar4;
  float fVar3;
  float fVar2;
  ushort uVar1;
  
  if ((((g_ClipLeft <= x) && (x <= g_ClipRight)) && (g_ClipTop <= y)) &&
     ((y <= g_ClipBottom && (g_BitsPerPixel != 8)))) {
    if (g_BitsPerPixel == 0x10) {
      uVar2 = ((ushort *)g_ScreenBufferArray[y])[x];
      uVar5 = (uint)(uVar2 >> (g_RedBitPosition.bytes[0] & 0x1f)) << (g_RedBitCount.bytes[0] & 0x1f)
      ;
      uVar6 = (uint)(uVar2 >> (g_GreenBitPosition.bytes[0] & 0x1f)) <<
              (g_GreenBitCount.bytes[0] & 0x1f);
      uVar7 = (uint)(uVar2 >> (g_BlueBitPosition.bytes[0] & 0x1f)) <<
              (g_BlueBitCount.bytes[0] & 0x1f);
    }
    else {
      puVar9 = (uint *)(x * 4 + (int)g_ScreenBufferArray[y]);
      uVar5 = *puVar9 >> (g_RedBitPosition.bytes[0] & 0x1f);
      uVar6 = *puVar9 >> (g_GreenBitPosition.bytes[0] & 0x1f);
      uVar7 = *puVar9 >> (g_BlueBitPosition.bytes[0] & 0x1f);
    }
    if (g_BitsPerPixel == 0x10) {
      uVar1 = g_Hardware16BitPalette[color];
      uVar9 = (uint)(uVar1 >> (g_RedBitPosition.bytes[0] & 0x1f)) << (g_RedBitCount.bytes[0] & 0x1f)
      ;
      uVar10 = (uint)(uVar1 >> (g_GreenBitPosition.bytes[0] & 0x1f)) <<
               (g_GreenBitCount.bytes[0] & 0x1f);
      uVar8 = (uint)(uVar1 >> (g_BlueBitPosition.bytes[0] & 0x1f)) <<
              (g_BlueBitCount.bytes[0] & 0x1f);
    }
    else {
      uVar9 = g_Hardware32BitPalette[color] >> (g_RedBitPosition.bytes[0] & 0x1f);
      uVar10 = g_Hardware32BitPalette[color] >> (g_GreenBitPosition.bytes[0] & 0x1f);
      uVar8 = g_Hardware32BitPalette[color] >> (g_BlueBitPosition.bytes[0] & 0x1f);
    }
    local_38 = uVar9 & 0xff;
    local_20.u32[1] = 0;
    local_20.u32[0] = local_38;
    fVar2 = 1.0 - alpha;
    local_28.u32[1] = 0;
    local_28.u32[0] = uVar10 & 0xff;
    local_30.u32[1] = 0;
    local_30.u32[0] = uVar8 & 0xff;
    fVar4 = (float)local_20.mm * fVar2 + (float)(uVar5 & 0xff) * alpha;
    fVar3 = (float)local_28.mm * fVar2 + (float)(uVar6 & 0xff) * alpha;
    fVar5 = (float)local_30.mm * fVar2 + (float)(uVar7 & 0xff) * alpha;
    if (g_BitsPerPixel != 0x10) {
      local_30.u32[0] = (uint)(longlong)ROUND(ROUND(fVar3));
      local_28.u32[0] = (uint)(longlong)ROUND(ROUND(fVar4));
      local_20.u32[0] = (uint)(longlong)ROUND(ROUND(fVar5));
      ((uint *)g_ScreenBufferArray[y])[x] =
           local_30.u32[0] << (g_GreenBitPosition.bytes[0] & 0x1f) |
           local_28.u32[0] << (g_RedBitPosition.bytes[0] & 0x1f) |
           local_20.u32[0] << (g_BlueBitPosition.bytes[0] & 0x1f);
      return;
    }
    local_30.u32[0] = (uint)(longlong)ROUND(ROUND(fVar4));
    local_20.u32[0] = (uint)(longlong)ROUND(ROUND(fVar3));
    local_28.u32[0] = (uint)(longlong)ROUND(ROUND(fVar5));
    ((ushort *)g_ScreenBufferArray[y])[x] =
         (ushort)((local_20.u32[0] >> (g_GreenBitCount.bytes[0] & 0x1f)) <<
                 (g_GreenBitPosition.bytes[0] & 0x1f)) |
         (ushort)((local_30.u32[0] >> (g_RedBitCount.bytes[0] & 0x1f)) <<
                 (g_RedBitPosition.bytes[0] & 0x1f)) |
         (ushort)((local_28.u32[0] >> (g_BlueBitCount.bytes[0] & 0x1f)) <<
                 (g_BlueBitPosition.bytes[0] & 0x1f));
  }
  return;
}
