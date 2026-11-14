// Name: cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_0050fa90
// Address: 0050fa90
// Address Range: [[0050fa90, 0050fcb7]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_load_FUN_0050fa90(CPackedBitmap *this_ptr,uchar *bitmap_data,int width,int height,int transparency_color,int row_stride)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_load_FUN_0050fa90(CPackedBitmap *this_ptr,uchar *bitmap_data,int width,int height,int transparency_color,int row_stride)

{
  int *piVar1;
  byte *pbVar2;
  int iVar3;
  ushort *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulong new_size;
  uint *puVar8;
  uint uVar9;
  byte bVar10;
  int in_stack_0000001c;
  char acStack_150 [300];
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  ulong uStack_18;
  ulong uStack_14;
  
  bVar10 = 0;
  cockpit_pkbitmap_cpp_CPackedBitmap_free_FUN_0050f230(this_ptr);
  this_ptr->width = height;
  this_ptr->height = transparency_color;
  if (in_stack_0000001c == 0) {
    in_stack_0000001c = this_ptr->width;
  }
  piVar1 = (int *)operator_new_array((this_ptr->height + 1) * 4);
  this_ptr->row_offsets = piVar1;
  if (piVar1 == (int *)0x0) {
    _DAT_01d71de0 = "..\\cockpit\\pkbitmap.cpp";
    _DAT_01d71de4 = 0x37e;
    core_main_c_FUN_004e4330("Unable to allocate memory for rowOffset table in CPackedBitmap::load");
  }
  new_size = 0;
  iStack_20 = 0;
  iStack_24 = 0;
  uStack_14 = 0;
  do {
    *(ulong *)((int)this_ptr->row_offsets + iStack_24) = new_size;
    if (this_ptr->height <= iStack_20) {
      puVar4 = (ushort *)realloc(this_ptr->packed_data,new_size);
      this_ptr->packed_data = puVar4;
      return;
    }
    iVar6 = 0;
    if (0 < this_ptr->width) {
      do {
        pbVar2 = (byte *)(width + iVar6);
        iVar7 = iVar6;
        if ((uint)*pbVar2 == row_stride) {
          iVar7 = iVar6 + 1;
        }
        else {
          do {
            iVar7 = iVar7 + 1;
            pbVar2 = pbVar2 + 1;
            if (this_ptr->width <= iVar7) break;
          } while ((uint)*pbVar2 != row_stride);
          uVar9 = iVar7 - iVar6;
          iVar3 = (uVar9 + 3 & 0xfffffffc) + new_size;
          uStack_18 = iVar3 + 4;
          iStack_1c = iVar6;
          if ((int)uStack_14 < (int)uStack_18) {
            uStack_14 = iVar3 + 0x4004;
            puVar4 = (ushort *)realloc(this_ptr->packed_data,uStack_14);
            this_ptr->packed_data = puVar4;
            if (puVar4 == (ushort *)0x0) {
              _sprintf(acStack_150,"Out of memory packing file \"%s\" on row %u trying to get %u bytes");
              _DAT_01d71de0 = "..\\cockpit\\pkbitmap.cpp";
              _DAT_01d71de4 = 0x3b6;
              core_main_c_FUN_004e4330(acStack_150);
            }
          }
          puVar4 = (ushort *)((int)this_ptr->packed_data + new_size);
          *puVar4 = (ushort)iStack_1c;
          puVar4[1] = (ushort)uVar9;
          puVar8 = (uint *)((uint)*puVar4 + width);
          puVar4 = puVar4 + 2;
          for (uVar5 = (uVar9 & 0xffff) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(uint *)puVar4 = *puVar8;
            puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
            puVar4 = puVar4 + (uint)bVar10 * -4 + 2;
          }
          for (uVar9 = uVar9 & 3; new_size = uStack_18, uVar9 != 0; uVar9 = uVar9 - 1) {
            *(byte *)puVar4 = *(byte *)puVar8;
            puVar8 = (uint *)((int)puVar8 + (uint)bVar10 * -2 + 1);
            puVar4 = (ushort *)((int)puVar4 + (uint)bVar10 * -2 + 1);
          }
        }
        iVar6 = iVar7;
      } while (iVar7 < this_ptr->width);
    }
    iStack_20 = iStack_20 + 1;
    iStack_24 = iStack_24 + 4;
    width = width + in_stack_0000001c;
  } while( true );
}
