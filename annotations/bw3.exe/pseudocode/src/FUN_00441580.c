// Name: FUN_00441580
// Address: 00441580
// Address Range: [[00441580, 004415ca]]
// Convention: unknown
// Signature: undefined4 FUN_00441580(int param_1,int *param_2)

#include "nocturne.h"

uint FUN_00441580(int param_1,int *param_2)

{
  int iVar1;
  int iStack_4;
  
  iVar1 = FUN_00440240(param_1 + 4,&iStack_4);
  if (iStack_4 < 1) {
    return 1;
  }
  (**(code **)(*param_2 + 4))(param_2,"!()*+0123456789ABCDEFGHJKLMNPQRSTUVWXYZabcdefghijkmnopqrstuvwxyz"[iVar1]);
  return 1;
}
