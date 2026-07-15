// Name: core_dstrender.cpp_blendLightmapPerPxU32toU16pBB12Px2MMX_FUN_00493860
// Address: 00493860
// Address Range: [[00493860, 00493dc3]]
// Convention: __cdecl
// Signature: void __cdecl core_dstrender_cpp_blendLightmapPerPxU32toU16pBB12Px2MMX_FUN_00493860(uint *output_buffer,uint *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count)

#include "nocturne.h"

void __cdecl core_dstrender_cpp_blendLightmapPerPxU32toU16pBB12Px2MMX_FUN_00493860(uint *output_buffer,uint *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ushort uVar7;
  ushort uVar11;
  ushort uVar13;
  uint5 uVar12;
  ulonglong uVar8;
  ushort uVar14;
  ulonglong uVar9;
  ulonglong uVar10;
  uint5 uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  
  uVar17 = psllw((ulonglong)
                 CONCAT52(CONCAT41((int)(((uint7)CONCAT21((short)(((uint7)(byte)(g_SolidColorMode >>
                                                                                0x18) << 0x30) >>
                                                                 0x28),
                                                          (char)(g_SolidColorMode >> 0x10)) << 0x20)
                                        >> 0x18),(char)(g_SolidColorMode >> 8)),
                          (ushort)(byte)g_SolidColorMode),6);
  do {
    uVar1 = *texture_buffer;
    uVar2 = g_LightmapTexturePalette[*texture_indices];
    uVar4 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar1 >> 0x18) << 0x30) >> 0x28),
                                            CONCAT14((char)(uVar1 >> 0x10),uVar1)) >> 0x20),uVar1)
                  >> 0x18);
    uVar12 = (uint5)uVar4 & 0xffffffff00;
    uVar5 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar2 >> 0x18) << 0x30) >> 0x28),
                                            CONCAT14((char)(uVar2 >> 0x10),uVar2)) >> 0x20),uVar2)
                  >> 0x18);
    uVar15 = (uint5)uVar5 & 0xffffffff00;
    uVar8 = pmulhw(CONCAT26((short)(uVar12 >> 0x18) * (short)(uVar15 >> 0x18),
                            CONCAT24((short)(uVar12 >> 8) * (short)(uVar15 >> 8),
                                     CONCAT22(((ushort)(CONCAT43(uVar4,CONCAT12((char)(uVar1 >> 8),
                                                                                (ushort)uVar1)) >>
                                                       0x10) & 0xff) *
                                              ((ushort)CONCAT41(uVar5,(char)(uVar2 >> 8)) & 0xff),
                                              ((ushort)uVar1 & 0xff) * (ushort)(byte)uVar2))),
                   *(ulonglong *)
                    (g_LightmapData + ((uint)*lightmap_indices + (uint)(*texture_indices >> 1)) * 4)
                   ^ g_LightmapData._2040_8_);
    uVar16 = pmulhw(uVar17,*(ulonglong *)
                            (g_LightmapData +
                            ((uint)*lightmap_indices + (uint)(*texture_indices >> 1)) * 4));
    uVar7 = (ushort)((short)uVar8 + (short)uVar16 + (short)g_LightmapBlendBias1.mm) >> 4;
    uVar11 = (ushort)((short)((ulonglong)uVar8 >> 0x10) + (short)((ulonglong)uVar16 >> 0x10) +
                     (short)(g_LightmapBlendBias1.mm >> 0x10)) >> 4;
    uVar13 = (ushort)((short)((ulonglong)uVar8 >> 0x20) + (short)((ulonglong)uVar16 >> 0x20) +
                     (short)(g_LightmapBlendBias1.mm >> 0x20)) >> 4;
    uVar14 = (ushort)((short)((ulonglong)uVar8 >> 0x30) + (short)((ulonglong)uVar16 >> 0x30) +
                     (short)(g_LightmapBlendBias1.mm >> 0x30)) >> 4;
    uVar9 = (ulonglong)
            CONCAT13((uVar14 != 0) * (uVar14 < 0x100) * (char)uVar14 - (0xff < uVar14),
                     CONCAT12((uVar13 != 0) * (uVar13 < 0x100) * (char)uVar13 - (0xff < uVar13),
                              CONCAT11((uVar11 != 0) * (uVar11 < 0x100) * (char)uVar11 -
                                       (0xff < uVar11),
                                       (uVar7 != 0) * (uVar7 < 0x100) * (char)uVar7 - (0xff < uVar7)
                                      )));
    uVar1 = texture_buffer[1];
    uVar2 = g_LightmapTexturePalette[texture_indices[1]];
    uVar4 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar1 >> 0x18) << 0x30) >> 0x28),
                                            CONCAT14((char)(uVar1 >> 0x10),uVar1)) >> 0x20),uVar1)
                  >> 0x18);
    uVar12 = (uint5)uVar4 & 0xffffffff00;
    uVar7 = (ushort)(((uint7)(byte)(uVar2 >> 0x18) << 0x30) >> 0x28);
    uVar8 = pmulhw(CONCAT26((short)(uVar12 >> 0x18) * (uVar7 >> 8),
                            CONCAT24((short)(uVar12 >> 8) *
                                     (short)(CONCAT25(uVar7,CONCAT14((char)(uVar2 >> 0x10),uVar2))
                                            >> 0x20),
                                     CONCAT22(((ushort)(CONCAT43(uVar4,CONCAT12((char)(uVar1 >> 8),
                                                                                (ushort)uVar1)) >>
                                                       0x10) & 0xff) * (ushort)(byte)(uVar2 >> 8),
                                              ((ushort)uVar1 & 0xff) * ((ushort)uVar2 & 0xff)))),
                   *(ulonglong *)
                    (g_LightmapData +
                    ((uint)lightmap_indices[1] + (uint)(texture_indices[1] >> 1)) * 4) ^
                   g_LightmapData._2040_8_);
    uVar16 = pmulhw(uVar17,*(ulonglong *)
                            (g_LightmapData +
                            ((uint)lightmap_indices[1] + (uint)(texture_indices[1] >> 1)) * 4));
    uVar7 = (ushort)((short)uVar8 + (short)uVar16 + (short)g_LightmapBlendBias2.mm) >> 4;
    uVar11 = (ushort)((short)((ulonglong)uVar8 >> 0x10) + (short)((ulonglong)uVar16 >> 0x10) +
                     (short)(g_LightmapBlendBias2.mm >> 0x10)) >> 4;
    uVar13 = (ushort)((short)((ulonglong)uVar8 >> 0x20) + (short)((ulonglong)uVar16 >> 0x20) +
                     (short)(g_LightmapBlendBias2.mm >> 0x20)) >> 4;
    uVar14 = (ushort)((short)((ulonglong)uVar8 >> 0x30) + (short)((ulonglong)uVar16 >> 0x30) +
                     (short)(g_LightmapBlendBias2.mm >> 0x30)) >> 4;
    uVar10 = (ulonglong)
             CONCAT13((uVar14 != 0) * (uVar14 < 0x100) * (char)uVar14 - (0xff < uVar14),
                      CONCAT12((uVar13 != 0) * (uVar13 < 0x100) * (char)uVar13 - (0xff < uVar13),
                               CONCAT11((uVar11 != 0) * (uVar11 < 0x100) * (char)uVar11 -
                                        (0xff < uVar11),
                                        (uVar7 != 0) * (uVar7 < 0x100) * (char)uVar7 -
                                        (0xff < uVar7))));
    *output_buffer =
         (uint)(((uVar10 & g_BlueMask32.mm) >> g_BlueBitShift.mm |
                 (uVar10 & g_GreenMask32.mm) >> g_GreenBlueDitherShift.mm |
                (uVar10 & g_RedMask32.mm) >> g_TotalDitherShift.mm) << 0x10) |
         (uint)((uVar9 & g_BlueMask32.mm) >> g_BlueBitShift.mm) |
         (uint)((uVar9 & g_GreenMask32.mm) >> g_GreenBlueDitherShift.mm) |
         (uint)((uVar9 & g_RedMask32.mm) >> g_TotalDitherShift.mm);
    texture_buffer = texture_buffer + 2;
    texture_indices = texture_indices + 2;
    lightmap_indices = lightmap_indices + 2;
    output_buffer = output_buffer + 1;
    iVar6 = pixel_count + -2;
    bVar3 = 1 < pixel_count;
    pixel_count = iVar6;
  } while (iVar6 != 0 && bVar3);
  return;
}
