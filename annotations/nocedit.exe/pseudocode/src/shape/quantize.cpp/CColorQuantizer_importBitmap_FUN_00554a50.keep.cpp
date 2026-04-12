// Name: shape_quantize.cpp_CColorQuantizer_importBitmap_FUN_00554a50
// Address: 00554a50
// MANUAL RECONSTRUCTION
// Address Range: [[00554a50, 00554cb0]]
// Convention: __cdecl
// Signature: int __cdecl shape_quantize_cpp_CColorQuantizer_importBitmap_FUN_00554a50(CColorQuantizer *this_ptr,CBitmap *bitmap)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

int __cdecl shape_quantize_cpp_CColorQuantizer_importBitmap_FUN_00554a50(CColorQuantizer *this_ptr,CBitmap *bitmap)

{
  void *pvVar7;
  void *pvVar1;
  uint uVar8;
  uint uVar2;
  int iVar3;
  uint *puVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  byte bVar13;
  int local_30;
  int local_2c;
  byte local_28;
  ushort uVar6;
  ushort uVar5;
  ushort uVar4;
  byte bVar2;
  byte bVar1;
  byte bVar3;
  
  bVar13 = 0;
  uVar4 = bitmap->width;
  uVar5 = bitmap->height;
  uVar6 = bitmap->bytes_per_row;
  if (bitmap->bit_depth != '\x18') {
    return 0;
  }
  iVar11 = (uint)uVar5 * (uint)uVar4 * 4;
  pvVar7 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     (this_ptr->pixel_data,this_ptr->pixel_count + iVar11,
                      "..\\shape\\quantize.cpp",0x73);
  if (pvVar7 != (void *)0x0) {
    this_ptr->pixel_data = pvVar7;
    this_ptr->pixel_count = this_ptr->pixel_count + iVar11;
    pvVar1 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                       (this_ptr->scanline_buffer,(uint)uVar6,"..\\shape\\quantize.cpp",0x73);
    if (pvVar1 == (void *)0x0) {
      g_CurrentFilename = "..\\shape\\quantize.cpp";
      g_CurrentLineNumber = 0x61;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to allocate memory for scanline array.");
      return 0;
    }
    this_ptr->scanline_buffer = pvVar1;
    local_30 = 0;
    local_2c = 0;
    do {
      if ((int)(uint)uVar5 <= local_30) {
        iVar3 = this_ptr->current_pixel_index;
        this_ptr->boxes[0].start_index = 0;
        this_ptr->boxes[0].pixel_count = iVar3;
        return 1;
      }
      iVar3 = 0;
      puVar9 = *(uint **)((int)bitmap->row_table + local_2c);
      puVar12 = (uint *)this_ptr->scanline_buffer;
      for (uVar8 = (uint)(uVar6 >> 2); uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar12 = *puVar9;
        puVar9 = puVar9 + (uint)bVar13 * -2 + 1;
        puVar12 = puVar12 + (uint)bVar13 * -2 + 1;
      }
      for (uVar2 = (byte)uVar6 & 0xffffff03; uVar2 != 0; uVar2 = uVar2 - 1) {
        puVar12 = (uint *)((int)puVar12 + (uint)bVar13 * -2 + 1);
        puVar9 = (uint *)((int)puVar9 + (uint)bVar13 * -2 + 1);
        *(byte *)puVar12 = *(byte *)puVar9;
        puVar9 = puVar9;
        puVar12 = puVar12;
      }
      for (iVar10 = 0; iVar10 < (int)(uint)uVar4; iVar10 = iVar10 + 1) {
        pvVar1 = this_ptr->scanline_buffer;
        bVar1 = *(byte *)(iVar3 + (int)pvVar1);
        bVar2 = *(byte *)(iVar3 + 1 + (int)pvVar1);
        bVar3 = *(byte *)(iVar3 + 2 + (int)pvVar1);
        local_28 = (byte)
                   (int)ROUND(ROUND(SQRT((double)((uint)bVar3 * (uint)bVar3 +
                                                 (uint)bVar2 * (uint)bVar2 +
                                                 (uint)bVar1 * (uint)bVar1)) * 0.57735027000000005));
        *(byte *)((int)this_ptr->pixel_data + this_ptr->current_pixel_index * 4) = bVar1;
        *(byte *)((int)this_ptr->pixel_data + this_ptr->current_pixel_index * 4 + 1) = bVar2;
        *(byte *)((int)this_ptr->pixel_data + this_ptr->current_pixel_index * 4 + 2) = bVar3;
        *(byte *)((int)this_ptr->pixel_data + this_ptr->current_pixel_index * 4 + 3) =
             local_28;
        iVar3 = iVar3 + 3;
        this_ptr->current_pixel_index = this_ptr->current_pixel_index + 1;
      }
      if (this_ptr->progress_callback != (CColorQuantizer_ProgressCallback *)0x0) {
        iVar3 = (*this_ptr->progress_callback)("Phase 1",(int)uVar5,local_30);
        if (iVar3 != 0) {
          return 0;
        }
      }
      local_30 = local_30 + 1;
      local_2c = local_2c + 4;
    } while( true );
  }
  g_CurrentFilename = "..\\shape\\quantize.cpp";
  g_CurrentLineNumber = 0x61;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to allocate memory for Pix array.");
  return 0;
}
