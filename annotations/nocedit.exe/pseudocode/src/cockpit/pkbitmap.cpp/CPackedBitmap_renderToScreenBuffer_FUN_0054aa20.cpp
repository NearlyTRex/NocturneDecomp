// Name: cockpit_pkbitmap.cpp_CPackedBitmap_renderToScreenBuffer_FUN_0054aa20
// Address: 0054aa20
// Address Range: [[0054aa20, 0054ab27]]
// Convention: __cdecl
// Signature: void cockpit_pkbitmap.cpp_CPackedBitmap_renderToScreenBuffer_FUN_0054aa20(CPackedBitmap * this_ptr, int dest_x, int dest_y)

#include "nocturne.h"

void __cdecl
cockpit_pkbitmap_cpp_CPackedBitmap_renderToScreenBuffer_FUN_0054aa20
          (CPackedBitmap *this_ptr,int dest_x,int dest_y)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ColorConversionFunc *pCVar5;
  int iVar6;
  ushort *puVar7;
  int in_stack_00000010;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if ((this_ptr->row_pointers != (void **)0x0) && (this_ptr->packed_data != (char *)0x0)) {
    pCVar5 = cockpit_ckptutil_c_getColorConversionFunction_FUN_00431760();
    local_14 = 0;
    local_18 = 0;
    local_1c = in_stack_00000010 << 2;
    puVar7 = (ushort *)(*(int *)(dest_x + 0x14) + **(int **)(dest_x + 0x20));
    do {
      iVar2 = *(int *)(dest_x + 0x14);
      iVar3 = *(int *)(*(int *)(dest_x + 0x20) + local_18 + 4);
      iVar4 = *(int *)((int)g_ScreenBufferArray + local_1c);
      for (; puVar7 < (ushort *)(iVar2 + iVar3);
          puVar7 = (ushort *)((uVar1 + 3 & 0xfffffffc) + (int)(puVar7 + 2))) {
        iVar6 = (int)((uint)*puVar7 * g_BitsPerPixel) >> 0x1f;
        uVar1 = puVar7[1];
        (*pCVar5)((void *)(((int)(((uint)*puVar7 * g_BitsPerPixel + iVar6 * -8) -
                                 (uint)(iVar6 << 2 < 0)) >> 3) + iVar4 + local_20),puVar7 + 2,
                  (uint)uVar1);
      }
      local_18 = local_18 + 4;
      local_14 = local_14 + 1;
      local_1c = local_1c + 4;
    } while (local_14 < *(int *)(dest_x + 0x1c));
  }
  return;
}
