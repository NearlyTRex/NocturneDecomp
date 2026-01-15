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
  ushort uVar1;
  ushort uVar2;
  void *pvVar3;
  uint uVar4;
  ushort extraout_CX;
  uint uVar5;
  int extraout_EDX;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  byte bVar10;
  double dVar11;
  int local_30;
  int local_2c;
  uint local_1c;
  byte local_18;
  
  bVar10 = 0;
  local_1c = (uint)(ushort)bitmap->width;
  uVar1 = bitmap->height;
  uVar2 = bitmap->bytes_per_row;
  if (bitmap->bit_depth != '\x18') {
    return 0;
  }
  iVar8 = (uint)uVar1 * (uint)(ushort)bitmap->width * 4;
  pvVar3 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     (this_ptr->pixel_data,this_ptr->pixel_count + iVar8,
                      "..\\shape\\quantize.cpp",0x73);
  if (pvVar3 != (void *)0x0) {
    this_ptr->pixel_data = pvVar3;
    this_ptr->pixel_count = this_ptr->pixel_count + iVar8;
    pvVar3 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                       (this_ptr->scanline_buffer,(uint)uVar2,"..\\shape\\quantize.cpp",0x73);
    if (pvVar3 == (void *)0x0) {
      g_CurrentFilename = "..\\shape\\quantize.cpp";
      g_CurrentLineNumber = 0x61;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to allocate memory for scanline array.");
      return 0;
    }
    this_ptr->scanline_buffer = pvVar3;
    local_30 = 0;
    local_2c = 0;
    do {
      if ((int)(uint)uVar1 <= local_30) {
        iVar8 = this_ptr->current_pixel_index;
        this_ptr->boxes[0].start_index = 0;
        this_ptr->boxes[0].pixel_count = iVar8;
        return 1;
      }
      iVar8 = 0;
      puVar6 = *(uint **)((int)bitmap->row_table + local_2c);
      puVar9 = this_ptr->scanline_buffer;
      for (uVar5 = (uint)(uVar2 >> 2); uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar9 = *puVar6;
        puVar6 = puVar6 + (uint)bVar10 * -2 + 1;
        puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
      }
      for (uVar5 = (byte)uVar2 & 0xffffff03; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(byte *)puVar9 = *(byte *)puVar6;
        puVar6 = (uint *)((int)puVar6 + (uint)bVar10 * -2 + 1);
        puVar9 = (uint *)((int)puVar9 + (uint)bVar10 * -2 + 1);
      }
      for (iVar7 = 0; iVar7 < (int)local_1c; iVar7 = iVar7 + 1) {
        pvVar3 = this_ptr->scanline_buffer;
        uVar5 = (uint)*(byte *)(iVar8 + 1 + (int)pvVar3);
        uVar4 = (uint)*(byte *)(iVar8 + 2 + (int)pvVar3);
        local_30 = 0x554c1d;
        dVar11 = crt_math_c_round_FUN_005fe6b0
                           (SQRT((double)(uVar4 * uVar4 +
                                         uVar5 * uVar5 +
                                         (uint)*(byte *)(iVar8 + (int)pvVar3) *
                                         (uint)*(byte *)(iVar8 + (int)pvVar3))) * 0.57735027000000005);
        local_2c = (int)ROUND(dVar11);
        local_1c = CONCAT31 /* combine 2-byte values */(local_1c._1_3_,(byte)local_2c);
        *(byte *)((int)this_ptr->pixel_data + this_ptr->current_pixel_index * 4) = local_18;
        *(char *)((int)this_ptr->pixel_data + this_ptr->current_pixel_index * 4 + 1) =
             (char)((ushort)extraout_CX >> 8);
        *(char *)((int)this_ptr->pixel_data + this_ptr->current_pixel_index * 4 + 2) =
             (char)extraout_CX;
        *(byte *)((int)this_ptr->pixel_data + this_ptr->current_pixel_index * 4 + 3) =
             (byte)local_2c;
        iVar8 = extraout_EDX + 3;
        this_ptr->current_pixel_index = this_ptr->current_pixel_index + 1;
      }
      if (this_ptr->progress_callback != (CColorQuantizer_ProgressCallback *)0x0) {
        iVar8 = (*this_ptr->progress_callback)("Phase 1",(uint)uVar1,local_30);
        if (iVar8 != 0) {
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
