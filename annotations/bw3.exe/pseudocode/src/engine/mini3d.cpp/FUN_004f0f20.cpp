// Name: engine_mini3d.cpp_FUN_004f0f20
// Address: 004f0f20
// Address Range: [[004f0f20, 004f1018]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_004f0f20(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_004f0f20(void)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  
  if ((2 < _DAT_01d7a6d0) && (2 < _DAT_01d7a6cc)) {
    if ((_DAT_02cf60cc == (code *)0x0) || (_DAT_01c6cee8 == 0)) {
      iVar5 = 0;
      if (0 < _DAT_01d7a6d0) {
        iVar4 = 0;
        do {
          puVar1 = (ushort *)(iVar4 + 0x1d7a6d8);
          puVar2 = (ushort *)(iVar4 + 0x1d7a6d6);
          puVar3 = (ushort *)(iVar4 + 0x1d7a6d4);
          iVar4 = iVar4 + 6;
          iVar5 = iVar5 + 3;
          engine_mini3d_cpp_FUN_004f1830
                    (_DAT_01d76f60 + ((uint)*puVar3 + _DAT_01d7a6c8) * 0x40,
                     ((uint)*puVar2 + _DAT_01d7a6c8) * 0x40 + _DAT_01d76f60,
                     ((uint)*puVar1 + _DAT_01d7a6c8) * 0x40 + _DAT_01d76f60);
        } while (iVar5 < _DAT_01d7a6d0);
      }
    }
    else {
      (*_DAT_02cf60cc)(_DAT_01d76f60 + _DAT_01d7a6c8 * 0x40,_DAT_01d7a6cc,0x1d7a6d4,
                       _DAT_01d7a6d0 / 3,_DAT_01c6e2b4);
    }
    _DAT_01d7a6d0 = 0;
    _DAT_01d7a6cc = 0;
  }
  return;
}
