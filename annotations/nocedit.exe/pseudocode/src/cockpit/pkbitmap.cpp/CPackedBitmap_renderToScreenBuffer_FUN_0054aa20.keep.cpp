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
  int iVar7;
  int iVar8;
  ushort *puVar9;
  int local_20;
  int local_18;
  char *pcVar2;
  ushort uVar1;
  int iVar4;
  int iVar3;
  
  if ((this_ptr->row_pointers != (void **)0x0) && (this_ptr->packed_data != (ushort *)0x0)) {
    iVar6 = dest_x * g_BitsPerPixel;
    iVar7 = iVar6 >> 0x1f;
    pCVar5 = cockpit_ckptutil_c_getColorConversionFunction_FUN_00431760();
    local_18 = 0;
    local_20 = dest_y;
    puVar9 = (ushort *)((char *)this_ptr->packed_data + (int)this_ptr->row_pointers[0]);
    do {
      pcVar2 = (char *)this_ptr->packed_data;
      iVar3 = (int)this_ptr->row_pointers[local_18 + 1];
      iVar4 = (int)g_ScreenBufferArray[local_20];
      for (; (char *)puVar9 < pcVar2 + iVar3;
          puVar9 = (ushort *)((uVar1 + 3 & 0xfffffffc) + (int)(puVar9 + 2))) {
        iVar8 = (int)((uint)*puVar9 * g_BitsPerPixel) >> 0x1f;
        uVar1 = puVar9[1];
        (*pCVar5)((void *)(((int)(((uint)*puVar9 * g_BitsPerPixel + iVar8 * -8) -
                                 (uint)(iVar8 << 2 < 0)) >> 3) +
                          iVar4 + ((int)((iVar6 + iVar7 * -8) - (uint)(iVar7 << 2 < 0)) >> 3)),
                  puVar9 + 2,(uint)uVar1);
      }
      local_18 = local_18 + 1;
      local_20 = local_20 + 1;
    } while (local_18 < this_ptr->height);
  }
  return;
}
