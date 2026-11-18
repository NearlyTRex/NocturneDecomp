// Name: engine_mini3d.cpp_flushTriangleBatch_FUN_00515750
// Address: 00515750
// Address Range: [[00515750, 00515848]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_flushTriangleBatch_FUN_00515750(void)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_flushTriangleBatch_FUN_00515750(void)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  
  if ((2 < (int)g_SHORT_ARRAY_01d25f50) && (2 < g_INT_01d25f4c)) {
    if ((g_PTR_02c83470 == (byte *)0x0) || (g_INT_01c50948 == 0)) {
      iVar5 = 0;
      if (0 < (int)g_SHORT_ARRAY_01d25f50) {
        iVar4 = 0;
        do {
          puVar1 = (ushort *)(iVar4 + 0x1d25f58);
          puVar2 = (ushort *)(iVar4 + 0x1d25f56);
          puVar3 = (ushort *)(iVar4 + 0x1d25f54);
          iVar4 = iVar4 + 6;
          iVar5 = iVar5 + 3;
          engine_mini3d_cpp_rasterizeTriangle_FUN_00516060
                    (g_FLOAT_PTR_01d227e0 + ((uint)*puVar3 + g_INT_01d25f48) * 0x10,
                     g_FLOAT_PTR_01d227e0 + ((uint)*puVar2 + g_INT_01d25f48) * 0x10,
                     g_FLOAT_PTR_01d227e0 + ((uint)*puVar1 + g_INT_01d25f48) * 0x10);
        } while (iVar5 < (int)g_SHORT_ARRAY_01d25f50);
      }
    }
    else {
      (*(code *)g_PTR_02c83470)
                (g_FLOAT_PTR_01d227e0 + g_INT_01d25f48 * 0x10,g_INT_01d25f4c,0x1d25f54,
                 (int)g_SHORT_ARRAY_01d25f50 / 3,g_RenderStateFlags.dword);
    }
    g_SHORT_ARRAY_01d25f50[0] = 0;
    g_SHORT_ARRAY_01d25f50[1] = 0;
    g_INT_01d25f4c = 0;
  }
  return;
}
