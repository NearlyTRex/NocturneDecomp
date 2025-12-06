// Name: core_dstrender.cpp_blendSinglePixelLightmapNoRoundingMMX_FUN_00491f90
// Address: 00491f90
// Address Range: [[00491f90, 00492000]]
// Convention: __cdecl
// Signature: void core_dstrender.cpp_blendSinglePixelLightmapNoRoundingMMX_FUN_00491f90(uint * output_pixel, uint * texture_pixel, byte * texture_index, byte * lightmap_index)

#include "nocturne.h"

void __cdecl
core_dstrender_cpp_blendSinglePixelLightmapNoRoundingMMX_FUN_00491f90
          (uint *output_pixel,uint *texture_pixel,byte *texture_index,byte *lightmap_index)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  ushort uVar7;
  ushort uVar9;
  uint5 uVar8;
  ulonglong uVar6;
  ushort uVar10;
  uint5 uVar11;
  ulonglong uVar12;
  
  uVar12 = psllw((ulonglong)
                 CONCAT52 /* combine 2-byte values */(CONCAT41 /* combine 2-byte values */((int)(((uint7)CONCAT21 /* combine 2-byte values */((short)(((uint7)(byte)((uint)
                                                  g_SolidColorMode >> 0x18) << 0x30) >> 0x28),
                                                  (char)((uint)g_SolidColorMode >> 0x10)) << 0x20)
                                        >> 0x18),(char)((uint)g_SolidColorMode >> 8)),
                          (ushort)(byte)g_SolidColorMode),6);
  uVar1 = *texture_pixel;
  uVar2 = g_LightmapTexturePalette[*texture_index];
  uVar3 = (uint)(CONCAT34 /* combine 2-byte values */((int3)(CONCAT25 /* combine 2-byte values */((short)(((uint7)(byte)(uVar1 >> 0x18) << 0x30) >> 0x28),
                                          CONCAT14 /* combine 2-byte values */((char)(uVar1 >> 0x10),uVar1)) >> 0x20),uVar1) >>
                0x18);
  uVar8 = (uint5)uVar3 & 0xffffffff00;
  uVar4 = (uint)(CONCAT34 /* combine 2-byte values */((int3)(CONCAT25 /* combine 2-byte values */((short)(((uint7)(byte)(uVar2 >> 0x18) << 0x30) >> 0x28),
                                          CONCAT14 /* combine 2-byte values */((char)(uVar2 >> 0x10),uVar2)) >> 0x20),uVar2) >>
                0x18);
  uVar11 = (uint5)uVar4 & 0xffffffff00;
  uVar6 = pmulhw(CONCAT26 /* combine 2-byte values */((short)(uVar8 >> 0x18) * (short)(uVar11 >> 0x18),
                          CONCAT24 /* combine 2-byte values */((short)(uVar8 >> 8) * (short)(uVar11 >> 8),
                                   CONCAT22 /* combine 2-byte values */(((ushort)(CONCAT43 /* combine 2-byte values */(uVar3,CONCAT12 /* combine 2-byte values */((char)(uVar1 >> 8),
                                                                              (ushort)uVar1)) >>
                                                     0x10) & 0xff) *
                                            ((ushort)CONCAT41 /* combine 2-byte values */(uVar4,(char)(uVar2 >> 8)) & 0xff),
                                            ((ushort)uVar1 & 0xff) * (ushort)(byte)uVar2))),
                 *(ulonglong *)
                  (g_LightmapData + ((uint)*lightmap_index + (uint)(*texture_index >> 1)) * 4) ^
                 (ulonglong)0.12694552529182901);
  uVar12 = pmulhw(uVar12,*(ulonglong *)
                          (g_LightmapData +
                          ((uint)*lightmap_index + (uint)(*texture_index >> 1)) * 4));
  uVar5 = (ushort)((short)uVar6 + (short)uVar12) >> 4;
  uVar7 = (ushort)((short)((ulonglong)uVar6 >> 0x10) + (short)((ulonglong)uVar12 >> 0x10)) >> 4;
  uVar9 = (ushort)((short)((ulonglong)uVar6 >> 0x20) + (short)((ulonglong)uVar12 >> 0x20)) >> 4;
  uVar10 = (ushort)((short)((ulonglong)uVar6 >> 0x30) + (short)((ulonglong)uVar12 >> 0x30)) >> 4;
  *output_pixel =
       CONCAT13 /* combine 2-byte values */((uVar10 != 0) * (uVar10 < 0x100) * (char)uVar10 - (0xff < uVar10),
                CONCAT12 /* combine 2-byte values */((uVar9 != 0) * (uVar9 < 0x100) * (char)uVar9 - (0xff < uVar9),
                         CONCAT11 /* combine 2-byte values */((uVar7 != 0) * (uVar7 < 0x100) * (char)uVar7 - (0xff < uVar7),
                                  (uVar5 != 0) * (uVar5 < 0x100) * (char)uVar5 - (0xff < uVar5))));
  return;
}
