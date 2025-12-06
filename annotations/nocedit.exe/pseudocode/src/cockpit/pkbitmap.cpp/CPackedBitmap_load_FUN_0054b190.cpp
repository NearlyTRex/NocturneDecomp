// Name: cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_0054b190
// Address: 0054b190
// Address Range: [[0054b190, 0054b3ec]]
// Convention: __cdecl
// Signature: void cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_0054b190(CPackedBitmap * this_ptr, uchar * bitmap_data, int width, int height, int stride_bytes, uchar transparency_color)

#include "nocturne.h"

void __cdecl
cockpit_pkbitmap_cpp_CPackedBitmap_load_FUN_0054b190
          (CPackedBitmap *this_ptr,uchar *bitmap_data,int width,int height,int stride_bytes,
          uchar transparency_color)

{
  ushort uVar1;
  void **ppvVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  ushort *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  BADSPACEBASE *in_ESP;
  int new_size;
  int iVar11;
  uint *puVar12;
  byte bVar13;
  uint in_stack_00000020;
  int in_stack_00000024;
  uint local_20;
  int local_1c;
  int local_18;
  int new_size_00;
  
  bVar13 = 0;
  cockpit_pkbitmap_cpp_CPackedBitmap_free_FUN_0054a8e0(this_ptr);
  this_ptr->width = height;
  this_ptr->height = stride_bytes;
  ppvVar2 = (void **)shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                               ((this_ptr->height + 1) * 4,"..\\cockpit\\pkbitmap.cpp",0x378);
  this_ptr->row_pointers = ppvVar2;
  if (ppvVar2 == (void **)0x0) {
    g_CurrentFilename = "..\\cockpit\\pkbitmap.cpp";
    g_CurrentLineNumber = 0x37a;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to allocate memory for rowOffset table in CPackedBitmap::load");
  }
  new_size = 0;
  local_18 = 0;
  local_1c = 0;
  new_size_00 = 0;
  do {
    *(int *)((int)this_ptr->row_pointers + local_1c) = new_size;
    if (this_ptr->height <= local_18) {
      pcVar6 = (char *)shape_memdbg_cpp_debugRealloc_FUN_0050f540
                                 (this_ptr->packed_data,new_size,"..\\cockpit\\pkbitmap.cpp",
                                  0x3d6);
      this_ptr->packed_data = pcVar6;
      return;
    }
    iVar9 = 0;
    iVar11 = new_size;
    if (0 < this_ptr->width) {
      do {
        pbVar3 = (byte *)(stride_bytes + iVar9);
        iVar10 = iVar9;
        if (*pbVar3 == in_stack_00000020) {
          iVar10 = iVar9 + 1;
          new_size = iVar11;
        }
        else {
          do {
            iVar10 = iVar10 + 1;
            pbVar3 = pbVar3 + 1;
            if (this_ptr->width <= iVar10) break;
          } while (*pbVar3 != in_stack_00000020);
          iVar4 = iVar10 - iVar9;
          iVar5 = (iVar4 + 3U & 0xfffffffc) + iVar11;
          new_size = iVar5 + 4;
          if (new_size_00 < new_size) {
            new_size_00 = iVar5 + 0x4004;
            pcVar6 = (char *)shape_memdbg_cpp_debugRealloc_FUN_0050f540
                                       (this_ptr->packed_data,new_size_00,
                                        "..\\cockpit\\pkbitmap.cpp",0x3ac);
            this_ptr->packed_data = pcVar6;
            if (pcVar6 == (char *)0x0) {
              crt_stdio_c_sprintf_FUN_005fdbd0
                        (&stack0xfffffeb0,"Out of memory packing file \"%s\" on row %u trying to get %u bytes",this_ptr,local_20,
                         iVar4);
              g_CurrentFilename = "..\\cockpit\\pkbitmap.cpp";
              g_CurrentLineNumber = 0x3b2;
              core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xfffffeb4);
            }
          }
          puVar7 = (ushort *)(this_ptr->packed_data + iVar11);
          *puVar7 = (ushort)iVar9;
          puVar7[1] = (ushort)iVar4;
          uVar1 = puVar7[1];
          puVar12 = (uint *)((uint)*puVar7 + stride_bytes);
          puVar7 = puVar7 + 2;
          for (uVar8 = (uint)(uVar1 >> 2); uVar8 != 0; uVar8 = uVar8 - 1) {
            *(uint *)puVar7 = *puVar12;
            puVar12 = puVar12 + (uint)bVar13 * -2 + 1;
            puVar7 = puVar7 + (uint)bVar13 * -4 + 2;
          }
          for (uVar8 = (byte)uVar1 & 0xffffff03; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(byte *)puVar7 = *(byte *)puVar12;
            puVar12 = (uint *)((int)puVar12 + (uint)bVar13 * -2 + 1);
            puVar7 = (ushort *)((int)puVar7 + (uint)bVar13 * -2 + 1);
          }
        }
        iVar9 = iVar10;
        iVar11 = new_size;
      } while (iVar10 < this_ptr->width);
    }
    local_18 = local_18 + 1;
    local_1c = local_1c + 4;
    stride_bytes = stride_bytes + in_stack_00000024;
  } while( true );
}
