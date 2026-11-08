// Name: FUN_00577cd0
// Address: 00577cd0
// Address Range: [[00577cd0, 00577dbb]]
// Convention: unknown
// Signature: undefined4 FUN_00577cd0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00577cd0(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte auStack_328 [400];
  byte auStack_198 [400];
  
  uVar3 = 1;
  if (_DAT_02c81d9c != (int *)0x0) {
    iVar2 = (**(code **)(*_DAT_02c81d9c + 0x48))(_DAT_02c81d9c);
    if (iVar2 != 0) {
      uVar3 = FUN_00577500(iVar2);
      FUN_005bfb40(auStack_198,"DirectSux: Unable to %s.  (%s)",
                   "?Stop secondary sound buffer" + 1,uVar3);
      uVar3 = 0;
      FUN_005773f0(auStack_198);
    }
  }
  if (_DAT_02c81d98 != (int *)0x0) {
    iVar2 = (**(code **)(*_DAT_02c81d98 + 0x48))(_DAT_02c81d98);
    if (iVar2 != 0) {
      uVar3 = FUN_00577500(iVar2);
      FUN_005bfb40(auStack_328,"DirectSux: Unable to %s.  (%s)",
                   "Stop primary sound buffer",uVar3);
      uVar3 = 0;
      FUN_005773f0(auStack_328);
    }
  }
  iVar2 = 0;
  do {
    iVar1 = FUN_00577880(iVar2);
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x1f);
  iVar2 = FUN_00575ca0();
  if (iVar2 != 0) {
    return uVar3;
  }
  return 0;
}
