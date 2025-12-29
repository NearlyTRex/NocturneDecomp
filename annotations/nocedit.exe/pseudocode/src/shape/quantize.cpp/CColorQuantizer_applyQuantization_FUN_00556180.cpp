// Name: shape_quantize.cpp_CColorQuantizer_applyQuantization_FUN_00556180
// Address: 00556180
// Address Range: [[00556180, 005563c2]]
// Convention: __cdecl
// Signature: int shape_quantize.cpp_CColorQuantizer_applyQuantization_FUN_00556180(CColorQuantizer * this_ptr, CBitmap * * bitmap_ptr)

#include "nocturne.h"

int __cdecl
shape_quantize_cpp_CColorQuantizer_applyQuantization_FUN_00556180
          (CColorQuantizer *this_ptr,CBitmap **bitmap_ptr)

{
  ushort uVar1;
  short start_x;
  int iVar2;
  CBitmap *pCVar3;
  CBitmap *pCVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uchar *puVar9;
  char *pcVar10;
  byte bVar11;
  char *pcVar12;
  uchar *puVar13;
  uchar *puVar14;
  uchar *puVar15;
  
  bVar11 = 0;
  iVar2 = shape_quantize_cpp_CColorQuantizer_errorDiffusionBuffers_FUN_00555500
                    (this_ptr,(uint)(ushort)(*bitmap_ptr)->width);
  if (iVar2 == 0) {
    return 0;
  }
  pCVar3 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x28,"..\\shape\\quantize.cpp",900);
  pCVar4 = (CBitmap *)0x0;
  if (pCVar3 != (CBitmap *)0x0) {
    pCVar4 = shape_quantize_cpp_CBitmap_ctor_FUN_00556a00(pCVar3);
  }
  puVar14 = (uchar *)0x0;
  puVar13 = (uchar *)0x0;
  do {
    uVar6 = (uint)(ushort)(*bitmap_ptr)->height;
    if ((int)uVar6 <= (int)puVar14) {
      pCVar3 = pCVar4;
      crt_string_c_strncpy_FUN_00600f40(pCVar4->field0_0x0,(*bitmap_ptr)->field0_0x0,0x14);
      pcVar12 = this_ptr->output_region;
      pcVar10 = pCVar4->palette;
      for (iVar2 = 0xc0; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(uint *)pcVar10 = *(uint *)pcVar12;
        pcVar12 = pcVar12 + (uint)bVar11 * -8 + 4;
        pcVar10 = pcVar10 + (uint)bVar11 * -8 + 4;
      }
      for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pcVar10 = *pcVar12;
        pcVar12 = pcVar12 + (uint)bVar11 * -2 + 1;
        pcVar10 = pcVar10 + (uint)bVar11 * -2 + 1;
      }
      g_CurrentDebugFilename = "..\\shape\\quantize.cpp";
      g_CurrentDebugLine = 0x3a1;
      if (*bitmap_ptr != (CBitmap *)0x0) {
        pCVar4 = shape_quantize_cpp_CBitmap_dtor_FUN_00556c20(*bitmap_ptr);
        shape_memdbg_cpp_debugFree_FUN_0050f210(pCVar4);
      }
      *bitmap_ptr = pCVar3;
      return 1;
    }
    puVar15 = puVar14;
    if (this_ptr->progress_callback != (CColorQuantizer_ProgressCallback *)0x0) {
      pcVar12 = "Phase 3";
      iVar2 = (*this_ptr->progress_callback)("Phase 3",uVar6,(int)puVar14);
      puVar13 = puVar14;
      if (iVar2 != 0) {
        g_CurrentDebugLine = 0x38d;
        g_CurrentDebugFilename = "..\\shape\\quantize.cpp";
        if ((CBitmap *)pcVar12 != (CBitmap *)0x0) {
          pCVar4 = shape_quantize_cpp_CBitmap_dtor_FUN_00556c20((CBitmap *)pcVar12);
          shape_memdbg_cpp_debugFree_FUN_0050f210(pCVar4);
        }
        return 0;
      }
    }
    uVar6 = (uint)(ushort)(*bitmap_ptr)->width * 3;
    puVar7 = *(uint **)((int)(*bitmap_ptr)->row_table + (int)puVar13);
    puVar8 = this_ptr->scanline_buffer;
    for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
      puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(byte *)puVar8 = *(byte *)puVar7;
      puVar7 = (uint *)((int)puVar7 + (uint)bVar11 * -2 + 1);
      puVar8 = (uint *)((int)puVar8 + (uint)bVar11 * -2 + 1);
    }
    if ((int)puVar15 % 2 == 0) {
      start_x = (*bitmap_ptr)->width + -1;
      puVar13 = (uchar *)0xffffffff;
      pCVar4 = (CBitmap *)(int)start_x;
      shape_quantize_cpp_CColorQuantizer_mapScanlineToPalette_FUN_005556f0
                (this_ptr,this_ptr->scanline_buffer,this_ptr->flags_buffer,start_x,-1,
                 (short)((uint)*(uint *)((int)&this_ptr->current_pixel_index + 2) >> 0x10));
    }
    else {
      puVar13 = (uchar *)(int)(*bitmap_ptr)->width;
      pCVar4 = (CBitmap *)0x0;
      shape_quantize_cpp_CColorQuantizer_mapScanlineToPalette_FUN_005556f0
                (this_ptr,this_ptr->scanline_buffer,this_ptr->flags_buffer,0,(*bitmap_ptr)->width,
                 (short)((uint)*(uint *)((int)&this_ptr->current_pixel_index + 2) >> 0x10));
    }
    uVar1 = (*bitmap_ptr)->width;
    puVar14 = this_ptr->flags_buffer;
    puVar9 = puVar13;
    for (uVar6 = (uint)(uVar1 >> 2); uVar6 != 0; uVar6 = uVar6 - 1) {
      *(uint *)puVar9 = *(uint *)puVar14;
      puVar14 = puVar14 + (uint)bVar11 * -8 + 4;
      puVar9 = puVar9 + (uint)bVar11 * -8 + 4;
    }
    for (uVar6 = (byte)uVar1 & 0xffffff03; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *puVar14;
      puVar14 = puVar14 + (uint)bVar11 * -2 + 1;
      puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
    }
    puVar14 = puVar15 + 1;
    puVar13 = puVar13 + 4;
  } while( true );
}
