// Name: cockpit_pkbitmap.cpp_CPackedBitmap_renderClippedRegion_FUN_004f4170
// Address: 004f4170
// Address Range: [[004f4170, 004f4307]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_renderClippedRegion_FUN_004f4170(CPackedBitmap *this_ptr,int dest_x,int dest_y,int clip_left,int start_row,int clip_right,int end_row)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_renderClippedRegion_FUN_004f4170(CPackedBitmap *this_ptr,int dest_x,int dest_y,int clip_left,int start_row,int clip_right,int end_row)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  ushort *puVar5;
  uint uVar6;
  ushort *puVar7;
  int iVar8;
  uint uVar9;
  ushort *puVar10;
  int iVar11;
  int iVar12;
  int local_24;
  int local_20;
  
  if ((this_ptr->row_offsets != (int *)0x0) && (this_ptr->packed_data != (ushort *)0x0)) {
    iVar1 = dest_x - clip_left;
    if (DAT_005b7624 == 0x10) {
      iVar1 = iVar1 * 2;
    }
    pcVar2 = (code *)cockpit_ckptutil_c_FUN_0042d130();
    local_24 = dest_y << 2;
    local_20 = start_row << 2;
    iVar3 = end_row << 2;
    do {
      piVar4 = (int *)((int)this_ptr->row_offsets + local_20);
      puVar5 = (ushort *)(piVar4[1] + (int)this_ptr->packed_data);
      puVar10 = (ushort *)(*piVar4 + (int)this_ptr->packed_data);
      iVar8 = iVar1 + *(int *)(&DAT_01bd2fa0 + local_24);
      do {
        if (puVar5 <= puVar10) goto LAB_004f4239;
        uVar6 = (uint)*puVar10;
        puVar7 = puVar10 + 2;
        if (clip_right < (int)uVar6) goto LAB_004f4239;
        uVar9 = (uint)puVar10[1];
        iVar11 = uVar6 + uVar9 + -1;
        puVar10 = (ushort *)((uVar9 + 3 & 0xfffffffc) + (int)puVar7);
      } while (iVar11 < clip_left);
      if ((int)uVar6 < clip_left) {
        puVar7 = (ushort *)((int)puVar7 + (clip_left - uVar6));
        uVar9 = uVar9 - (clip_left - uVar6);
        uVar6 = clip_left;
      }
      while( true ) {
        iVar12 = iVar8 + uVar6;
        if (DAT_005b7624 == 0x10) {
          iVar12 = iVar12 + uVar6;
        }
        if (clip_right < iVar11) break;
        (*pcVar2)(iVar12,puVar7,uVar9,iVar3,iVar1,dest_y,start_row);
        if (puVar5 <= puVar10) goto LAB_004f4239;
        uVar6 = (uint)*puVar10;
        puVar7 = puVar10 + 2;
        if (clip_right < (int)uVar6) goto LAB_004f4239;
        uVar9 = (uint)puVar10[1];
        iVar11 = uVar6 + uVar9 + -1;
        puVar10 = (ushort *)((uVar9 + 3 & 0xfffffffc) + (int)puVar7);
      }
      (*pcVar2)(iVar12,puVar7,uVar9 - (iVar11 - clip_right));
LAB_004f4239:
      start_row = start_row + 1;
      local_24 = local_24 + 4;
      dest_y = dest_y + 1;
      local_20 = local_20 + 4;
    } while (local_20 <= iVar3);
  }
  return;
}
