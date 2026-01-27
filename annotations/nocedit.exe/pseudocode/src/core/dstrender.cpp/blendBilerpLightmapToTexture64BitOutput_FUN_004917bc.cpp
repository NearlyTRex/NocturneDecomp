// Name: core_dstrender.cpp_blendBilerpLightmapToTexture64BitOutput_FUN_004917bc
// Address: 004917bc
// Address Range: [[004917bc, 00491bf5] [00491c00, 00491c99]]
// Convention: __cdecl
// Signature: void core_dstrender.cpp_blendBilerpLightmapToTexture64BitOutput_FUN_004917bc(ulonglong * output_buffer, ulonglong * texture_buffer, byte * texture_indices, byte * lightmap_indices, int pixel_count)

#include "nocturne.h"

void __cdecl
core_dstrender_cpp_blendBilerpLightmapToTexture64BitOutput_FUN_004917bc
          (ulonglong *output_buffer,ulonglong *texture_buffer,byte *texture_indices,
          byte *lightmap_indices,int pixel_count)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ushort uVar8;
  ushort uVar10;
  ushort uVar11;
  ulonglong uVar9;
  ushort uVar12;
  ushort uVar13;
  ushort uVar15;
  ushort uVar16;
  ulonglong uVar14;
  ushort uVar17;
  short sVar20;
  uint5 uVar19;
  short sVar21;
  ulonglong uVar18;
  ulonglong uVar22;
  short sVar23;
  ulonglong uVar24;
  uint5 uVar25;
  
  uVar24 = psllw((ulonglong)
                 CONCAT52(CONCAT41((int)(((uint7)CONCAT21((short)(((uint7)(byte)(g_SolidColorMode >>
                                                                                0x18) << 0x30) >>
                                                                 0x28),
                                                          (char)(g_SolidColorMode >> 0x10)) << 0x20)
                                        >> 0x18),(char)(g_SolidColorMode >> 8)),
                          (ushort)(byte)g_SolidColorMode),6);
  do {
    uVar1 = *texture_buffer;
    uVar2 = g_LightmapTexturePalette[*texture_indices];
    uVar3 = g_LightmapTexturePalette[texture_indices[1]];
    uVar5 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar3 >> 0x18) << 0x30) >> 0x28),
                                            CONCAT14((char)(uVar3 >> 0x10),uVar3)) >> 0x20),uVar3)
                  >> 0x18);
    uVar25 = (uint5)uVar5 & 0xffffffff00;
    uVar8 = (ushort)(((uint7)(byte)(uVar1 >> 0x18) << 0x30) >> 0x28);
    uVar6 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar2 >> 0x18) << 0x30) >> 0x28),
                                            CONCAT14((char)(uVar2 >> 0x10),uVar2)) >> 0x20),uVar2)
                  >> 0x18);
    uVar19 = (uint5)uVar6 & 0xffffffff00;
    uVar12 = (ushort)(CONCAT43(uVar6,CONCAT12((char)(uVar2 >> 8),(ushort)uVar2)) >> 0x10) & 0xff;
    uVar11 = (ushort)uVar2 & 0xff;
    sVar20 = (short)(uVar19 >> 8);
    sVar21 = (short)(uVar19 >> 0x18);
    uVar10 = (ushort)(((uint7)(byte)(uVar1 >> 0x38) << 0x30) >> 0x28);
    uVar18 = *(ulonglong *)
              (g_LightmapData + ((uint)*lightmap_indices + (uint)(texture_indices[1] >> 1)) * 4) ^
             (ulonglong)0.12694552529182901;
    uVar9 = pmulhw(CONCAT26((uVar8 >> 8) * sVar21,
                            CONCAT24((short)CONCAT21(uVar8,(char)(uVar1 >> 0x10)) * sVar20,
                                     CONCAT22((byte)(uVar1 >> 8) * uVar12,(byte)uVar1 * uVar11))),
                   uVar18);
    uVar14 = pmulhw(CONCAT26((uVar10 >> 8) * ((ushort)((short)(uVar25 >> 0x18) + sVar21) >> 1),
                             CONCAT24((short)CONCAT21(uVar10,(char)(uVar1 >> 0x30)) *
                                      ((ushort)((short)(uVar25 >> 8) + sVar20) >> 1),
                                      CONCAT22((ushort)(byte)(uVar1 >> 0x28) *
                                               ((ushort)(((ushort)(CONCAT43(uVar5,CONCAT12((char)(
                                                  uVar3 >> 8),(ushort)uVar3)) >> 0x10) & 0xff) +
                                                  uVar12) >> 1),
                                               ((ushort)(uVar1 >> 0x20) & 0xff) *
                                               ((ushort)(((ushort)uVar3 & 0xff) + uVar11) >> 1)))),
                    uVar18);
    uVar22 = pmulhw(uVar24,*(ulonglong *)
                            (g_LightmapData +
                            ((uint)*lightmap_indices + (uint)(texture_indices[1] >> 1)) * 4));
    sVar20 = (short)((ulonglong)uVar22 >> 0x10);
    sVar21 = (short)((ulonglong)uVar22 >> 0x20);
    sVar23 = (short)((ulonglong)uVar22 >> 0x30);
    uVar8 = (ushort)((short)uVar9 + (short)uVar22 + (short)g_LightmapBlendBias1) >> 4;
    uVar10 = (ushort)((short)((ulonglong)uVar9 >> 0x10) + sVar20 +
                     (short)(g_LightmapBlendBias1 >> 0x10)) >> 4;
    uVar11 = (ushort)((short)((ulonglong)uVar9 >> 0x20) + sVar21 +
                     (short)(g_LightmapBlendBias1 >> 0x20)) >> 4;
    uVar12 = (ushort)((short)((ulonglong)uVar9 >> 0x30) + sVar23 +
                     (short)(g_LightmapBlendBias1 >> 0x30)) >> 4;
    uVar13 = (ushort)((short)uVar14 + (short)uVar22 + (short)g_LightmapBlendBias2) >> 4;
    uVar15 = (ushort)((short)((ulonglong)uVar14 >> 0x10) + sVar20 +
                     (short)(g_LightmapBlendBias2 >> 0x10)) >> 4;
    uVar16 = (ushort)((short)((ulonglong)uVar14 >> 0x20) + sVar21 +
                     (short)(g_LightmapBlendBias2 >> 0x20)) >> 4;
    uVar17 = (ushort)((short)((ulonglong)uVar14 >> 0x30) + sVar23 +
                     (short)(g_LightmapBlendBias2 >> 0x30)) >> 4;
    texture_buffer = texture_buffer + 1;
    texture_indices = texture_indices + 1;
    lightmap_indices = lightmap_indices + 1;
    *output_buffer =
         CONCAT17((uVar17 != 0) * (uVar17 < 0x100) * (char)uVar17 - (0xff < uVar17),
                  CONCAT16((uVar16 != 0) * (uVar16 < 0x100) * (char)uVar16 - (0xff < uVar16),
                           CONCAT15((uVar15 != 0) * (uVar15 < 0x100) * (char)uVar15 -
                                    (0xff < uVar15),
                                    CONCAT14((uVar13 != 0) * (uVar13 < 0x100) * (char)uVar13 -
                                             (0xff < uVar13),
                                             CONCAT13((uVar12 != 0) * (uVar12 < 0x100) *
                                                      (char)uVar12 - (0xff < uVar12),
                                                      CONCAT12((uVar11 != 0) * (uVar11 < 0x100) *
                                                               (char)uVar11 - (0xff < uVar11),
                                                               CONCAT11((uVar10 != 0) *
                                                                        (uVar10 < 0x100) *
                                                                        (char)uVar10 -
                                                                        (0xff < uVar10),
                                                                        (uVar8 != 0) *
                                                                        (uVar8 < 0x100) *
                                                                        (char)uVar8 - (0xff < uVar8)
                                                                       )))))));
    output_buffer = output_buffer + 1;
    iVar7 = pixel_count + -2;
    bVar4 = 1 < pixel_count;
    pixel_count = iVar7;
  } while (iVar7 != 0 && bVar4);
  return;
}
