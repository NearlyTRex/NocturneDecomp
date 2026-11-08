// Name: FUN_004a57c0
// Address: 004a57c0
// Address Range: [[004a57c0, 004a5865]]
// Convention: unknown
// Signature: int FUN_004a57c0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004a57c0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0057af80(param_1);
  iVar2 = FUN_0040c840(*(uint *)(param_1 + 0x304),_DAT_01d5ba70);
  if ((((iVar2 == 0) || (*(int *)(param_1 + 0x58c) <= *(int *)(iVar2 + 0x20b80))) && (iVar1 != 0))
     && (*(int *)(param_1 + 0x588) == 0x10000)) {
    if ((*(int *)(param_1 + 0x2d4) != 2) &&
       (iVar2 = FUN_0040c840(*(uint *)(param_1 + 0x304),_DAT_01c5bc48), iVar2 == 0)) {
      return iVar1;
    }
    iVar2 = param_1 + 0x614;
    do {
      (**(code **)(*(int *)(iVar2 + 0x154) + 0x14))(iVar2);
      iVar2 = iVar2 + 0x2a4;
    } while (iVar2 != param_1 + 0x25c4);
  }
  return iVar1;
}
