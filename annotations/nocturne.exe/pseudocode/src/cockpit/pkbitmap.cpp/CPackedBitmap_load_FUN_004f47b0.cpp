// Name: cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_004f47b0
// Address: 004f47b0
// Address Range: [[004f47b0, 004f49d7]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_load_FUN_004f47b0(CPackedBitmap *this_ptr,uchar *bitmap_data,int width,int height,int transparency_color,int row_stride)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_load_FUN_004f47b0(CPackedBitmap *this_ptr,uchar *bitmap_data,int width,int height,int transparency_color,int row_stride)

{
  int *piVar1;
  byte *pbVar2;
  int iVar3;
  ushort *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulong new_size;
  uchar *puVar8;
  uint uVar9;
  byte bVar10;
  char acStack_154 [300];
  int iStack_28;
  int iStack_24;
  int iStack_20;
  ulong uStack_1c;
  ulong uStack_18;
  uchar *puStack_14;
  
  bVar10 = 0;
  cockpit_pkbitmap_cpp_FUN_004f3f50(this_ptr);
  this_ptr->width = width;
  this_ptr->height = height;
  if (row_stride == 0) {
    row_stride = this_ptr->width;
  }
  piVar1 = shape_memdbg_cpp_malloc_FUN_00564c18((this_ptr->height + 1) * 4);
  this_ptr->row_offsets = piVar1;
  if (piVar1 == (int *)0x0) {
    g_CHAR_PTR_01cc4800 = "..\\cockpit\\pkbitmap.cpp";
    g_INT_01cc4804 = 0x37d;
    core_main_c_FUN_004c8440("Unable to allocate memory for rowOffset table in CPackedBitmap::load");
  }
  new_size = 0;
  iStack_24 = 0;
  puStack_14 = bitmap_data;
  iStack_28 = 0;
  uStack_18 = 0;
  do {
    *(ulong *)((int)this_ptr->row_offsets + iStack_28) = new_size;
    if (this_ptr->height <= iStack_24) {
      puVar4 = (ushort *)realloc(this_ptr->packed_data,new_size);
      this_ptr->packed_data = puVar4;
      return;
    }
    iVar6 = 0;
    if (0 < this_ptr->width) {
      do {
        pbVar2 = puStack_14 + iVar6;
        iVar7 = iVar6;
        if ((uint)*pbVar2 == transparency_color) {
          iVar7 = iVar6 + 1;
        }
        else {
          do {
            iVar7 = iVar7 + 1;
            pbVar2 = pbVar2 + 1;
            if (this_ptr->width <= iVar7) break;
          } while ((uint)*pbVar2 != transparency_color);
          uVar9 = iVar7 - iVar6;
          iVar3 = (uVar9 + 3 & 0xfffffffc) + new_size;
          uStack_1c = iVar3 + 4;
          iStack_20 = iVar6;
          if ((int)uStack_18 < (int)uStack_1c) {
            uStack_18 = iVar3 + 0x4004;
            puVar4 = (ushort *)realloc(this_ptr->packed_data,uStack_18);
            this_ptr->packed_data = puVar4;
            if (puVar4 == (ushort *)0x0) {
              _sprintf(acStack_154,"Out of memory packing file \"%s\" on row %u trying to get %u bytes");
              g_CHAR_PTR_01cc4800 = "..\\cockpit\\pkbitmap.cpp";
              g_INT_01cc4804 = 0x3b5;
              core_main_c_FUN_004c8440(acStack_154);
            }
          }
          puVar4 = (ushort *)((int)this_ptr->packed_data + new_size);
          *puVar4 = (ushort)iStack_20;
          puVar4[1] = (ushort)uVar9;
          puVar8 = puStack_14 + *puVar4;
          puVar4 = puVar4 + 2;
          for (uVar5 = (uVar9 & 0xffff) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(uint *)puVar4 = *(uint *)puVar8;
            puVar8 = puVar8 + (uint)bVar10 * -8 + 4;
            puVar4 = puVar4 + (uint)bVar10 * -4 + 2;
          }
          for (uVar9 = uVar9 & 3; new_size = uStack_1c, uVar9 != 0; uVar9 = uVar9 - 1) {
            *(uchar *)puVar4 = *puVar8;
            puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
            puVar4 = (ushort *)((int)puVar4 + (uint)bVar10 * -2 + 1);
          }
        }
        iVar6 = iVar7;
      } while (iVar7 < this_ptr->width);
    }
    iStack_24 = iStack_24 + 1;
    iStack_28 = iStack_28 + 4;
    puStack_14 = puStack_14 + row_stride;
  } while( true );
}
