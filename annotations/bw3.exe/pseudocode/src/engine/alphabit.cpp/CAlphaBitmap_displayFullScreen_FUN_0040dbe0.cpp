// Name: engine_alphabit.cpp_CAlphaBitmap_displayFullScreen_FUN_0040dbe0
// Address: 0040dbe0
// Address Range: [[0040dbe0, 0040dd9b]]
// Convention: __cdecl
// Signature: void __cdecl engine_alphabit_cpp_CAlphaBitmap_displayFullScreen_FUN_0040dbe0(CAlphaBitmap *this_ptr)

#include "nocturne.h"

void __cdecl engine_alphabit_cpp_CAlphaBitmap_displayFullScreen_FUN_0040dbe0(CAlphaBitmap *this_ptr)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_1c;
  int local_18;
  int local_14;
  
  engine_alphabit_cpp_CAlphaBitmap_initPalette_FUN_0040db50(this_ptr);
  if (g_INT_005fba20 == 0x10) {
    iVar2 = 0;
    local_18 = 0;
    do {
      uVar1 = *(uint *)((int)g_UINT_ARRAY_01c6a974 + local_18);
      *(ushort *)((int)g_USHORT_ARRAY_01c6ad74 + iVar2) =
           (ushort)(((int)uVar1 >> 8 & 0xffU) / (uint)g_INT_01c6af84 <<
                   (g_BIT_INTEGER32_01c6af80.bytes[0] & 0x1f)) |
           (ushort)(((int)uVar1 >> 0x10 & 0xffU) / (uint)g_INT_01c6af78 <<
                   (g_BIT_INTEGER32_01c6af74.bytes[0] & 0x1f)) |
           (ushort)((uVar1 & 0xff) / (uint)g_INT_01c6af90 <<
                   (g_BIT_INTEGER32_01c6af8c.bytes[0] & 0x1f));
      local_18 = local_18 + 4;
      iVar2 = iVar2 + 2;
    } while (iVar2 != 0x200);
  }
  local_14 = 0;
  if (0 < g_INT_005fba1c) {
    local_1c = 0;
    do {
      iVar2 = 0;
      if (0 < g_INT_005fba18) {
        iVar4 = 0;
        iVar3 = 0;
        do {
          if (g_INT_005fba20 == 0x20) {
            *(uint *)(*(int *)((int)g_ARRAY_PTR_01c5faec + local_1c) + iVar3) =
                 g_UINT_ARRAY_01c6a974
                 [(byte)this_ptr->raw
                        [(this_ptr->width * iVar2) / g_INT_005fba18 +
                         ((local_14 * this_ptr->height) / g_INT_005fba1c) * this_ptr->width]];
          }
          else {
            *(ushort *)(*(int *)((int)g_ARRAY_PTR_01c5faec + local_1c) + iVar4) =
                 g_USHORT_ARRAY_01c6ad74
                 [(byte)this_ptr->raw
                        [(this_ptr->width * iVar2) / g_INT_005fba18 +
                         ((local_14 * this_ptr->height) / g_INT_005fba1c) * this_ptr->width]];
          }
          iVar4 = iVar4 + 2;
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + 4;
        } while (iVar2 < g_INT_005fba18);
      }
      local_1c = local_1c + 4;
      local_14 = local_14 + 1;
    } while (local_14 < g_INT_005fba1c);
  }
  return;
}
