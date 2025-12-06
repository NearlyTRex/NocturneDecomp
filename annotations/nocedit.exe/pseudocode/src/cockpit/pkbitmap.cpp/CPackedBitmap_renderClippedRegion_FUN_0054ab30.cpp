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
  int *piVar4;
  int iVar5;
  ushort *puVar6;
  ushort *src_buffer;
  int iVar7;
  int in_stack_00000020;
  int local_28;
  int local_20;
  int local_1c;
  
  if ((this_ptr->row_pointers != (void **)0x0) && (this_ptr->packed_data != (char *)0x0)) {
    pCVar2 = cockpit_ckptutil_c_getColorConversionFunction_FUN_00431760();
    local_20 = clip_left << 2;
    local_1c = clip_right << 2;
    do {
      piVar4 = (int *)(*(int *)(dest_x + 0x20) + local_1c);
      puVar6 = (ushort *)(*piVar4 + *(int *)(dest_x + 0x14));
      iVar1 = *(int *)((int)g_ScreenBufferArray + local_20);
      do {
        if ((ushort *)(piVar4[1] + *(int *)(dest_x + 0x14)) <= puVar6) goto LAB_0054abe8;
        uVar3 = (uint)*puVar6;
        src_buffer = puVar6 + 2;
        if (clip_right < (int)uVar3) goto LAB_0054abe8;
        count = (uint)puVar6[1];
        iVar7 = uVar3 + count + -1;
        puVar6 = (ushort *)((int)src_buffer + (count + 3 & 0xfffffffc));
      } while (iVar7 < start_row);
      if ((int)uVar3 < start_row) {
        src_buffer = (ushort *)((int)src_buffer + (start_row - uVar3));
        count = count - (start_row - uVar3);
        uVar3 = start_row;
      }
      while (iVar5 = (int)(g_BitsPerPixel * uVar3) >> 0x1f,
            dest_buffer = (void *)(((int)((g_BitsPerPixel * uVar3 + iVar5 * -8) -
                                         (uint)(iVar5 << 2 < 0)) >> 3) + local_28 + iVar1),
            iVar7 <= clip_right) {
        (*pCVar2)(dest_buffer,src_buffer,count);
        if ((uint)dest_y <= puVar6) goto LAB_0054abe8;
        uVar3 = (uint)*puVar6;
        src_buffer = puVar6 + 2;
        if (clip_right < (int)uVar3) goto LAB_0054abe8;
        count = (uint)puVar6[1];
        puVar6 = (ushort *)((count + 3 & 0xfffffffc) + (int)src_buffer);
        iVar7 = uVar3 + count + -1;
      }
      (*pCVar2)(dest_buffer,src_buffer,count - (iVar7 - clip_right));
LAB_0054abe8:
      local_20 = local_20 + 4;
      local_1c = local_1c + 4;
    } while (local_1c <= in_stack_00000020 << 2);
  }
  return;
}
