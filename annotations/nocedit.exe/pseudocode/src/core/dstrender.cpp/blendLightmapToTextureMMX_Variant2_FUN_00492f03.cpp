// Name: core_dstrender.cpp_blendLightmapToTextureMMX_Variant2_FUN_00492f03
// Address: 00492f03
// Address Range: [[00492f03, 0049333c] [00493340, 0049344f]]
// Convention: __cdecl
// Signature: void core_dstrender.cpp_blendLightmapToTextureMMX_Variant2_FUN_00492f03(uint * output_buffer, ulonglong * texture_buffer, byte * texture_indices, byte * lightmap_indices, int pixel_count)

#include "nocturne.h"

void __cdecl
core_dstrender_cpp_blendLightmapToTextureMMX_Variant2_FUN_00492f03
          (uint *output_buffer,ulonglong *texture_buffer,byte *texture_indices,
          byte *lightmap_indices,int pixel_count)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ushort uVar7;
  ushort uVar10;
  ushort uVar11;
  ulonglong uVar8;
  ushort uVar12;
  ulonglong uVar9;
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
                 CONCAT52 /* combine 2-byte values */(CONCAT41 /* combine 2-byte values */((int)(((uint7)CONCAT21 /* combine 2-byte values */((short)(((uint7)(byte)((uint)
                                                  g_SolidColorMode >> 0x18) << 0x30) >> 0x28),
                                                  (char)((uint)g_SolidColorMode >> 0x10)) << 0x20)
                                        >> 0x18),(char)((uint)g_SolidColorMode >> 8)),
                          (ushort)(byte)g_SolidColorMode),6);
  do {
    uVar9 = *texture_buffer;
    uVar1 = g_LightmapTexturePalette[*texture_indices];
    uVar2 = g_LightmapTexturePalette[texture_indices[1]];
    uVar4 = (uint)(CONCAT34 /* combine 2-byte values */((int3)(CONCAT25 /* combine 2-byte values */((short)(((uint7)(byte)(uVar2 >> 0x18) << 0x30) >> 0x28),
                                            CONCAT14 /* combine 2-byte values */((char)(uVar2 >> 0x10),uVar2)) >> 0x20),uVar2)
                  >> 0x18);
    uVar25 = (uint5)uVar4 & 0xffffffff00;
    uVar7 = (ushort)(((uint7)(byte)(uVar9 >> 0x18) << 0x30) >> 0x28);
    uVar5 = (uint)(CONCAT34 /* combine 2-byte values */((int3)(CONCAT25 /* combine 2-byte values */((short)(((uint7)(byte)(uVar1 >> 0x18) << 0x30) >> 0x28),
                                            CONCAT14 /* combine 2-byte values */((char)(uVar1 >> 0x10),uVar1)) >> 0x20),uVar1)
                  >> 0x18);
    uVar19 = (uint5)uVar5 & 0xffffffff00;
    uVar12 = (ushort)(CONCAT43 /* combine 2-byte values */(uVar5,CONCAT12 /* combine 2-byte values */((char)(uVar1 >> 8),(ushort)uVar1)) >> 0x10) & 0xff;
    uVar11 = (ushort)uVar1 & 0xff;
    sVar20 = (short)(uVar19 >> 8);
    sVar21 = (short)(uVar19 >> 0x18);
    uVar10 = (ushort)(((uint7)(byte)(uVar9 >> 0x38) << 0x30) >> 0x28);
    uVar18 = *(ulonglong *)
              (g_LightmapData + ((uint)*lightmap_indices + (uint)(texture_indices[1] >> 1)) * 4) ^
             (ulonglong)0.12694552529182901;
    uVar8 = pmulhw(CONCAT26 /* combine 2-byte values */((uVar7 >> 8) * sVar21,
                            CONCAT24 /* combine 2-byte values */((short)CONCAT21 /* combine 2-byte values */(uVar7,(char)(uVar9 >> 0x10)) * sVar20,
                                     CONCAT22 /* combine 2-byte values */((byte)(uVar9 >> 8) * uVar12,(byte)uVar9 * uVar11))),
                   uVar18);
    uVar14 = pmulhw(CONCAT26 /* combine 2-byte values */((uVar10 >> 8) * ((ushort)((short)(uVar25 >> 0x18) + sVar21) >> 1),
                             CONCAT24 /* combine 2-byte values */((short)CONCAT21 /* combine 2-byte values */(uVar10,(char)(uVar9 >> 0x30)) *
                                      ((ushort)((short)(uVar25 >> 8) + sVar20) >> 1),
                                      CONCAT22 /* combine 2-byte values */((ushort)(byte)(uVar9 >> 0x28) *
                                               ((ushort)(((ushort)(CONCAT43 /* combine 2-byte values */(uVar4,CONCAT12 /* combine 2-byte values */((char)(
                                                  uVar2 >> 8),(ushort)uVar2)) >> 0x10) & 0xff) +
                                                  uVar12) >> 1),
                                               ((ushort)(uVar9 >> 0x20) & 0xff) *
                                               ((ushort)(((ushort)uVar2 & 0xff) + uVar11) >> 1)))),
                    uVar18);
    uVar22 = pmulhw(uVar24,*(ulonglong *)
                            (g_LightmapData +
                            ((uint)*lightmap_indices + (uint)(texture_indices[1] >> 1)) * 4));
    sVar20 = (short)((ulonglong)uVar22 >> 0x10);
    sVar21 = (short)((ulonglong)uVar22 >> 0x20);
    sVar23 = (short)((ulonglong)uVar22 >> 0x30);
    uVar7 = (ushort)((short)uVar8 + (short)uVar22 + (short)g_LightmapBlendBias5) >> 4;
    uVar10 = (ushort)((short)((ulonglong)uVar8 >> 0x10) + sVar20 +
                     (short)(g_LightmapBlendBias5 >> 0x10)) >> 4;
    uVar11 = (ushort)((short)((ulonglong)uVar8 >> 0x20) + sVar21 +
                     (short)(g_LightmapBlendBias5 >> 0x20)) >> 4;
    uVar12 = (ushort)((short)((ulonglong)uVar8 >> 0x30) + sVar23 +
                     (short)(g_LightmapBlendBias5 >> 0x30)) >> 4;
    uVar13 = (ushort)((short)uVar14 + (short)uVar22 + (short)g_LightmapBlendBias6) >> 4;
    uVar15 = (ushort)((short)((ulonglong)uVar14 >> 0x10) + sVar20 +
                     (short)(g_LightmapBlendBias6 >> 0x10)) >> 4;
    uVar16 = (ushort)((short)((ulonglong)uVar14 >> 0x20) + sVar21 +
                     (short)(g_LightmapBlendBias6 >> 0x20)) >> 4;
    uVar17 = (ushort)((short)((ulonglong)uVar14 >> 0x30) + sVar23 +
                     (short)(g_LightmapBlendBias6 >> 0x30)) >> 4;
    uVar9 = (ulonglong)
            CONCAT13 /* combine 2-byte values */((uVar12 != 0) * (uVar12 < 0x100) * (char)uVar12 - (0xff < uVar12),
                     CONCAT12 /* combine 2-byte values */((uVar11 != 0) * (uVar11 < 0x100) * (char)uVar11 - (0xff < uVar11),
                              CONCAT11 /* combine 2-byte values */((uVar10 != 0) * (uVar10 < 0x100) * (char)uVar10 -
                                       (0xff < uVar10),
                                       (uVar7 != 0) * (uVar7 < 0x100) * (char)uVar7 - (0xff < uVar7)
                                      )));
    uVar18 = (ulonglong)
             CONCAT13 /* combine 2-byte values */((uVar17 != 0) * (uVar17 < 0x100) * (char)uVar17 - (0xff < uVar17),
                      CONCAT12 /* combine 2-byte values */((uVar16 != 0) * (uVar16 < 0x100) * (char)uVar16 - (0xff < uVar16),
                               CONCAT11 /* combine 2-byte values */((uVar15 != 0) * (uVar15 < 0x100) * (char)uVar15 -
                                        (0xff < uVar15),
                                        (uVar13 != 0) * (uVar13 < 0x100) * (char)uVar13 -
                                        (0xff < uVar13))));
    texture_buffer = texture_buffer + 1;
    texture_indices = texture_indices + 1;
    lightmap_indices = lightmap_indices + 1;
    *output_buffer =
         (uint)((uVar9 & g_BlueMask32) >> g_BlueBitShift) |
         (uint)((uVar9 & g_GreenMask32) >> g_GreenBlueBits) |
         (uint)((uVar9 & g_RedMask32) >> g_TotalColorBits) |
         (uint)(((uVar18 & g_BlueMask32) >> g_BlueBitShift |
                 (uVar18 & g_GreenMask32) >> g_GreenBlueBits |
                (uVar18 & g_RedMask32) >> g_TotalColorBits) << 0x10);
    output_buffer = output_buffer + 1;
    iVar6 = pixel_count + -2;
    bVar3 = 1 < pixel_count;
    pixel_count = iVar6;
  } while (iVar6 != 0 && bVar3);
  return;
}
