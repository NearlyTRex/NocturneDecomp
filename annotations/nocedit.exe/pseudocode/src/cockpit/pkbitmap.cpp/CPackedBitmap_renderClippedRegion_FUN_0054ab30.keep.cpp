// Name: cockpit_pkbitmap.cpp_CPackedBitmap_renderClippedRegion_FUN_0054ab30
// Address: 0054ab30
// MANUAL RECONSTRUCTION
// Address Range: [[0054ab30, 0054aca2]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_renderClippedRegion_FUN_0054ab30(CPackedBitmap *this_ptr,int dest_x,int dest_y,int clip_left,int start_row,int clip_right,int end_row)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_renderClippedRegion_FUN_0054ab30(CPackedBitmap *this_ptr,int dest_x,int dest_y,int clip_left,int start_row,int clip_right,int end_row)

{
  ColorConversionFunc *pCVar2;
  uint uVar3;
  void *dest_buffer;
  uint count;
  int iVar4;
  ushort *puVar7;
  ushort *puVar9;
  ushort *src_buffer;
  int iVar10;
  int local_24;
  int local_20;
  int iVar1;
  
  if ((this_ptr->row_pointers != (void **)0x0) && (this_ptr->packed_data != (ushort *)0x0)) {
    iVar4 = (dest_x - clip_left) * g_BitsPerPixel;
    pCVar2 = cockpit_ckptutil_c_getColorConversionFunction_FUN_00431760();
    local_24 = dest_y;
    local_20 = start_row;
    do {
      puVar9 = (ushort *)((char *)this_ptr->packed_data +
                          (int)this_ptr->row_pointers[local_20]);
      puVar7 = (ushort *)((char *)this_ptr->packed_data +
                          (int)this_ptr->row_pointers[local_20 + 1]);
      iVar1 = (int)g_ScreenBufferArray[local_24];
      do {
        if (puVar7 <= puVar9) goto LAB_0054abe8;
        uVar3 = (uint)*puVar9;
        src_buffer = puVar9 + 2;
        if (clip_right < (int)uVar3) goto LAB_0054abe8;
        count = (uint)puVar9[1];
        iVar10 = uVar3 + count + -1;
        puVar9 = (ushort *)((char *)src_buffer + (count + 3 & 0xfffffffc));
      } while (iVar10 < clip_left);
      if ((int)uVar3 < clip_left) {
        src_buffer = (ushort *)((char *)src_buffer + (clip_left - uVar3));
        count = count - (clip_left - uVar3);
        uVar3 = clip_left;
      }
      while (dest_buffer = (void *)((int)(g_BitsPerPixel * uVar3) / 8 + iVar4 / 8 + iVar1),
            iVar10 <= clip_right) {
        (*pCVar2)(dest_buffer,src_buffer,count);
        if (puVar7 <= puVar9) goto LAB_0054abe8;
        uVar3 = (uint)*puVar9;
        src_buffer = puVar9 + 2;
        if (clip_right < (int)uVar3) goto LAB_0054abe8;
        count = (uint)puVar9[1];
        puVar9 = (ushort *)((count + 3 & 0xfffffffc) + (int)src_buffer);
        iVar10 = uVar3 + count + -1;
      }
      (*pCVar2)(dest_buffer,src_buffer,count - (iVar10 - clip_right));
LAB_0054abe8:
      local_24 = local_24 + 1;
      local_20 = local_20 + 1;
    } while (local_20 <= end_row);
  }
  return;
}
