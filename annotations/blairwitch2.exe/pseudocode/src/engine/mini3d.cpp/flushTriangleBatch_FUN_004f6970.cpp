// Name: engine_mini3d.cpp_flushTriangleBatch_FUN_004f6970
// Address: 004f6970
// Address Range: [[004f6970, 004f6a68]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_flushTriangleBatch_FUN_004f6970(void)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_flushTriangleBatch_FUN_004f6970(void)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  
  if ((2 < g_INT_01d0d2f0) && (2 < g_INT_01d0d2ec)) {
    if ((g_PTR_0264bca0 == (byte *)0x0) || (g_INT_01c37788 == 0)) {
      iVar5 = 0;
      if (0 < g_INT_01d0d2f0) {
        iVar4 = 0;
        do {
          puVar1 = (ushort *)(iVar4 + 0x1d0d2f8);
          puVar2 = (ushort *)((int)g_SHORT_ARRAY_01d0d2f6 + iVar4);
          puVar3 = (ushort *)(iVar4 + 0x1d0d2f4);
          iVar4 = iVar4 + 6;
          iVar5 = iVar5 + 3;
          engine_mini3d_cpp_rasterizeTriangle_FUN_004f7280
                    (g_FLOAT_PTR_01d09b7c + ((uint)*puVar3 + g_INT_01d0d2e8) * 0x10,
                     g_FLOAT_PTR_01d09b7c + ((uint)*puVar2 + g_INT_01d0d2e8) * 0x10,
                     g_FLOAT_PTR_01d09b7c + ((uint)*puVar1 + g_INT_01d0d2e8) * 0x10);
        } while (iVar5 < g_INT_01d0d2f0);
      }
    }
    else {
      (*(code *)g_PTR_0264bca0)
                (g_FLOAT_PTR_01d09b7c + g_INT_01d0d2e8 * 0x10,g_INT_01d0d2ec,0x1d0d2f4,
                 g_INT_01d0d2f0 / 3,g_BIT_INTEGER32_01c38b54.dword);
    }
    g_INT_01d0d2f0 = 0;
    g_INT_01d0d2ec = 0;
  }
  return;
}
