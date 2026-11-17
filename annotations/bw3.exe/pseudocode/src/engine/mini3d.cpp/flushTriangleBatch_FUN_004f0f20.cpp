// Name: engine_mini3d.cpp_flushTriangleBatch_FUN_004f0f20
// Address: 004f0f20
// Address Range: [[004f0f20, 004f1018]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_flushTriangleBatch_FUN_004f0f20(void)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_flushTriangleBatch_FUN_004f0f20(void)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  
  if ((2 < (int)g_SHORT_ARRAY_01d7a6d0) && (2 < g_INT_01d7a6cc)) {
    if ((g_PTR_02cf60cc == (byte *)0x0) || (g_INT_01c6cee8 == 0)) {
      iVar5 = 0;
      if (0 < (int)g_SHORT_ARRAY_01d7a6d0) {
        iVar4 = 0;
        do {
          puVar1 = (ushort *)(iVar4 + 0x1d7a6d8);
          puVar2 = (ushort *)(iVar4 + 0x1d7a6d6);
          puVar3 = (ushort *)(iVar4 + 0x1d7a6d4);
          iVar4 = iVar4 + 6;
          iVar5 = iVar5 + 3;
          engine_mini3d_cpp_rasterizeTriangle_FUN_004f1830
                    (g_FLOAT_PTR_01d76f60 + ((uint)*puVar3 + g_INT_01d7a6c8) * 0x10,
                     g_FLOAT_PTR_01d76f60 + ((uint)*puVar2 + g_INT_01d7a6c8) * 0x10,
                     g_FLOAT_PTR_01d76f60 + ((uint)*puVar1 + g_INT_01d7a6c8) * 0x10);
        } while (iVar5 < (int)g_SHORT_ARRAY_01d7a6d0);
      }
    }
    else {
      (*(code *)g_PTR_02cf60cc)
                (g_FLOAT_PTR_01d76f60 + g_INT_01d7a6c8 * 0x10,g_INT_01d7a6cc,0x1d7a6d4,
                 (int)g_SHORT_ARRAY_01d7a6d0 / 3,g_BIT_INTEGER32_01c6e2b4.dword);
    }
    g_SHORT_ARRAY_01d7a6d0[0] = 0;
    g_SHORT_ARRAY_01d7a6d0[1] = 0;
    g_INT_01d7a6cc = 0;
  }
  return;
}
