// Name: shape_quantize.cpp_CColorQuantizer_importBitmap_FUN_00554a50
// Address: 00554a50
// Address Range: [[00554a50, 00554cb0]]
// Convention: __cdecl
// Signature: int __cdecl shape_quantize_cpp_CColorQuantizer_importBitmap_FUN_00554a50(CColorQuantizer *this_ptr,CBitmap *bitmap)

#include "nocturne.h"

int __cdecl shape_quantize_cpp_CColorQuantizer_importBitmap_FUN_00554a50(CColorQuantizer *this_ptr,CBitmap *bitmap)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  void *pvVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  byte bVar11;
  double dVar12;
  int local_30;
  int local_2c;
  uint local_1c;
  byte local_18;
  
  bVar11 = 0;
  local_1c = (uint)(ushort)bitmap->width;
  uVar3 = bitmap->height;
  uVar4 = bitmap->bytes_per_row;
  if (bitmap->bit_depth != '\x18') {
    return 0;
  }
  iVar9 = (uint)uVar3 * (uint)(ushort)bitmap->width * 4;
  pvVar5 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     (this_ptr->pixel_data,this_ptr->pixel_count + iVar9,
                      "..\\shape\\quantize.cpp",0x73);
  if (pvVar5 != (void *)0x0) {
    this_ptr->pixel_data = pvVar5;
    this_ptr->pixel_count = this_ptr->pixel_count + iVar9;
    pvVar5 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                       (this_ptr->scanline_buffer,(uint)uVar4,"..\\shape\\quantize.cpp",0x73);
    if (pvVar5 == (void *)0x0) {
      g_CurrentFilename = "..\\shape\\quantize.cpp";
      g_CurrentLineNumber = 0x61;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to allocate memory for scanline array.");
      return 0;
    }
    this_ptr->scanline_buffer = pvVar5;
    local_30 = 0;
    local_2c = 0;
    do {
      if ((int)(uint)uVar3 <= local_30) {
        iVar9 = this_ptr->current_pixel_index;
        this_ptr->boxes[0].start_index = 0;
        this_ptr->boxes[0].pixel_count = iVar9;
        return 1;
      }
      iVar9 = 0;
      puVar7 = *(uint **)((int)bitmap->row_table + local_2c);
      puVar10 = this_ptr->scanline_buffer;
      for (uVar6 = (uint)(uVar4 >> 2); uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar10 = *puVar7;
        puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
        puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
      }
      for (uVar6 = (byte)uVar4 & 0xffffff03; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(byte *)puVar10 = *(byte *)puVar7;
        puVar7 = (uint *)((int)puVar7 + (uint)bVar11 * -2 + 1);
        puVar10 = (uint *)((int)puVar10 + (uint)bVar11 * -2 + 1);
      }
      for (iVar8 = 0; iVar8 < (int)local_1c; iVar8 = iVar8 + 1) {
        pvVar5 = this_ptr->scanline_buffer;
        bVar1 = *(byte *)(iVar9 + 1 + (int)pvVar5);
        bVar2 = *(byte *)(iVar9 + 2 + (int)pvVar5);
        local_30 = 0x554c1d;
        dVar12 = round
                           (SQRT((double)((uint)bVar2 * (uint)bVar2 +
                                         (uint)bVar1 * (uint)bVar1 +
                                         (uint)*(byte *)(iVar9 + (int)pvVar5) *
                                         (uint)*(byte *)(iVar9 + (int)pvVar5))) * 0.57735027000000005);
        local_2c = (int)ROUND(dVar12);
        local_1c = CONCAT31(local_1c._1_3_,(byte)local_2c);
        *(byte *)((int)this_ptr->pixel_data + this_ptr->current_pixel_index * 4) = local_18;
        *(byte *)((int)this_ptr->pixel_data + this_ptr->current_pixel_index * 4 + 1) = bVar1;
        *(byte *)((int)this_ptr->pixel_data + this_ptr->current_pixel_index * 4 + 2) = bVar2;
        *(byte *)((int)this_ptr->pixel_data + this_ptr->current_pixel_index * 4 + 3) =
             (byte)local_2c;
        iVar9 = iVar9 + 3;
        this_ptr->current_pixel_index = this_ptr->current_pixel_index + 1;
      }
      if (this_ptr->progress_callback != (CColorQuantizer_ProgressCallback *)0x0) {
        iVar9 = (*this_ptr->progress_callback)("Phase 1",(int)uVar3,local_30);
        if (iVar9 != 0) {
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
