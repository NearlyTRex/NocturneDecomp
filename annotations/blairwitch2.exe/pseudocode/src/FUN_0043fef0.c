// Name: FUN_0043fef0
// Address: 0043fef0
// Address Range: [[0043fef0, 0043ffc5]]
// Convention: unknown
// Signature: undefined8 FUN_0043fef0(int param_1)

#include "nocturne.h"

ulonglong FUN_0043fef0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0xb07f58;
  iVar2 = 0xaf5218;
  iVar3 = 1;
  while( true ) {
    iVar1 = iVar1 + 0x140;
    iVar2 = iVar2 + 0x140;
    if (*(int *)(param_1 + 0x154) + -1 <= iVar3) break;
    FUN_00470242(iVar1,iVar2,*(uint *)(param_1 + 0x150));
    iVar3 = iVar3 + 1;
  }
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x154)) {
    iVar2 = 0;
    do {
      *(byte *)(iVar2 + 0xb07f58) = 0;
      *(byte *)(*(int *)(param_1 + 0x150) + 0xb07f57 + iVar2) = 0;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x140;
    } while (iVar1 < *(int *)(param_1 + 0x154));
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x150)) {
    do {
      *(byte *)(iVar2 + 0xb07f58) = 0;
      iVar1 = (*(int *)(param_1 + 0x154) + -1) * 0x140;
      *(byte *)(iVar1 + 0xb07f58 + iVar2) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x150));
  }
  return CONCAT44(iVar1,iVar2);
}
