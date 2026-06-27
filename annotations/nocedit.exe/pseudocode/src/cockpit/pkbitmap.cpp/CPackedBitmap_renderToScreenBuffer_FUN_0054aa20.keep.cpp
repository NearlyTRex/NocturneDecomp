// Name: cockpit_pkbitmap.cpp_CPackedBitmap_renderToScreenBuffer_FUN_0054aa20
// Address: 0054aa20
// MANUAL RECONSTRUCTION
// Address Range: [[0054aa20, 0054ab27]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_renderToScreenBuffer_FUN_0054aa20(CPackedBitmap *this_ptr,int dest_x,int dest_y)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_renderToScreenBuffer_FUN_0054aa20(CPackedBitmap *this_ptr,int dest_x,int dest_y)

{
  ColorConversionFunc *pCVar5;
  int iVar6;
  ushort *puVar9;
  int local_20;
  int local_18;
  char *pcVar2;
  ushort uVar1;
  char *screen_row;
  int iVar3;
  
  if ((this_ptr->row_offsets != (int *)0x0) && (this_ptr->packed_data != (ushort *)0x0)) {
    iVar6 = dest_x * g_BitsPerPixel;
    pCVar5 = cockpit_ckptutil_c_getColorConversionFunction_FUN_00431760();
    local_18 = 0;
    local_20 = dest_y;
    puVar9 = (ushort *)((char *)this_ptr->packed_data + this_ptr->row_offsets[0]);
    do {
      pcVar2 = (char *)this_ptr->packed_data;
      iVar3 = this_ptr->row_offsets[local_18 + 1];
      screen_row = (char *)g_ScreenBufferArray[local_20];
      for (; (char *)puVar9 < pcVar2 + iVar3;
          puVar9 = (ushort *)((char *)(puVar9 + 2) + (uVar1 + 3 & 0xfffffffc))) {
        uVar1 = puVar9[1];
        (*pCVar5)((void *)(screen_row + (int)((uint)*puVar9 * g_BitsPerPixel) / 8 + iVar6 / 8),
                  puVar9 + 2,(uint)uVar1);
      }
      local_18 = local_18 + 1;
      local_20 = local_20 + 1;
    } while (local_18 < this_ptr->height);
  }
  return;
}
