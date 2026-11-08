// Name: FUN_004515b0
// Address: 004515b0
// Address Range: [[004515b0, 00451685]]
// Convention: unknown
// Signature: undefined8 FUN_004515b0(int param_1)

#include "nocturne.h"

ulonglong FUN_004515b0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0xb23458;
  iVar2 = 0xb10718;
  iVar3 = 1;
  while( true ) {
    iVar1 = iVar1 + 0x140;
    iVar2 = iVar2 + 0x140;
    if (*(int *)(param_1 + 0x154) + -1 <= iVar3) break;
    FUN_00488732(iVar1,iVar2,*(uint *)(param_1 + 0x150));
    iVar3 = iVar3 + 1;
  }
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x154)) {
    iVar2 = 0;
    do {
      *(byte *)(iVar2 + 0xb23458) = 0;
      *(byte *)(*(int *)(param_1 + 0x150) + 0xb23457 + iVar2) = 0;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x140;
    } while (iVar1 < *(int *)(param_1 + 0x154));
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x150)) {
    do {
      *(byte *)(iVar2 + 0xb23458) = 0;
      iVar1 = (*(int *)(param_1 + 0x154) + -1) * 0x140;
      *(byte *)(iVar1 + 0xb23458 + iVar2) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x150));
  }
  return CONCAT44(iVar1,iVar2);
}
