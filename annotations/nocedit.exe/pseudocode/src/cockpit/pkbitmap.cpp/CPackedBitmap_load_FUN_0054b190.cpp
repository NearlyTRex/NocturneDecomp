// Name: cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_0054b190
// Address: 0054b190
// Address Range: [[0054b190, 0054b3ec]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_load_FUN_0054b190(CPackedBitmap *this_ptr,uchar *bitmap_data,int width,int height,int transparency_color,int row_stride)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_load_FUN_0054b190(CPackedBitmap *this_ptr,uchar *bitmap_data,int width,int height,int transparency_color,int row_stride)

{
  void **ppvVar2;
  byte *pbVar3;
  int iVar4;
  char *pcVar5;
  ushort *puVar6;
  ushort *puVar1;
  uint uVar7;
  uint uVar2;
  int iVar8;
  int iVar9;
  int new_size;
  int iVar3;
  uchar *puVar10;
  byte bVar11;
  char local_154 [300];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  uchar *local_14;
  ushort uVar1;
  
  bVar11 = 0;
  cockpit_pkbitmap_cpp_CPackedBitmap_free_FUN_0054a8e0(this_ptr);
  this_ptr->width = width;
  this_ptr->height = height;
  if (row_stride == 0) {
    row_stride = this_ptr->width;
  }
  ppvVar2 = (void **)shape_memdbg_cpp_debugAllocTracked2_FUN_0050f1f0
                      ((this_ptr->height + 1) * 4,"..\\cockpit\\pkbitmap.cpp",0x378);
  this_ptr->row_pointers = ppvVar2;
  if (ppvVar2 == (void **)0x0) {
    g_CurrentFilename = "..\\cockpit\\pkbitmap.cpp";
    g_CurrentLineNumber = 0x37a;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to allocate memory for rowOffset table in CPackedBitmap::load");
  }
  new_size = 0;
  local_24 = 0;
  local_14 = bitmap_data;
  local_28 = 0;
  local_18 = 0;
  do {
    *(int *)((int)this_ptr->row_pointers + local_28) = new_size;
    if (this_ptr->height <= local_24) {
      puVar1 = (ushort *)shape_memdbg_cpp_debugRealloc_FUN_0050f540
                         (this_ptr->packed_data,new_size,"..\\cockpit\\pkbitmap.cpp",0x3d6);
      this_ptr->packed_data = puVar1;
      return;
    }
    iVar8 = 0;
    iVar3 = new_size;
    if (0 < this_ptr->width) {
      do {
        pbVar3 = local_14 + iVar8;
        iVar9 = iVar8;
        if ((uint)*pbVar3 == transparency_color) {
          iVar9 = iVar8 + 1;
          new_size = iVar3;
        }
        else {
          do {
            iVar9 = iVar9 + 1;
            pbVar3 = pbVar3 + 1;
            if (this_ptr->width <= iVar9) break;
          } while ((uint)*pbVar3 != transparency_color);
          iVar4 = ((iVar9 - iVar8) + 3U & 0xfffffffc) + iVar3;
          new_size = iVar4 + 4;
          if (local_18 < new_size) {
            local_18 = iVar4 + 0x4004;
            pcVar5 = (char *)shape_memdbg_cpp_debugRealloc_FUN_0050f540
                               (this_ptr->packed_data,local_18,"..\\cockpit\\pkbitmap.cpp",0x3ac
                               );
            this_ptr->packed_data = (ushort *)pcVar5;
            if (pcVar5 == (char *)0x0) {
              _sprintf
                        (local_154,"Out of memory packing file \"%s\" on row %u trying to get %u bytes",this_ptr,local_24,local_18);
              g_CurrentFilename = "..\\cockpit\\pkbitmap.cpp";
              g_CurrentLineNumber = 0x3b2;
              core_main_c_displayErrorAndQuit_FUN_00506f10(local_154);
            }
          }
          puVar6 = (ushort *)((int)this_ptr->packed_data + iVar3);
          *puVar6 = (ushort)iVar8;
          puVar6[1] = (ushort)(iVar9 - iVar8);
          uVar1 = puVar6[1];
          puVar10 = local_14 + *puVar6;
          puVar1 = puVar6 + 2;
          for (uVar7 = (uint)(uVar1 >> 2); uVar7 != 0; uVar7 = uVar7 - 1) {
            *(uint *)puVar1 = *(uint *)puVar10;
            puVar10 = puVar10 + (uint)bVar11 * -8 + 4;
            puVar1 = puVar1 + (uint)bVar11 * -4 + 2;
          }
          for (uVar2 = (byte)uVar1 & 0xffffff03; uVar2 != 0; uVar2 = uVar2 - 1) {
            puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
            *(uchar *)puVar1 = *puVar10;
            puVar10 = puVar10;
            puVar1 = (ushort *)((int)puVar1 + (uint)bVar11 * -2 + 1);
          }
        }
        iVar8 = iVar9;
        iVar3 = new_size;
      } while (iVar9 < this_ptr->width);
    }
    local_24 = local_24 + 1;
    local_28 = local_28 + 4;
    local_14 = local_14 + row_stride;
  } while( true );
}
