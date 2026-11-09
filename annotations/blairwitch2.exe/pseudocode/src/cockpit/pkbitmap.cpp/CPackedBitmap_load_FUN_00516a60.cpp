// Name: cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_00516a60
// Address: 00516a60
// Address Range: [[00516a60, 00516c87]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_load_FUN_00516a60(CPackedBitmap *this_ptr,uchar *bitmap_data,int width,int height,int transparency_color,int row_stride)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_load_FUN_00516a60(CPackedBitmap *this_ptr,uchar *bitmap_data,int width,int height,int transparency_color,int row_stride)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  void *pvVar4;
  ushort *puVar5;
  uint uVar6;
  int iVar7;
  ulong new_size;
  uchar *puVar8;
  uint uVar9;
  byte bVar10;
  byte auStack_154 [300];
  int iStack_28;
  int iStack_24;
  int iStack_20;
  ulong uStack_1c;
  ulong uStack_18;
  uchar *puStack_14;
  
  bVar10 = 0;
  cockpit_pkbitmap_cpp_FUN_00516200(this_ptr);
  *(int *)&this_ptr->field_0x18 = width;
  *(int *)&this_ptr->field_0x1c = height;
  if (row_stride == 0) {
    row_stride = *(int *)&this_ptr->field_0x18;
  }
  iVar1 = FUN_005b8df8((*(int *)&this_ptr->field_0x1c + 1) * 4);
  *(int *)&this_ptr->field_0x20 = iVar1;
  if (iVar1 == 0) {
    _DAT_01d046a0 = "..\\cockpit\\pkbitmap.cpp";
    _DAT_01d046a4 = 0x37c;
    core_main_c_FUN_004e4500("Unable to allocate memory for rowOffset table in CPackedBitmap::load");
  }
  new_size = 0;
  iStack_24 = 0;
  puStack_14 = bitmap_data;
  iStack_28 = 0;
  uStack_18 = 0;
  do {
    *(ulong *)(*(int *)&this_ptr->field_0x20 + iStack_28) = new_size;
    if (*(int *)&this_ptr->field_0x1c <= iStack_24) {
      pvVar4 = realloc(*(void **)&this_ptr->field_0x14,new_size);
      *(void **)&this_ptr->field_0x14 = pvVar4;
      return;
    }
    iVar1 = 0;
    if (0 < *(int *)&this_ptr->field_0x18) {
      do {
        pbVar2 = puStack_14 + iVar1;
        iVar7 = iVar1;
        if ((uint)*pbVar2 == transparency_color) {
          iVar7 = iVar1 + 1;
        }
        else {
          do {
            iVar7 = iVar7 + 1;
            pbVar2 = pbVar2 + 1;
            if (*(int *)&this_ptr->field_0x18 <= iVar7) break;
          } while ((uint)*pbVar2 != transparency_color);
          uVar9 = iVar7 - iVar1;
          iVar3 = (uVar9 + 3 & 0xfffffffc) + new_size;
          uStack_1c = iVar3 + 4;
          iStack_20 = iVar1;
          if ((int)uStack_18 < (int)uStack_1c) {
            uStack_18 = iVar3 + 0x4004;
            pvVar4 = realloc(*(void **)&this_ptr->field_0x14,uStack_18);
            *(void **)&this_ptr->field_0x14 = pvVar4;
            if (pvVar4 == (void *)0x0) {
              FUN_005b7790
                        (auStack_154,"Out of memory packing file \"%s\" on row %u trying to get %u bytes",this_ptr,iStack_24,
                         uStack_18);
              _DAT_01d046a0 = "..\\cockpit\\pkbitmap.cpp";
              _DAT_01d046a4 = 0x3b4;
              core_main_c_FUN_004e4500(auStack_154);
            }
          }
          puVar5 = (ushort *)(*(int *)&this_ptr->field_0x14 + new_size);
          *puVar5 = (ushort)iStack_20;
          puVar5[1] = (ushort)uVar9;
          puVar8 = puStack_14 + *puVar5;
          puVar5 = puVar5 + 2;
          for (uVar6 = (uVar9 & 0xffff) >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(uint *)puVar5 = *(uint *)puVar8;
            puVar8 = puVar8 + (uint)bVar10 * -8 + 4;
            puVar5 = puVar5 + (uint)bVar10 * -4 + 2;
          }
          for (uVar9 = uVar9 & 3; new_size = uStack_1c, uVar9 != 0; uVar9 = uVar9 - 1) {
            *(uchar *)puVar5 = *puVar8;
            puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
            puVar5 = (ushort *)((int)puVar5 + (uint)bVar10 * -2 + 1);
          }
        }
        iVar1 = iVar7;
      } while (iVar7 < *(int *)&this_ptr->field_0x18);
    }
    iStack_24 = iStack_24 + 1;
    iStack_28 = iStack_28 + 4;
    puStack_14 = puStack_14 + row_stride;
  } while( true );
}
