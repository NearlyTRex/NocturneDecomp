// Name: FUN_00421480
// Address: 00421480
// Address Range: [[00421480, 00421536]]
// Convention: unknown
// Signature: void FUN_00421480(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00421480(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_004259f0(param_1,param_2);
  if (iVar1 != 0) {
    if ((*(int *)(param_1 + 0x19700) == 0) &&
       (iVar1 = FUN_0047dc30(0x01C03A10,param_1 + 0x19708), iVar1 != 0)) {
      *(uint *)(param_1 + 0x19700) = 1;
    }
    if ((*(int *)(param_1 + 0x19704) == 0) &&
       (iVar1 = FUN_0047dc30(0x01C03A10,param_1 + 0x1976c), iVar1 != 0)) {
      *(uint *)(param_1 + 0x19704) = 1;
    }
    switch(*(uint *)(param_1 + 0xbd24)) {
    case 0:
      FUN_00422050(param_1,param_2);
      break;
    case 1:
      FUN_00422370(param_1,param_2);
      return;
    case 2:
      FUN_004227a0(param_1,param_2);
      return;
    }
  }
  return;
}
