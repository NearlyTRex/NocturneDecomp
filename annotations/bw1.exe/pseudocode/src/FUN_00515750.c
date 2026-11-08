// Name: FUN_00515750
// Address: 00515750
// Address Range: [[00515750, 00515848]]
// Convention: unknown
// Signature: void FUN_00515750(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00515750(void)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  
  if ((2 < _DAT_01d25f50) && (2 < _DAT_01d25f4c)) {
    if ((_DAT_02c83470 == (code *)0x0) || (_DAT_01c50948 == 0)) {
      iVar5 = 0;
      if (0 < _DAT_01d25f50) {
        iVar4 = 0;
        do {
          puVar1 = (ushort *)(iVar4 + 0x1d25f58);
          puVar2 = (ushort *)(iVar4 + 0x1d25f56);
          puVar3 = (ushort *)(iVar4 + 0x1d25f54);
          iVar4 = iVar4 + 6;
          iVar5 = iVar5 + 3;
          FUN_00516060(_DAT_01d227e0 + ((uint)*puVar3 + _DAT_01d25f48) * 0x40,
                       ((uint)*puVar2 + _DAT_01d25f48) * 0x40 + _DAT_01d227e0,
                       ((uint)*puVar1 + _DAT_01d25f48) * 0x40 + _DAT_01d227e0);
        } while (iVar5 < _DAT_01d25f50);
      }
    }
    else {
      (*_DAT_02c83470)(_DAT_01d227e0 + _DAT_01d25f48 * 0x40,_DAT_01d25f4c,0x1d25f54,
                       _DAT_01d25f50 / 3,_DAT_01c51d14);
    }
    _DAT_01d25f50 = 0;
    _DAT_01d25f4c = 0;
  }
  return;
}
