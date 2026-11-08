// Name: FUN_005419e0
// Address: 005419e0
// Address Range: [[005419e0, 00541a1a]]
// Convention: unknown
// Signature: void FUN_005419e0(int param_1,int param_2)

#include "nocturne.h"

void FUN_005419e0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2;
  do {
    iVar1 = iVar2;
    iVar2 = *(int *)(iVar1 * 0x44 + param_1 + 0x15b46c);
  } while (-1 < iVar2);
  while (param_2 != iVar1) {
    iVar2 = param_2 * 0x44;
    param_2 = *(int *)(iVar2 + 0x15b46c + param_1);
    *(int *)(iVar2 + 0x15b46c + param_1) = iVar1;
  }
  return;
}
