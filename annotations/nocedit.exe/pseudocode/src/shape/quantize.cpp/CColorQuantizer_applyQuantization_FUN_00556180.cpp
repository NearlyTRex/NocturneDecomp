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
  int iVar2;
  CBitmap *pCVar3;
  CBitmap *pCVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uchar *puVar8;
  char *pcVar9;
  uint *puVar10;
  uchar *puVar11;
  char *pcVar12;
  byte bVar13;
  uchar *local_1c;
  int local_18;
  int local_14;
  
  bVar13 = 0;
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
  local_14 = 0;
  local_1c = *pCVar4->row_table;
  local_18 = 0;
  do {
    uVar6 = (uint)(ushort)(*bitmap_ptr)->height;
    if ((int)uVar6 <= local_14) {
      crt_string_c_strncpy_FUN_00600f40(pCVar4->field0_0x0,(*bitmap_ptr)->field0_0x0,0x14);
      pcVar9 = this_ptr->output_region;
      pcVar12 = pCVar4->palette;
      for (iVar2 = 0xc0; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(uint *)pcVar12 = *(uint *)pcVar9;
        pcVar9 = pcVar9 + (uint)bVar13 * -8 + 4;
        pcVar12 = pcVar12 + (uint)bVar13 * -8 + 4;
      }
      for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pcVar12 = *pcVar9;
        pcVar9 = pcVar9 + (uint)bVar13 * -2 + 1;
        pcVar12 = pcVar12 + (uint)bVar13 * -2 + 1;
      }
      g_CurrentDebugFilename = "..\\shape\\quantize.cpp";
      g_CurrentDebugLine = 0x3a1;
      if (*bitmap_ptr != (CBitmap *)0x0) {
        pCVar3 = shape_quantize_cpp_CBitmap_dtor_FUN_00556c20(*bitmap_ptr);
        shape_memdbg_cpp_debugFree_FUN_0050f210(pCVar3);
      }
      *bitmap_ptr = pCVar4;
      return 1;
    }
    if (this_ptr->progress_callback != (CColorQuantizer_ProgressCallback *)0x0) {
      iVar2 = (*this_ptr->progress_callback)("Phase 3",uVar6,local_14);
      if (iVar2 != 0) {
        g_CurrentDebugLine = 0x38d;
        g_CurrentDebugFilename = "..\\shape\\quantize.cpp";
        if (pCVar4 != (CBitmap *)0x0) {
          pCVar4 = shape_quantize_cpp_CBitmap_dtor_FUN_00556c20(pCVar4);
          shape_memdbg_cpp_debugFree_FUN_0050f210(pCVar4);
        }
        return 0;
      }
    }
    uVar6 = (uint)(ushort)(*bitmap_ptr)->width * 3;
    puVar7 = *(uint **)((int)(*bitmap_ptr)->row_table + local_18);
    puVar10 = this_ptr->scanline_buffer;
    for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar10 = *puVar7;
      puVar7 = puVar7 + (uint)bVar13 * -2 + 1;
      puVar10 = puVar10 + (uint)bVar13 * -2 + 1;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(byte *)puVar10 = *(byte *)puVar7;
      puVar7 = (uint *)((int)puVar7 + (uint)bVar13 * -2 + 1);
      puVar10 = (uint *)((int)puVar10 + (uint)bVar13 * -2 + 1);
    }
    if (local_14 % 2 == 0) {
      shape_quantize_cpp_CColorQuantizer_mapScanlineToPalette_FUN_005556f0
                (this_ptr,this_ptr->scanline_buffer,this_ptr->flags_buffer,(*bitmap_ptr)->width + -1
                 ,-1,(short)((uint)*(uint *)((int)&this_ptr->current_pixel_index + 2) >> 0x10)
                );
    }
    else {
      shape_quantize_cpp_CColorQuantizer_mapScanlineToPalette_FUN_005556f0
                (this_ptr,this_ptr->scanline_buffer,this_ptr->flags_buffer,0,(*bitmap_ptr)->width,
                 (short)((uint)*(uint *)((int)&this_ptr->current_pixel_index + 2) >> 0x10));
    }
    uVar1 = (*bitmap_ptr)->width;
    puVar8 = this_ptr->flags_buffer;
    puVar11 = local_1c;
    for (uVar6 = (uint)(uVar1 >> 2); uVar6 != 0; uVar6 = uVar6 - 1) {
      *(uint *)puVar11 = *(uint *)puVar8;
      puVar8 = puVar8 + (uint)bVar13 * -8 + 4;
      puVar11 = puVar11 + (uint)bVar13 * -8 + 4;
    }
    for (uVar6 = (byte)uVar1 & 0xffffff03; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar11 = *puVar8;
      puVar8 = puVar8 + (uint)bVar13 * -2 + 1;
      puVar11 = puVar11 + (uint)bVar13 * -2 + 1;
    }
    local_14 = local_14 + 1;
    local_1c = local_1c + (ushort)(*bitmap_ptr)->width;
    local_18 = local_18 + 4;
  } while( true );
}
