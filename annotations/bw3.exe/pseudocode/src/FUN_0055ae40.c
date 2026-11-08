// Name: FUN_0055ae40
// Address: 0055ae40
// Address Range: [[0055ae40, 0055af2b]]
// Convention: unknown
// Signature: undefined4 FUN_0055ae40(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0055ae40(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte auStack_328 [400];
  byte auStack_198 [400];
  
  uVar3 = 1;
  if (_DAT_02cf49cc != (int *)0x0) {
    iVar2 = (**(code **)(*_DAT_02cf49cc + 0x48))(_DAT_02cf49cc);
    if (iVar2 != 0) {
      uVar3 = FUN_0055a670(iVar2);
      FUN_005a28c0(auStack_198,"DirectSux: Unable to %s.  (%s)",
                   "?Stop secondary sound buffer" + 1,uVar3);
      uVar3 = 0;
      FUN_0055a560(auStack_198);
    }
  }
  if (_DAT_02cf49c8 != (int *)0x0) {
    iVar2 = (**(code **)(*_DAT_02cf49c8 + 0x48))(_DAT_02cf49c8);
    if (iVar2 != 0) {
      uVar3 = FUN_0055a670(iVar2);
      FUN_005a28c0(auStack_328,"DirectSux: Unable to %s.  (%s)",
                   "Stop primary sound buffer",uVar3);
      uVar3 = 0;
      FUN_0055a560(auStack_328);
    }
  }
  iVar2 = 0;
  do {
    iVar1 = FUN_0055a9f0(iVar2);
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x1f);
  iVar2 = FUN_00558e10();
  if (iVar2 != 0) {
    return uVar3;
  }
  return 0;
}
