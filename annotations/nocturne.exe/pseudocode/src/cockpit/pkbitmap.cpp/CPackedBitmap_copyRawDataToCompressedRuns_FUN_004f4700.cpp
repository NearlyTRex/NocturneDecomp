// Name: cockpit_pkbitmap.cpp_CPackedBitmap_copyRawDataToCompressedRuns_FUN_004f4700
// Address: 004f4700
// Address Range: [[004f4700, 004f47a6]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_copyRawDataToCompressedRuns_FUN_004f4700(CPackedBitmap *this_ptr,uchar *raw_bitmap_data,int row_stride)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_copyRawDataToCompressedRuns_FUN_004f4700(CPackedBitmap *this_ptr,uchar *raw_bitmap_data,int row_stride)

{
  ushort uVar1;
  ushort uVar2;
  ushort *puVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  ushort *puVar7;
  uchar *puVar8;
  ushort *puVar9;
  int iStack_18;
  int iStack_14;
  
  if (row_stride == 0) {
    row_stride = this_ptr->width;
  }
  iStack_14 = 0;
  iStack_18 = 0;
  do {
    piVar5 = (int *)((int)this_ptr->row_offsets + iStack_14);
    puVar3 = this_ptr->packed_data;
    iVar4 = piVar5[1];
    puVar7 = (ushort *)(*piVar5 + (int)puVar3);
    while (puVar7 < (ushort *)((int)puVar3 + iVar4)) {
      puVar9 = puVar7 + 2;
      uVar1 = puVar7[1];
      uVar2 = *puVar7;
      puVar7 = (ushort *)((uVar1 + 3 & 0xfffffffc) + (int)puVar9);
      puVar8 = raw_bitmap_data + uVar2;
      for (uVar6 = (uint)(uVar1 >> 2); uVar6 != 0; uVar6 = uVar6 - 1) {
        *(uint *)puVar9 = *(uint *)puVar8;
        puVar8 = puVar8 + 4;
        puVar9 = puVar9 + 2;
      }
      for (uVar6 = (byte)uVar1 & 0xffffff03; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(uchar *)puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = (ushort *)((int)puVar9 + 1);
      }
    }
    iStack_18 = iStack_18 + 1;
    raw_bitmap_data = raw_bitmap_data + row_stride;
    iStack_14 = iStack_14 + 4;
  } while (iStack_18 < this_ptr->height);
  return;
}
