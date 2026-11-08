// Name: FUN_00418790
// Address: 00418790
// Address Range: [[00418790, 00418800]]
// Convention: unknown
// Signature: undefined4 FUN_00418790(int param_1,int param_2,int param_3)

#include "nocturne.h"

uint FUN_00418790(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = param_1;
  do {
    if (*(int *)(param_1 + 0x20) + 1 <= iVar2) {
      return 0;
    }
    if (*(int *)(iVar1 + 0x98) == 1) {
      if ((((*(int *)(iVar1 + 0x88) <= param_2) &&
           (param_2 <= *(int *)(iVar1 + 0x90) + *(int *)(iVar1 + 0x88))) &&
          (*(int *)(iVar1 + 0x8c) <= param_3)) &&
         (param_3 <= *(int *)(iVar1 + 0x94) + *(int *)(iVar1 + 0x8c))) {
        *(int *)(param_1 + 0x24) = iVar2;
        return 1;
      }
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0x2c;
  } while( true );
}
