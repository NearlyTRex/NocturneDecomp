// Name: core_dstrender.cpp_blendLightmapSharedU32toU16pNoBiasPx1MMX_FUN_004937b6
// Address: 004937b6
// Address Range: [[004937b6, 0049385f]]
// Convention: __cdecl
// Signature: void __cdecl core_dstrender_cpp_blendLightmapSharedU32toU16pNoBiasPx1MMX_FUN_004937b6(ushort *output_pixel,uint *texture_pixel,byte *texture_index,byte *lightmap_index)

#include "nocturne.h"

void __cdecl core_dstrender_cpp_blendLightmapSharedU32toU16pNoBiasPx1MMX_FUN_004937b6(ushort *output_pixel,uint *texture_pixel,byte *texture_index,byte *lightmap_index)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  ushort uVar8;
  ushort uVar10;
  uint5 uVar9;
  ulonglong uVar6;
  ushort uVar11;
  ulonglong uVar7;
  uint5 uVar12;
  ulonglong uVar13;
  
  uVar13 = psllw((ulonglong)
                 CONCAT52(CONCAT41((int)(((uint7)CONCAT21((short)(((uint7)(byte)(g_SolidColorMode >>
                                                                                0x18) << 0x30) >>
                                                                 0x28),
                                                          (char)(g_SolidColorMode >> 0x10)) << 0x20)
                                        >> 0x18),(char)(g_SolidColorMode >> 8)),
                          (ushort)(byte)g_SolidColorMode),6);
  uVar1 = *texture_pixel;
  uVar2 = g_LightmapTexturePalette[*texture_index];
  uVar3 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar1 >> 0x18) << 0x30) >> 0x28),
                                          CONCAT14((char)(uVar1 >> 0x10),uVar1)) >> 0x20),uVar1) >>
                0x18);
  uVar9 = (uint5)uVar3 & 0xffffffff00;
  uVar4 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar2 >> 0x18) << 0x30) >> 0x28),
                                          CONCAT14((char)(uVar2 >> 0x10),uVar2)) >> 0x20),uVar2) >>
                0x18);
  uVar12 = (uint5)uVar4 & 0xffffffff00;
  uVar6 = pmulhw(CONCAT26((short)(uVar9 >> 0x18) * (short)(uVar12 >> 0x18),
                          CONCAT24((short)(uVar9 >> 8) * (short)(uVar12 >> 8),
                                   CONCAT22(((ushort)(CONCAT43(uVar3,CONCAT12((char)(uVar1 >> 8),
                                                                              (ushort)uVar1)) >>
                                                     0x10) & 0xff) *
                                            ((ushort)CONCAT41(uVar4,(char)(uVar2 >> 8)) & 0xff),
                                            ((ushort)uVar1 & 0xff) * (ushort)(byte)uVar2))),
                 *(ulonglong *)
                  (g_LightmapData + ((uint)*lightmap_index + (uint)(*texture_index >> 1)) * 4) ^
                 g_LightmapData._2040_8_);
  uVar13 = pmulhw(uVar13,*(ulonglong *)
                          (g_LightmapData +
                          ((uint)*lightmap_index + (uint)(*texture_index >> 1)) * 4));
  uVar5 = (ushort)((short)uVar6 + (short)uVar13) >> 4;
  uVar8 = (ushort)((short)((ulonglong)uVar6 >> 0x10) + (short)((ulonglong)uVar13 >> 0x10)) >> 4;
  uVar10 = (ushort)((short)((ulonglong)uVar6 >> 0x20) + (short)((ulonglong)uVar13 >> 0x20)) >> 4;
  uVar11 = (ushort)((short)((ulonglong)uVar6 >> 0x30) + (short)((ulonglong)uVar13 >> 0x30)) >> 4;
  uVar7 = (ulonglong)
          CONCAT13((uVar11 != 0) * (uVar11 < 0x100) * (char)uVar11 - (0xff < uVar11),
                   CONCAT12((uVar10 != 0) * (uVar10 < 0x100) * (char)uVar10 - (0xff < uVar10),
                            CONCAT11((uVar8 != 0) * (uVar8 < 0x100) * (char)uVar8 - (0xff < uVar8),
                                     (uVar5 != 0) * (uVar5 < 0x100) * (char)uVar5 - (0xff < uVar5)))
                  );
  *output_pixel =
       (ushort)((uVar7 & g_BlueMask32.mm) >> g_BlueBitShift.mm) |
       (ushort)((uVar7 & g_GreenMask32.mm) >> g_GreenBlueDitherShift.mm) |
       (ushort)((uVar7 & g_RedMask32.mm) >> g_TotalDitherShift.mm);
  return;
}
