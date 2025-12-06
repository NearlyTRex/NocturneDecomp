// Name: engine_font.cpp_drawAlphaBlendedPixels_FUN_004ce240
// Address: 004ce240
// Address Range: [[004ce240, 004ce2cc]]
// Convention: __cdecl
// Signature: void engine_font.cpp_drawAlphaBlendedPixels_FUN_004ce240(uint * dest_buffer, uchar * src_indices, uint * color_table, int pixel_count, uint blend_color)

#include "nocturne.h"

void __cdecl
engine_font_cpp_drawAlphaBlendedPixels_FUN_004ce240
          (uint *dest_buffer,uchar *src_indices,uint *color_table,int pixel_count,uint blend_color)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ushort uVar10;
  ushort uVar12;
  uint5 uVar11;
  ushort uVar13;
  ushort uVar14;
  uint5 uVar15;
  ushort uVar16;
  ushort uVar17;
  ushort uVar18;
  ushort uVar19;
  ulonglong uVar20;
  byte bVar21;
  
  uVar8 = (uint)g_CurrentRenderColor >> 0x10;
  uVar4 = (ushort)(((uint7)(byte)((uint)g_CurrentRenderColor >> 0x18) << 0x30) >> 0x28);
  uVar7 = (uint)g_CurrentRenderColor >> 8;
  bVar21 = (byte)g_CurrentRenderColor;
  do {
    if (*src_indices != 0) {
      uVar1 = color_table[*src_indices];
      uVar2 = *dest_buffer;
      uVar5 = (uint)(CONCAT34 /* combine 2-byte values */((int3)(CONCAT25 /* combine 2-byte values */((short)(((uint7)(byte)(blend_color >> 0x18) << 0x30)
                                                     >> 0x28),
                                              CONCAT14 /* combine 2-byte values */((char)(blend_color >> 0x10),blend_color)) >>
                                    0x20),blend_color) >> 0x18);
      uVar11 = (uint5)uVar5 & 0xffffffff00;
      uVar6 = (uint)(CONCAT34 /* combine 2-byte values */((int3)(CONCAT25 /* combine 2-byte values */((short)(((uint7)(byte)(uVar2 >> 0x18) << 0x30) >> 0x28
                                                     ),CONCAT14 /* combine 2-byte values */((char)(uVar2 >> 0x10),uVar2)) >>
                                    0x20),uVar2) >> 0x18);
      uVar15 = (uint5)uVar6 & 0xffffffff00;
      uVar10 = (ushort)(((uint7)(byte)(uVar1 >> 0x18) << 0x30) >> 0x28);
      uVar16 = (ushort)(((ushort)uVar1 & 0xff) * (ushort)bVar21) >> 8;
      uVar17 = (ushort)((ushort)(byte)(uVar1 >> 8) * (ushort)(byte)uVar7) >> 8;
      uVar18 = (ushort)((short)(CONCAT25 /* combine 2-byte values */(uVar10,CONCAT14 /* combine 2-byte values */((char)(uVar1 >> 0x10),uVar1)) >> 0x20) *
                       (short)CONCAT21 /* combine 2-byte values */(uVar4,(char)uVar8)) >> 8;
      uVar19 = (ushort)((uVar10 >> 8) * (uVar4 >> 8)) >> 8;
      uVar20 = CONCAT26 /* combine 2-byte values */(uVar19,CONCAT24 /* combine 2-byte values */(uVar18,CONCAT22 /* combine 2-byte values */(uVar17,uVar16))) ^ 0xff00ff00ff00ff;
      uVar10 = (byte)blend_color * uVar16 + ((ushort)uVar2 & 0xff) * (short)uVar20;
      uVar17 = ((ushort)CONCAT41 /* combine 2-byte values */(uVar5,(char)(blend_color >> 8)) & 0xff) * uVar17 +
               ((ushort)(CONCAT43 /* combine 2-byte values */(uVar6,CONCAT12 /* combine 2-byte values */((char)(uVar2 >> 8),(ushort)uVar2)) >> 0x10) & 0xff)
               * (short)(uVar20 >> 0x10);
      uVar12 = (short)(uVar11 >> 8) * uVar18 + (short)(uVar15 >> 8) * (short)(uVar20 >> 0x20);
      uVar13 = (short)(uVar11 >> 0x18) * uVar19 + (short)(uVar15 >> 0x18) * (short)(uVar20 >> 0x30);
      uVar16 = uVar10 >> 8;
      uVar18 = uVar17 >> 8;
      uVar19 = uVar12 >> 8;
      uVar14 = uVar13 >> 8;
      *dest_buffer = CONCAT13 /* combine 2-byte values */((uVar14 != 0) * (uVar14 < 0x100) * (char)(uVar13 >> 8) -
                              (0xff < uVar14),
                              CONCAT12 /* combine 2-byte values */((uVar19 != 0) * (uVar19 < 0x100) * (char)(uVar12 >> 8) -
                                       (0xff < uVar19),
                                       CONCAT11 /* combine 2-byte values */((uVar18 != 0) * (uVar18 < 0x100) *
                                                (char)(uVar17 >> 8) - (0xff < uVar18),
                                                (uVar16 != 0) * (uVar16 < 0x100) *
                                                (char)(uVar10 >> 8) - (0xff < uVar16))));
    }
    src_indices = src_indices + 1;
    dest_buffer = dest_buffer + 1;
    iVar9 = pixel_count + -1;
    bVar3 = 0 < pixel_count;
    pixel_count = iVar9;
  } while (iVar9 != 0 && bVar3);
  return;
}
