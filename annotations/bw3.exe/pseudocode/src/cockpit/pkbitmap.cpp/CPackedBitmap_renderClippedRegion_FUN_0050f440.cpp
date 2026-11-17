// Name: cockpit_pkbitmap.cpp_CPackedBitmap_renderClippedRegion_FUN_0050f440
// Address: 0050f440
// Address Range: [[0050f440, 0050f5b2]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_renderClippedRegion_FUN_0050f440(CPackedBitmap *this_ptr,int dest_x,int dest_y,int clip_left,int start_row,int clip_right,int end_row)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_renderClippedRegion_FUN_0050f440(CPackedBitmap *this_ptr,int dest_x,int dest_y,int clip_left,int start_row,int clip_right,int end_row)

{
  int iVar1;
  ColorConversionFunc *pCVar2;
  uint uVar3;
  void *dest_buffer;
  uint count;
  int iVar4;
  int iVar5;
  int *piVar6;
  ushort *puVar7;
  int iVar8;
  ushort *puVar9;
  ushort *src_buffer;
  int iVar10;
  int iStack_24;
  int iStack_20;
  
  if ((this_ptr->row_offsets != (int *)0x0) && (this_ptr->packed_data != (ushort *)0x0)) {
    iVar4 = (dest_x - clip_left) * g_INT_005fba20;
    iVar5 = iVar4 >> 0x1f;
    pCVar2 = cockpit_ckptutil_c_getColorConversionFunction_FUN_00434e80();
    iStack_24 = dest_y << 2;
    iStack_20 = start_row << 2;
    do {
      piVar6 = (int *)((int)this_ptr->row_offsets + iStack_20);
      puVar9 = (ushort *)(*piVar6 + (int)this_ptr->packed_data);
      puVar7 = (ushort *)(piVar6[1] + (int)this_ptr->packed_data);
      iVar1 = *(int *)((int)g_ScreenBufferArray + iStack_24);
      do {
        if (puVar7 <= puVar9) goto LAB_0050f4f8;
        uVar3 = (uint)*puVar9;
        src_buffer = puVar9 + 2;
        if (clip_right < (int)uVar3) goto LAB_0050f4f8;
        count = (uint)puVar9[1];
        iVar10 = uVar3 + count + -1;
        puVar9 = (ushort *)((int)src_buffer + (count + 3 & 0xfffffffc));
      } while (iVar10 < clip_left);
      if ((int)uVar3 < clip_left) {
        src_buffer = (ushort *)((int)src_buffer + (clip_left - uVar3));
        count = count - (clip_left - uVar3);
        uVar3 = clip_left;
      }
      while (iVar8 = (int)(g_INT_005fba20 * uVar3) >> 0x1f,
            dest_buffer = (void *)(((int)((g_INT_005fba20 * uVar3 + iVar8 * -8) -
                                         (uint)(iVar8 << 2 < 0)) >> 3) +
                                  ((int)((iVar4 + iVar5 * -8) - (uint)(iVar5 << 2 < 0)) >> 3) +
                                  iVar1), iVar10 <= clip_right) {
        (*pCVar2)(dest_buffer,src_buffer,count);
        if (puVar7 <= puVar9) goto LAB_0050f4f8;
        uVar3 = (uint)*puVar9;
        src_buffer = puVar9 + 2;
        if (clip_right < (int)uVar3) goto LAB_0050f4f8;
        count = (uint)puVar9[1];
        puVar9 = (ushort *)((count + 3 & 0xfffffffc) + (int)src_buffer);
        iVar10 = uVar3 + count + -1;
      }
      (*pCVar2)(dest_buffer,src_buffer,count - (iVar10 - clip_right));
LAB_0050f4f8:
      iStack_24 = iStack_24 + 4;
      iStack_20 = iStack_20 + 4;
    } while (iStack_20 <= end_row << 2);
  }
  return;
}
