// Name: shape_quantize.cpp_CColorQuantizer_applyQuantization_FUN_00556180
// Address: 00556180
// Address Range: [[00556180, 005563c2]]
// Convention: __cdecl
// Signature: int __cdecl shape_quantize_cpp_CColorQuantizer_applyQuantization_FUN_00556180 (CColorQuantizer *this_ptr,CBitmap **bitmap_ptr)

#include "nocturne.h"

/* WARNING: Unable to track spacebase fully for stack */

int __cdecl
shape_quantize_cpp_CColorQuantizer_applyQuantization_FUN_00556180
          (CColorQuantizer *this_ptr,CBitmap **bitmap_ptr)

{
  short sVar1;
  ushort uVar2;
  CColorQuantizer_ProgressCallback *pCVar3;
  CBitmap **ppCVar4;
  int iVar5;
  CBitmap *pCVar6;
  uint uVar7;
  uint uVar8;
  CBitmap **ppCVar9;
  uint *puVar10;
  uchar *puVar11;
  char *pcVar12;
  uint *puVar13;
  char *pcVar14;
  byte bVar15;
  CBitmap *local_20;
  uchar *local_1c;
  int local_18;
  int local_14;
  
  bVar15 = 0;
  iVar5 = shape_quantize_cpp_CColorQuantizer_errorDiffusionBuffers_FUN_00555500
                    (this_ptr,(uint)(ushort)(*bitmap_ptr)->width);
  if (iVar5 == 0) {
    return 0;
  }
  pCVar6 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x28,"..\\shape\\quantize.cpp",900);
  local_20 = (CBitmap *)0x0;
  if (pCVar6 != (CBitmap *)0x0) {
    local_20 = shape_quantize_cpp_CBitmap_ctor_FUN_00556a00(pCVar6);
  }
  ppCVar9 = &local_20;
  local_14 = 0;
  local_18 = 0;
  local_1c = *local_20->row_table;
  do {
    pCVar6 = *bitmap_ptr;
    uVar8 = (uint)(ushort)pCVar6->height;
    if ((int)uVar8 <= local_14) {
      ppCVar9[-1] = (CBitmap *)0x14;
      ppCVar9[-2] = pCVar6;
      pCVar6 = local_20;
      ppCVar9[-3] = local_20;
      ppCVar9[-4] = (CBitmap *)0x556362;
      _strncpy(ppCVar9[-3]->unk,ppCVar9[-2]->unk,(SIZE_T)ppCVar9[-1]);
      pcVar14 = pCVar6->palette;
      ppCVar9[-1] = (CBitmap *)pcVar14;
      pcVar12 = this_ptr->output_region;
      for (iVar5 = 0xc0; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(uint *)pcVar14 = *(uint *)pcVar12;
        pcVar12 = pcVar12 + (uint)bVar15 * -8 + 4;
        pcVar14 = pcVar14 + (uint)bVar15 * -8 + 4;
      }
      for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
        *pcVar14 = *pcVar12;
        pcVar12 = pcVar12 + (uint)bVar15 * -2 + 1;
        pcVar14 = pcVar14 + (uint)bVar15 * -2 + 1;
      }
      g_CurrentDebugFilename = "..\\shape\\quantize.cpp";
      pCVar6 = *bitmap_ptr;
      g_CurrentDebugLine = 0x3a1;
      if (pCVar6 != (CBitmap *)0x0) {
        ppCVar9[-1] = (CBitmap *)0x0;
        ppCVar9[-2] = pCVar6;
        ppCVar9[-3] = (CBitmap *)0x5563a3;
        pCVar6 = shape_quantize_cpp_CBitmap_dtor_FUN_00556c20(ppCVar9[-2]);
        ppCVar9[-1] = pCVar6;
        ppCVar9[-2] = (CBitmap *)0x5563ac;
        shape_memdbg_cpp_debugFree_FUN_0050f210(ppCVar9[-1]);
      }
      *bitmap_ptr = local_20;
      return 1;
    }
    ppCVar4 = ppCVar9;
    if (this_ptr->progress_callback != (CColorQuantizer_ProgressCallback *)0x0) {
      ppCVar9[-1] = (CBitmap *)local_14;
      ppCVar9[-2] = (CBitmap *)uVar8;
      ppCVar9[-3] = (CBitmap *)"Phase 3";
      pCVar3 = this_ptr->progress_callback;
      ppCVar9[-4] = (CBitmap *)0x55622b;
      iVar5 = (*pCVar3)(ppCVar9[-3]->unk,(int)ppCVar9[-2],(int)ppCVar9[-1]);
      ppCVar4 = ppCVar9 + 3;
      if (iVar5 != 0) {
        g_CurrentDebugLine = 0x38d;
        g_CurrentDebugFilename = "..\\shape\\quantize.cpp";
        if (local_20 != (CBitmap *)0x0) {
          ppCVar9[2] = (CBitmap *)0x0;
          ppCVar9[1] = local_20;
          *ppCVar9 = (CBitmap *)0x55625b;
          pCVar6 = shape_quantize_cpp_CBitmap_dtor_FUN_00556c20(ppCVar9[1]);
          ppCVar9[2] = pCVar6;
          ppCVar9[1] = (CBitmap *)0x556264;
          shape_memdbg_cpp_debugFree_FUN_0050f210(ppCVar9[2]);
        }
        return 0;
      }
    }
    ppCVar9 = ppCVar4;
    uVar8 = (uint)(ushort)(*bitmap_ptr)->width * 3;
    puVar10 = *(uint **)((int)(*bitmap_ptr)->row_table + local_18);
    puVar13 = this_ptr->scanline_buffer;
    *(uint **)((int)ppCVar9 + -4) = puVar13;
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar13 = *puVar10;
      puVar10 = puVar10 + (uint)bVar15 * -2 + 1;
      puVar13 = puVar13 + (uint)bVar15 * -2 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(byte *)puVar13 = *(byte *)puVar10;
      puVar10 = (uint *)((int)puVar10 + (uint)bVar15 * -2 + 1);
      puVar13 = (uint *)((int)puVar13 + (uint)bVar15 * -2 + 1);
    }
    if (local_14 % 2 == 0) {
      *(int *)((int)ppCVar9 + -4) = *(int *)((int)&this_ptr->current_pixel_index + 2) >> 0x10;
      sVar1 = (*bitmap_ptr)->width;
      *(uint *)((int)ppCVar9 + -8) = 0xffffffff;
      *(int *)((int)ppCVar9 + -0xc) = (int)(short)(sVar1 + -1);
      *(uchar **)((int)ppCVar9 + -0x10) = this_ptr->flags_buffer;
      *(void **)((int)ppCVar9 + -0x14) = this_ptr->scanline_buffer;
      *(CColorQuantizer **)((int)ppCVar9 + -0x18) = this_ptr;
      *(uint *)((int)ppCVar9 + -0x1c) = 0x556301;
      shape_quantize_cpp_CColorQuantizer_mapScanlineToPalette_FUN_005556f0
                (*(CColorQuantizer **)((int)ppCVar9 + -0x18),*(uchar **)((int)ppCVar9 + -0x14),
                 *(uchar **)((int)ppCVar9 + -0x10),*(short *)((int)ppCVar9 + -0xc),
                 *(short *)((int)ppCVar9 + -8),*(short *)((int)ppCVar9 + -4));
    }
    else {
      *(int *)((int)ppCVar9 + -4) = *(int *)((int)&this_ptr->current_pixel_index + 2) >> 0x10;
      *(int *)((int)ppCVar9 + -8) = (int)(*bitmap_ptr)->width;
      *(uint *)((int)ppCVar9 + -0xc) = 0;
      *(uchar **)((int)ppCVar9 + -0x10) = this_ptr->flags_buffer;
      *(void **)((int)ppCVar9 + -0x14) = this_ptr->scanline_buffer;
      *(CColorQuantizer **)((int)ppCVar9 + -0x18) = this_ptr;
      *(uint *)((int)ppCVar9 + -0x1c) = 0x5562d6;
      shape_quantize_cpp_CColorQuantizer_mapScanlineToPalette_FUN_005556f0
                (*(CColorQuantizer **)((int)ppCVar9 + -0x18),*(uchar **)((int)ppCVar9 + -0x14),
                 *(uchar **)((int)ppCVar9 + -0x10),*(short *)((int)ppCVar9 + -0xc),
                 *(short *)((int)ppCVar9 + -8),*(short *)((int)ppCVar9 + -4));
    }
    uVar2 = (*bitmap_ptr)->width;
    puVar11 = this_ptr->flags_buffer;
    *(uchar **)((int)ppCVar9 + -4) = local_1c;
    for (uVar8 = (uint)(uVar2 >> 2); uVar8 != 0; uVar8 = uVar8 - 1) {
      *(uint *)local_1c = *(uint *)puVar11;
      puVar11 = puVar11 + (uint)bVar15 * -8 + 4;
      local_1c = local_1c + (uint)bVar15 * -8 + 4;
    }
    for (uVar8 = (byte)uVar2 & 0xffffff03; uVar8 != 0; uVar8 = uVar8 - 1) {
      *local_1c = *puVar11;
      puVar11 = puVar11 + (uint)bVar15 * -2 + 1;
      local_1c = local_1c + (uint)bVar15 * -2 + 1;
    }
    local_1c = (uchar *)(*(int *)((int)ppCVar9 + -4) + (uint)(ushort)(*bitmap_ptr)->width);
    local_14 = local_14 + 1;
    local_18 = local_18 + 4;
  } while( true );
}
