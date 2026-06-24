// Name: shape_quantize.cpp_CColorQuantizer_generateSortedPalette_FUN_00555ff0
// Address: 00555ff0
// MANUAL RECONSTRUCTION
// Address Range: [[00555ff0, 00556178] [0060f3fe, 0060f469]]
// Convention: __cdecl
// Signature: int __cdecl shape_quantize_cpp_CColorQuantizer_generateSortedPalette_FUN_00555ff0(CColorQuantizer *this_ptr,uchar *output_buffer)

#include "nocturne.h"

int __cdecl shape_quantize_cpp_CColorQuantizer_generateSortedPalette_FUN_00555ff0(CColorQuantizer *this_ptr,uchar *output_buffer)

{
  float fVar1;
  float fVar7;
  float fVar8;
  uchar *puVar8;
  int iVar9;
  int iVar11;
  int iVar12;
  uchar local_14;
  float fVar2;
  float fVar3;
  short sVar1;
  SPaletteEntry tmp;
  
  iVar11 = 0;
  if (0 < this_ptr->num_colors) {
    fVar1 = (float)0.11;
    fVar7 = (float)0.29999999999999999;
    fVar8 = (float)0.58999999999999997;
    do {
      this_ptr->palette[iVar11].r = (float)this_ptr->boxes[iVar11].avg_red;
      this_ptr->palette[iVar11].g = (float)this_ptr->boxes[iVar11].avg_green;
      sVar1 = this_ptr->boxes[iVar11].avg_blue;
      fVar2 = this_ptr->palette[iVar11].g;
      this_ptr->palette_workspace[iVar11].r = 0.0;
      this_ptr->palette_workspace[iVar11].g = 0.0;
      fVar3 = this_ptr->palette[iVar11].r;
      this_ptr->palette_workspace[iVar11].b = 0.0;
      this_ptr->palette[iVar11].b = (float)sVar1;
      this_ptr->palette_workspace[iVar11].intensity = 0.0;
      this_ptr->palette[iVar11].intensity = (float)sVar1 * fVar1 + fVar3 * fVar7 + fVar2 * fVar8;
      iVar11 = iVar11 + 1;
    } while (iVar11 < this_ptr->num_colors);
  }
  iVar12 = 0;
  if (0 < this_ptr->num_colors) {
    do {
      iVar9 = 0;
      while (iVar9 < this_ptr->num_colors + -1) {
        if (this_ptr->palette[iVar9 + 1].intensity < this_ptr->palette[iVar9].intensity) {
          tmp = this_ptr->palette[iVar9];
          this_ptr->palette[iVar9] = this_ptr->palette[iVar9 + 1];
          this_ptr->palette[iVar9 + 1] = tmp;
        }
        iVar9 = iVar9 + 1;
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < this_ptr->num_colors);
  }
  puVar8 = (uchar *)this_ptr->num_colors;
  iVar12 = 0;
  if (0 < (int)puVar8) {
    do {
      puVar8 = output_buffer + 3;
      local_14 = (uchar)(int)ROUND(ROUND(this_ptr->palette[iVar12].r));
      output_buffer[2] = local_14;
      local_14 = (uchar)(int)ROUND(ROUND(this_ptr->palette[iVar12].g));
      output_buffer[1] = local_14;
      local_14 = (uchar)(int)ROUND(ROUND(this_ptr->palette[iVar12].b));
      *output_buffer = local_14;
      output_buffer = puVar8;
      iVar12 = iVar12 + 1;
    } while (iVar12 < this_ptr->num_colors);
  }
  return (int)puVar8;
}
