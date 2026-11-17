// Name: engine_font.cpp_CBitFont_drawTextAccelerated_FUN_004c47f0
// Address: 004c47f0
// Address Range: [[004c47f0, 004c4b30]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_CBitFont_drawTextAccelerated_FUN_004c47f0(CBitFont *this_ptr,char *text,int x,int y,int color_mode)

#include "nocturne.h"

int __cdecl engine_font_cpp_CBitFont_drawTextAccelerated_FUN_004c47f0(CBitFont *this_ptr,char *text,int x,int y,int color_mode)

{
  int iVar1;
  int iVar2;
  float fVar3;
  short sVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  CBitFont *this_ptr_00;
  int iVar8;
  float *pfVar9;
  short *psVar10;
  uint uVar11;
  float fVar12;
  int iVar13;
  double dVar14;
  
  iVar8 = x;
  this_ptr_00 = this_ptr;
  if (color_mode == -2) {
    uVar11 = g_ShadowColorRed << 0x10 | g_ShadowColorGreen << 8 | g_ShadowColorBlue;
  }
  else if (color_mode < 0) {
    uVar11 = 0xffffff;
  }
  else {
    iVar13 = color_mode * 3;
    uVar11 = (uint)g_UCHAR_ARRAY_01c4e9f8[iVar13 + 2] |
             (uint)g_UCHAR_ARRAY_01c4e9f8[iVar13 + 1] << 8 |
             (uint)g_UCHAR_ARRAY_01c4e9f8[iVar13] << 0x10;
  }
  dVar14 = round((double)(g_FLOAT_01d224c0 * 255.0f));
  fVar12 = (float)(uVar11 | (int)ROUND(dVar14) << 0x18);
  iVar13 = iVar8;
  while (uVar11 = (uint)(byte)this_ptr->bitmap_count, uVar11 != 0) {
    if (uVar11 == 0xd) {
      this_ptr = (CBitFont *)((int)&this_ptr->bitmap_count + 1);
    }
    else if (uVar11 == 10) {
      x = x + this_ptr_00->current_line_height + this_ptr_00->line_spacing;
      this_ptr = (CBitFont *)((int)&this_ptr->bitmap_count + 1);
      iVar13 = iVar8;
    }
    else if (uVar11 == 0x20) {
      iVar13 = iVar13 + this_ptr_00->char_widths[0x20] + this_ptr_00->char_spacing;
      this_ptr = (CBitFont *)((int)&this_ptr->bitmap_count + 1);
    }
    else {
      if ((999 < this_ptr_00->accel_vertex_count + 4) || (999 < this_ptr_00->accel_index_count + 6))
      {
        engine_font_cpp_CBitFont_flushAccelBatch_FUN_004c2750(this_ptr_00);
      }
      pfVar9 = (float *)(this_ptr_00->accel_vertex_count * 0x20 + (int)this_ptr_00->accel_vertices);
      fVar7 = (float)iVar13 + -0.5f;
      iVar1 = this_ptr_00->char_widths[uVar11];
      iVar2 = this_ptr_00->char_heights[uVar11];
      fVar6 = (float)x + -0.5f + (float)this_ptr_00->char_y_offsets[uVar11];
      *pfVar9 = fVar7;
      fVar5 = (float)iVar1 + fVar7 + 1.0;
      pfVar9[1] = fVar6;
      pfVar9[2] = this_ptr_00->accel_scale;
      fVar3 = this_ptr_00->accel_inv_scale;
      pfVar9[5] = 0.0;
      pfVar9[4] = fVar12;
      pfVar9[3] = fVar3;
      pfVar9[6] = this_ptr_00->char_uv_rects[uVar11][0];
      pfVar9[7] = this_ptr_00->char_uv_rects[uVar11][1];
      pfVar9[8] = fVar5;
      pfVar9[9] = fVar6;
      fVar6 = (float)iVar2 + fVar6 + 1.0;
      pfVar9[10] = this_ptr_00->accel_scale;
      fVar3 = this_ptr_00->accel_inv_scale;
      pfVar9[0xd] = 0.0;
      pfVar9[0xc] = fVar12;
      pfVar9[0xb] = fVar3;
      pfVar9[0xe] = this_ptr_00->char_uv_rects[uVar11][2];
      pfVar9[0xf] = this_ptr_00->char_uv_rects[uVar11][1];
      pfVar9[0x10] = fVar5;
      pfVar9[0x11] = fVar6;
      pfVar9[0x12] = this_ptr_00->accel_scale;
      pfVar9[0x13] = this_ptr_00->accel_inv_scale;
      pfVar9[0x14] = fVar12;
      pfVar9[0x15] = 0.0;
      pfVar9[0x16] = this_ptr_00->char_uv_rects[uVar11][2];
      fVar3 = this_ptr_00->char_uv_rects[uVar11][3];
      pfVar9[0x18] = fVar7;
      pfVar9[0x19] = fVar6;
      pfVar9[0x17] = fVar3;
      pfVar9[0x1a] = this_ptr_00->accel_scale;
      fVar3 = this_ptr_00->accel_inv_scale;
      pfVar9[0x1d] = 0.0;
      pfVar9[0x1c] = fVar12;
      pfVar9[0x1b] = fVar3;
      pfVar9[0x1e] = this_ptr_00->char_uv_rects[uVar11][0];
      pfVar9[0x1f] = this_ptr_00->char_uv_rects[uVar11][3];
      psVar10 = (short *)(this_ptr_00->accel_index_count * 2 + (int)this_ptr_00->accel_indices);
      sVar4 = (short)this_ptr_00->accel_vertex_count;
      *psVar10 = sVar4;
      psVar10[1] = sVar4 + 1;
      psVar10[2] = (short)this_ptr_00->accel_vertex_count + 2;
      sVar4 = (short)this_ptr_00->accel_vertex_count;
      psVar10[3] = sVar4;
      psVar10[4] = sVar4 + 2;
      psVar10[5] = (short)this_ptr_00->accel_vertex_count + 3;
      this_ptr_00->accel_vertex_count = this_ptr_00->accel_vertex_count + 4;
      this_ptr_00->accel_index_count = this_ptr_00->accel_index_count + 6;
      iVar13 = iVar13 + this_ptr_00->char_widths[(int)(uVar11 * 4) >> 2] + this_ptr_00->char_spacing
      ;
      this_ptr = (CBitFont *)((int)&this_ptr->bitmap_count + 1);
    }
  }
  return iVar13 - iVar8;
}
