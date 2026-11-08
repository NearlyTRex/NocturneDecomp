// Name: FUN_00536990
// Address: 00536990
// Address Range: [[00536990, 005369ed]]
// Convention: unknown
// Signature: undefined4 FUN_00536990(int param_1,int param_2)

#include "nocturne.h"

uint FUN_00536990(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x15f6ac) != 0) &&
     (iVar2 = FUN_0040c8c0(param_2,DAT_007bdc94), iVar2 != 0)) {
    return 1;
  }
  iVar1 = 0;
  iVar2 = param_1;
  if (0 < *(int *)(param_1 + 0x15f6a8)) {
    do {
      if (param_2 == *(int *)(iVar2 + 0x15f6b0)) {
        return 1;
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar1 < *(int *)(param_1 + 0x15f6a8));
  }
  return 0;
}
