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
  void *pvVar2;
  uint uVar3;
  int iVar4;
  ushort extraout_CX;
  uint uVar5;
  byte unaff_SI;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  byte bVar10;
  float10 fVar11;
  double dVar12;
  int local_28;
  int local_24;
  uint local_1c;
  ushort local_18;
  ushort local_14;
  
  bVar10 = 0;
  local_1c = (uint)(ushort)bitmap->width;
  uVar1 = bitmap->bytes_per_row;
  if (bitmap->bit_depth != '\x18') {
    return 0;
  }
  iVar8 = (uint)(ushort)bitmap->height * (uint)(ushort)bitmap->width * 4;
  pvVar2 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     (this_ptr->pixel_data,this_ptr->pixel_count + iVar8,
                      "..\\shape\\quantize.cpp",0x73);
  if (pvVar2 != (void *)0x0) {
    this_ptr->pixel_data = pvVar2;
    this_ptr->pixel_count = this_ptr->pixel_count + iVar8;
    pvVar2 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                       (this_ptr->scanline_buffer,(uint)uVar1,"..\\shape\\quantize.cpp",0x73);
    if (pvVar2 == (void *)0x0) {
      g_CurrentFilename = "..\\shape\\quantize.cpp";
      g_CurrentLineNumber = 0x61;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to allocate memory for scanline array.");
      return 0;
    }
    this_ptr->scanline_buffer = pvVar2;
    local_28 = 0;
    local_24 = 0;
    do {
      if ((int)(local_1c & 0xffff) <= local_28) {
        iVar8 = this_ptr->current_pixel_index;
        this_ptr->boxes[0].start_index = 0;
        this_ptr->boxes[0].pixel_count = iVar8;
        return 1;
      }
      iVar8 = 0;
      puVar6 = *(uint **)((int)bitmap->row_table + local_24);
      puVar9 = (uint *)this_ptr->scanline_buffer;
      for (uVar5 = (uint)(local_18 >> 2); uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar9 = *puVar6;
        puVar6 = puVar6 + (uint)bVar10 * -2 + 1;
        puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
      }
      for (uVar5 = (byte)local_18 & 0xffffff03; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(byte *)puVar9 = *(byte *)puVar6;
        puVar6 = (uint *)((int)puVar6 + (uint)bVar10 * -2 + 1);
        puVar9 = (uint *)((int)puVar9 + (uint)bVar10 * -2 + 1);
      }
      for (iVar7 = 0; iVar7 < (int)(uint)local_14; iVar7 = iVar7 + 1) {
        pvVar2 = this_ptr->scanline_buffer;
        uVar5 = (uint)*(byte *)(iVar8 + 1 + (int)pvVar2);
        uVar3 = (uint)*(byte *)(iVar8 + 2 + (int)pvVar2);
        iVar4 = uVar3 * uVar3 +
                uVar5 * uVar5 +
                (uint)*(byte *)(iVar8 + (int)pvVar2) * (uint)*(byte *)(iVar8 + (int)pvVar2);
        fVar11 = SQRT((float10)iVar4) * (float10)0.57735027000000005;
        dVar12 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(iVar8,iVar4));
        local_1c = (uint)ROUND(fVar11);
        *(byte *)((int)this_ptr->pixel_data + this_ptr->current_pixel_index * 4) = unaff_SI;
        *(char *)((int)this_ptr->pixel_data + this_ptr->current_pixel_index * 4 + 1) =
             (char)((ushort)extraout_CX >> 8);
        *(char *)((int)this_ptr->pixel_data + this_ptr->current_pixel_index * 4 + 2) =
             (char)extraout_CX;
        *(byte *)((int)this_ptr->pixel_data + this_ptr->current_pixel_index * 4 + 3) =
             (byte)local_1c;
        iVar8 = (int)((ulonglong)dVar12 >> 0x20) + 3;
        this_ptr->current_pixel_index = this_ptr->current_pixel_index + 1;
      }
      if (this_ptr->progress_callback != (CColorQuantizer_ProgressCallback *)0x0) {
        iVar8 = (*this_ptr->progress_callback)("Phase 1",local_1c & 0xffff,local_28);
        if (iVar8 != 0) {
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
