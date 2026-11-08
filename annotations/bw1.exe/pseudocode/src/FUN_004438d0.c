// Name: FUN_004438d0
// Address: 004438d0
// Address Range: [[004438d0, 00443911]]
// Convention: unknown
// Signature: undefined4 FUN_004438d0(int param_1,undefined4 param_2,int *param_3)

#include "nocturne.h"

uint FUN_004438d0(int param_1,uint param_2,int *param_3)

{
  int iVar1;
  
  while( true ) {
    iVar1 = FUN_00442490(param_1 + 4,6,param_2);
    if (iVar1 < 0) break;
    (**(code **)(*param_3 + 4))(param_3,"!()*+0123456789ABCDEFGHJKLMNPQRSTUVWXYZabcdefghijkmnopqrstuvwxyz"[iVar1]);
  }
  return 1;
}
