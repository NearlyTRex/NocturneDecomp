// Name: engine_font.cpp_CBitFont_render3DCharacter_FUN_004911f0
// Address: 004911f0
// Address Range: [[004911f0, 004916bb]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_CBitFont_render3DCharacter_FUN_004911f0(CBitFont *this_ptr,int character_code,int x,int y,int right_x,int bottom_y,int color_mode)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_font_cpp_CBitFont_render3DCharacter_FUN_004911f0(CBitFont *this_ptr,int character_code,int x,int y,int right_x,int bottom_y,int color_mode)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char (*pacVar6) [80];
  uint *puVar7;
  int iVar8;
  char *pcVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  byte bVar13;
  SMRGLHeaderPrimitive local_54;
  int local_3c;
  int local_38;
  uint local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar13 = 0;
  pcVar9 = &DAT_005b9258;
  pacVar6 = this_ptr->bitmap_files + this_ptr->char_bitmap_index[character_code];
  do {
    cVar1 = (*pacVar6)[0];
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = (*pacVar6)[1];
    pacVar6 = (char (*) [80])(*pacVar6 + 2);
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  engine_texture_cpp_ensureTextureLoaded_FUN_00545920((SMRGLTextureBasic *)&DAT_005b9250);
  local_18 = 0x4e1c;
  local_14 = 0x4e1d;
  local_1c = 19999;
  uVar4 = _DAT_01c70f6c;
  uVar2 = _DAT_01c70f64;
  uVar3 = _DAT_01c70f68;
  if (color_mode != -2) {
    if (color_mode < 0) {
      _DAT_006af578 = 0xffff;
      _DAT_006af57c = 0xffff;
      _DAT_006af574 = 0xffff;
      goto LAB_004912b7;
    }
    iVar5 = color_mode * 3;
    uVar4 = (uint)g_SourcePaletteData[iVar5 + 2];
    uVar2 = (uint)g_SourcePaletteData[iVar5];
    uVar3 = (uint)g_SourcePaletteData[iVar5 + 1];
  }
  _DAT_006af578 = uVar3 << 8;
  _DAT_006af574 = uVar2 << 8;
  _DAT_006af57c = uVar4 << 8;
LAB_004912b7:
  DAT_006af55c = 0x10000;
  DAT_006af560 = 0x10000;
  puVar7 = &DAT_006af554;
  puVar10 = &DAT_006af584;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar10 = *puVar7;
    puVar7 = puVar7 + (uint)bVar13 * -2 + 1;
    puVar10 = puVar10 + (uint)bVar13 * -2 + 1;
  }
  puVar7 = &DAT_006af554;
  puVar10 = &DAT_006af5b4;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar10 = *puVar7;
    puVar7 = puVar7 + (uint)bVar13 * -2 + 1;
    puVar10 = puVar10 + (uint)bVar13 * -2 + 1;
  }
  puVar7 = &DAT_006af554;
  puVar10 = &DAT_006af5e4;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar10 = *puVar7;
    puVar7 = puVar7 + (uint)bVar13 * -2 + 1;
    puVar10 = puVar10 + (uint)bVar13 * -2 + 1;
  }
  local_20 = x * 0x10000 + -0x1000;
  iVar5 = (right_x + 1) * 0x10000;
  iVar8 = iVar5 + 0x1000;
  iVar11 = (bottom_y + 1) * 0x10000;
  local_24 = y * 0x10000 + -0x1000;
  iVar12 = iVar11 + 0x1000;
  if (g_UseExternalRenderer == 0) {
    iVar12 = iVar11 + 0x9000;
    iVar8 = iVar5 + 0x9000;
  }
  DAT_006af554 = (uint)
                 ((longlong)
                  ((((longlong)(local_20 - g_Projection.center_x_fixed) & 0xffffffffffffU) >> 0x10)
                   << 0x20 |
                  (longlong)(local_20 - g_Projection.center_x_fixed) * 0x10000 & 0xffffffffU) /
                 (longlong)g_Projection.half_width_fixed);
  DAT_006af558 = (uint)
                 ((longlong)
                  ((((longlong)(local_24 - g_Projection.center_y_fixed) & 0xffffffffffffU) >> 0x10)
                   << 0x20 |
                  (longlong)(local_24 - g_Projection.center_y_fixed) * 0x10000 & 0xffffffffU) /
                 (longlong)g_Projection.neg_half_height_fixed);
  DAT_006af584 = (uint)
                 ((longlong)
                  ((((longlong)(iVar8 - g_Projection.center_x_fixed) & 0xffffffffffffU) >> 0x10) <<
                   0x20 | (longlong)(iVar8 - g_Projection.center_x_fixed) * 0x10000 & 0xffffffffU) /
                 (longlong)g_Projection.half_width_fixed);
  DAT_006af588 = (uint)
                 ((longlong)
                  ((((longlong)(local_24 - g_Projection.center_y_fixed) & 0xffffffffffffU) >> 0x10)
                   << 0x20 |
                  (longlong)(local_24 - g_Projection.center_y_fixed) * 0x10000 & 0xffffffffU) /
                 (longlong)g_Projection.neg_half_height_fixed);
  DAT_006af5b4 = (uint)
                 ((longlong)
                  ((((longlong)(iVar8 - g_Projection.center_x_fixed) & 0xffffffffffffU) >> 0x10) <<
                   0x20 | (longlong)(iVar8 - g_Projection.center_x_fixed) * 0x10000 & 0xffffffffU) /
                 (longlong)g_Projection.half_width_fixed);
  DAT_006af5b8 = (uint)
                 ((longlong)
                  ((((longlong)(iVar12 - g_Projection.center_y_fixed) & 0xffffffffffffU) >> 0x10) <<
                   0x20 | (longlong)(iVar12 - g_Projection.center_y_fixed) * 0x10000 & 0xffffffffU)
                 / (longlong)g_Projection.neg_half_height_fixed);
  DAT_006af5e4 = (uint)
                 ((longlong)
                  ((((longlong)(local_20 - g_Projection.center_x_fixed) & 0xffffffffffffU) >> 0x10)
                   << 0x20 |
                  (longlong)(local_20 - g_Projection.center_x_fixed) * 0x10000 & 0xffffffffU) /
                 (longlong)g_Projection.half_width_fixed);
  DAT_006af5e8 = (uint)
                 ((longlong)
                  ((((longlong)(iVar12 - g_Projection.center_y_fixed) & 0xffffffffffffU) >> 0x10) <<
                   0x20 | (longlong)(iVar12 - g_Projection.center_y_fixed) * 0x10000 & 0xffffffffU)
                 / (longlong)g_Projection.neg_half_height_fixed);
  engine_matrix_c_projectCachedPoint_FUN_004cd240(0x4e1c);
  engine_matrix_c_projectCachedPoint_FUN_004cd240(local_14);
  engine_matrix_c_projectCachedPoint_FUN_004cd240(0x4e1e);
  engine_matrix_c_projectCachedPoint_FUN_004cd240(local_1c);
  local_2c = this_ptr->bitmap_widths[this_ptr->char_bitmap_index[character_code]];
  iVar11 = (int)this_ptr->char_positions[character_code] -
           (int)this_ptr->bitmap_data[this_ptr->char_bitmap_index[character_code]];
  iVar5 = (iVar11 % local_2c) * 0x10000 + -0x1000;
  iVar11 = (iVar11 / local_2c) * 0x10000 + -0x1000;
  DAT_006af5cc = (iVar5 + iVar8) - local_20;
  iVar8 = (iVar11 + iVar12) - local_24;
  if (g_UseExternalRenderer == 0) {
    iVar8 = iVar8 + 0x8000;
    DAT_006af5cc = DAT_006af5cc + 0x8000;
  }
  (&DAT_005c502c)[local_18 * 0xc] = iVar5;
  *(int *)(&DAT_005c5030 + local_18 * 0x30) = iVar11;
  local_28 = local_14;
  (&DAT_005c502c)[local_14 * 0xc] = DAT_006af5cc;
  *(int *)(&DAT_005c5030 + local_14 * 0x30) = iVar11;
  local_34 = 0x4e1e;
  local_54.surface_normal.D.i = 0;
  DAT_006af5d0 = iVar8;
  (&DAT_005c502c)[local_1c * 0xc] = iVar5;
  local_54.base.count = 4;
  *(int *)(&DAT_005c5030 + local_1c * 0x30) = iVar8;
  local_54.surface_normal.C.i = 0;
  local_3c = local_18;
  local_54.surface_normal.B.i = 0;
  local_38 = local_14;
  local_54.surface_normal.A.i = 0;
  local_30 = local_1c;
  engine_3d_c_setRenderAlpha_FUN_00408370(0xffff);
  if (_DAT_01c02584 == 0) {
    iVar5 = 0x207;
  }
  else {
    iVar5 = 0x227;
  }
  engine_3d_c_renderPolygonWithRenderFlags_FUN_00408c10(&local_54,iVar5,0);
  return;
}
