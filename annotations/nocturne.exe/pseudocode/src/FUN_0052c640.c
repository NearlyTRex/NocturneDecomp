// Name: FUN_0052c640
// Address: 0052c640
// Address Range: [[0052c640, 0052c6b8]]
// Convention: unknown
// Signature: undefined4 FUN_0052c640(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0052c640(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < _DAT_02dc943c) {
    iVar2 = 0;
    do {
      if ((*(int *)(iVar2 + 0x2dc93a8) == 0) || (*(int *)(iVar2 + 0x2dc93c8) == 0)) {
        FUN_00529980("WavOutDevice::poll - NULL pointer??");
        return 0;
      }
      if (((*(byte *)(*(int *)(iVar2 + 0x2dc93a8) + 0x10) & 1) != 0) &&
         (iVar1 = FUN_0052c130(iVar3), iVar1 == 0)) {
        FUN_00529980("WavOutDevice::poll - sendBuffer failed");
        return 0;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < _DAT_02dc943c);
  }
  return 1;
}
