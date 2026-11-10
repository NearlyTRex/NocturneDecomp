// Name: cockpit_pkbitmap.cpp_CPackedBitmap_renderClippedRegion_FUN_0050f440
// Address: 0050f440
// Address Range: [[0050f440, 0050f5b2]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_renderClippedRegion_FUN_0050f440(CPackedBitmap *this_ptr,int dest_x,int dest_y,int clip_left,int start_row,int clip_right,int end_row)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_renderClippedRegion_FUN_0050f440(CPackedBitmap *this_ptr,int dest_x,int dest_y,int clip_left,int start_row,int clip_right,int end_row)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  ushort *puVar7;
  int iVar8;
  ushort *puVar9;
  ushort *puVar10;
  int iVar11;
  int iStack_24;
  int iStack_20;
  
  if ((this_ptr->row_offsets != (int *)0x0) && (this_ptr->packed_data != (ushort *)0x0)) {
    iVar4 = (dest_x - clip_left) * DAT_005fba20;
    iVar5 = iVar4 >> 0x1f;
    iVar4 = (int)((iVar4 + iVar5 * -8) - (uint)(iVar5 << 2 < 0)) >> 3;
    pcVar1 = (code *)cockpit_ckptutil_c_FUN_00434e80(iVar4);
    iStack_24 = dest_y << 2;
    iStack_20 = start_row << 2;
    do {
      piVar6 = (int *)((int)this_ptr->row_offsets + iStack_20);
      puVar9 = (ushort *)(*piVar6 + (int)this_ptr->packed_data);
      puVar7 = (ushort *)(piVar6[1] + (int)this_ptr->packed_data);
      iVar5 = iVar4 + *(int *)(&DAT_01c5faec + iStack_24);
      do {
        if (puVar7 <= puVar9) goto LAB_0050f4f8;
        uVar2 = (uint)*puVar9;
        puVar10 = puVar9 + 2;
        if (clip_right < (int)uVar2) goto LAB_0050f4f8;
        uVar3 = (uint)puVar9[1];
        iVar11 = uVar2 + uVar3 + -1;
        puVar9 = (ushort *)((int)puVar10 + (uVar3 + 3 & 0xfffffffc));
      } while (iVar11 < clip_left);
      if ((int)uVar2 < clip_left) {
        puVar10 = (ushort *)((int)puVar10 + (clip_left - uVar2));
        uVar3 = uVar3 - (clip_left - uVar2);
        uVar2 = clip_left;
      }
      while (iVar8 = (int)(DAT_005fba20 * uVar2) >> 0x1f,
            iVar8 = ((int)((DAT_005fba20 * uVar2 + iVar8 * -8) - (uint)(iVar8 << 2 < 0)) >> 3) +
                    iVar5, iVar11 <= clip_right) {
        (*pcVar1)(iVar8,puVar10,uVar3);
        if (puVar7 <= puVar9) goto LAB_0050f4f8;
        uVar2 = (uint)*puVar9;
        puVar10 = puVar9 + 2;
        if (clip_right < (int)uVar2) goto LAB_0050f4f8;
        uVar3 = (uint)puVar9[1];
        puVar9 = (ushort *)((uVar3 + 3 & 0xfffffffc) + (int)puVar10);
        iVar11 = uVar2 + uVar3 + -1;
      }
      (*pcVar1)(iVar8,puVar10,uVar3 - (iVar11 - clip_right));
LAB_0050f4f8:
      iStack_24 = iStack_24 + 4;
      iStack_20 = iStack_20 + 4;
    } while (iStack_20 <= end_row << 2);
  }
  return;
}
