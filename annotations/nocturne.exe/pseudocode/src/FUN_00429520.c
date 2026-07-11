// Name: FUN_00429520
// Address: 00429520
// Address Range: [[00429520, 0042955f]]
// Convention: unknown
// Signature: bool FUN_00429520(int param_1,undefined4 param_2)

#include "nocturne.h"

bool FUN_00429520(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  *(uint *)(param_1 + 0x25c4) = 0;
  uVar1 = FUN_004e1890(param_1 + 0x150,param_2,0);
  iVar2 = FUN_004e1010(uVar1);
  *(int *)(param_1 + 0x25c0) = iVar2;
  return -1 < iVar2;
}
