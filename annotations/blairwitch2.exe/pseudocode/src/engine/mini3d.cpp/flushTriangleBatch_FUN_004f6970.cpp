// Name: engine_mini3d.cpp_flushTriangleBatch_FUN_004f6970
// Address: 004f6970
// Address Range: [[004f6970, 004f6a68]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_flushTriangleBatch_FUN_004f6970(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_flushTriangleBatch_FUN_004f6970(void)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  
  if ((2 < _DAT_01d0d2f0) && (2 < _DAT_01d0d2ec)) {
    if ((_DAT_0264bca0 == (code *)0x0) || (_DAT_01c37788 == 0)) {
      iVar5 = 0;
      if (0 < _DAT_01d0d2f0) {
        iVar4 = 0;
        do {
          puVar1 = (ushort *)(iVar4 + 0x1d0d2f8);
          puVar2 = (ushort *)(iVar4 + 0x1d0d2f6);
          puVar3 = (ushort *)(iVar4 + 0x1d0d2f4);
          iVar4 = iVar4 + 6;
          iVar5 = iVar5 + 3;
          engine_mini3d_cpp_rasterizeTriangle_FUN_004f7280
                    ((float *)(_DAT_01d09b7c + ((uint)*puVar3 + _DAT_01d0d2e8) * 0x40),
                     (float *)(((uint)*puVar2 + _DAT_01d0d2e8) * 0x40 + _DAT_01d09b7c),
                     (float *)(((uint)*puVar1 + _DAT_01d0d2e8) * 0x40 + _DAT_01d09b7c));
        } while (iVar5 < _DAT_01d0d2f0);
      }
    }
    else {
      (*_DAT_0264bca0)(_DAT_01d09b7c + _DAT_01d0d2e8 * 0x40,_DAT_01d0d2ec,0x1d0d2f4,
                       _DAT_01d0d2f0 / 3,_DAT_01c38b54);
    }
    _DAT_01d0d2f0 = 0;
    _DAT_01d0d2ec = 0;
  }
  return;
}
