// Name: shape_quantize.cpp_CColorQuantizer_mapScanlineToPalette_FUN_005556f0
// Address: 005556f0
// Address Range: [[005556f0, 00555a36]]
// Convention: __cdecl
// Signature: void shape_quantize.cpp_CColorQuantizer_mapScanlineToPalette_FUN_005556f0(CColorQuantizer * this_ptr, uchar * src_pixels, uchar * dest_indices, short start_x, short end_x, short num_palette_entries)

#include "nocturne.h"

void __cdecl
shape_quantize_cpp_CColorQuantizer_mapScanlineToPalette_FUN_005556f0
          (CColorQuantizer *this_ptr,uchar *src_pixels,uchar *dest_indices,short start_x,short end_x
          ,short num_palette_entries)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  SPaletteEntry *pSVar8;
  int unaff_EBX;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  int local_30;
  float local_28;
  
  local_30 = (int)start_x;
  uVar5 = shape_quantize_cpp_getAbsoluteValue_FUN_00556df0(end_x - local_30);
  src_pixels = src_pixels + local_30 * 3;
  while (end_x != local_30) {
    local_58 = (float)*src_pixels;
    local_50 = (float)src_pixels[1];
    local_54 = (float)src_pixels[2];
    local_4c = (float)src_pixels[2] * (float)0.11 +
               (float)src_pixels[1] * (float)0.58999999999999997 +
               (float)*src_pixels * (float)0.29999999999999999;
    if (0 < this_ptr->status) {
      iVar6 = this_ptr->serpentine_toggle + local_30;
      this_ptr->error_buffer_r[iVar6] = local_58;
      this_ptr->error_buffer_g[iVar6] = local_50;
      this_ptr->error_buffer_b[iVar6] = local_54;
      this_ptr->error_buffer_i[iVar6] = local_4c;
    }
    this_ptr->current_r = local_58;
    this_ptr->current_g = local_50;
    this_ptr->current_b = local_54;
    this_ptr->current_i = local_4c;
    if (0.0 <= local_58) {
      if ((float)255 < local_58) {
        local_58 = 255.0;
      }
    }
    else {
      local_58 = 0.0;
    }
    if (0.0 <= local_50) {
      if ((float)255 < local_50) {
        local_50 = 255.0;
      }
    }
    else {
      local_50 = 0.0;
    }
    if (0.0 <= local_54) {
      if ((float)255 < local_54) {
        local_54 = 255.0;
      }
    }
    else {
      local_54 = 0.0;
    }
    if (0.0 <= local_4c) {
      if ((float)255 < local_4c) {
        local_4c = 255.0;
      }
    }
    else {
      local_4c = 0.0;
    }
    local_28 = 9999.0;
    iVar6 = 0;
    pSVar8 = this_ptr->palette;
    while (iVar7 = iVar6, iVar7 < num_palette_entries) {
      fVar1 = pSVar8->r - local_58;
      fVar4 = pSVar8->g - local_50;
      fVar3 = pSVar8->b - local_54;
      fVar2 = pSVar8->intensity - local_4c;
      fVar1 = fVar2 * fVar2 * (float)0.14999999999999999 +
              fVar3 * fVar3 * (float)0.11 +
              fVar4 * fVar4 * (float)0.58999999999999997 + fVar1 * fVar1 * (float)0.29999999999999999;
      if (fVar1 < local_28) {
        pSVar8 = pSVar8 + 1;
        iVar6 = iVar7 + 1;
        unaff_EBX = iVar7;
        local_28 = fVar1;
      }
      else {
        pSVar8 = pSVar8 + 1;
        iVar6 = iVar7 + 1;
      }
    }
    dest_indices[local_30] = (uchar)unaff_EBX;
    if (start_x < end_x) {
      iVar6 = 1;
    }
    else {
      iVar6 = -1;
    }
    local_30 = local_30 + iVar6;
    if (start_x < end_x) {
      src_pixels = src_pixels + 3;
    }
    else {
      src_pixels = src_pixels + -3;
    }
  }
  this_ptr->serpentine_toggle = this_ptr->serpentine_toggle ^ uVar5;
  if (-1 < this_ptr->status) {
    this_ptr->status = this_ptr->status ^ uVar5;
    return;
  }
  this_ptr->status = 0;
  return;
}
