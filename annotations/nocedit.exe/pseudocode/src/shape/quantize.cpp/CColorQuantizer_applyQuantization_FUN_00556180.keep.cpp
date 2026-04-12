// Name: shape_quantize.cpp_CColorQuantizer_applyQuantization_FUN_00556180
// Address: 00556180
// MANUAL RECONSTRUCTION
// Address Range: [[00556180, 005563c2]]
// Convention: __cdecl
// Signature: int __cdecl shape_quantize_cpp_CColorQuantizer_applyQuantization_FUN_00556180(CColorQuantizer *this_ptr,CBitmap **bitmap_ptr)

#include "nocturne.h"

int __cdecl shape_quantize_cpp_CColorQuantizer_applyQuantization_FUN_00556180(CColorQuantizer *this_ptr,CBitmap **bitmap_ptr)

{
  int iVar5;
  CBitmap *pCVar6;
  CBitmap *local_20;
  uchar *local_1c;
  int local_18;
  int local_14;
  ushort uVar2;
  uint uVar7;
  uint uVar8;
  uchar *puVar11;
  char *pcVar12;
  char *pcVar14;
  uint *puVar10;
  uint *puVar13;

  iVar5 = shape_quantize_cpp_CColorQuantizer_errorDiffusionBuffers_FUN_00555500
                    (this_ptr,(uint)(ushort)(*bitmap_ptr)->width);
  if (iVar5 == 0) {
    return 0;
  }
  pCVar6 = (CBitmap *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0(0x28,"..\\shape\\quantize.cpp",900);
  local_20 = (CBitmap *)0x0;
  if (pCVar6 != (CBitmap *)0x0) {
    local_20 = shape_quantize_cpp_CBitmap_ctor_FUN_00556a00
                         (pCVar6,(uint)(ushort)(*bitmap_ptr)->width,
                          (uint)(ushort)(*bitmap_ptr)->height,8);
  }
  local_14 = 0;
  local_18 = 0;
  local_1c = (uchar *)*local_20->row_table;
  do {
    pCVar6 = *bitmap_ptr;
    uVar8 = (uint)(ushort)pCVar6->height;
    if ((int)uVar8 <= local_14) {
      _strncpy(local_20->name,pCVar6->name,0x14);
      pcVar14 = (char *)local_20->palette;
      pcVar12 = this_ptr->output_region;
      for (iVar5 = 0xc0; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(uint *)pcVar14 = *(uint *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar14 = pcVar14 + 4;
      }
      g_CurrentDebugFilename = "..\\shape\\quantize.cpp";
      g_CurrentDebugLine = 0x3a1;
      if (pCVar6 != (CBitmap *)0x0) {
        pCVar6 = shape_quantize_cpp_CBitmap_dtor_FUN_00556c20(pCVar6,0);
        shape_memdbg_cpp_debugFreeChecked_FUN_0050f210(pCVar6);
      }
      *bitmap_ptr = local_20;
      return 1;
    }
    if (this_ptr->progress_callback != (CColorQuantizer_ProgressCallback *)0x0) {
      iVar5 = (*this_ptr->progress_callback)("Phase 3",uVar8,local_14);
      if (iVar5 != 0) {
        g_CurrentDebugLine = 0x38d;
        g_CurrentDebugFilename = "..\\shape\\quantize.cpp";
        if (local_20 != (CBitmap *)0x0) {
          pCVar6 = shape_quantize_cpp_CBitmap_dtor_FUN_00556c20(local_20,0);
          shape_memdbg_cpp_debugFreeChecked_FUN_0050f210(pCVar6);
        }
        return 0;
      }
    }
    uVar8 = (uint)(ushort)(*bitmap_ptr)->width * 3;
    puVar10 = *(uint **)((int)(*bitmap_ptr)->row_table + local_18);
    puVar13 = (uint *)this_ptr->scanline_buffer;
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar13 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar13 = puVar13 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(byte *)puVar13 = *(byte *)puVar10;
      puVar10 = (uint *)((int)puVar10 + 1);
      puVar13 = (uint *)((int)puVar13 + 1);
    }
    if (local_14 % 2 == 0) {
      shape_quantize_cpp_CColorQuantizer_mapScanlineToPalette_FUN_005556f0
                (this_ptr,(uchar *)this_ptr->scanline_buffer,this_ptr->flags_buffer,
                 (short)((*bitmap_ptr)->width + -1),-1,(short)this_ptr->num_colors);
    }
    else {
      shape_quantize_cpp_CColorQuantizer_mapScanlineToPalette_FUN_005556f0
                (this_ptr,(uchar *)this_ptr->scanline_buffer,this_ptr->flags_buffer,
                 0,(*bitmap_ptr)->width,(short)this_ptr->num_colors);
    }
    uVar2 = (*bitmap_ptr)->width;
    puVar11 = this_ptr->flags_buffer;
    for (uVar8 = (uint)(uVar2 >> 2); uVar8 != 0; uVar8 = uVar8 - 1) {
      *(uint *)local_1c = *(uint *)puVar11;
      puVar11 = puVar11 + 4;
      local_1c = local_1c + 4;
    }
    for (uVar8 = (byte)uVar2 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *local_1c = *puVar11;
      puVar11 = puVar11 + 1;
      local_1c = local_1c + 1;
    }
    local_14 = local_14 + 1;
    local_18 = local_18 + 4;
  } while( true );
}
