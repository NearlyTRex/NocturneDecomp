// Name: core_dstrender.cpp_blendLightmapPerPxU64toU16pAmbientPx2MMX_FUN_00493dc4
// Address: 00493dc4
// Address Range: [[00493dc4, 004940e8]]
// Convention: __cdecl
// Signature: void __cdecl core_dstrender_cpp_blendLightmapPerPxU64toU16pAmbientPx2MMX_FUN_00493dc4(uint *output_buffer,ulonglong *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count)

#include "nocturne.h"

void __cdecl core_dstrender_cpp_blendLightmapPerPxU64toU16pAmbientPx2MMX_FUN_00493dc4(uint *output_buffer,ulonglong *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  ushort uVar9;
  ushort uVar10;
  ulonglong uVar6;
  ushort uVar11;
  ulonglong uVar7;
  ulonglong uVar8;
  uint5 uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  uVar14 = psllw((ulonglong)
                 CONCAT52(CONCAT41((int)(((uint7)CONCAT21((short)(((uint7)(byte)(g_SolidColorMode >>
                                                                                0x18) << 0x30) >>
                                                                 0x28),
                                                          (char)(g_SolidColorMode >> 0x10)) << 0x20)
                                        >> 0x18),(char)(g_SolidColorMode >> 8)),
                          (ushort)(byte)g_SolidColorMode),6);
  do {
    uVar7 = *texture_buffer;
    uVar1 = g_LightmapTexturePalette[*texture_indices];
    uVar5 = (ushort)(((uint7)(byte)(uVar7 >> 0x18) << 0x30) >> 0x28);
    uVar3 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar1 >> 0x18) << 0x30) >> 0x28),
                                            CONCAT14((char)(uVar1 >> 0x10),uVar1)) >> 0x20),uVar1)
                  >> 0x18);
    uVar12 = (uint5)uVar3 & 0xffffffff00;
    uVar6 = pmulhw(CONCAT26((uVar5 >> 8) * (short)(uVar12 >> 0x18),
                            CONCAT24((short)CONCAT21(uVar5,(char)(uVar7 >> 0x10)) *
                                     (short)(uVar12 >> 8),
                                     CONCAT22((ushort)(byte)(uVar7 >> 8) *
                                              ((ushort)CONCAT41(uVar3,(char)(uVar1 >> 8)) & 0xff),
                                              ((ushort)uVar7 & 0xff) * (ushort)(byte)uVar1))),
                   *(ulonglong *)
                    (g_LightmapData + ((uint)*lightmap_indices + (uint)(*texture_indices >> 1)) * 4)
                   ^ g_LightmapData._2040_8_);
    uVar13 = pmulhw(uVar14,*(ulonglong *)
                            (g_LightmapData +
                            ((uint)*lightmap_indices + (uint)(*texture_indices >> 1)) * 4));
    uVar5 = (ushort)((short)uVar6 + (short)uVar13 + (short)g_AmbientLightMMX1.mm) >> 4;
    uVar9 = (ushort)((short)((ulonglong)uVar6 >> 0x10) + (short)((ulonglong)uVar13 >> 0x10) +
                    (short)(g_AmbientLightMMX1.mm >> 0x10)) >> 4;
    uVar10 = (ushort)((short)((ulonglong)uVar6 >> 0x20) + (short)((ulonglong)uVar13 >> 0x20) +
                     (short)(g_AmbientLightMMX1.mm >> 0x20)) >> 4;
    uVar11 = (ushort)((short)((ulonglong)uVar6 >> 0x30) + (short)((ulonglong)uVar13 >> 0x30) +
                     (short)(g_AmbientLightMMX1.mm >> 0x30)) >> 4;
    uVar7 = (ulonglong)
            CONCAT13((uVar11 != 0) * (uVar11 < 0x100) * (char)uVar11 - (0xff < uVar11),
                     CONCAT12((uVar10 != 0) * (uVar10 < 0x100) * (char)uVar10 - (0xff < uVar10),
                              CONCAT11((uVar9 != 0) * (uVar9 < 0x100) * (char)uVar9 - (0xff < uVar9)
                                       ,(uVar5 != 0) * (uVar5 < 0x100) * (char)uVar5 -
                                        (0xff < uVar5))));
    uVar6 = *(ulonglong *)((int)texture_buffer + 4);
    uVar1 = g_LightmapTexturePalette[texture_indices[1]];
    uVar5 = (ushort)(((uint7)(byte)((ulonglong)uVar6 >> 0x18) << 0x30) >> 0x28);
    uVar9 = (ushort)(((uint7)(byte)(uVar1 >> 0x18) << 0x30) >> 0x28);
    uVar6 = pmulhw(CONCAT26((uVar5 >> 8) * (uVar9 >> 8),
                            CONCAT24((short)CONCAT21(uVar5,(char)((ulonglong)uVar6 >> 0x10)) *
                                     (short)(CONCAT25(uVar9,CONCAT14((char)(uVar1 >> 0x10),uVar1))
                                            >> 0x20),
                                     CONCAT22((ushort)(byte)((ulonglong)uVar6 >> 8) *
                                              (ushort)(byte)(uVar1 >> 8),
                                              ((ushort)uVar6 & 0xff) * ((ushort)uVar1 & 0xff)))),
                   *(ulonglong *)
                    (g_LightmapData +
                    ((uint)lightmap_indices[1] + (uint)(texture_indices[1] >> 1)) * 4) ^
                   g_LightmapData._2040_8_);
    uVar13 = pmulhw(uVar14,*(ulonglong *)
                            (g_LightmapData +
                            ((uint)lightmap_indices[1] + (uint)(texture_indices[1] >> 1)) * 4));
    uVar5 = (ushort)((short)uVar6 + (short)uVar13 + (short)g_AmbientLightMMX2.mm) >> 4;
    uVar9 = (ushort)((short)((ulonglong)uVar6 >> 0x10) + (short)((ulonglong)uVar13 >> 0x10) +
                    (short)(g_AmbientLightMMX2.mm >> 0x10)) >> 4;
    uVar10 = (ushort)((short)((ulonglong)uVar6 >> 0x20) + (short)((ulonglong)uVar13 >> 0x20) +
                     (short)(g_AmbientLightMMX2.mm >> 0x20)) >> 4;
    uVar11 = (ushort)((short)((ulonglong)uVar6 >> 0x30) + (short)((ulonglong)uVar13 >> 0x30) +
                     (short)(g_AmbientLightMMX2.mm >> 0x30)) >> 4;
    uVar8 = (ulonglong)
            CONCAT13((uVar11 != 0) * (uVar11 < 0x100) * (char)uVar11 - (0xff < uVar11),
                     CONCAT12((uVar10 != 0) * (uVar10 < 0x100) * (char)uVar10 - (0xff < uVar10),
                              CONCAT11((uVar9 != 0) * (uVar9 < 0x100) * (char)uVar9 - (0xff < uVar9)
                                       ,(uVar5 != 0) * (uVar5 < 0x100) * (char)uVar5 -
                                        (0xff < uVar5))));
    *output_buffer =
         (uint)(((uVar8 & g_BlueMask32.mm) >> g_BlueBitShift.mm |
                 (uVar8 & g_GreenMask32.mm) >> g_GreenBlueBits.mm |
                (uVar8 & g_RedMask32.mm) >> g_TotalColorBits.mm) << 0x10) |
         (uint)((uVar7 & g_BlueMask32.mm) >> g_BlueBitShift.mm) |
         (uint)((uVar7 & g_GreenMask32.mm) >> g_GreenBlueBits.mm) |
         (uint)((uVar7 & g_RedMask32.mm) >> g_TotalColorBits.mm);
    texture_buffer = texture_buffer + 1;
    texture_indices = texture_indices + 2;
    lightmap_indices = lightmap_indices + 2;
    output_buffer = output_buffer + 1;
    iVar4 = pixel_count + -2;
    bVar2 = 1 < pixel_count;
    pixel_count = iVar4;
  } while (iVar4 != 0 && bVar2);
  return;
}
