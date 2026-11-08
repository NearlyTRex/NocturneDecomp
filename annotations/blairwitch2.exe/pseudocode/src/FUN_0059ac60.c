// Name: FUN_0059ac60
// Address: 0059ac60
// Address Range: [[0059ac60, 0059ad14]]
// Convention: unknown
// Signature: void FUN_0059ac60(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0059ac60(void)

{
  uint uVar1;
  int iVar2;
  
  if (_DAT_026677e0 != (int *)0x0) {
    iVar2 = 0;
    while ((_DAT_026677e0 != (int *)0x0 &&
           ((uVar1 = 1 << ((byte)iVar2 & 0x1f), (_DAT_01c2a384 & uVar1) == (_DAT_026677e8 & uVar1)
            || (_DAT_026677e8 = _DAT_01c2a384,
               (**(code **)(*_DAT_026677e0 + 0x24))
                         (_DAT_026677e0,_DAT_01c2a37c,_DAT_01c2a380,iVar2,
                          (uVar1 & _DAT_01c2a384) != 0), _DAT_026677e0 != (int *)0x0))))) {
      iVar2 = iVar2 + 1;
      if (2 < iVar2) {
        (**(code **)(*_DAT_026677e0 + 0x20))(_DAT_026677e0,*(uint *)(0x01CB6900 + 0x284));
        return;
      }
    }
  }
  return;
}
