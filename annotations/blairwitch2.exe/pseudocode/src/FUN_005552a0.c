// Name: FUN_005552a0
// Address: 005552a0
// Address Range: [[005552a0, 0055538b]]
// Convention: unknown
// Signature: undefined4 FUN_005552a0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005552a0(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte auStack_328 [400];
  byte auStack_198 [400];
  
  uVar3 = 1;
  if (_DAT_0264a5cc != (int *)0x0) {
    iVar2 = (**(code **)(*_DAT_0264a5cc + 0x48))(_DAT_0264a5cc);
    if (iVar2 != 0) {
      uVar3 = FUN_00554ad0(iVar2);
      FUN_005b7790(auStack_198,"DirectSux: Unable to %s.  (%s)",
                   "?Stop secondary sound buffer" + 1,uVar3);
      uVar3 = 0;
      FUN_005549c0(auStack_198);
    }
  }
  if (_DAT_0264a5c8 != (int *)0x0) {
    iVar2 = (**(code **)(*_DAT_0264a5c8 + 0x48))(_DAT_0264a5c8);
    if (iVar2 != 0) {
      uVar3 = FUN_00554ad0(iVar2);
      FUN_005b7790(auStack_328,"DirectSux: Unable to %s.  (%s)",
                   "Stop primary sound buffer",uVar3);
      uVar3 = 0;
      FUN_005549c0(auStack_328);
    }
  }
  iVar2 = 0;
  do {
    iVar1 = FUN_00554e50(iVar2);
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x1f);
  iVar2 = FUN_00553270();
  if (iVar2 != 0) {
    return uVar3;
  }
  return 0;
}
