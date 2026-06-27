// Name: cockpit_pkbitmap.cpp_CPackedBitmap_copyRawDataToCompressedRuns_FUN_0054b0e0
// Address: 0054b0e0
// MANUAL RECONSTRUCTION
// Address Range: [[0054b0e0, 0054b186]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_copyRawDataToCompressedRuns_FUN_0054b0e0(CPackedBitmap *this_ptr,uchar *raw_bitmap_data,int row_stride)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_copyRawDataToCompressedRuns_FUN_0054b0e0(CPackedBitmap *this_ptr,uchar *raw_bitmap_data,int row_stride)

{
  ushort *puVar1;
  ushort *puVar7;
  uchar *puVar8;
  ushort *puVar9;
  int local_18;
  ushort uVar2;
  ushort uVar1;
  int iVar4;

  if (row_stride == 0) {
    row_stride = this_ptr->width;
  }
  local_18 = 0;
  do {
    puVar1 = this_ptr->packed_data;
    iVar4 = this_ptr->row_offsets[local_18 + 1];
    puVar7 = (ushort *)((char *)puVar1 + this_ptr->row_offsets[local_18]);
    while (puVar7 < (ushort *)((char *)puVar1 + iVar4)) {
      puVar9 = puVar7 + 2;
      uVar1 = puVar7[1];
      uVar2 = *puVar7;
      puVar7 = (ushort *)((char *)puVar9 + (uVar1 + 3 & 0xfffffffc));
      puVar8 = raw_bitmap_data + uVar2;
      memcpy(puVar9, puVar8, uVar1);
    }
    local_18 = local_18 + 1;
    raw_bitmap_data = raw_bitmap_data + row_stride;
  } while (local_18 < this_ptr->height);
  return;
}
