// Name: FUN_00444810
// Address: 00444810
// Address Range: [[00444810, 004448e5]]
// Convention: unknown
// Signature: undefined8 FUN_00444810(int param_1)

#include "nocturne.h"

ulonglong FUN_00444810(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0xaafdb8;
  iVar2 = 0xa9d078;
  iVar3 = 1;
  while( true ) {
    iVar1 = iVar1 + 0x140;
    iVar2 = iVar2 + 0x140;
    if (*(int *)(param_1 + 0x154) + -1 <= iVar3) break;
    FUN_00465382(iVar1,iVar2,*(uint *)(param_1 + 0x150));
    iVar3 = iVar3 + 1;
  }
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x154)) {
    iVar2 = 0;
    do {
      *(byte *)(iVar2 + 0xaafdb8) = 0;
      *(byte *)(*(int *)(param_1 + 0x150) + 0xaafdb7 + iVar2) = 0;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x140;
    } while (iVar1 < *(int *)(param_1 + 0x154));
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x150)) {
    do {
      *(byte *)(iVar2 + 0xaafdb8) = 0;
      iVar1 = (*(int *)(param_1 + 0x154) + -1) * 0x140;
      *(byte *)(iVar1 + 0xaafdb8 + iVar2) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x150));
  }
  return CONCAT44(iVar1,iVar2);
}
