// Name: cockpit_ckptutil.c_FUN_0042f8c0
// Address: 0042f8c0
// Address Range: [[0042f8c0, 0042fd5d]]
// Convention: unknown
// Signature: void cockpit_ckptutil_c_FUN_0042f8c0(int param_1,int param_2,float param_3,int param_4)

#include "nocturne.h"

void cockpit_ckptutil_c_FUN_0042f8c0(int param_1,int param_2,float param_3,int param_4)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  void *pvVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  byte uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  uint local_54;
  uint uStack_50;
  uint local_4c;
  int iStack_44;
  short local_2c;
  
  uVar9 = g_RedDitherShift.bytes[0];
  if ((((g_ClipLeft <= param_1) && (param_1 <= g_ClipRight)) && (g_ClipTop <= param_2)) &&
     (param_2 <= g_ClipBottom)) {
    if (g_BitsPerPixel == 8) {
      pvVar5 = g_ScreenBufferArray[param_2];
      iVar1 = (uint)*(byte *)((int)pvVar5 + param_1) * 3;
      bVar2 = g_SourcePaletteData[iVar1 + 1];
      bVar3 = g_SourcePaletteData[iVar1 + 2];
      fVar6 = 1.0 - param_3;
      dVar18 = round
                         ((double)((float)g_SourcePaletteData[param_4 * 3] * fVar6 +
                                  (float)g_SourcePaletteData[iVar1] * param_3));
      iVar1 = (int)ROUND(dVar18);
      dVar18 = round
                         ((double)((float)bVar2 * fVar6 + (float)bVar3 * param_3));
      iVar14 = (int)ROUND(dVar18) >> 0x1f;
      local_2c = (short)iVar1;
      dVar19 = round
                         ((double)((float)bVar2 * fVar6 + (float)local_2c * param_3));
      iVar15 = (int)ROUND(dVar19) >> 0x1f;
      *(byte *)((int)pvVar5 + param_1) =
           g_ColorCubeLookup
           [((int)(((int)ROUND(dVar19) + iVar15 * -8) - (uint)(iVar15 << 2 < 0)) >> 3) +
            ((int)((iVar1 + (iVar1 >> 0x1f) * -8) - (uint)((iVar1 >> 0x1f) << 2 < 0)) >> 3) * 0x400
            + ((int)(((int)ROUND(dVar18) + iVar14 * -8) - (uint)(iVar14 << 2 < 0)) >> 3) * 0x20];
      return;
    }
    if (g_BitsPerPixel == 0x10) {
      uVar4 = *(ushort *)((int)g_ScreenBufferArray[param_2] + param_1 * 2);
      uVar10 = (uint)(uVar4 >> (g_RedBitPosition.bytes[0] & 0x1f)) <<
               (g_RedDitherShift.bytes[0] & 0x1f);
      uVar11 = (uint)(uVar4 >> (g_GreenBitPosition.bytes[0] & 0x1f)) <<
               (g_GreenDitherShift.bytes[0] & 0x1f);
      uVar12 = (uint)(uVar4 >> (g_BlueBitPosition.bytes[0] & 0x1f)) <<
               (g_BlueDitherShift.bytes[0] & 0x1f);
    }
    else {
      puVar16 = (uint *)((int)g_ScreenBufferArray[param_2] + param_1 * 4);
      uVar10 = *puVar16 >> (g_RedBitPosition.bytes[0] & 0x1f);
      uVar11 = *puVar16 >> (g_GreenBitPosition.bytes[0] & 0x1f);
      uVar12 = *puVar16 >> (g_BlueBitPosition.bytes[0] & 0x1f);
    }
    if (g_BitsPerPixel == 0x10) {
      uVar4 = g_Hardware16BitPalette[param_4];
      uStack_50 = (uint)(uVar4 >> (g_RedBitPosition.bytes[0] & 0x1f)) <<
                  (g_RedDitherShift.bytes[0] & 0x1f);
      uVar17 = (uint)(uVar4 >> (g_GreenBitPosition.bytes[0] & 0x1f)) <<
               (g_GreenDitherShift.bytes[0] & 0x1f);
      uVar13 = (uint)(uVar4 >> (g_BlueBitPosition.bytes[0] & 0x1f)) <<
               (g_BlueDitherShift.bytes[0] & 0x1f);
    }
    else {
      uStack_50 = g_Hardware32BitPalette[param_4] >> (g_RedBitPosition.bytes[0] & 0x1f);
      uVar17 = g_Hardware32BitPalette[param_4] >> (g_GreenBitPosition.bytes[0] & 0x1f);
      uVar13 = g_Hardware32BitPalette[param_4] >> (g_BlueBitPosition.bytes[0] & 0x1f);
    }
    uStack_50 = uStack_50 & 0xff;
    fVar6 = 1.0 - param_3;
    fVar8 = (float)uStack_50 * fVar6 + (float)(uVar10 & 0xff) * param_3;
    fVar7 = (float)(uVar17 & 0xff) * fVar6 + (float)(uVar11 & 0xff) * param_3;
    fVar6 = (float)(uVar13 & 0xff) * fVar6 + (float)(uVar12 & 0xff) * param_3;
    if (g_BitsPerPixel != 0x10) {
      dVar18 = round((double)fVar8);
      dVar19 = round((double)fVar7);
      dVar20 = round((double)fVar6);
      iStack_44 = (int)(longlong)ROUND(dVar19);
      local_4c = (uint)(longlong)ROUND(dVar20);
      local_54 = (uint)(longlong)ROUND(dVar18);
      *(uint *)((int)g_ScreenBufferArray[param_2] + param_1 * 4) =
           iStack_44 << (g_GreenBitPosition.bytes[0] & 0x1f) |
           local_54 << (g_RedBitPosition.bytes[0] & 0x1f) |
           local_4c << (g_BlueBitPosition.bytes[0] & 0x1f);
      return;
    }
    dVar18 = round((double)fVar8);
    dVar19 = round((double)fVar7);
    dVar20 = round((double)fVar6);
    local_4c = (uint)(longlong)ROUND(dVar18);
    local_54 = (uint)(longlong)ROUND(dVar19);
    uVar11 = local_54 >> (g_GreenDitherShift.bytes[0] & 0x1f);
    local_54 = (uint)(longlong)ROUND(dVar20);
    *(ushort *)((int)g_ScreenBufferArray[param_2] + param_1 * 2) =
         (ushort)(uVar11 << (g_GreenBitPosition.bytes[0] & 0x1f)) |
         (ushort)((local_4c >> (uVar9 & 0x1f)) << (g_RedBitPosition.bytes[0] & 0x1f)) |
         (ushort)((local_54 >> (g_BlueDitherShift.bytes[0] & 0x1f)) <<
                 (g_BlueBitPosition.bytes[0] & 0x1f));
  }
  return;
}
