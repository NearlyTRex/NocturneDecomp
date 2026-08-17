// Name: cockpit_pkbitmap.cpp_CPackedBitmap_renderToScreenBuffer_FUN_004f4050
// Address: 004f4050
// Address Range: [[004f4050, 004f416a]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_renderToScreenBuffer_FUN_004f4050(CPackedBitmap *this_ptr,int dest_x,int dest_y)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_renderToScreenBuffer_FUN_004f4050(CPackedBitmap *this_ptr,int dest_x,int dest_y)

{
  ushort *puVar1;
  ushort *src_buffer;
  ushort uVar2;
  int iVar3;
  ushort *puVar4;
  ColorConversionFunc *pCVar5;
  void *dest_buffer;
  int iVar6;
  ushort *puVar7;
  int local_24;
  int local_20;
  int local_1c;
  
  if ((this_ptr->row_offsets != (int *)0x0) && (this_ptr->packed_data != (ushort *)0x0)) {
    local_1c = 0;
    if (g_BitsPerPixel == 0x10) {
      dest_x = dest_x * 2;
    }
    pCVar5 = cockpit_ckptutil_c_getColorConversionFunction_FUN_0042d130();
    local_20 = dest_y << 2;
    local_24 = 0;
    puVar7 = (ushort *)((int)this_ptr->packed_data + *this_ptr->row_offsets);
    do {
      iVar3 = *(int *)((int)this_ptr->row_offsets + local_24 + 4);
      puVar4 = this_ptr->packed_data;
      iVar6 = dest_x + *(int *)((int)g_ScreenBufferArray + local_20);
      while (puVar7 < (ushort *)((int)puVar4 + iVar3)) {
        puVar1 = puVar7 + 1;
        src_buffer = puVar7 + 2;
        uVar2 = *puVar7;
        puVar7 = (ushort *)((int)src_buffer + (*puVar1 + 3 & 0xfffffffc));
        dest_buffer = (void *)(iVar6 + (uint)uVar2);
        if (g_BitsPerPixel == 0x10) {
          dest_buffer = (void *)((int)dest_buffer + (uint)uVar2);
        }
        (*pCVar5)(dest_buffer,src_buffer,(uint)*puVar1);
      }
      local_1c = local_1c + 1;
      local_20 = local_20 + 4;
      local_24 = local_24 + 4;
    } while (local_1c < this_ptr->height);
  }
  return;
}
