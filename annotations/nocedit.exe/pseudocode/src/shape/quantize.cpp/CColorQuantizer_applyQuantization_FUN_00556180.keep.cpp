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
  int local_14;
  ushort uVar2;
  uint uVar8;

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
  if (local_20 == (CBitmap *)0x0) {
    return 0;
  }
  local_14 = 0;
  local_1c = (uchar *)*local_20->row_table;
  do {
    pCVar6 = *bitmap_ptr;
    uVar8 = (uint)(ushort)pCVar6->height;
    if ((int)uVar8 <= local_14) {
      _strncpy(local_20->name,pCVar6->name,0x14);
      memcpy(local_20->palette,this_ptr->output_region,0x300);
      g_CurrentDebugFilename = "..\\shape\\quantize.cpp";
      g_CurrentDebugLine = 0x3a1;
      pCVar6 = shape_quantize_cpp_CBitmap_dtor_FUN_00556c20(pCVar6,0);
      shape_memdbg_cpp_debugFreeChecked_FUN_0050f210(pCVar6);
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
    memcpy(this_ptr->scanline_buffer,(*bitmap_ptr)->row_table[local_14],uVar8);
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
    memcpy(local_1c,this_ptr->flags_buffer,uVar2);
    local_1c = local_1c + uVar2;
    local_14 = local_14 + 1;
  } while( true );
}
