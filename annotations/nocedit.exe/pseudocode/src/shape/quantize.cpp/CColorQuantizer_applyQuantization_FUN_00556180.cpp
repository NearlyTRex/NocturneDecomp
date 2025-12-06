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
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uchar *puVar8;
  char *pcVar9;
  byte bVar10;
  char *pcVar11;
  CBitmap *pCVar12;
  uchar *puVar13;
  uchar *puVar14;
  uchar *puVar15;
  
  bVar10 = 0;
  iVar2 = shape_quantize_cpp_CColorQuantizer_errorDiffusionBuffers_FUN_00555500
                    (this_ptr,(uint)(ushort)(*bitmap_ptr)->width);
  if (iVar2 == 0) {
    return 0;
  }
  pCVar3 = (CBitmap *)
           shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x28,"..\\shape\\quantize.cpp",900);
  if (pCVar3 != (CBitmap *)0x0) {
    pCVar3 = shape_quantize_cpp_CBitmap_ctor_FUN_00556a00(pCVar3);
  }
  puVar14 = (uchar *)0x0;
  puVar13 = (uchar *)0x0;
  do {
    uVar5 = (uint)(ushort)(*bitmap_ptr)->height;
    if ((int)uVar5 <= (int)puVar14) {
      pCVar12 = pCVar3;
      crt_string_c_strncpy_FUN_00600f40(pCVar3->field0_0x0,(*bitmap_ptr)->field0_0x0,0x14);
      pcVar11 = this_ptr->output_region;
      pcVar9 = (char *)pCVar3->palette;
      for (iVar2 = 0xc0; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(uint *)pcVar9 = *(uint *)pcVar11;
        pcVar11 = pcVar11 + (uint)bVar10 * -8 + 4;
        pcVar9 = pcVar9 + (uint)bVar10 * -8 + 4;
      }
      for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pcVar9 = *pcVar11;
        pcVar11 = pcVar11 + (uint)bVar10 * -2 + 1;
        pcVar9 = pcVar9 + (uint)bVar10 * -2 + 1;
      }
      g_CurrentDebugFilename = "..\\shape\\quantize.cpp";
      g_CurrentDebugLine = 0x3a1;
      if (*bitmap_ptr != (CBitmap *)0x0) {
        pCVar3 = shape_quantize_cpp_CBitmap_dtor_FUN_00556c20(*bitmap_ptr);
        shape_memdbg_cpp_debugFree_FUN_0050f210(pCVar3);
      }
      *bitmap_ptr = pCVar12;
      return 1;
    }
    puVar15 = puVar14;
    if (this_ptr->progress_callback != (CColorQuantizer_ProgressCallback *)0x0) {
      pcVar11 = "Phase 3";
      iVar2 = (*this_ptr->progress_callback)("Phase 3",uVar5,(int)puVar14);
      puVar13 = puVar14;
      if (iVar2 != 0) {
        g_CurrentDebugLine = 0x38d;
        g_CurrentDebugFilename = "..\\shape\\quantize.cpp";
        if ((CBitmap *)pcVar11 != (CBitmap *)0x0) {
          pCVar3 = shape_quantize_cpp_CBitmap_dtor_FUN_00556c20((CBitmap *)pcVar11);
          shape_memdbg_cpp_debugFree_FUN_0050f210(pCVar3);
        }
        return 0;
      }
    }
    uVar5 = (uint)(ushort)(*bitmap_ptr)->width * 3;
    puVar6 = *(uint **)((int)(*bitmap_ptr)->row_table + (int)puVar13);
    puVar7 = (uint *)this_ptr->scanline_buffer;
    for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + (uint)bVar10 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(byte *)puVar7 = *(byte *)puVar6;
      puVar6 = (uint *)((int)puVar6 + (uint)bVar10 * -2 + 1);
      puVar7 = (uint *)((int)puVar7 + (uint)bVar10 * -2 + 1);
    }
    if ((int)puVar15 % 2 == 0) {
      start_x = (*bitmap_ptr)->width + -1;
      puVar13 = (uchar *)0xffffffff;
      pCVar3 = (CBitmap *)(int)start_x;
      shape_quantize_cpp_CColorQuantizer_mapScanlineToPalette_FUN_005556f0
                (this_ptr,(uchar *)this_ptr->scanline_buffer,this_ptr->flags_buffer,start_x,-1,
                 (short)((uint)*(uint *)((int)&this_ptr->current_pixel_index + 2) >> 0x10));
    }
    else {
      puVar13 = (uchar *)(int)(*bitmap_ptr)->width;
      pCVar3 = (CBitmap *)0x0;
      shape_quantize_cpp_CColorQuantizer_mapScanlineToPalette_FUN_005556f0
                (this_ptr,(uchar *)this_ptr->scanline_buffer,this_ptr->flags_buffer,0,
                 (*bitmap_ptr)->width,
                 (short)((uint)*(uint *)((int)&this_ptr->current_pixel_index + 2) >> 0x10));
    }
    uVar1 = (*bitmap_ptr)->width;
    puVar14 = this_ptr->flags_buffer;
    puVar8 = puVar13;
    for (uVar5 = (uint)(uVar1 >> 2); uVar5 != 0; uVar5 = uVar5 - 1) {
      *(uint *)puVar8 = *(uint *)puVar14;
      puVar14 = puVar14 + (uint)bVar10 * -8 + 4;
      puVar8 = puVar8 + (uint)bVar10 * -8 + 4;
    }
    for (uVar5 = (byte)uVar1 & 0xffffff03; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = *puVar14;
      puVar14 = puVar14 + (uint)bVar10 * -2 + 1;
      puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
    }
    puVar14 = puVar15 + 1;
    puVar13 = puVar13 + 4;
  } while( true );
}
