// Name: FUN_00416f10
// Address: 00416f10
// Address Range: [[00416f10, 00416f7a]]
// Convention: unknown
// Signature: undefined4 FUN_00416f10(int param_1,int param_2,int param_3)

#include "nocturne.h"

uint FUN_00416f10(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = param_1;
  do {
    if (*(int *)(param_1 + 0x1c) + 1 <= iVar2) {
      return 0;
    }
    if (*(int *)(iVar1 + 0x88) == 1) {
      if ((((*(int *)(iVar1 + 0x78) <= param_2) &&
           (param_2 <= *(int *)(iVar1 + 0x80) + *(int *)(iVar1 + 0x78))) &&
          (*(int *)(iVar1 + 0x7c) <= param_3)) &&
         (param_3 <= *(int *)(iVar1 + 0x84) + *(int *)(iVar1 + 0x7c))) {
        *(int *)(param_1 + 0x20) = iVar2;
        return 1;
      }
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0x2c;
  } while( true );
}
