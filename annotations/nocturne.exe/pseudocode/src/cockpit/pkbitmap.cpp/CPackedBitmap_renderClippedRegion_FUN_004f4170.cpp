// Name: cockpit_pkbitmap.cpp_CPackedBitmap_renderClippedRegion_FUN_004f4170
// Address: 004f4170
// Address Range: [[004f4170, 004f4307]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_renderClippedRegion_FUN_004f4170(CPackedBitmap *this_ptr,int dest_x,int dest_y,int clip_left,int start_row,int clip_right,int end_row)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_renderClippedRegion_FUN_004f4170(CPackedBitmap *this_ptr,int dest_x,int dest_y,int clip_left,int start_row,int clip_right,int end_row)

{
  int iVar1;
  ColorConversionFunc *pCVar2;
  int iVar3;
  int *piVar4;
  ushort *puVar5;
  uint uVar6;
  ushort *src_buffer;
  int iVar7;
  uint count;
  ushort *puVar8;
  int iVar9;
  void *dest_buffer;
  int local_24;
  int local_20;
  
  if ((this_ptr->row_offsets != (int *)0x0) && (this_ptr->packed_data != (ushort *)0x0)) {
    iVar1 = dest_x - clip_left;
    if (g_BitsPerPixel == 0x10) {
      iVar1 = iVar1 * 2;
    }
    pCVar2 = cockpit_ckptutil_c_FUN_0042d130();
    local_24 = dest_y << 2;
    local_20 = start_row << 2;
    iVar3 = end_row << 2;
    do {
      piVar4 = (int *)((int)this_ptr->row_offsets + local_20);
      puVar5 = (ushort *)(piVar4[1] + (int)this_ptr->packed_data);
      puVar8 = (ushort *)(*piVar4 + (int)this_ptr->packed_data);
      iVar7 = iVar1 + *(int *)((int)g_ScreenBufferArray + local_24);
      do {
        if (puVar5 <= puVar8) goto LAB_004f4239;
        uVar6 = (uint)*puVar8;
        src_buffer = puVar8 + 2;
        if (clip_right < (int)uVar6) goto LAB_004f4239;
        count = (uint)puVar8[1];
        iVar9 = uVar6 + count + -1;
        puVar8 = (ushort *)((count + 3 & 0xfffffffc) + (int)src_buffer);
      } while (iVar9 < clip_left);
      if ((int)uVar6 < clip_left) {
        src_buffer = (ushort *)((int)src_buffer + (clip_left - uVar6));
        count = count - (clip_left - uVar6);
        uVar6 = clip_left;
      }
      while( true ) {
        dest_buffer = (void *)(iVar7 + uVar6);
        if (g_BitsPerPixel == 0x10) {
          dest_buffer = (void *)((int)dest_buffer + uVar6);
        }
        if (clip_right < iVar9) break;
        (*pCVar2)(dest_buffer,src_buffer,count);
        if (puVar5 <= puVar8) goto LAB_004f4239;
        uVar6 = (uint)*puVar8;
        src_buffer = puVar8 + 2;
        if (clip_right < (int)uVar6) goto LAB_004f4239;
        count = (uint)puVar8[1];
        iVar9 = uVar6 + count + -1;
        puVar8 = (ushort *)((count + 3 & 0xfffffffc) + (int)src_buffer);
      }
      (*pCVar2)(dest_buffer,src_buffer,count - (iVar9 - clip_right));
LAB_004f4239:
      local_24 = local_24 + 4;
      local_20 = local_20 + 4;
    } while (local_20 <= iVar3);
  }
  return;
}
