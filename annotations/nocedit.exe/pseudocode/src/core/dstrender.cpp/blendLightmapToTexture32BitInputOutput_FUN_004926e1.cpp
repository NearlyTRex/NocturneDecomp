// Name: core_dstrender.cpp_blendLightmapToTexture32BitInputOutput_FUN_004926e1
// Address: 004926e1
// Address Range: [[004926e1, 00492bd4]]
// Convention: __cdecl
// Signature: void core_dstrender.cpp_blendLightmapToTexture32BitInputOutput_FUN_004926e1(uint * output_buffer, uint * texture_buffer, byte * texture_indices, byte * lightmap_indices, int pixel_count)

#include "nocturne.h"

void __cdecl
core_dstrender_cpp_blendLightmapToTexture32BitInputOutput_FUN_004926e1
          (uint *output_buffer,uint *texture_buffer,byte *texture_indices,byte *lightmap_indices,
          int pixel_count)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ushort uVar7;
  ushort uVar9;
  ushort uVar11;
  uint5 uVar10;
  ulonglong uVar8;
  ushort uVar12;
  uint5 uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  uVar15 = psllw((ulonglong)
                 CONCAT52(CONCAT41((int)(((uint7)CONCAT21((short)(((uint7)(byte)((uint)
                                                  g_SolidColorMode >> 0x18) << 0x30) >> 0x28),
                                                  (char)((uint)g_SolidColorMode >> 0x10)) << 0x20)
                                        >> 0x18),(char)((uint)g_SolidColorMode >> 8)),
                          (ushort)(byte)g_SolidColorMode),6);
  do {
    uVar1 = *texture_buffer;
    uVar2 = g_LightmapTexturePalette[*texture_indices];
    uVar4 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar1 >> 0x18) << 0x30) >> 0x28),
                                            CONCAT14((char)(uVar1 >> 0x10),uVar1)) >> 0x20),uVar1)
                  >> 0x18);
    uVar10 = (uint5)uVar4 & 0xffffffff00;
    uVar5 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar2 >> 0x18) << 0x30) >> 0x28),
                                            CONCAT14((char)(uVar2 >> 0x10),uVar2)) >> 0x20),uVar2)
                  >> 0x18);
    uVar13 = (uint5)uVar5 & 0xffffffff00;
    uVar8 = pmulhw(CONCAT26((short)(uVar10 >> 0x18) * (short)(uVar13 >> 0x18),
                            CONCAT24((short)(uVar10 >> 8) * (short)(uVar13 >> 8),
                                     CONCAT22(((ushort)(CONCAT43(uVar4,CONCAT12((char)(uVar1 >> 8),
                                                                                (ushort)uVar1)) >>
                                                       0x10) & 0xff) *
                                              ((ushort)CONCAT41(uVar5,(char)(uVar2 >> 8)) & 0xff),
                                              ((ushort)uVar1 & 0xff) * (ushort)(byte)uVar2))),
                   *(ulonglong *)
                    (g_LightmapData + ((uint)*lightmap_indices + (uint)(*texture_indices >> 1)) * 4)
                   ^ (ulonglong)0.12694552529182901);
    uVar14 = pmulhw(uVar15,*(ulonglong *)
                            (g_LightmapData +
                            ((uint)*lightmap_indices + (uint)(*texture_indices >> 1)) * 4));
    uVar7 = (ushort)((short)uVar8 + (short)uVar14 + (short)g_LightmapBlendBias1) >> 4;
    uVar9 = (ushort)((short)((ulonglong)uVar8 >> 0x10) + (short)((ulonglong)uVar14 >> 0x10) +
                    (short)(g_LightmapBlendBias1 >> 0x10)) >> 4;
    uVar11 = (ushort)((short)((ulonglong)uVar8 >> 0x20) + (short)((ulonglong)uVar14 >> 0x20) +
                     (short)(g_LightmapBlendBias1 >> 0x20)) >> 4;
    uVar12 = (ushort)((short)((ulonglong)uVar8 >> 0x30) + (short)((ulonglong)uVar14 >> 0x30) +
                     (short)(g_LightmapBlendBias1 >> 0x30)) >> 4;
    *output_buffer =
         CONCAT13((uVar12 != 0) * (uVar12 < 0x100) * (char)uVar12 - (0xff < uVar12),
                  CONCAT12((uVar11 != 0) * (uVar11 < 0x100) * (char)uVar11 - (0xff < uVar11),
                           CONCAT11((uVar9 != 0) * (uVar9 < 0x100) * (char)uVar9 - (0xff < uVar9),
                                    (uVar7 != 0) * (uVar7 < 0x100) * (char)uVar7 - (0xff < uVar7))))
    ;
    uVar1 = texture_buffer[1];
    uVar2 = g_LightmapTexturePalette[texture_indices[1]];
    uVar4 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar1 >> 0x18) << 0x30) >> 0x28),
                                            CONCAT14((char)(uVar1 >> 0x10),uVar1)) >> 0x20),uVar1)
                  >> 0x18);
    uVar10 = (uint5)uVar4 & 0xffffffff00;
    uVar7 = (ushort)(((uint7)(byte)(uVar2 >> 0x18) << 0x30) >> 0x28);
    uVar8 = pmulhw(CONCAT26((short)(uVar10 >> 0x18) * (uVar7 >> 8),
                            CONCAT24((short)(uVar10 >> 8) *
                                     (short)(CONCAT25(uVar7,CONCAT14((char)(uVar2 >> 0x10),uVar2))
                                            >> 0x20),
                                     CONCAT22(((ushort)(CONCAT43(uVar4,CONCAT12((char)(uVar1 >> 8),
                                                                                (ushort)uVar1)) >>
                                                       0x10) & 0xff) * (ushort)(byte)(uVar2 >> 8),
                                              ((ushort)uVar1 & 0xff) * ((ushort)uVar2 & 0xff)))),
                   *(ulonglong *)
                    (g_LightmapData +
                    ((uint)lightmap_indices[1] + (uint)(texture_indices[1] >> 1)) * 4) ^
                   (ulonglong)0.12694552529182901);
    uVar14 = pmulhw(uVar15,*(ulonglong *)
                            (g_LightmapData +
                            ((uint)lightmap_indices[1] + (uint)(texture_indices[1] >> 1)) * 4));
    uVar7 = (ushort)((short)uVar8 + (short)uVar14 + (short)g_LightmapBlendBias2) >> 4;
    uVar9 = (ushort)((short)((ulonglong)uVar8 >> 0x10) + (short)((ulonglong)uVar14 >> 0x10) +
                    (short)(g_LightmapBlendBias2 >> 0x10)) >> 4;
    uVar11 = (ushort)((short)((ulonglong)uVar8 >> 0x20) + (short)((ulonglong)uVar14 >> 0x20) +
                     (short)(g_LightmapBlendBias2 >> 0x20)) >> 4;
    uVar12 = (ushort)((short)((ulonglong)uVar8 >> 0x30) + (short)((ulonglong)uVar14 >> 0x30) +
                     (short)(g_LightmapBlendBias2 >> 0x30)) >> 4;
    output_buffer[1] =
         CONCAT13((uVar12 != 0) * (uVar12 < 0x100) * (char)uVar12 - (0xff < uVar12),
                  CONCAT12((uVar11 != 0) * (uVar11 < 0x100) * (char)uVar11 - (0xff < uVar11),
                           CONCAT11((uVar9 != 0) * (uVar9 < 0x100) * (char)uVar9 - (0xff < uVar9),
                                    (uVar7 != 0) * (uVar7 < 0x100) * (char)uVar7 - (0xff < uVar7))))
    ;
    texture_buffer = texture_buffer + 2;
    texture_indices = texture_indices + 2;
    lightmap_indices = lightmap_indices + 2;
    output_buffer = output_buffer + 2;
    iVar6 = pixel_count + -2;
    bVar3 = 1 < pixel_count;
    pixel_count = iVar6;
  } while (iVar6 != 0 && bVar3);
  return;
}
