// Name: shape_quantize.cpp_CColorQuantizer_importBitmap_FUN_00554a50
// Address: 00554a50
// Address Range: [[00554a50, 00554cb0]]
// Convention: __cdecl
// Signature: int shape_quantize.cpp_CColorQuantizer_importBitmap_FUN_00554a50(CColorQuantizer * this_ptr, CBitmap * bitmap)

#include "nocturne.h"

int __cdecl
shape_quantize_cpp_CColorQuantizer_importBitmap_FUN_00554a50
          (CColorQuantizer *this_ptr,CBitmap *bitmap)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  void *pvVar4;
  uint uVar5;
  ushort extraout_CX;
  uint uVar6;
  int extraout_EDX;
  uint *puVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  byte bVar11;
  double dVar12;
  int local_28;
  int local_24;
  byte local_20;
  ushort local_18;
  ushort local_14;
  
  bVar11 = 0;
  uVar2 = bitmap->width;
  uVar3 = bitmap->bytes_per_row;
  if (bitmap->bit_depth != '\x18') {
    return 0;
  }
  iVar9 = (uint)(ushort)bitmap->height * (uint)uVar2 * 4;
  pvVar4 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     (this_ptr->pixel_data,this_ptr->pixel_count + iVar9,
                      "..\\shape\\quantize.cpp",0x73);
  if (pvVar4 != (void *)0x0) {
    this_ptr->pixel_data = pvVar4;
    this_ptr->pixel_count = this_ptr->pixel_count + iVar9;
    pvVar4 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                       (this_ptr->scanline_buffer,(uint)uVar3,"..\\shape\\quantize.cpp",0x73);
    if (pvVar4 == (void *)0x0) {
      g_CurrentFilename = "..\\shape\\quantize.cpp";
      g_CurrentLineNumber = 0x61;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to allocate memory for scanline array.");
      return 0;
    }
    this_ptr->scanline_buffer = pvVar4;
    local_28 = 0;
    local_24 = 0;
    do {
      if ((int)(uint)uVar2 <= local_28) {
        iVar9 = this_ptr->current_pixel_index;
        this_ptr->boxes[0].start_index = 0;
        this_ptr->boxes[0].pixel_count = iVar9;
        return 1;
      }
      iVar9 = 0;
      puVar7 = *(uint **)((int)bitmap->row_table + local_24);
      puVar10 = (uint *)this_ptr->scanline_buffer;
      for (uVar6 = (uint)(local_18 >> 2); uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar10 = *puVar7;
        puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
        puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
      }
      for (uVar6 = (byte)local_18 & 0xffffff03; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(byte *)puVar10 = *(byte *)puVar7;
        puVar7 = (uint *)((int)puVar7 + (uint)bVar11 * -2 + 1);
        puVar10 = (uint *)((int)puVar10 + (uint)bVar11 * -2 + 1);
      }
      for (iVar8 = 0; iVar8 < (int)(uint)local_14; iVar8 = iVar8 + 1) {
        pvVar4 = this_ptr->scanline_buffer;
        bVar1 = *(byte *)(iVar9 + (int)pvVar4);
        uVar6 = (uint)*(byte *)(iVar9 + 1 + (int)pvVar4);
        uVar5 = (uint)*(byte *)(iVar9 + 2 + (int)pvVar4);
        dVar12 = crt_math_c_round_FUN_005fe6b0
                           (SQRT((double)(uVar5 * uVar5 + uVar6 * uVar6 + (uint)bVar1 * (uint)bVar1)
                                ) * 0.57735027000000005);
        local_20 = (byte)(int)ROUND(dVar12);
        *(byte *)((int)this_ptr->pixel_data + this_ptr->current_pixel_index * 4) = bVar1;
        *(char *)((int)this_ptr->pixel_data + this_ptr->current_pixel_index * 4 + 1) =
             (char)((ushort)extraout_CX >> 8);
        *(char *)((int)this_ptr->pixel_data + this_ptr->current_pixel_index * 4 + 2) =
             (char)extraout_CX;
        *(byte *)((int)this_ptr->pixel_data + this_ptr->current_pixel_index * 4 + 3) =
             local_20;
        iVar9 = extraout_EDX + 3;
        this_ptr->current_pixel_index = this_ptr->current_pixel_index + 1;
      }
      if (this_ptr->progress_callback != (CColorQuantizer_ProgressCallback *)0x0) {
        iVar9 = (*this_ptr->progress_callback)("Phase 1",(uint)uVar2,local_28);
        if (iVar9 != 0) {
          return 0;
        }
      }
      local_28 = local_28 + 1;
      local_24 = local_24 + 4;
    } while( true );
  }
  g_CurrentFilename = "..\\shape\\quantize.cpp";
  g_CurrentLineNumber = 0x61;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to allocate memory for Pix array.");
  return 0;
}
