// Name: cockpit_pkbitmap.cpp_CPackedBitmap_copyRawDataToCompressedRuns_FUN_0054b0e0
// Address: 0054b0e0
// Address Range: [[0054b0e0, 0054b186]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_copyRawDataToCompressedRuns_FUN_0054b0e0(CPackedBitmap *this_ptr,uchar *raw_bitmap_data,int row_stride)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_copyRawDataToCompressedRuns_FUN_0054b0e0(CPackedBitmap *this_ptr,uchar *raw_bitmap_data,int row_stride)

{
  int *piVar5;
  uint uVar6;
  uint uVar3;
  ushort *puVar7;
  uchar *puVar8;
  ushort *puVar9;
  int local_18;
  int local_14;
  ushort uVar2;
  ushort uVar1;
  int iVar4;
  char *pcVar3;
  
  if (row_stride == 0) {
    row_stride = this_ptr->width;
  }
  local_14 = 0;
  local_18 = 0;
  do {
    piVar5 = (int *)((int)this_ptr->row_pointers + local_14);
    pcVar3 = this_ptr->packed_data;
    iVar4 = piVar5[1];
    puVar7 = (ushort *)(pcVar3 + *piVar5);
    while (puVar7 < pcVar3 + iVar4) {
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
      for (uVar3 = (byte)uVar1 & 0xffffff03; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(uchar *)puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = (ushort *)((int)puVar9 + 1);
      }
    }
    local_18 = local_18 + 1;
    raw_bitmap_data = raw_bitmap_data + row_stride;
    local_14 = local_14 + 4;
  } while (local_18 < this_ptr->height);
  return;
}
