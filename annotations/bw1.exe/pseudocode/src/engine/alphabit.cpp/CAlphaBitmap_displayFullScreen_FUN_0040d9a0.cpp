// Name: engine_alphabit.cpp_CAlphaBitmap_displayFullScreen_FUN_0040d9a0
// Address: 0040d9a0
// Address Range: [[0040d9a0, 0040db5b]]
// Convention: __cdecl
// Signature: void __cdecl engine_alphabit_cpp_CAlphaBitmap_displayFullScreen_FUN_0040d9a0(CAlphaBitmap *this_ptr)

#include "nocturne.h"

void __cdecl engine_alphabit_cpp_CAlphaBitmap_displayFullScreen_FUN_0040d9a0(CAlphaBitmap *this_ptr)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_1c;
  int local_18;
  int local_14;
  
  engine_alphabit_cpp_CAlphaBitmap_initPalette_FUN_0040d910(this_ptr);
  if (g_INT_0061b4a0 == 0x10) {
    iVar2 = 0;
    local_18 = 0;
    do {
      uVar1 = *(uint *)((int)g_UINT_ARRAY_01c4e3d4 + local_18);
      *(ushort *)((int)g_USHORT_ARRAY_01c4e7d4 + iVar2) =
           (ushort)(((int)uVar1 >> 8 & 0xffU) / (uint)g_INT_01c4e9e4 <<
                   (g_BIT_INTEGER32_01c4e9e0.bytes[0] & 0x1f)) |
           (ushort)(((int)uVar1 >> 0x10 & 0xffU) / (uint)g_INT_01c4e9d8 <<
                   (g_BIT_INTEGER32_01c4e9d4.bytes[0] & 0x1f)) |
           (ushort)((uVar1 & 0xff) / (uint)g_INT_01c4e9f0 <<
                   (g_BIT_INTEGER32_01c4e9ec.bytes[0] & 0x1f));
      local_18 = local_18 + 4;
      iVar2 = iVar2 + 2;
    } while (iVar2 != 0x200);
  }
  local_14 = 0;
  if (0 < g_INT_0061b49c) {
    local_1c = 0;
    do {
      iVar2 = 0;
      if (0 < g_INT_0061b498) {
        iVar4 = 0;
        iVar3 = 0;
        do {
          if (g_INT_0061b4a0 == 0x20) {
            *(uint *)(*(int *)((int)g_ARRAY_PTR_01c4354c + local_1c) + iVar3) =
                 g_UINT_ARRAY_01c4e3d4
                 [(byte)this_ptr->raw
                        [(this_ptr->width * iVar2) / g_INT_0061b498 +
                         ((local_14 * this_ptr->height) / g_INT_0061b49c) * this_ptr->width]];
          }
          else {
            *(ushort *)(*(int *)((int)g_ARRAY_PTR_01c4354c + local_1c) + iVar4) =
                 g_USHORT_ARRAY_01c4e7d4
                 [(byte)this_ptr->raw
                        [(this_ptr->width * iVar2) / g_INT_0061b498 +
                         ((local_14 * this_ptr->height) / g_INT_0061b49c) * this_ptr->width]];
          }
          iVar4 = iVar4 + 2;
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + 4;
        } while (iVar2 < g_INT_0061b498);
      }
      local_1c = local_1c + 4;
      local_14 = local_14 + 1;
    } while (local_14 < g_INT_0061b49c);
  }
  return;
}
