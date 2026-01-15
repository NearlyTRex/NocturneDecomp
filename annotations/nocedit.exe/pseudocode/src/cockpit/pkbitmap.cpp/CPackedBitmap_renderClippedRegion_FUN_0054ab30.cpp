// Name: cockpit_pkbitmap.cpp_CPackedBitmap_renderClippedRegion_FUN_0054ab30
// Address: 0054ab30
// Address Range: [[0054ab30, 0054aca2]]
// Convention: __cdecl
// Signature: void cockpit_pkbitmap.cpp_CPackedBitmap_renderClippedRegion_FUN_0054ab30(CPackedBitmap * this_ptr, int dest_x, int dest_y, int clip_left, int start_row, int clip_right, int end_row)

#include "nocturne.h"

void __cdecl
cockpit_pkbitmap_cpp_CPackedBitmap_renderClippedRegion_FUN_0054ab30
          (CPackedBitmap *this_ptr,int dest_x,int dest_y,int clip_left,int start_row,int clip_right,
          int end_row)

{
  int iVar1;
  ColorConversionFunc *pCVar2;
  uint uVar3;
  void *dest_buffer;
  uint count;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  ushort *puVar8;
  ushort *unaff_ESI;
  ushort *src_buffer;
  int iVar9;
  int local_24;
  int local_20;
  
  if ((this_ptr->row_pointers != (void **)0x0) && (this_ptr->packed_data != (char *)0x0)) {
    iVar4 = (dest_x - clip_left) * g_BitsPerPixel;
    iVar5 = iVar4 >> 0x1f;
    pCVar2 = cockpit_ckptutil_c_getColorConversionFunction_FUN_00431760();
    local_24 = dest_y << 2;
    local_20 = start_row << 2;
    do {
      piVar6 = (int *)((int)this_ptr->row_pointers + local_20);
      puVar8 = (ushort *)(this_ptr->packed_data + *piVar6);
      iVar1 = *(int *)((int)g_ScreenBufferArray + local_24);
      do {
        if (this_ptr->packed_data + piVar6[1] <= puVar8) goto LAB_0054abe8;
        uVar3 = (uint)*puVar8;
        src_buffer = puVar8 + 2;
        if (clip_right < (int)uVar3) goto LAB_0054abe8;
        count = (uint)puVar8[1];
        iVar9 = uVar3 + count + -1;
        puVar8 = (ushort *)((int)src_buffer + (count + 3 & 0xfffffffc));
      } while (iVar9 < clip_left);
      if ((int)uVar3 < clip_left) {
        src_buffer = (ushort *)((int)src_buffer + (clip_left - uVar3));
        count = count - (clip_left - uVar3);
        uVar3 = clip_left;
      }
      while (iVar7 = (int)(g_BitsPerPixel * uVar3) >> 0x1f,
            dest_buffer = (void *)(((int)((g_BitsPerPixel * uVar3 + iVar7 * -8) -
                                         (uint)(iVar7 << 2 < 0)) >> 3) +
                                  ((int)((iVar4 + iVar5 * -8) - (uint)(iVar5 << 2 < 0)) >> 3) +
                                  iVar1), iVar9 <= clip_right) {
        (*pCVar2)(dest_buffer,src_buffer,count);
        if (unaff_ESI <= puVar8) goto LAB_0054abe8;
        uVar3 = (uint)*puVar8;
        src_buffer = puVar8 + 2;
        if (clip_right < (int)uVar3) goto LAB_0054abe8;
        count = (uint)puVar8[1];
        puVar8 = (ushort *)((count + 3 & 0xfffffffc) + (int)src_buffer);
        iVar9 = uVar3 + count + -1;
      }
      (*pCVar2)(dest_buffer,src_buffer,count - (iVar9 - clip_right));
LAB_0054abe8:
      local_24 = local_24 + 4;
      local_20 = local_20 + 4;
    } while (local_20 <= end_row << 2);
  }
  return;
}
