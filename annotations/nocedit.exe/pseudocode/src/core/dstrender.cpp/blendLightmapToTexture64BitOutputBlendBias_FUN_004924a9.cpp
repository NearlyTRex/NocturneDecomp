// Name: core_dstrender.cpp_blendLightmapToTexture64BitOutputBlendBias_FUN_004924a9
// Address: 004924a9
// Address Range: [[004924a9, 004925c4]]
// Convention: __cdecl
// Signature: void __cdecl core_dstrender_cpp_blendLightmapToTexture64BitOutputBlendBias_FUN_004924a9(ulonglong *output_buffer,ulonglong *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count)

#include "nocturne.h"

void __cdecl core_dstrender_cpp_blendLightmapToTexture64BitOutputBlendBias_FUN_004924a9(ulonglong *output_buffer,ulonglong *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count)

{
  ulonglong uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ushort uVar6;
  ushort uVar8;
  ushort uVar9;
  ulonglong uVar7;
  ushort uVar10;
  ushort uVar11;
  ushort uVar13;
  ushort uVar14;
  ulonglong uVar12;
  ushort uVar15;
  short sVar18;
  uint5 uVar17;
  short sVar19;
  ulonglong uVar16;
  ulonglong uVar20;
  short sVar21;
  ulonglong uVar22;
  
  uVar22 = psllw((ulonglong)
                 CONCAT52(CONCAT41((int)(((uint7)CONCAT21((short)(((uint7)(byte)(g_SolidColorMode >>
                                                                                0x18) << 0x30) >>
                                                                 0x28),
                                                          (char)(g_SolidColorMode >> 0x10)) << 0x20)
                                        >> 0x18),(char)(g_SolidColorMode >> 8)),
                          (ushort)(byte)g_SolidColorMode),6);
  do {
    uVar1 = *texture_buffer;
    uVar2 = g_LightmapTexturePalette[*texture_indices];
    uVar6 = (ushort)(((uint7)(byte)(uVar1 >> 0x18) << 0x30) >> 0x28);
    uVar4 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar2 >> 0x18) << 0x30) >> 0x28),
                                            CONCAT14((char)(uVar2 >> 0x10),uVar2)) >> 0x20),uVar2)
                  >> 0x18);
    uVar17 = (uint5)uVar4 & 0xffffffff00;
    uVar9 = (ushort)CONCAT41(uVar4,(char)(uVar2 >> 8)) & 0xff;
    uVar8 = (ushort)(((uint7)(byte)(uVar1 >> 0x38) << 0x30) >> 0x28);
    sVar18 = (short)(uVar17 >> 8);
    sVar19 = (short)(uVar17 >> 0x18);
    uVar16 = *(ulonglong *)
              (g_LightmapData + ((uint)*lightmap_indices + (uint)(*texture_indices >> 1)) * 4) ^
             (ulonglong)0.12694552529182901;
    uVar7 = pmulhw(CONCAT26((uVar6 >> 8) * sVar19,
                            CONCAT24((short)CONCAT21(uVar6,(char)(uVar1 >> 0x10)) * sVar18,
                                     CONCAT22((byte)(uVar1 >> 8) * uVar9,
                                              ((ushort)uVar1 & 0xff) * (ushort)(byte)uVar2))),uVar16
                  );
    uVar12 = pmulhw(CONCAT26((uVar8 >> 8) * sVar19,
                             CONCAT24((short)CONCAT21(uVar8,(char)(uVar1 >> 0x30)) * sVar18,
                                      CONCAT22((byte)(uVar1 >> 0x28) * uVar9,
                                               ((ushort)(uVar1 >> 0x20) & 0xff) *
                                               (ushort)(byte)uVar2))),uVar16);
    uVar20 = pmulhw(uVar22,*(ulonglong *)
                            (g_LightmapData +
                            ((uint)*lightmap_indices + (uint)(*texture_indices >> 1)) * 4));
    sVar18 = (short)((ulonglong)uVar20 >> 0x10);
    sVar19 = (short)((ulonglong)uVar20 >> 0x20);
    sVar21 = (short)((ulonglong)uVar20 >> 0x30);
    uVar6 = (ushort)((short)uVar7 + (short)uVar20 + (short)g_LightmapBlendBias1.mm) >> 4;
    uVar8 = (ushort)((short)((ulonglong)uVar7 >> 0x10) + sVar18 +
                    (short)(g_LightmapBlendBias1.mm >> 0x10)) >> 4;
    uVar9 = (ushort)((short)((ulonglong)uVar7 >> 0x20) + sVar19 +
                    (short)(g_LightmapBlendBias1.mm >> 0x20)) >> 4;
    uVar10 = (ushort)((short)((ulonglong)uVar7 >> 0x30) + sVar21 +
                     (short)(g_LightmapBlendBias1.mm >> 0x30)) >> 4;
    uVar11 = (ushort)((short)uVar12 + (short)uVar20 + (short)g_LightmapBlendBias2.mm) >> 4;
    uVar13 = (ushort)((short)((ulonglong)uVar12 >> 0x10) + sVar18 +
                     (short)(g_LightmapBlendBias2.mm >> 0x10)) >> 4;
    uVar14 = (ushort)((short)((ulonglong)uVar12 >> 0x20) + sVar19 +
                     (short)(g_LightmapBlendBias2.mm >> 0x20)) >> 4;
    uVar15 = (ushort)((short)((ulonglong)uVar12 >> 0x30) + sVar21 +
                     (short)(g_LightmapBlendBias2.mm >> 0x30)) >> 4;
    *output_buffer =
         CONCAT17((uVar15 != 0) * (uVar15 < 0x100) * (char)uVar15 - (0xff < uVar15),
                  CONCAT16((uVar14 != 0) * (uVar14 < 0x100) * (char)uVar14 - (0xff < uVar14),
                           CONCAT15((uVar13 != 0) * (uVar13 < 0x100) * (char)uVar13 -
                                    (0xff < uVar13),
                                    CONCAT14((uVar11 != 0) * (uVar11 < 0x100) * (char)uVar11 -
                                             (0xff < uVar11),
                                             CONCAT13((uVar10 != 0) * (uVar10 < 0x100) *
                                                      (char)uVar10 - (0xff < uVar10),
                                                      CONCAT12((uVar9 != 0) * (uVar9 < 0x100) *
                                                               (char)uVar9 - (0xff < uVar9),
                                                               CONCAT11((uVar8 != 0) *
                                                                        (uVar8 < 0x100) *
                                                                        (char)uVar8 - (0xff < uVar8)
                                                                        ,(uVar6 != 0) *
                                                                         (uVar6 < 0x100) *
                                                                         (char)uVar6 -
                                                                         (0xff < uVar6))))))));
    uVar1 = texture_buffer[1];
    uVar2 = g_LightmapTexturePalette[*texture_indices];
    uVar6 = (ushort)(((uint7)(byte)(uVar1 >> 0x18) << 0x30) >> 0x28);
    uVar4 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar2 >> 0x18) << 0x30) >> 0x28),
                                            CONCAT14((char)(uVar2 >> 0x10),uVar2)) >> 0x20),uVar2)
                  >> 0x18);
    uVar17 = (uint5)uVar4 & 0xffffffff00;
    uVar10 = (ushort)(CONCAT43(uVar4,CONCAT12((char)(uVar2 >> 8),(ushort)uVar2)) >> 0x10) & 0xff;
    uVar9 = (ushort)uVar2 & 0xff;
    uVar8 = (ushort)(((uint7)(byte)(uVar1 >> 0x38) << 0x30) >> 0x28);
    sVar18 = (short)(uVar17 >> 8);
    sVar19 = (short)(uVar17 >> 0x18);
    uVar16 = *(ulonglong *)
              (g_LightmapData + ((uint)*lightmap_indices + (uint)(*texture_indices >> 1)) * 4) ^
             (ulonglong)0.12694552529182901;
    uVar7 = pmulhw(CONCAT26((uVar6 >> 8) * sVar19,
                            CONCAT24((short)CONCAT21(uVar6,(char)(uVar1 >> 0x10)) * sVar18,
                                     CONCAT22((byte)(uVar1 >> 8) * uVar10,
                                              ((ushort)uVar1 & 0xff) * uVar9))),uVar16);
    uVar12 = pmulhw(CONCAT26((uVar8 >> 8) * sVar19,
                             CONCAT24((short)CONCAT21(uVar8,(char)(uVar1 >> 0x30)) * sVar18,
                                      CONCAT22((byte)(uVar1 >> 0x28) * uVar10,
                                               ((ushort)(uVar1 >> 0x20) & 0xff) * uVar9))),uVar16);
    uVar20 = pmulhw(uVar22,*(ulonglong *)
                            (g_LightmapData +
                            ((uint)*lightmap_indices + (uint)(*texture_indices >> 1)) * 4));
    sVar18 = (short)((ulonglong)uVar20 >> 0x10);
    sVar19 = (short)((ulonglong)uVar20 >> 0x20);
    sVar21 = (short)((ulonglong)uVar20 >> 0x30);
    uVar6 = (ushort)((short)uVar7 + (short)uVar20 + (short)g_LightmapBlendBias1.mm) >> 4;
    uVar8 = (ushort)((short)((ulonglong)uVar7 >> 0x10) + sVar18 +
                    (short)(g_LightmapBlendBias1.mm >> 0x10)) >> 4;
    uVar9 = (ushort)((short)((ulonglong)uVar7 >> 0x20) + sVar19 +
                    (short)(g_LightmapBlendBias1.mm >> 0x20)) >> 4;
    uVar10 = (ushort)((short)((ulonglong)uVar7 >> 0x30) + sVar21 +
                     (short)(g_LightmapBlendBias1.mm >> 0x30)) >> 4;
    uVar11 = (ushort)((short)uVar12 + (short)uVar20 + (short)g_LightmapBlendBias2.mm) >> 4;
    uVar13 = (ushort)((short)((ulonglong)uVar12 >> 0x10) + sVar18 +
                     (short)(g_LightmapBlendBias2.mm >> 0x10)) >> 4;
    uVar14 = (ushort)((short)((ulonglong)uVar12 >> 0x20) + sVar19 +
                     (short)(g_LightmapBlendBias2.mm >> 0x20)) >> 4;
    uVar15 = (ushort)((short)((ulonglong)uVar12 >> 0x30) + sVar21 +
                     (short)(g_LightmapBlendBias2.mm >> 0x30)) >> 4;
    texture_buffer = texture_buffer + 2;
    output_buffer[1] =
         CONCAT17((uVar15 != 0) * (uVar15 < 0x100) * (char)uVar15 - (0xff < uVar15),
                  CONCAT16((uVar14 != 0) * (uVar14 < 0x100) * (char)uVar14 - (0xff < uVar14),
                           CONCAT15((uVar13 != 0) * (uVar13 < 0x100) * (char)uVar13 -
                                    (0xff < uVar13),
                                    CONCAT14((uVar11 != 0) * (uVar11 < 0x100) * (char)uVar11 -
                                             (0xff < uVar11),
                                             CONCAT13((uVar10 != 0) * (uVar10 < 0x100) *
                                                      (char)uVar10 - (0xff < uVar10),
                                                      CONCAT12((uVar9 != 0) * (uVar9 < 0x100) *
                                                               (char)uVar9 - (0xff < uVar9),
                                                               CONCAT11((uVar8 != 0) *
                                                                        (uVar8 < 0x100) *
                                                                        (char)uVar8 - (0xff < uVar8)
                                                                        ,(uVar6 != 0) *
                                                                         (uVar6 < 0x100) *
                                                                         (char)uVar6 -
                                                                         (0xff < uVar6))))))));
    output_buffer = output_buffer + 2;
    texture_indices = texture_indices + 1;
    lightmap_indices = lightmap_indices + 1;
    iVar5 = pixel_count + -4;
    bVar3 = 3 < pixel_count;
    pixel_count = iVar5;
  } while (iVar5 != 0 && bVar3);
  return;
}
