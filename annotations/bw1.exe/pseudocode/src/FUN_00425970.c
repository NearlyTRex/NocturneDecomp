// Name: FUN_00425970
// Address: 00425970
// Address Range: [[00425970, 00425a46]]
// Convention: unknown
// Signature: void FUN_00425970(int param_1,int param_2,undefined2 *param_3)

#include "nocturne.h"

void FUN_00425970(int param_1,int param_2,ushort *param_3)

{
  ushort *puVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  
  *(uint *)(param_1 + 0x12ee0) = 0;
  iVar3 = 0;
  FUN_005bfb70(param_1 + 0x12ee4,0,28000);
  if (0 < param_2) {
    do {
      FUN_00425a50(param_1,*param_3,param_3[1],iVar3);
      FUN_00425a50(param_1,param_3[1],param_3[2],iVar3);
      FUN_00425a50(param_1,param_3[2],*param_3,iVar3);
      FUN_00425a50(param_1,param_3[1],*param_3,iVar3);
      FUN_00425a50(param_1,param_3[2],param_3[1],iVar3);
      puVar1 = param_3 + 2;
      uVar2 = *param_3;
      param_3 = param_3 + 9;
      iVar4 = iVar3 + 1;
      FUN_00425a50(param_1,uVar2,*puVar1,iVar3);
      iVar3 = iVar4;
    } while (iVar4 < param_2);
  }
  return;
}
