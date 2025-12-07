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
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  void *pvVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  byte bVar12;
  double dVar13;
  int local_28;
  int local_24;
  byte local_20;
  ushort local_18;
  ushort local_14;
  
  bVar12 = 0;
  uVar4 = bitmap->width;
  uVar5 = bitmap->bytes_per_row;
  if (bitmap->bit_depth != '\x18') {
    return 0;
  }
  iVar10 = (uint)(ushort)bitmap->height * (uint)uVar4 * 4;
  pvVar6 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     (this_ptr->pixel_data,this_ptr->pixel_count + iVar10,
                      "..\\shape\\quantize.cpp",0x73);
  if (pvVar6 != (void *)0x0) {
    this_ptr->pixel_data = pvVar6;
    this_ptr->pixel_count = this_ptr->pixel_count + iVar10;
    pvVar6 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                       (this_ptr->scanline_buffer,(uint)uVar5,"..\\shape\\quantize.cpp",0x73);
    if (pvVar6 == (void *)0x0) {
      g_CurrentFilename = "..\\shape\\quantize.cpp";
      g_CurrentLineNumber = 0x61;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to allocate memory for scanline array.");
      return 0;
    }
    this_ptr->scanline_buffer = pvVar6;
    local_28 = 0;
    local_24 = 0;
    do {
      if ((int)(uint)uVar4 <= local_28) {
        iVar10 = this_ptr->current_pixel_index;
        this_ptr->boxes[0].start_index = 0;
        this_ptr->boxes[0].pixel_count = iVar10;
        return 1;
      }
      iVar10 = 0;
      puVar8 = *(uint **)((int)bitmap->row_table + local_24);
      puVar11 = (uint *)this_ptr->scanline_buffer;
      for (uVar7 = (uint)(local_18 >> 2); uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar11 = *puVar8;
        puVar8 = puVar8 + (uint)bVar12 * -2 + 1;
        puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
      }
      for (uVar7 = (byte)local_18 & 0xffffff03; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(byte *)puVar11 = *(byte *)puVar8;
        puVar8 = (uint *)((int)puVar8 + (uint)bVar12 * -2 + 1);
        puVar11 = (uint *)((int)puVar11 + (uint)bVar12 * -2 + 1);
      }
      for (iVar9 = 0; iVar9 < (int)(uint)local_14; iVar9 = iVar9 + 1) {
        pvVar6 = this_ptr->scanline_buffer;
        bVar1 = *(byte *)(iVar10 + (int)pvVar6);
        bVar2 = *(byte *)(iVar10 + 1 + (int)pvVar6);
        bVar3 = *(byte *)(iVar10 + 2 + (int)pvVar6);
        dVar13 = crt_math_c_round_FUN_005fe6b0
                           (SQRT((double)((uint)bVar3 * (uint)bVar3 +
                                         (uint)bVar2 * (uint)bVar2 + (uint)bVar1 * (uint)bVar1)) *
                            0.57735027000000005);
        local_20 = (byte)(int)ROUND(dVar13);
        *(byte *)((int)this_ptr->pixel_data + this_ptr->current_pixel_index * 4) = bVar1;
        *(byte *)((int)this_ptr->pixel_data + this_ptr->current_pixel_index * 4 + 1) = bVar2;
        *(byte *)((int)this_ptr->pixel_data + this_ptr->current_pixel_index * 4 + 2) = bVar3;
        *(byte *)((int)this_ptr->pixel_data + this_ptr->current_pixel_index * 4 + 3) =
             local_20;
        iVar10 = iVar10 + 3;
        this_ptr->current_pixel_index = this_ptr->current_pixel_index + 1;
      }
      if (this_ptr->progress_callback != (CColorQuantizer_ProgressCallback *)0x0) {
        iVar10 = (*this_ptr->progress_callback)("Phase 1",(uint)uVar4,local_28);
        if (iVar10 != 0) {
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
